/*
 * XREFs of xxxSendShutdownData @ 0x1C013AE48
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     SfnCOPYDATA @ 0x1C00FAEC0 (SfnCOPYDATA.c)
 *     _GetWindowIcon @ 0x1C0139C3C (_GetWindowIcon.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendShutdownData(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rbx
  unsigned int v5; // eax
  size_t v6; // rdx
  const wchar_t *Prop; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h]
  __int64 *v12; // [rsp+58h] [rbp-B0h]
  __int64 v13; // [rsp+68h] [rbp-A0h] BYREF
  __int64 WindowIcon; // [rsp+70h] [rbp-98h]
  wchar_t v15[261]; // [rsp+78h] [rbp-90h] BYREF
  wchar_t pszDest[267]; // [rsp+282h] [rbp+17Ah] BYREF

  v2 = a2;
  if ( !gspwndBSDR )
    return 0LL;
  if ( a1 == 0xFFFF )
  {
LABEL_15:
    v12 = &v13;
    v13 = a1;
    v10 = 0LL;
    LODWORD(v11) = 1064;
    SfnCOPYDATA((__int64 *)gspwndBSDR, 809, v2, (__int64)&v10, *(_QWORD *)(gspwndBSDR + 160), *(_QWORD *)(gpsi + 744LL));
    return 0LL;
  }
  if ( !a2 )
  {
    WindowIcon = 0LL;
    pszDest[0] = 0;
    v15[0] = 0;
    v8 = ValidateHwndEx(a1, 0LL, 0LL);
    if ( v8 )
      *(_DWORD *)(v8 + 304) &= ~0x4000u;
    goto LABEL_15;
  }
  v4 = ValidateHwndEx(a1, 0LL, 0LL);
  if ( v4 )
  {
    if ( *(_QWORD *)v4 == ghwndBlocking )
    {
      v2 = 2LL;
    }
    else if ( *(_DWORD *)(v4 + 320) != 1 )
    {
      return 0LL;
    }
    *(_DWORD *)(v4 + 304) |= 0x4000u;
    WindowIcon = GetWindowIcon(v4, 1);
    v5 = *(_DWORD *)(v4 + 232);
    if ( v5 )
    {
      v6 = ((unsigned __int64)v5 >> 1) + 1;
      if ( v6 > 0x105 )
        v6 = 261LL;
      RtlStringCchCopyW(pszDest, v6, *(NTSTRSAFE_PCWSTR *)(v4 + 240));
    }
    else
    {
      pszDest[0] = 0;
    }
    Prop = (const wchar_t *)GetProp(v4, gatomShutdownBlockingReason, 1);
    if ( Prop )
      RtlStringCchCopyW(v15, 0x105uLL, Prop);
    else
      v15[0] = 0;
    goto LABEL_15;
  }
  return 0LL;
}
