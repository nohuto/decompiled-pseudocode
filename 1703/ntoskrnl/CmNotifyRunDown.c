/*
 * XREFs of CmNotifyRunDown @ 0x14053F248
 * Callers:
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x14003179C (KeRemoveQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     CmpCancelSubordinatePost @ 0x140447A88 (CmpCancelSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1404CE0B0 (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1404CE104 (CmpFreeSubordinatePost.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  _QWORD **v5; // rax
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  int v9; // ecx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  __int16 v13; // ax
  struct _KEVENT *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rcx

  v2 = (_QWORD *)(a1 + 1544);
  result = *(_QWORD *)(a1 + 1544);
  if ( result && (_QWORD *)result != v2 )
  {
    CmpLockRegistry();
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *v2 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = (_QWORD **)(a1 + 1544);
          if ( *v5 == v5 )
            goto LABEL_32;
          v6 = (_QWORD **)*v5;
          v7 = (_QWORD *)**v5;
          if ( (_QWORD **)(*v5)[1] != v5 || (_QWORD **)v7[1] != v6 )
            __fastfail(3u);
          *v5 = v7;
          v7[1] = v5;
          v8 = (__int64)(v6 - 2);
          v9 = *(_DWORD *)(v8 + 56);
          if ( (v9 & 0x10000) != 0 )
            break;
          v17 = (_QWORD *)(v8 + 16);
          v18 = *(_QWORD **)(a1 + 1552);
          if ( (_QWORD **)*v18 != v5 )
            __fastfail(3u);
          *v17 = v5;
          v17[1] = v18;
          *v18 = v17;
          *(_QWORD *)(a1 + 1552) = v17;
        }
        if ( (_WORD)v9 != 2 )
          break;
        v10 = *(_QWORD **)(v8 + 64);
        if ( (_QWORD *)v10[13] == v10 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v10);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v11 && ((v13 = *(_WORD *)(v11 + 8), v13 == 332) || v13 == 452) )
        {
          **(_DWORD **)(*(_QWORD *)(v8 + 64) + 104LL) = 267;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 64) + 104LL) + 4LL) = 0;
        }
        else
        {
          **(_DWORD **)(*(_QWORD *)(v8 + 64) + 104LL) = 267;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 64) + 104LL) + 8LL) = 0LL;
        }
        v12 = *(_QWORD **)(v8 + 64);
        if ( (_QWORD *)v12[13] == v12 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v14 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 64) + 8LL);
        if ( v14 )
        {
          KeSetEvent(v14, 0, 0);
          ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v8 + 64) + 8LL));
        }
        if ( !(unsigned __int8)KeRemoveQueueApc(*(_QWORD *)(v8 + 64) + 16LL) )
        {
          v15 = *(_QWORD *)v8;
          v16 = *(_QWORD **)(v8 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v16 != v8 )
            __fastfail(3u);
LABEL_30:
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          CmpCancelSubordinatePost(v8, 0LL);
        }
        CmpFreeSubordinatePost(v8);
        CmpFreePostBlock(v8);
      }
      v15 = *(_QWORD *)v8;
      v16 = *(_QWORD **)(v8 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v16 != v8 )
        __fastfail(3u);
      goto LABEL_30;
    }
LABEL_32:
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return CmpUnlockRegistry();
  }
  return result;
}
