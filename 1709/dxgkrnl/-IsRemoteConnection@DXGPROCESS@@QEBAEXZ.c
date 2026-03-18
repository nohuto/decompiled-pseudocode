/*
 * XREFs of ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C001D82C
 * Callers:
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B74A8 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DXGPROCESS::IsRemoteConnection(DXGPROCESS *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(_QWORD))(v1 + 224))(0LL) != 0;
  return v2;
}
