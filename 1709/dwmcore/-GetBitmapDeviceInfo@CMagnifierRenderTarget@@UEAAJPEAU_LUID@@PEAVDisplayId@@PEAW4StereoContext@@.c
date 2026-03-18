/*
 * XREFs of ?GetBitmapDeviceInfo@CMagnifierRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAW4StereoContext@@@Z @ 0x180138040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTarget::GetBitmapDeviceInfo(
        CMagnifierRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        enum StereoContext *a4)
{
  __int64 v4; // rcx

  if ( a4 )
    *(_DWORD *)a4 = *((_DWORD *)this + 8 * *((unsigned int *)this + 128) + 68);
  v4 = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * *((unsigned int *)this + 128));
  return (*(__int64 (__fastcall **)(__int64, struct _LUID *, struct DisplayId *))(*(_QWORD *)v4 + 88LL))(v4, a2, a3);
}
