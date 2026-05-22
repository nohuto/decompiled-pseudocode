/*
 * XREFs of ?GetRenderableModelPath@SpatialInteractionDevice@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180075120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18004CAF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x180073BDC (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevice::GetRenderableModelPath(HSTRING *this, HSTRING *a2)
{
  int v4; // eax
  WCHAR *StringRawBuffer; // rax
  _WORD *v6; // rcx
  int v7; // edi
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // dx
  int String; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  const WCHAR *v14; // r8
  int v15; // edi
  unsigned int ValueW; // eax
  _BYTE v18[8]; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  WCHAR sourceString[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v4 = (*((__int64 (__fastcall **)(HSTRING *, int *))*this + 15))(this, &v20);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)(unsigned int)v4);
    v20 = 0;
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(this[10], 0LL);
  v6 = this[11];
  v7 = v20;
  hKey = 0LL;
  v8 = v6[46];
  v9 = v6[45];
  v10 = v6[44];
  *a2 = 0LL;
  String = SpatialInteractionDevices::OpenBestMatchingControllerKey(StringRawBuffer, v10, v9, v8, v7, &hKey, v18);
  v12 = String;
  if ( String < 0 )
  {
    v13 = 134LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
      (const char *)(unsigned int)String);
    goto LABEL_6;
  }
  v14 = L"GLBv2_ModelPath";
  if ( !v18[0] )
  {
    v15 = v7 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
        v14 = L"GLBv2_RightHandModelPath";
    }
    else
    {
      v14 = L"GLBv2_LeftHandModelPath";
    }
  }
  pcbData = 520;
  ValueW = RegGetValueW(hKey, 0LL, v14, 2u, 0LL, sourceString, &pcbData);
  if ( ValueW )
  {
    v12 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x9A,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiondevice.h",
            (const char *)ValueW);
LABEL_6:
    if ( hKey )
      RegCloseKey(hKey);
    return v12;
  }
  String = WindowsCreateString(sourceString, (pcbData >> 1) - 1, a2);
  v12 = String;
  if ( String < 0 )
  {
    v13 = 155LL;
    goto LABEL_5;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0;
}
