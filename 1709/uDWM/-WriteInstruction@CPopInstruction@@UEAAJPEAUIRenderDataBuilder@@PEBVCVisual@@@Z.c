/*
 * XREFs of ?WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180014D60
 * Callers:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800152B0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPopInstruction::WriteInstruction(
        CPopInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)a2 + 88LL))(a2);
}
