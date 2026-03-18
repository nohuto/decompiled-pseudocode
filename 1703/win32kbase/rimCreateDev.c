/*
 * XREFs of RIMCreateDev @ 0x1C005428C
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0100090 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01005F0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010F07C (RIMDiscoverSpecificDevice.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     RIMFindInputDeviceForConfig @ 0x1C00077B0 (RIMFindInputDeviceForConfig.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0008734 (RIMFreeSpecificDevWorker.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 *     rimCreateDev @ 0x1C00540FC (rimCreateDev.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C008DA68 (RIMSetDeviceIdleTimeout.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C0092910 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C0092930 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     rimDereferenceDev @ 0x1C0094378 (rimDereferenceDev.c)
 *     WPP_RECORDER_SF_S @ 0x1C0094FDC (WPP_RECORDER_SF_S.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C013DDFC (ApiSetSetUserPTPEnabledPreference.c)
 */

__int64 __fastcall RIMCreateDev(
        PWSTR *Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        struct _UNICODE_STRING **a7)
{
  int v7; // ebp
  char v9; // r14
  struct _UNICODE_STRING *Dev; // rbx
  __int64 v12; // rax
  int v13; // edx
  struct _KEVENT *v14; // rax
  int v15; // edx
  __int64 v16; // rax
  int v17; // r9d
  int v20; // esi
  int v21; // edx
  PWSTR Buffer; // rcx
  int v23; // [rsp+30h] [rbp-18h] BYREF
  int v24; // [rsp+34h] [rbp-14h] BYREF
  __int64 v25; // [rsp+38h] [rbp-10h] BYREF

  v7 = a4;
  v9 = a2;
  Dev = (struct _UNICODE_STRING *)rimCreateDev((__int64)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v12 = Win32AllocPool(*(unsigned __int16 *)(a3 + 2), 0x70707352u);
    Dev[13].Buffer = (PWSTR)v12;
    if ( !v12 )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        17,
        11,
        (__int64)&WPP_4abad023f51c380e85db81e5a59c95c2_Traceguids,
        *(_QWORD *)(a3 + 8));
      goto LABEL_13;
    }
    Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
    RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
  }
  LOBYTE(Dev[3].Length) = v9;
  if ( v7 )
    LODWORD(Dev[11].Buffer) |= 0x20u;
  if ( a5 )
  {
    LODWORD(Dev[11].Buffer) |= 0x1000u;
    *(_QWORD *)&Dev[24].Length = *(_QWORD *)(a6 + 116);
    LODWORD(Dev[24].Buffer) = *(_DWORD *)(a6 + 124);
    *(_DWORD *)&Dev[47].Length = *(_DWORD *)(a6 + 132);
    Dev[47].Buffer = *(PWSTR *)(a6 + 136);
    v14 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1986358098LL);
    *(_QWORD *)&Dev[23].Length = v14;
    if ( !v14 )
    {
      v17 = 12;
      goto LABEL_12;
    }
  }
  else
  {
    v14 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1986358098LL);
    Dev[22].Buffer = (PWSTR)v14;
    if ( !v14 )
    {
      v17 = 13;
      goto LABEL_12;
    }
  }
  KeInitializeEvent(v14, SynchronizationEvent, 0);
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    v16 = RIMCreateHidDesc(Object, Dev, a6);
    Dev[28].Buffer = (PWSTR)v16;
    if ( !v16 )
    {
      v17 = 14;
LABEL_12:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        17,
        v17,
        (__int64)&WPP_4abad023f51c380e85db81e5a59c95c2_Traceguids);
LABEL_13:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 8LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev);
      rimDereferenceDev(Dev);
      return 3221225495LL;
    }
  }
  if ( !LOBYTE(Dev[3].Length) )
  {
    EtwTraceLegacyTouchPadDetectionStart();
    v20 = (int)IsIsLegacyTouchPadDeviceSupported() < 0 ? 0 : IsLegacyTouchPadDevice(Dev);
    EtwTraceLegacyTouchPadDetectionStop();
    if ( v20 )
    {
      LOBYTE(v21) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        19,
        15,
        (__int64)&WPP_4abad023f51c380e85db81e5a59c95c2_Traceguids);
    }
  }
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
    goto LABEL_13;
  Dev[21].Buffer = (PWSTR)Object;
  Dev[2].Buffer = Object[69];
  Object[69] = &Dev->Length;
  *a7 = Dev;
  if ( !Object[96] || *((_DWORD *)Object + 244) || a5 == 0 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1);
  if ( ((__int64)Dev[11].Buffer & 0x800) != 0 )
  {
    Buffer = Dev[28].Buffer;
    v24 = 0;
    v23 = 0;
    v25 = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig((int)Buffer, (__int64)Object, (int)Dev, &v24, &v23, &v25) )
    {
      if ( !v23 )
        ApiSetSetUserPTPEnabledPreference(v25, *(_QWORD *)(v25 + 456), Object);
    }
  }
  if ( (LODWORD(Dev[12].Buffer) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(Dev);
  LODWORD(Dev[46].Buffer) = -1;
  HIDWORD(Dev[46].Buffer) = 0;
  if ( !Object[96] && !*((_DWORD *)Object + 244) )
  {
    if ( a5 )
      rimDoRimDevChange((__int64)Object, (__int64)Dev, 2);
  }
  return 0LL;
}
