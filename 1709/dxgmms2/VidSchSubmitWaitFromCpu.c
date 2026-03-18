/*
 * XREFs of VidSchSubmitWaitFromCpu @ 0x1C000CC40
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066190 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C0020534 (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall VidSchSubmitWaitFromCpu(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rbx
  PVOID v17; // rax
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rbp
  char v20; // dl
  char v21; // dl
  __int64 v22; // r14
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v8 = a1;
  v12 = 0;
  if ( !(_DWORD)v8 )
  {
LABEL_5:
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x78uLL, 0x68536956u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    PoolWithTag[4] = 0LL;
    *((_DWORD *)PoolWithTag + 26) = 0;
    if ( (unsigned int)v8 > 4 )
    {
      v15 = 0xFFFFFFFFFFFFFFFFuLL % v8;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x10 )
      {
LABEL_23:
        VIDSCH_CPU_WAITER::`scalar deleting destructor'(v16, v15);
        return 3221225495LL;
      }
      v17 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v8, 0x6E795356u);
    }
    else
    {
      v17 = PoolWithTag + 5;
    }
    v16[4] = v17;
    *((_DWORD *)v16 + 26) = v8;
    if ( v17 )
      memset(v17, 0, 16 * v8);
    v18 = (_QWORD *)v16[4];
    if ( v18 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
      v20 = (2 * a6) | a5 & 0xFD | v16[14] & 0xFC;
      v16[3] = a7;
      *((_BYTE *)v16 + 112) = v20;
      if ( a8 )
      {
        v16[2] = a8;
        v21 = v20 | 4;
      }
      else
      {
        v16[2] = a4;
        v21 = v20 & 0xFB;
      }
      *((_BYTE *)v16 + 112) = v21;
      if ( (_DWORD)v8 )
      {
        v22 = a2 - a3;
        v23 = v8;
        do
        {
          v24 = *(_QWORD *)(v22 + a3);
          a3 += 8LL;
          *v18 = v24;
          v18 += 2;
          *(v18 - 1) = *(_QWORD *)(a3 - 8);
          --v23;
        }
        while ( v23 );
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 1888), &LockHandle);
      v25 = *(_QWORD **)(v19 + 1008);
      if ( *v25 != v19 + 1000 )
        __fastfail(3u);
      v16[1] = v25;
      *v16 = v19 + 1000;
      *v25 = v16;
      *(_QWORD *)(v19 + 1008) = v16;
      VidSchiUnwaitMonitoredFences(v19);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    goto LABEL_23;
  }
  v13 = a2;
  while ( *(_DWORD *)(*(_QWORD *)v13 + 40LL) != 5 || !*(_BYTE *)(*(_QWORD *)v13 + 28LL) )
  {
    ++v12;
    v13 += 8LL;
    if ( v12 >= (unsigned int)v8 )
      goto LABEL_5;
  }
  return 3221225760LL;
}
