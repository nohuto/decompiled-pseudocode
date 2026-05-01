/*
 * XREFs of ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180025BB0
 * Callers:
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001FD50 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@W.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180020CA0 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumeratio.c)
 *     ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180025E80 (-FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z.c)
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800333B0 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180035500 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedH.c)
 * Callees:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180023FCC (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x18002461C (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180025984 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunTask(int a1, unsigned int a2, int a3, __int64 a4, IUnknown *a5)
{
  int v7; // edi
  HMODULE *v8; // r15
  signed int ApartmentType; // esi
  int v10; // r14d
  APTTYPE v11; // ecx
  int TaskPoolTlsSlot; // eax
  int *Value; // rax
  int v14; // edx
  struct Windows::Internal::IComPoolTask *v15; // rbx
  APTTYPE pAptType; // [rsp+20h] [rbp-20h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+24h] [rbp-1Ch] BYREF
  struct Windows::Internal::IComPoolTask *v19[3]; // [rsp+28h] [rbp-18h] BYREF

  v19[1] = (struct Windows::Internal::IComPoolTask *)-2LL;
  v7 = a1;
  v8 = (HMODULE *)a5;
  ApartmentType = a5 == 0LL ? 0x8007000E : 0;
  if ( !a5 )
    return (unsigned int)ApartmentType;
  if ( a1 != 5 )
  {
    if ( a1 == 6 )
    {
      if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && pAptType && pAptType != APTTYPE_MAINSTA )
        goto LABEL_37;
      v7 = 0;
    }
    v10 = v7;
    if ( v7 != 4 )
      goto LABEL_10;
LABEL_37:
    ((void (__fastcall *)(IUnknown *))a5->lpVtbl[1].QueryInterface)(a5);
    return (unsigned int)ApartmentType;
  }
  v7 = 1;
  v10 = 1;
LABEL_10:
  if ( (a2 & 0x80u) != 0 )
  {
    v11 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
    if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool == -1 )
    {
      TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot((unsigned int *)&pAptType);
      v11 = pAptType;
    }
    else
    {
      TaskPoolTlsSlot = 0;
    }
    if ( TaskPoolTlsSlot >= 0 && (Value = (int *)TlsGetValue(v11)) != 0LL )
      v14 = *Value;
    else
      v14 = 0x7FFFFFFF;
    if ( v14 != 0x7FFFFFFF
      && ((v14 - 1) & 0x800000) != 0
      && (v7 == (v14 - 1) >> 24 || v7 == 3)
      && (((unsigned __int8)(v14 - 1) ^ (unsigned __int8)a2) & 9) == 0 )
    {
      goto LABEL_37;
    }
  }
  v15 = 0LL;
  v19[0] = 0LL;
  if ( v7 == 3 )
  {
    v10 = 0;
    goto LABEL_33;
  }
  if ( v7 != 2 )
  {
LABEL_33:
    if ( ApartmentType >= 0 )
      ApartmentType = Windows::Internal::ComTaskPool::s_QueuePoolTask(v10, a2, a3, v8);
    goto LABEL_35;
  }
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_35;
  v10 = 0;
  if ( pAptType == APTTYPE_STA )
  {
LABEL_32:
    ApartmentType = Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(a5, v19);
    v15 = v19[0];
    v8 = (HMODULE *)v19[0];
    goto LABEL_33;
  }
  if ( pAptType > APTTYPE_STA )
  {
    if ( pAptType <= APTTYPE_NA )
      goto LABEL_33;
    if ( pAptType != APTTYPE_MAINSTA )
      goto LABEL_31;
    goto LABEL_32;
  }
LABEL_31:
  ApartmentType = -2147418113;
LABEL_35:
  if ( v15 )
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)ApartmentType;
}
