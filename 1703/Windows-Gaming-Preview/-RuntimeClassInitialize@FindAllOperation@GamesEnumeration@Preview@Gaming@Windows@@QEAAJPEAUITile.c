/*
 * XREFs of ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUHSTRING__@@@Z @ 0x1800055C4
 * Callers:
 *     _lambda_008cd9ca32b74012431ac337bbccf2a6_::operator() @ 0x18000B024 (_lambda_008cd9ca32b74012431ac337bbccf2a6_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180005CDC (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     OneCoreDataHelpers::EnumerateAllAppsListTiles__lambda_583858c287dd4f24a72674e9671c2c83___ @ 0x180006B80 (OneCoreDataHelpers--EnumerateAllAppsListTiles__lambda_583858c287dd4f24a72674e9671c2c83___.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18001EC60 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18001EEE4 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        HSTRING a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PCWSTR StringRawBuffer; // rax
  int CallingProcessHandle; // eax
  void *v14; // rdx
  bool *v15; // r9
  int v16; // ebx
  __int64 v17; // rdx
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v21; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp+10h] BYREF

  if ( *((struct ITileManager **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct IVisualElementEnumerator **)this + 11) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( !WindowsIsStringEmpty(a4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
      (char *)this + 56,
      StringRawBuffer);
  }
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v11, v10, &hObject);
  v16 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v17 = 61LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    goto LABEL_23;
  }
  CallingProcessHandle = CallerIdentity::CheckCapabilityFromProcessHandle(
                           (CallerIdentity *)hObject,
                           v14,
                           (const unsigned __int16 *)&v21,
                           v15);
  v16 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v17 = 65LL;
    goto LABEL_15;
  }
  if ( !(_BYTE)v21 )
  {
    v16 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)0x80070005LL);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    goto LABEL_26;
  }
  v21 = this;
  v18 = OneCoreDataHelpers::EnumerateAllAppsListTiles__lambda_583858c287dd4f24a72674e9671c2c83___(
          *((_QWORD *)this + 11),
          &v21);
  v16 = v18;
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v18);
LABEL_23:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( v16 < 0 )
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
