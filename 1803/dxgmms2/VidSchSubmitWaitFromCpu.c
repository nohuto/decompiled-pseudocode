/*
 * XREFs of VidSchSubmitWaitFromCpu @ 0x1C000DF10
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C006AA20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C0022A5C (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall VidSchSubmitWaitFromCpu(
        unsigned int a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rsi
  unsigned int v10; // ecx
  __int64 v13; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rdi
  PVOID v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rbp
  char v20; // cl
  __int64 v21; // rax
  char v22; // cl
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v8 = a1;
  v10 = 0;
  if ( !(_DWORD)v8 )
  {
LABEL_5:
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x78uLL, 0x68536956u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[4] = 0LL;
      *((_DWORD *)PoolWithTag + 26) = 0;
    }
    else
    {
      v15 = 0LL;
    }
    if ( !v15 )
      return 3221225495LL;
    v16 = v8;
    if ( (unsigned int)v8 > 4 )
    {
      v18 = 0xFFFFFFFFFFFFFFFFuLL % v8;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x10 )
      {
LABEL_26:
        VIDSCH_CPU_WAITER::`scalar deleting destructor'(v15, v18);
        return 3221225495LL;
      }
      v17 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v8, 0x6E795356u);
    }
    else
    {
      v17 = v15 + 5;
    }
    v15[4] = v17;
    *((_DWORD *)v15 + 26) = v8;
    v18 = (unsigned __int64)v17;
    if ( v17 && (_DWORD)v8 )
    {
      memset(v17, 0, 16 * v8);
      v18 = v15[4];
    }
    if ( v18 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
      v20 = (2 * a6) | a5 & 0xFD | v15[14] & 0xFC;
      v15[3] = a7;
      v21 = a8;
      *((_BYTE *)v15 + 112) = v20;
      if ( a8 )
        v22 = v20 | 4;
      else
        v22 = v20 & 0xFB;
      *((_BYTE *)v15 + 112) = v22;
      if ( !a8 )
        v21 = a4;
      v15[2] = v21;
      if ( (_DWORD)v8 )
      {
        v23 = a2 - (_QWORD)a3;
        do
        {
          *(_QWORD *)v18 = *(__int64 *)((char *)a3 + v23);
          v18 += 16LL;
          v24 = *a3++;
          *(_QWORD *)(v18 - 8) = v24;
          --v16;
        }
        while ( v16 );
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 1904), &LockHandle);
      v26 = *(_QWORD **)(v19 + 1024);
      if ( *v26 != v19 + 1016 )
        __fastfail(3u);
      v15[1] = v26;
      *v15 = v19 + 1016;
      *v26 = v15;
      *(_QWORD *)(v19 + 1024) = v15;
      VidSchiUnwaitMonitoredFences(v19, v25);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    goto LABEL_26;
  }
  v13 = a2;
  while ( *(_DWORD *)(*(_QWORD *)v13 + 44LL) != 5 || !*(_BYTE *)(*(_QWORD *)v13 + 28LL) )
  {
    ++v10;
    v13 += 8LL;
    if ( v10 >= (unsigned int)v8 )
      goto LABEL_5;
  }
  return 3221225760LL;
}
