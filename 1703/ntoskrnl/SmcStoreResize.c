/*
 * XREFs of SmcStoreResize @ 0x140704BA4
 * Callers:
 *     SmcProcessResizeRequest @ 0x14070170C (SmcProcessResizeRequest.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlSetAllBits @ 0x14012DAF0 (RtlSetAllBits.c)
 *     SmAlloc @ 0x14012F798 (SmAlloc.c)
 *     SmStoreResize @ 0x1407012A4 (SmStoreResize.c)
 *     SmcCacheReference @ 0x140704240 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x140704A38 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x140704A74 (SmcStorePlacementGet.c)
 */

__int64 __fastcall SmcStoreResize(__int64 a1, _DWORD *a2)
{
  struct _PRIVILEGE_SET *v3; // rsi
  struct _EX_RUNDOWN_REF v4; // rax
  unsigned __int64 Count; // rdi
  int v6; // edi
  __int64 v7; // rax
  ULONG *v8; // r13
  unsigned __int64 v9; // r12
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // r14
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi
  struct _PRIVILEGE_SET *v15; // r8
  unsigned __int64 v16; // r9
  _DWORD *v17; // rdx
  unsigned __int64 v18; // r10
  struct _KTHREAD *v19; // rax
  _DWORD *v20; // rdx
  struct _PRIVILEGE_SET *v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v26[4]; // [rsp+40h] [rbp-20h] BYREF
  int v28; // [rsp+A8h] [rbp+48h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+B0h] [rbp+50h]

  v3 = 0LL;
  v28 = 0;
  v4.Count = SmcCacheReference(a1, a2[1]).Count;
  Count = v4.Count;
  if ( !v4.Count )
    return (unsigned int)-1073741672;
  v7 = *(unsigned int *)(v4.Count + 8);
  v8 = a2 + 4;
  if ( a2[4] > (unsigned int)v7 )
  {
    v6 = -1073741811;
    goto LABEL_35;
  }
  v9 = (unsigned __int64)(v7 + 31) >> 5;
  v3 = (struct _PRIVILEGE_SET *)SmAlloc((unsigned int)(4 * v9), 0x72436D73u);
  if ( v3 )
  {
    v10 = (*a2 & 0x100) == 0;
    BitMapHeader.SizeOfBitMap = *(_DWORD *)(Count + 8);
    BitMapHeader.Buffer = &v3->PrivilegeCount;
    if ( v10 )
    {
      RtlClearAllBits(&BitMapHeader);
    }
    else
    {
      RtlSetAllBits(&BitMapHeader);
      v26[1] = v3;
      v26[0] = 0x400000000LL;
      v26[2] = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (volatile signed __int64 *)(Count + 160);
    ExAcquirePushLockExclusiveEx(Count + 160, 0LL);
    v13 = (struct _EX_RUNDOWN_REF *)SmcStoreEntryFind(Count, a2[2], a2[3]);
    v29 = v13;
    if ( v13 )
    {
      v28 = ExAcquireRundownProtection(v13 + 2);
      if ( (*a2 & 0x100) != 0 )
      {
        v6 = SmcStorePlacementGet(Count, *v8, (__int64)v26);
        if ( v6 < 0 )
          goto LABEL_30;
        v14 = v29;
        v15 = v3;
        v16 = 0LL;
        v17 = (_DWORD *)v29[1].Count;
        v18 = (4 * (unsigned __int64)(unsigned int)v9 + 3) >> 2;
        if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v9) )
          v18 = 0LL;
        if ( v18 )
        {
          do
          {
            ++v16;
            *v17 |= v15->PrivilegeCount;
            v15 = (struct _PRIVILEGE_SET *)((char *)v15 + 4);
            ++v17;
          }
          while ( v16 < v18 );
        }
      }
      else
      {
        v14 = v29;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegion();
      SmStoreResize(a2[3], a2[2], (unsigned int)&BitMapHeader, (_DWORD)a2 + 16, (*a2 >> 8) & 1);
      if ( (*a2 & 0x100) != 0 || !*v8 )
      {
        v6 = 0;
LABEL_33:
        if ( v28 )
          ExReleaseRundownProtection(v29 + 2);
        goto LABEL_35;
      }
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v12, 0LL);
      v20 = (_DWORD *)v14[1].Count;
      v21 = v3;
      v22 = 0LL;
      v23 = (4 * (unsigned __int64)(unsigned int)v9 + 3) >> 2;
      if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v9) )
        v23 = 0LL;
      if ( v23 )
      {
        do
        {
          ++v22;
          *v20 ^= v21->PrivilegeCount;
          v21 = (struct _PRIVILEGE_SET *)((char *)v21 + 4);
          ++v20;
        }
        while ( v22 < v23 );
      }
      v6 = 0;
    }
    else
    {
      v6 = -1073741672;
    }
LABEL_30:
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    goto LABEL_33;
  }
  v6 = -1073741670;
LABEL_35:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  if ( v3 )
    MiDeleteSubsection(v3);
  return (unsigned int)v6;
}
