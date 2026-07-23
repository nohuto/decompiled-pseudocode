/*
 * XREFs of SmcStoreResize @ 0x14079FEA0
 * Callers:
 *     SmcProcessResizeRequest @ 0x14079CA0C (SmcProcessResizeRequest.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlSetAllBits @ 0x14007D2B0 (RtlSetAllBits.c)
 *     SmAlloc @ 0x14007E79C (SmAlloc.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     SmStoreResize @ 0x14079C5B8 (SmStoreResize.c)
 *     SmcCacheReference @ 0x14079F54C (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x14079FD44 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x14079FD84 (SmcStorePlacementGet.c)
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
  struct _PRIVILEGE_SET *v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  struct _PRIVILEGE_SET *v18; // r8
  unsigned __int64 v19; // r9
  struct _EX_RUNDOWN_REF *v20; // rdi
  _DWORD *v21; // rcx
  struct _KTHREAD *v22; // rax
  _DWORD *v23; // rcx
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
        v20 = v29;
        v18 = v3;
        v17 = (unsigned int)v9;
        v19 = 0LL;
        v21 = (_DWORD *)v29[1].Count;
        if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v9) )
          v17 = 0LL;
        if ( v17 )
        {
          do
          {
            ++v19;
            *v21 |= v18->PrivilegeCount;
            v18 = (struct _PRIVILEGE_SET *)((char *)v18 + 4);
            ++v21;
          }
          while ( v19 < v17 );
        }
      }
      else
      {
        v20 = v29;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12, v17, (__int64)v18, v19);
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
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v12, 0LL);
      v23 = (_DWORD *)v20[1].Count;
      v16 = (unsigned int)v9;
      v14 = v3;
      v15 = 0LL;
      if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v9) )
        v16 = 0LL;
      if ( v16 )
      {
        do
        {
          ++v15;
          *v23 ^= v14->PrivilegeCount;
          v14 = (struct _PRIVILEGE_SET *)((char *)v14 + 4);
          ++v23;
        }
        while ( v15 < v16 );
      }
      v6 = 0;
    }
    else
    {
      v6 = -1073741672;
    }
LABEL_30:
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12, (__int64)v14, v15, v16);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    goto LABEL_33;
  }
  v6 = -1073741670;
LABEL_35:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  if ( v3 )
    CmSiFreeMemory(v3);
  return (unsigned int)v6;
}
