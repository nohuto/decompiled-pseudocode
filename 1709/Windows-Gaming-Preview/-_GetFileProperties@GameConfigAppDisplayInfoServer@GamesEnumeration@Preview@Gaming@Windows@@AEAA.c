/*
 * XREFs of ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180011494
 * Callers:
 *     _lambda_2c9b109c06d9045e37c547b3020af78e_::operator() @ 0x18001112C (_lambda_2c9b109c06d9045e37c547b3020af78e_--operator().c)
 *     _lambda_60af5443d724e9e01c3fd429707a7024_::operator() @ 0x180011304 (_lambda_60af5443d724e9e01c3fd429707a7024_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsCreateStorageItemFromPath_FullTrustCallerPresent @ 0x180042370 (IsCreateStorageItemFromPath_FullTrustCallerPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  HSTRING v6; // rcx
  PCWSTR StringRawBuffer; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 88);
  if ( !*(_QWORD *)(a1 + 88) )
  {
    if ( !(unsigned __int8)IsCreateStorageItemFromPath_FullTrustCallerPresent() )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)0x80004001LL);
      return 2147500033LL;
    }
    v6 = *(HSTRING *)(a1 + 80);
    v16 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    v8 = CreateStorageItemFromPath_FullTrustCaller(
           StringRawBuffer,
           0LL,
           &GUID_fa3f6186_4214_428c_a64c_14c9ac7315ea,
           &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 308LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v8);
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
      }
      return v9;
    }
    v11 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v8 = (**v16)(v16, &GUID_86664478_8029_46fe_a789_1c2f3e2ffb5c, v2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 310LL;
      goto LABEL_10;
    }
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
    }
  }
  v14 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( *v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 8LL))(*v2);
  *a2 = *v2;
  return 0LL;
}
