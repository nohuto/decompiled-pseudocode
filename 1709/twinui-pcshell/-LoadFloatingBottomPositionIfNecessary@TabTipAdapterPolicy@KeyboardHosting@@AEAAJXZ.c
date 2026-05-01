/*
 * XREFs of ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801ABDD4
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1801AACE0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180084890 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  __int64 result; // rax
  const WCHAR *v3; // r8
  const WCHAR *v4; // rdx
  unsigned int ValueW; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  const WCHAR *v8; // r8
  const WCHAR *v9; // rdx
  int v10; // ecx
  int v11; // eax
  float v12; // xmm2_4
  float v13; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  DWORD v17; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 388) )
    return 1LL;
  v3 = (const WCHAR *)*((_QWORD *)this + 11);
  v4 = (const WCHAR *)*((_QWORD *)this + 10);
  pcbData = 4;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, v4, v3, 0x10u, 0LL, &pvData, &pcbData);
  if ( ValueW )
  {
    v6 = 635LL;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)v6,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
             (const char *)ValueW);
  }
  if ( (unsigned int)pvData > *((_DWORD *)this + 27) )
  {
    v7 = 636LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v8 = (const WCHAR *)*((_QWORD *)this + 12);
  v9 = (const WCHAR *)*((_QWORD *)this + 10);
  v17 = 4;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, v9, v8, 0x10u, 0LL, &v18, &v17);
  if ( ValueW )
  {
    v6 = 640LL;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)v6,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
             (const char *)ValueW);
  }
  v10 = v18;
  if ( v18 > *((_DWORD *)this + 27) )
  {
    v7 = 641LL;
    goto LABEL_8;
  }
  v11 = *((_DWORD *)this + 27);
  *((_BYTE *)this + 388) = 1;
  v12 = (float)v11;
  result = 0LL;
  v13 = (float)pvData / v12;
  *((float *)this + 96) = (float)v10 / v12;
  *((float *)this + 95) = v13;
  return result;
}
