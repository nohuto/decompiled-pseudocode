/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x18005E5B0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(
        wil::details *this,
        unsigned __int16 *a2,
        _BYTE *a3,
        bool *a4)
{
  const wil::ResultException *v5; // rbx
  __int64 *v6; // rbp
  int v7; // eax
  const wil::ResultException *v8; // rbx
  __int64 *v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h]
  const wil::ResultException *v12; // [rsp+28h] [rbp-30h] BYREF
  const std::bad_alloc *v13; // [rsp+30h] [rbp-28h] BYREF
  const wil::ResultException *v14; // [rsp+38h] [rbp-20h] BYREF
  const std::bad_alloc *v15; // [rsp+40h] [rbp-18h] BYREF
  std::exception *v16; // [rsp+48h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h]
  const struct wil::ResultException *v18; // [rsp+60h] [rbp+8h]
  const struct std::exception *v19; // [rsp+60h] [rbp+8h]
  const struct wil::ResultException *v20; // [rsp+60h] [rbp+8h]
  const struct std::exception *v21; // [rsp+60h] [rbp+8h]
  const struct std::exception *v22; // [rsp+60h] [rbp+8h]
  unsigned __int16 *v23; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v24; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v25; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v26; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v27; // [rsp+68h] [rbp+10h]
  _BYTE *v28; // [rsp+70h] [rbp+18h]
  _BYTE *v29; // [rsp+70h] [rbp+18h]

  v11 = -2LL;
  if ( this )
    *(_WORD *)this = 0;
  *a3 = 0;
  if ( !g_pfnResultFromCaughtException_WinRt )
  {
    if ( wil::g_pfnResultFromCaughtException )
    {
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v12 )
      {
        *v28 = 1;
        v5 = v12;
        wil::details::MaybeGetExceptionString(v12, v18, v23);
        return *((unsigned int *)v5 + 7);
      }
      catch ( const std::bad_alloc *v13 )
      {
        wil::details::MaybeGetExceptionString(v13, v19, v24);
        return 2147942414LL;
      }
      catch ( ... )
      {
        v9 = &v10;
        v6 = v9;
        v7 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v6[12], (unsigned __int16 *)v6[13]);
        *((_DWORD *)v6 + 24) = v7;
        if ( v7 < 0 )
          return (unsigned int)v17;
        return 0LL;
      }
    }
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v14 )
    {
      *v29 = 1;
      v8 = v14;
      wil::details::MaybeGetExceptionString(v14, v20, v25);
      return *((unsigned int *)v8 + 7);
    }
    catch ( const std::bad_alloc *v15 )
    {
      wil::details::MaybeGetExceptionString(v15, v21, v26);
      return 2147942414LL;
    }
    catch ( std::exception *v16 )
    {
      wil::details::MaybeGetExceptionString(v16, v22, v27);
      return 2147942974LL;
    }
    catch ( ... )
    {
      return 0LL;
    }
  }
  return g_pfnResultFromCaughtException_WinRt(this, a2, a3, 0LL, v11);
}
