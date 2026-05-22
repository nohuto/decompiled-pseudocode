/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x180002A60
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(
        wil::details *this,
        unsigned __int16 *a2,
        _BYTE *a3,
        bool *a4)
{
  unsigned __int16 **v5; // rbp
  wil *v6; // rcx
  __int64 v7; // rbx
  const struct wil::FailureInfo *v8; // r9
  _BYTE *v9; // rbp
  wchar_t *v10; // rbx
  __int64 v11; // rax
  _BYTE *v12; // rbp
  int v13; // eax
  unsigned __int16 **v14; // rbp
  wil *v15; // rcx
  __int64 v16; // rbx
  const struct wil::FailureInfo *v17; // r9
  _BYTE *v18; // rbp
  wchar_t *v19; // rbx
  __int64 v20; // rax
  _BYTE *v21; // rbp
  wchar_t *v22; // rbx
  __int64 v23; // rax
  _BYTE *v24; // rdx
  _BYTE *v25; // rdx
  _BYTE *v26; // rdx
  _BYTE *v27; // rdx
  _BYTE *v28; // rdx
  _BYTE *v29; // rdx
  _BYTE v30[32]; // [rsp+0h] [rbp-58h] BYREF
  const wil::ResultException *v31; // [rsp+20h] [rbp-38h] BYREF
  const wil::ResultException *v32[2]; // [rsp+28h] [rbp-30h] BYREF
  const std::bad_alloc *v33; // [rsp+38h] [rbp-20h] BYREF
  const std::bad_alloc *v34; // [rsp+40h] [rbp-18h] BYREF
  std::exception *v35; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+60h] [rbp+8h]

  v32[1] = (const wil::ResultException *)-2LL;
  if ( this )
    *(_WORD *)this = 0;
  *a3 = 0;
  if ( !g_pfnResultFromCaughtException_WinRt )
  {
    if ( !wil::g_pfnResultFromCaughtException )
    {
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v32 )
      {
        v27 = v30;
        v14 = (unsigned __int16 **)v27;
        **((_BYTE **)v27 + 14) = 1;
        v15 = (wil *)*((_QWORD *)v27 + 12);
        v16 = *((_QWORD *)v27 + 5);
        if ( v15 )
          wil::GetFailureLogString(v15, v14[13], v16 + 24, v17);
        *((_DWORD *)v14 + 24) = *(_DWORD *)(v16 + 28);
        return v36;
      }
      catch ( const std::bad_alloc *v34 )
      {
        v28 = v30;
        v18 = v28;
        v19 = (wchar_t *)*((_QWORD *)v28 + 12);
        if ( v19 )
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 8) + 8LL))(*((_QWORD *)v18 + 8));
          StringCchPrintfW(v19, *((_QWORD *)v18 + 13), L"std::exception: %hs", v20);
        }
        return 2147942414LL;
      }
      catch ( std::exception *v35 )
      {
        v29 = v30;
        v21 = v29;
        v22 = (wchar_t *)*((_QWORD *)v29 + 12);
        if ( v22 )
        {
          v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v21 + 9) + 8LL))(*((_QWORD *)v21 + 9));
          StringCchPrintfW(v22, *((_QWORD *)v21 + 13), L"std::exception: %hs", v23);
        }
        return 2147942974LL;
      }
      catch ( ... )
      {
        return 0LL;
      }
    }
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v31 )
    {
      v24 = v30;
      v5 = (unsigned __int16 **)v24;
      **((_BYTE **)v24 + 14) = 1;
      v6 = (wil *)*((_QWORD *)v24 + 12);
      v7 = *((_QWORD *)v24 + 4);
      if ( v6 )
        wil::GetFailureLogString(v6, v5[13], v7 + 24, v8);
      *((_DWORD *)v5 + 24) = *(_DWORD *)(v7 + 28);
      return v36;
    }
    catch ( const std::bad_alloc *v33 )
    {
      v25 = v30;
      v9 = v25;
      v10 = (wchar_t *)*((_QWORD *)v25 + 12);
      if ( v10 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 7) + 8LL))(*((_QWORD *)v9 + 7));
        StringCchPrintfW(v10, *((_QWORD *)v9 + 13), L"std::exception: %hs", v11);
      }
      return 2147942414LL;
    }
    catch ( ... )
    {
      v26 = v30;
      v12 = v26;
      v13 = wil::details::RecognizeCaughtExceptionFromCallback(
              *((wil::details **)v12 + 12),
              *((unsigned __int16 **)v12 + 13));
      *((_DWORD *)v12 + 24) = v13;
      if ( v13 < 0 )
        return v36;
      return 0LL;
    }
  }
  return g_pfnResultFromCaughtException_WinRt(this, a2, a3, 0LL);
}
