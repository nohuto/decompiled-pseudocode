/*
 * XREFs of MiLeapPrefetch @ 0x140154650
 * Callers:
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchJumpVad @ 0x1402580D8 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  char Queue; // al
  _KPROCESS *Process; // rbp
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD **v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned __int64 v18; // r8
  _QWORD *v20; // rcx

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
LABEL_22:
    v16 = a1[3];
    v17 = (_QWORD *)(a1[1] + 16 * v16);
    v18 = *v17 & 0xFFFFFFFFFFFFF000uLL;
    if ( v3 >= v18 && v3 < v18 + ((v17[1] + 4095LL + (*v17 & 0xFFFLL)) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v3 - v18) >> 12;
      return 1LL;
    }
LABEL_24:
    a1[4] = 0LL;
    a1[3] = v16 + 1;
    return 1LL;
  }
  v5 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v5 > 0x7FFFFFFEFFFFLL )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (char)CurrentThread[1].Queue;
  if ( Queue < 0 || (Queue & 3) != 0 )
    return 1LL;
  Process = CurrentThread->ApcState.Process;
  v10 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v10, v9);
    return 0LL;
  }
  else
  {
    if ( Process[2].Affinity.Bitmap[6] )
    {
      i = Process[2].Affinity.Bitmap[4];
      v12 = v5 >> 12;
      while ( i )
      {
        v9 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
        if ( v12 < v9 )
        {
          v13 = *(_QWORD *)i;
        }
        else
        {
          if ( v12 <= (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) )
          {
            v2 = 1;
            goto LABEL_29;
          }
          v13 = *(_QWORD *)(i + 8);
        }
        if ( !v13 )
        {
          if ( v9 >= v12 )
            goto LABEL_21;
          v14 = *(_QWORD ***)(i + 8);
          v15 = i;
          if ( v14 )
          {
            v20 = *v14;
            for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
              i = (unsigned __int64)v20;
          }
          else
          {
            while ( 1 )
            {
              i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !i || *(_QWORD *)i == v15 )
                break;
              v15 = i;
            }
          }
          if ( i )
          {
LABEL_21:
            v3 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
            MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v10, v9);
            goto LABEL_22;
          }
          break;
        }
        i = v13;
      }
      MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v10, v9);
      v16 = a1[3];
      goto LABEL_24;
    }
LABEL_29:
    MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v10, v9);
    return v2;
  }
}
