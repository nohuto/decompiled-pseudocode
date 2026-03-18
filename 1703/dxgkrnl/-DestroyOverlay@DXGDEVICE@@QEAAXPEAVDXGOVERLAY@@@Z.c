/*
 * XREFs of ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0187380
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyOverlay @ 0x1C019AFA0 (DxgkDestroyOverlay.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::DestroyOverlay(DXGDEVICE *this, struct DXGOVERLAY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  struct DXGOVERLAY *v8; // rcx
  struct DXGOVERLAY **v9; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v7 + 24) = 3730LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(struct DXGOVERLAY **)a2;
  v9 = (struct DXGOVERLAY **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGOVERLAY **)(*(_QWORD *)a2 + 8LL) != a2 || *v9 != a2 )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)v8 + 1) = v9;
  DXGOVERLAY::`scalar deleting destructor'(a2);
}
