/*
 * XREFs of ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x1800663B0
 * Callers:
 *     ?MaterializeBamoEdgyControllerClientProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18001E274 (-MaterializeBamoEdgyControllerClientProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800676AC (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyControllerClientProxy::EdgyControllerClientProxy(__int64 a1, __int64 *a2)
{
  struct EdgyConnection *v4; // rax
  const char *v5; // r9
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoEdgyControllerClientProxyImpl::`vftable';
  *(_DWORD *)(a1 + 40) = 0;
  *(_WORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)a1 = &EdgyControllerClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *(_QWORD *)(a1 + 8) = &EdgyControllerClientProxy::`vftable'{for `IEdgyControllerClientProxy'};
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  v4 = EdgyConnection::Get();
  *(_QWORD *)(a1 + 112) = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = *a2;
  *(_QWORD *)(a1 + 120) = *a2;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
  if ( !*a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerclientproxy.cpp",
      v5);
    __debugbreak();
  }
  if ( !*(_QWORD *)(a1 + 112) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerclientproxy.cpp",
      v5);
    JUMPOUT(0x180066493LL);
  }
  return a1;
}
