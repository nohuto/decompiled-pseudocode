/*
 * XREFs of ?s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18002BAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisibilityOverride::s_DXModeWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD **a4)
{
  char v5; // di
  __int64 v6; // rax
  void (*v7)(void); // rax

  v5 = (unsigned int)D3DKMTCheckOcclusion(&CVisibilityOverride::s_checkOcclusion, a2, a3) == -1071775738;
  if ( v5 != *((_BYTE *)a4 + 36) )
  {
    v6 = *a4[6];
    if ( v5 )
      v7 = *(void (**)(void))(v6 + 24);
    else
      v7 = *(void (**)(void))(v6 + 32);
    v7();
    *((_BYTE *)a4 + 36) = v5;
  }
  return 0LL;
}
