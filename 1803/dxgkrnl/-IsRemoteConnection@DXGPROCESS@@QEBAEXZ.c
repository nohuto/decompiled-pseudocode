/*
 * XREFs of ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0023E74
 * Callers:
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0165270 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B3E20 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DXGPROCESS::IsRemoteConnection(DXGPROCESS *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 13);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(_QWORD))(v1 + 224))(0LL) != 0;
  return v2;
}
