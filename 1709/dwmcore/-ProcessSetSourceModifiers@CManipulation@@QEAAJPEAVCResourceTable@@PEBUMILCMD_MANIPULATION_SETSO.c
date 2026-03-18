/*
 * XREFs of ?ProcessSetSourceModifiers@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_SETSOURCEMODIFIERS@@@Z @ 0x1801707A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18016AA10 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CManipulation::ProcessSetSourceModifiers(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_SETSOURCEMODIFIERS *a3)
{
  __int64 Resource; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x24u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 54, Resource);
  v7 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x24u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 55, v7);
  v8 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 4), 0x24u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 56, v8);
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 5), 0x24u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 57, v9);
  v10 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 0x24u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 58, v10);
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 64LL))(this, 13LL, this);
  return 0LL;
}
