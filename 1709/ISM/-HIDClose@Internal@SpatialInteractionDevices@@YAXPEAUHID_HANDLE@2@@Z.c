/*
 * XREFs of ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x18007C9FC
 * Callers:
 *     ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800748E0 (--_GSpatialInteractionDevice@@UEAAPEAXI@Z.c)
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x18007BFEC (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     wil::details::ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___::_ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___ @ 0x18007D028 (wil--details--ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___--_ScopeExitFn__lambda_5c8e.c)
 * Callees:
 *     ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x18007CA44 (--1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SpatialInteractionDevices::Internal::HIDClose(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  struct _HIDP_PREPARSED_DATA *v3; // rcx
  void *v4; // rcx

  if ( this )
  {
    v3 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
    if ( v3 )
      HidD_FreePreparsedData(v3);
    v4 = (void *)*((_QWORD *)this + 9);
    if ( v4 )
      CloseHandle(v4);
    SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(this);
    operator delete(this);
  }
}
