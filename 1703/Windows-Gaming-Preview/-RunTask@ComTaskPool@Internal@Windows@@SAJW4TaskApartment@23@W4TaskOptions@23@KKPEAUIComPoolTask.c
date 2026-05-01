/*
 * XREFs of ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180011ED4
 * Callers:
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18000E720 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumeratio.c)
 *     ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180012294 (-FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z.c)
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180019D00 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001A7E0 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedH.c)
 *     ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180024448 (-SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@P.c)
 * Callees:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x1800103D0 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180010A8C (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180011CA8 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunTask(int a1, unsigned int a2, int a3, __int64 a4, IUnknown *a5)
{
  int v7; // edi
  HMODULE *v8; // r14
  signed int ApartmentType; // esi
  APTTYPE v10; // ecx
  int TaskPoolTlsSlot; // eax
  int *Value; // rax
  int v13; // edx
  struct Windows::Internal::IComPoolTask *v14; // rbx
  APTTYPE pAptType; // [rsp+20h] [rbp-48h] BYREF
  struct Windows::Internal::IComPoolTask *v17; // [rsp+28h] [rbp-40h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = -2LL;
  v7 = a1;
  v8 = (HMODULE *)a5;
  ApartmentType = a5 == 0LL ? 0x8007000E : 0;
  if ( !a5 )
    return (unsigned int)ApartmentType;
  if ( a1 == 5 )
    v7 = 1;
  if ( v7 == 4
    || (a2 & 0x80u) != 0
    && ((v10 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool,
         `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1)
      ? (TaskPoolTlsSlot = 0)
      : (TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot((unsigned int *)&pAptType),
         v10 = pAptType),
        TaskPoolTlsSlot < 0 || (Value = (int *)TlsGetValue(v10)) == 0LL ? (v13 = 0x7FFFFFFF) : (v13 = *Value),
        v13 != 0x7FFFFFFF
     && ((v13 - 1) & 0x800000) != 0
     && (v7 == (v13 - 1) >> 24 || v7 == 3)
     && (((unsigned __int8)(v13 - 1) ^ (unsigned __int8)a2) & 9) == 0) )
  {
    ((void (__fastcall *)(IUnknown *))a5->lpVtbl[1].QueryInterface)(a5);
    return (unsigned int)ApartmentType;
  }
  v14 = 0LL;
  v17 = 0LL;
  if ( v7 == 3 )
  {
    v7 = 0;
    goto LABEL_28;
  }
  if ( v7 != 2 )
  {
LABEL_28:
    if ( ApartmentType >= 0 )
      ApartmentType = Windows::Internal::ComTaskPool::s_QueuePoolTask(v7, a2, a3, v8);
    goto LABEL_30;
  }
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_30;
  v7 = 0;
  if ( pAptType == APTTYPE_STA )
  {
LABEL_27:
    ApartmentType = Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(a5, &v17);
    v14 = v17;
    v8 = (HMODULE *)v17;
    goto LABEL_28;
  }
  if ( pAptType > APTTYPE_STA )
  {
    if ( pAptType <= APTTYPE_NA )
      goto LABEL_28;
    if ( pAptType != APTTYPE_MAINSTA )
      goto LABEL_26;
    goto LABEL_27;
  }
LABEL_26:
  ApartmentType = -2147418113;
LABEL_30:
  if ( v14 )
    (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)ApartmentType;
}
