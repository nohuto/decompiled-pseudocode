/*
 * XREFs of ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801826C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x1800B4984 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 */

void __fastcall CCachedVisualImage::NotifyInvalidResource(CCachedVisualImage *this, const struct IDeviceResource *a2)
{
  CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)((char *)this - 128));
  CDeviceResource::NotifyInvalid((CCachedVisualImage *)((char *)this - 56), a2);
}
