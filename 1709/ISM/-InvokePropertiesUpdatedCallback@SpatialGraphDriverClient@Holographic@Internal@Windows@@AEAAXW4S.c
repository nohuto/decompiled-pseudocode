/*
 * XREFs of ?InvokePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXW4SpatialGraphPropertyFlags@234@@Z @ 0x1800B5220
 * Callers:
 *     ?StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800B4C10 (-StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::InvokePropertiesUpdatedCallback(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = *(_QWORD *)(a1 + 136);
  if ( !v5 )
    goto LABEL_7;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
         *(_QWORD *)(a1 + 136),
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v14);
  v4 = v14;
  if ( v6 < 0 )
    goto LABEL_8;
  if ( v14 )
  {
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v4 = v14;
    }
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4)(
           v4,
           &GUID_7a061d9a_fc53_4316_9547_28bf47ddf1a3,
           &v15);
    v4 = v14;
  }
  else
  {
LABEL_7:
    v6 = -2147467259;
  }
LABEL_8:
  if ( v4 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v8 = retaddr;
  if ( v6 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 48LL))(
            v15,
            *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
            a2);
    v8 = retaddr;
    if ( v11 >= 0 )
      goto LABEL_15;
    v9 = (unsigned int)v11;
    v10 = 378LL;
  }
  else
  {
    v9 = (unsigned int)v6;
    v10 = 376LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v8,
    (void *)v10,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v9);
LABEL_15:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
