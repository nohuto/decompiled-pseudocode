/*
 * XREFs of CmpRefreshHive @ 0x14067309C
 * Callers:
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpFlushNotify @ 0x1404CB670 (CmpFlushNotify.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140575D50 (CmpWaitOnHiveWriteQueue.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     HvRefreshHive @ 0x14066C778 (HvRefreshHive.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR i; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  int refreshed; // edi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]

  v12 = -1;
  v2 = *(_QWORD *)(a1 + 8);
  v13 = 0;
  for ( i = *(_QWORD *)(v2 + 24); ; CmpWaitOnHiveWriteQueue(i, v5, 0) )
  {
    CmpLockRegistryFreezeAware(1);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(i + 2848), 1u);
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      refreshed = -1073741535;
      ExReleaseResourceLite(*(PERESOURCE *)(i + 2848));
      goto LABEL_23;
    }
    v4 = *(_DWORD *)(i + 5488);
    if ( (v4 & 2) != 0 )
    {
      v5 = i + 5464;
      continue;
    }
    if ( (v4 & 1) == 0 )
      break;
    v5 = i + 5440;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(i + 2848));
  if ( *(_BYTE *)(i + 4112) == 1 )
  {
    refreshed = -1073741431;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(i + 144) & 2) == 0 )
    goto LABEL_11;
  if ( *(_DWORD *)(i + 2032) )
  {
    refreshed = -1073741823;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 176) & 0x40000) == 0 )
    {
LABEL_11:
      refreshed = -1073741811;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v8 = *(_QWORD *)(i + 2712);
      if ( !v8 )
        break;
      LOBYTE(v6) = 1;
      CmpFlushNotify(*(_QWORD *)(v8 + 40), v6, 0LL);
    }
    CmpSearchKeyControlBlockTreeEx(
      (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshWorkerRoutine,
      i,
      0LL,
      1);
    refreshed = HvRefreshHive(i);
    if ( refreshed >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(i + 8))(
             i,
             *(unsigned int *)(*(_QWORD *)(i + 64) + 36LL),
             &v12);
      if ( v9 )
      {
        CmpCleanUpKcbValueCache(v2);
        v10 = *(unsigned int *)(v9 + 40);
        *(_DWORD *)(v2 + 88) = *(_DWORD *)(v9 + 36);
        *(_QWORD *)(v2 + 96) = v10;
        *(_WORD *)(v2 + 178) = *(_WORD *)(v9 + 2);
        CmpAssignSecurityToKcb(v2, *(unsigned int *)(v9 + 44), 0LL, 0, 0);
        CmpCleanUpSubKeyInfo(v2);
        *(_QWORD *)(v2 + 160) = *(_QWORD *)(v9 + 4);
        *(_WORD *)(v2 + 168) = *(_WORD *)(v9 + 52);
        *(_WORD *)(v2 + 170) = *(_WORD *)(v9 + 60);
        *(_DWORD *)(v2 + 172) = *(_DWORD *)(v9 + 64);
        *(_DWORD *)(v2 + 176) ^= (*(_DWORD *)(v2 + 176) ^ *(unsigned __int16 *)(v9 + 54)) & 0xF;
        *(_DWORD *)(v2 + 176) ^= ((unsigned __int8)*(_DWORD *)(v2 + 176) ^ (unsigned __int8)*(_WORD *)(v9 + 54)) & 0xF0;
        *(_BYTE *)(v2 + 177) = *(_BYTE *)(v9 + 55);
        *(_WORD *)(v2 + 4) = 64;
        (*(void (__fastcall **)(ULONG_PTR, int *))(i + 16))(i, &v12);
      }
      else
      {
        refreshed = -1073741670;
      }
    }
  }
LABEL_23:
  CmpUnlockRegistry();
  return (unsigned int)refreshed;
}
