/*
 * XREFs of DpiEnterSystemDisplay @ 0x1C003BF30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00149D8 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 */

__int64 __fastcall DpiEnterSystemDisplay(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v7; // eax
  int v8; // ecx
  unsigned int i; // r13d
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  ADAPTER_DISPLAY *v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int (__fastcall *v17)(__int64, __int64, int *, int *, int *, int *); // rax
  int v18; // edx
  int v19; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+44h] [rbp-54h] BYREF
  int v21; // [rsp+48h] [rbp-50h] BYREF
  int v22; // [rsp+4Ch] [rbp-4Ch] BYREF
  unsigned int v23[18]; // [rsp+50h] [rbp-48h] BYREF
  int v24; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+B0h] [rbp+18h]
  unsigned int v26; // [rsp+B8h] [rbp+20h] BYREF

  v25 = a3;
  v26 = -1;
  v24 = 3;
  v20 = 0;
  v5 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  if ( byte_1C007AAA8 )
  {
    v7 = 640;
    *(_DWORD *)(a2 + 16) = 5;
    v8 = 480;
LABEL_62:
    *(_WORD *)a2 = 0;
    *(_QWORD *)(a2 + 32) = DpiSystemDisplayWrite;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_DWORD *)(a2 + 8) = v7;
    *(_DWORD *)(a2 + 4) = v8;
    *(_DWORD *)(a2 + 12) = v7;
    if ( a3 )
      *a3 = DpiLeaveSystemDisplay;
    return 0LL;
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  for ( i = 0; i < 4; ++i )
  {
    v10 = qword_1C007A778;
    if ( *(_QWORD *)v10 == v10 )
      continue;
    while ( *(_DWORD *)(v10 + 28) < 0x3004u || !*(_QWORD *)(v10 + 744) )
    {
LABEL_40:
      v10 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 == qword_1C007A778 )
        goto LABEL_48;
    }
    if ( !a1 )
      KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v11 = *(_QWORD *)(v10 + 56);
    if ( *(_QWORD *)v11 == v11 )
    {
LABEL_38:
      if ( !a1 )
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      goto LABEL_40;
    }
    do
    {
      if ( *(_DWORD *)(v11 + 16) != 1953656900
        || *(_DWORD *)(v11 + 20) != 2
        || i == 3 && *(_BYTE *)(v11 + 1139) && *(_BYTE *)(v11 + 480) )
      {
        goto LABEL_36;
      }
      v5 = v11;
      if ( !a1 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v11 + 483) )
          DpiCheckForOutstandingD3Requests(v11);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 168), 1u);
      }
      if ( (*(_BYTE *)(v11 + 3736) & 4) == 0 )
        goto LABEL_31;
      if ( !a1 )
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v11 + 3728), 2LL);
      v12 = *(_QWORD *)(v11 + 3728);
      if ( v12 )
      {
        v13 = *(ADAPTER_DISPLAY **)(v12 + 2456);
        if ( v13 )
        {
          ADAPTER_DISPLAY::GetPrimaryPath(v13, v23, &v26, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v24);
          if ( v24 == i )
            break;
        }
      }
      if ( !a1 )
      {
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v11 + 3728), 2LL);
LABEL_31:
        if ( !a1 )
        {
          if ( *(_BYTE *)(v11 + 483) )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 3912LL));
          ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
          KeLeaveCriticalRegion();
        }
      }
      v5 = 0LL;
LABEL_36:
      v11 = *(_QWORD *)v11;
    }
    while ( *(_QWORD *)v11 != *(_QWORD *)(v10 + 56) );
    if ( !v5 )
      goto LABEL_38;
    v14 = v26;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, int *, int *, int *, int *))(v10 + 744))(
           *(_QWORD *)(v5 + 48),
           v26,
           &v20,
           &v21,
           &v22,
           &v19) >= 0 )
    {
      v18 = v19;
      if ( !v19 && qword_1C007A9E0 && v5 == *(_QWORD *)(qword_1C007A9E0 + 64) )
        *(_DWORD *)(a2 + 16) = 1;
      else
        *(_DWORD *)(a2 + 16) = 5;
LABEL_61:
      v8 = v22;
      a3 = v25;
      dword_1C007AAC0 = v24;
      v7 = v21;
      dword_1C007AAC8 = v21;
      byte_1C007AAA9 = a1;
      qword_1C007AAB0 = v10;
      qword_1C007AAB8 = v5;
      dword_1C007AAC4 = v14;
      dword_1C007AACC = v22;
      dword_1C007AAD0 = v18;
      goto LABEL_62;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3728), 2LL);
      if ( *(_BYTE *)(v5 + 483) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3912LL));
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      _InterlockedExchange64(&qword_1C007A788, 0LL);
      KeReleaseMutex((PRKMUTEX)Mutex, 0);
    }
    v5 = 0LL;
LABEL_48:
    ;
  }
  if ( qword_1C007A9D8 )
  {
    v15 = *(_QWORD *)(qword_1C007A9D8 + 64);
    if ( *(_DWORD *)(v15 + 236) == 2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v15 + 40) + 240LL))(*(_QWORD *)(v15 + 48));
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  if ( qword_1C007A9E0 )
  {
    v5 = *(_QWORD *)(qword_1C007A9E0 + 64);
    v10 = *(_QWORD *)(v5 + 40);
    if ( !a1 )
    {
      KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v5 + 483) )
        DpiCheckForOutstandingD3Requests(v5);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3728), 2LL);
    }
    v16 = *(_QWORD *)(v5 + 48);
    v17 = *(int (__fastcall **)(__int64, __int64, int *, int *, int *, int *))(v10 + 744);
    v24 = 3;
    v14 = -1;
    v26 = -1;
    if ( v17(v16, 0xFFFFFFFFLL, &v20, &v21, &v22, &v19) >= 0 )
    {
      v18 = v19;
      *(_DWORD *)(a2 + 16) = v19 != 0 ? 5 : 1;
      goto LABEL_61;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3728), 2LL);
      if ( *(_BYTE *)(v5 + 483) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3912LL));
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      _InterlockedExchange64(&qword_1C007A788, 0LL);
      KeReleaseMutex((PRKMUTEX)Mutex, 0);
    }
  }
  return 3221225473LL;
}
