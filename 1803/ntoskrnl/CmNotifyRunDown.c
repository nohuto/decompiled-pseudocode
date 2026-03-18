/*
 * XREFs of CmNotifyRunDown @ 0x1404B9558
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     KeRemoveQueueApc @ 0x1400C6B54 (KeRemoveQueueApc.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpFreePostBlock @ 0x1404E224C (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1404E22A0 (CmpFreeSubordinatePost.c)
 *     CmpCancelSubordinatePost @ 0x1404E230C (CmpCancelSubordinatePost.c)
 */

__int64 __fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  int v10; // edx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  bool v13; // cl
  bool v14; // zf
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx

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
          v5 = (_QWORD *)(a1 + 1544);
          v6 = *(_QWORD **)(a1 + 1544);
          if ( v6 == (_QWORD *)(a1 + 1544) )
            goto LABEL_34;
          v7 = *v6;
          if ( (_QWORD *)v6[1] != v5 || *(_QWORD **)(v7 + 8) != v6 )
            __fastfail(3u);
          *v5 = v7;
          *(_QWORD *)(v7 + 8) = v5;
          v8 = v6 - 2;
          v9 = v6 - 2;
          v10 = *((_DWORD *)v6 + 10);
          if ( (v10 & 0x10000) != 0 )
            break;
          v21 = *(_QWORD **)(a1 + 1552);
          if ( (_QWORD *)*v21 != v5 )
            __fastfail(3u);
          *v6 = v5;
          v6[1] = v21;
          *v21 = v6;
          *(_QWORD *)(a1 + 1552) = v6;
        }
        if ( (_WORD)v10 != 2 )
          break;
        v11 = (_QWORD *)v8[8];
        if ( (_QWORD *)v11[13] == v11 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v11);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v12 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        v13 = 0;
        if ( v12 )
        {
          v17 = *(_WORD *)(v12 + 8);
          if ( v17 == 332 || v17 == 452 )
            v13 = 1;
        }
        **(_DWORD **)(v8[8] + 104LL) = 267;
        v14 = !v13;
        v15 = *(_QWORD *)(v8[8] + 104LL);
        if ( v14 )
          *(_QWORD *)(v15 + 8) = 0LL;
        else
          *(_DWORD *)(v15 + 4) = 0;
        v16 = (_QWORD *)v8[8];
        if ( (_QWORD *)v16[13] == v16 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v16);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v18 = v9[8];
        if ( *(_QWORD *)(v18 + 8) )
        {
          KeSetEvent(*(PRKEVENT *)(v18 + 8), 0, 0);
          ObfDereferenceObject(*(PVOID *)(v9[8] + 8LL));
          v18 = v8[8];
        }
        if ( !KeRemoveQueueApc(v18 + 16, (__int64)v16) )
        {
          v19 = *v9;
          v20 = (_QWORD *)v9[1];
          if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v20 != v9 )
            __fastfail(3u);
LABEL_32:
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          CmpCancelSubordinatePost(v9, 0LL);
        }
        CmpFreeSubordinatePost(v9);
        CmpFreePostBlock(v9);
      }
      v19 = *v8;
      v20 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v9 || (_QWORD *)*v20 != v9 )
        __fastfail(3u);
      goto LABEL_32;
    }
LABEL_34:
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return CmpUnlockRegistry();
  }
  return result;
}
