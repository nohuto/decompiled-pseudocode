/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveGroupDrawListGenerator@@UEAAXPEBVIDeviceResource@@@Z @ 0x180152750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPrimitiveGroupDrawListGenerator::NotifyInvalidResource(
        CPrimitiveGroupDrawListGenerator *this,
        const struct IDeviceResource *a2)
{
  CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations((CPrimitiveGroupDrawListGenerator *)((char *)this - 16));
}
