/*
 * XREFs of CmpRefreshHive @ 0x14069E158
 * Callers:
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFlushNotify @ 0x14046E88C (CmpFlushNotify.c)
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140693AF0 (CmpWaitOnHiveWriteQueue.c)
 *     HvRefreshHive @ 0x140696DF0 (HvRefreshHive.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR i; // rbx
  int v4; // eax
  __int64 v5; // rdx
  int refreshed; // edi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v11 = -1;
  v2 = *(_QWORD *)(a1 + 8);
  v12 = 0;
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
      v7 = *(_QWORD *)(i + 2712);
      if ( !v7 )
        break;
      CmpFlushNotify(*(_QWORD *)(v7 + 40), 1, 0LL);
    }
    CmpSearchKeyControlBlockTreeEx(
      (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshWorkerRoutine,
      i,
      0LL,
      1);
    refreshed = HvRefreshHive(i);
    if ( refreshed >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(i + 8))(
             i,
             *(unsigned int *)(*(_QWORD *)(i + 64) + 36LL),
             &v11);
      if ( v8 )
      {
        CmpCleanUpKcbValueCache(v2);
        v9 = *(unsigned int *)(v8 + 40);
        *(_DWORD *)(v2 + 88) = *(_DWORD *)(v8 + 36);
        *(_QWORD *)(v2 + 96) = v9;
        *(_WORD *)(v2 + 178) = *(_WORD *)(v8 + 2);
        CmpAssignSecurityToKcb(v2, *(unsigned int *)(v8 + 44), 0LL, 0, 0);
        CmpCleanUpSubKeyInfo(v2);
        ++*(_QWORD *)(v2 + 296);
        *(_QWORD *)(v2 + 160) = *(_QWORD *)(v8 + 4);
        *(_WORD *)(v2 + 168) = *(_WORD *)(v8 + 52);
        *(_WORD *)(v2 + 170) = *(_WORD *)(v8 + 60);
        *(_DWORD *)(v2 + 172) = *(_DWORD *)(v8 + 64);
        *(_DWORD *)(v2 + 176) ^= (*(_DWORD *)(v2 + 176) ^ *(unsigned __int16 *)(v8 + 54)) & 0xF;
        *(_DWORD *)(v2 + 176) ^= ((unsigned __int8)*(_DWORD *)(v2 + 176) ^ (unsigned __int8)*(_WORD *)(v8 + 54)) & 0xF0;
        *(_BYTE *)(v2 + 177) = *(_BYTE *)(v8 + 55);
        *(_WORD *)(v2 + 4) = 64;
        (*(void (__fastcall **)(ULONG_PTR, int *))(i + 16))(i, &v11);
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
