/*
 * XREFs of ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C019CC14
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009C68C (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyOverlay @ 0x1C01B1A00 (DxgkDestroyOverlay.c)
 * Callees:
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C0025E50 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyOverlay(DXGDEVICE *this, struct DXGOVERLAY ***a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct DXGOVERLAY **v5; // rax
  struct DXGOVERLAY **v6; // rcx

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 3773LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *a2;
  if ( (*a2)[1] != (struct DXGOVERLAY *)a2 || (v6 = a2[1], *v6 != (struct DXGOVERLAY *)a2) )
    __fastfail(3u);
  *v6 = (struct DXGOVERLAY *)v5;
  v5[1] = (struct DXGOVERLAY *)v6;
  DXGOVERLAY::`scalar deleting destructor'((DXGOVERLAY *)a2);
}
