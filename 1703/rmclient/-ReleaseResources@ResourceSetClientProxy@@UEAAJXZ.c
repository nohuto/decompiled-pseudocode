/*
 * XREFs of ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x18000DE00
 * Callers:
 *     ??1ResourceSetClientProxy@@MEAA@XZ @ 0x18000C874 (--1ResourceSetClientProxy@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetClientProxy::ReleaseResources(ResourceSetClientProxy *this)
{
  return ResourceSetClientProxy::ReleaseResourcesImpl(this, *((_DWORD *)this + 105) == 0);
}
