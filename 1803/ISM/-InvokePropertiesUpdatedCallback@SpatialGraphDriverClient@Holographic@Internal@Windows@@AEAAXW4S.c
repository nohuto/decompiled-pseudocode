/*
 * XREFs of ?InvokePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXW4SpatialGraphPropertyFlags@234@@Z @ 0x1800C3CC4
 * Callers:
 *     ?StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C2780 (-StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  v11 = 0LL;
  v5 = *(_QWORD *)(a1 + 160);
  if ( !v5 )
    goto LABEL_7;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
         *(_QWORD *)(a1 + 160),
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v11);
  v4 = v11;
  if ( v6 < 0 )
    goto LABEL_8;
  if ( v11 )
  {
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v4 = v11;
    }
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4)(
           v4,
           &GUID_7a061d9a_fc53_4316_9547_28bf47ddf1a3,
           &v12);
    v4 = v11;
  }
  else
  {
LABEL_7:
    v6 = -2147467259;
  }
LABEL_8:
  if ( v4 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 48LL))(
           v12,
           *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL),
           a2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x29A,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
