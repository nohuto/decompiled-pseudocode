/*
 * XREFs of ?SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z @ 0x180079094
 * Callers:
 *     ?StartContinuousBuzz@SpatialInteractionDevice@@UEAAJE@Z @ 0x180074F50 (-StartContinuousBuzz@SpatialInteractionDevice@@UEAAJE@Z.c)
 *     ?StopHapticsFeedback@SpatialInteractionDevice@@UEAAJXZ @ 0x180074F60 (-StopHapticsFeedback@SpatialInteractionDevice@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z @ 0x18007CDD8 (-HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::SetHapticsWaveForm(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        unsigned __int8 a3)
{
  unsigned __int16 v4; // r10
  __int64 result; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  struct SpatialInteractionDevices::HID_REPORT *v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // rcx
  char v12; // al
  int v13; // edi
  struct SpatialInteractionDevices::HID_REPORT *v14; // r8
  __int64 v15; // rdx
  void *v16; // rcx
  signed int LastError; // ecx
  unsigned int v18; // [rsp+28h] [rbp-20h]
  unsigned int v19; // [rsp+28h] [rbp-20h]
  DWORD nNumberOfBytesToWrite; // [rsp+30h] [rbp-18h] BYREF
  LPCVOID lpBuffer; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD NumberOfBytesWritten; // [rsp+60h] [rbp+18h] BYREF

  v4 = (unsigned __int16)a2;
  if ( a3 > 0x64u )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v7 = *((unsigned __int16 *)this + 79);
  v8 = 0LL;
  if ( !*((_WORD *)this + 79) )
    return 0LL;
  v9 = (struct SpatialInteractionDevices::HID_REPORT *)*((_QWORD *)this + 25);
  while ( 1 )
  {
    v10 = 9 * v8;
    if ( *((_WORD *)v9 + 36 * v8) == 14 )
      break;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v7 )
      return 0LL;
  }
  v11 = (_BYTE *)*((_QWORD *)this + 33);
  nNumberOfBytesToWrite = *((unsigned __int16 *)this + 55);
  v12 = *((_BYTE *)v9 + 8 * v10 + 2);
  lpBuffer = v11;
  *v11 = v12;
  v13 = SpatialInteractionDevices::Internal::HIDSetInteger(
          this,
          (struct SpatialInteractionDevices::HID_HANDLE *)&nNumberOfBytesToWrite,
          v9,
          0x21u,
          v4,
          v18);
  if ( v13 < 0 )
  {
    v15 = 1008LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  v13 = SpatialInteractionDevices::Internal::HIDSetInteger(
          this,
          (struct SpatialInteractionDevices::HID_HANDLE *)&nNumberOfBytesToWrite,
          v14,
          0x23u,
          a3,
          v19);
  if ( v13 < 0 )
  {
    v15 = 1009LL;
    goto LABEL_10;
  }
  v16 = (void *)*((_QWORD *)this + 1);
  NumberOfBytesWritten = 0;
  if ( WriteFile(v16, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, (LPOVERLAPPED)((char *)this + 48))
    || GetLastError() == 997
    && GetOverlappedResult(*((HANDLE *)this + 1), (LPOVERLAPPED)((char *)this + 48), &NumberOfBytesWritten, 1) )
  {
    return 0LL;
  }
  LastError = GetLastError();
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
