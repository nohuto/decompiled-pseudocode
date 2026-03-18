/*
 * XREFs of MiIsProbeActive @ 0x140009C98
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140009834 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x140219D20 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  int v7; // edi
  _QWORD *v8; // rdx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rax
  _WORD *v15; // r8
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // r10
  _QWORD *v23; // r11
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF

  v3 = 0;
  if ( (a3 & 3) == 1 && !qword_1403890C8 )
    return 0LL;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v8 = (_QWORD *)qword_1403890C8;
  if ( qword_1403890C8 )
  {
    if ( (a3 & 1) != 0 )
    {
      v19 = a1 + 8 * a2;
      if ( a1 >= v19 )
        goto LABEL_39;
      while ( 1 )
      {
        v20 = MI_GET_PAGE_FRAME_FROM_PTE(a1);
        if ( (unsigned int)MiIsPfnInline(v20) )
        {
          if ( (a3 & 2) != 0 && *(_WORD *)(48 * v21 - 0x57FFFFFFFE0LL) > 2u )
          {
LABEL_38:
            v7 = 1;
            goto LABEL_39;
          }
        }
        else if ( v22 == -1 || v22 != (v21 & 0xFFFFFFFFFFFFFE00uLL) )
        {
          if ( v23 && v23[5] == (v21 & 0xFFFFFFFFFFFFFE00uLL) )
          {
LABEL_53:
            if ( (*(_WORD *)(v23[6] + 2 * ((v21 & 0xFFFFFFFFFLL) - v23[5])) & 0x3FFF) != 0 )
              goto LABEL_38;
          }
          else
          {
            v24 = (_QWORD *)qword_1403890C8;
            while ( v24 )
            {
              v25 = v24[5];
              if ( v21 < v25 )
              {
                v24 = (_QWORD *)*v24;
              }
              else
              {
                if ( v21 < v25 + 512 )
                {
                  v23 = v24;
                  goto LABEL_53;
                }
                v24 = (_QWORD *)v24[1];
              }
            }
          }
        }
        a1 += 8LL;
        if ( a1 >= v19 )
          goto LABEL_39;
      }
    }
    v10 = a1 + a2 - 1;
    while ( v8 )
    {
      v11 = v8[5];
      if ( v10 < v11 )
      {
        v8 = (_QWORD *)*v8;
      }
      else
      {
        if ( a1 <= v11 + 512 )
          break;
        v8 = (_QWORD *)v8[1];
      }
    }
    while ( v8 )
    {
      v12 = v8[5];
      if ( v10 < v12 )
        break;
      v13 = v8[6];
      v14 = a1 - v12;
      if ( a1 < v12 )
        v14 = 0LL;
      v15 = (_WORD *)(v13 + 2 * v14);
      v16 = a1 + a2 > v12 + 512 ? v13 + 1024 : v13 + 2 * (a1 + a2 - v12);
      while ( (unsigned __int64)v15 < v16 )
      {
        if ( (*v15 & 0x3FFF) != 0 )
        {
          v7 = 1;
          break;
        }
        ++v15;
      }
      if ( v7 == 1 )
        break;
      v17 = (_QWORD *)v8[1];
      v18 = v8;
      if ( v17 )
      {
        do
        {
          v8 = v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        while ( 1 )
        {
          v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v8 || (_QWORD *)*v8 == v18 )
            break;
          v18 = v8;
        }
      }
    }
LABEL_39:
    v3 = v7;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v3;
}
