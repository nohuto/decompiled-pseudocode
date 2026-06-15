/*
 * XREFs of ?GetConnectedStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x1800936D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IStreamGroupProxy **a2)
{
  return (**(__int64 (__fastcall ***)(CBaseStreamGroupProxy *, GUID *, struct IStreamGroupProxy **))this)(
           this,
           &GUID_97c34d55_b958_4540_b775_ed5f52a6e7a1,
           a2);
}
