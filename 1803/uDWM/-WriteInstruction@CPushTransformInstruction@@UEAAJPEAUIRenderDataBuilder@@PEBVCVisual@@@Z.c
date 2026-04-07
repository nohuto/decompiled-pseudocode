/*
 * XREFs of ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180015370
 * Callers:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x180017FB0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushTransformInstruction::WriteInstruction(
        CPushTransformInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD))(*(_QWORD *)a2 + 96LL))(
           a2,
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
