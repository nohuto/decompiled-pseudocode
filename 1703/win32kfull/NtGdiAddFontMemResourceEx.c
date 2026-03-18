/*
 * XREFs of NtGdiAddFontMemResourceEx @ 0x1C028CC60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     GreAddFontMemResourceEx @ 0x1C026A930 (GreAddFontMemResourceEx.c)
 *     GreRemoveFontMemResourceEx @ 0x1C026B7DC (GreRemoveFontMemResourceEx.c)
 */

__int64 __fastcall NtGdiAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 v5; // r12
  _BYTE *v6; // r15
  int v9; // edi
  __int64 v10; // r14
  _DWORD *v11; // rsi
  _DWORD v13[6]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v14; // [rsp+50h] [rbp-B8h]
  unsigned int v15[2]; // [rsp+58h] [rbp-B0h]
  struct tagDOWNLOADFONTHEADER *v16; // [rsp+60h] [rbp-A8h]
  _BYTE v17[4]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v18; // [rsp+74h] [rbp-94h]

  v5 = a4;
  v6 = a3;
  v13[2] = a2;
  v16 = a1;
  v13[4] = a2;
  v14 = a3;
  v13[0] = a4;
  v9 = 1;
  v10 = 0LL;
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v11 = a5;
  if ( !a5 )
    return 0LL;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 > 0x48 )
      goto LABEL_10;
    if ( (unsigned __int64)v6 >= W32UserProbeAddress )
      v6 = (_BYTE *)W32UserProbeAddress;
    memmove(v17, v6, (unsigned int)v5);
    v6 = v17;
    v14 = v17;
    if ( v5 != 4LL * v18 + 8 )
LABEL_10:
      v9 = 0;
  }
  else
  {
    v6 = 0LL;
    v14 = 0LL;
  }
  if ( v9 )
  {
    v10 = GreAddFontMemResourceEx(a1, a2, (struct tagDESIGNVECTOR *)v6, v5, v13);
    *(_QWORD *)v15 = v10;
    if ( v10 )
    {
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v11 = (_DWORD *)W32UserProbeAddress;
      *v11 = v13[0];
    }
  }
  return v10;
}
