/*
 * XREFs of ?NotifyInvalidResource@CRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015D300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::NotifyInvalidResource(CRenderTarget *this, const struct IDeviceResource *a2)
{
  (*(void (__fastcall **)(char *, const struct IDeviceResource *))(*((_QWORD *)this - 2) + 128LL))(
    (char *)this - 16,
    a2);
}
