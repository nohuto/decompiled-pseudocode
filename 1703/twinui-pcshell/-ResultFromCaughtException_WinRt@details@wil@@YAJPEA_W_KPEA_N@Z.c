/*
 * XREFs of ?ResultFromCaughtException_WinRt@details@wil@@YAJPEA_W_KPEA_N@Z @ 0x18011D570
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ResultFromCaughtException_WinRt(
        wil::details *this,
        wchar_t *a2,
        __int64 a3,
        bool *a4)
{
  wchar_t **v4; // rbp
  wil *v5; // rcx
  __int64 v6; // rbx
  const struct wil::FailureInfo *v7; // r9
  _BYTE *v8; // rbp
  wchar_t *v9; // rdx
  __int64 v10; // rbx
  _BYTE *v11; // rbp
  wchar_t *v12; // rbx
  __int64 v13; // rax
  _BYTE *v14; // rbp
  int v15; // eax
  wchar_t **v16; // rbp
  wil *v17; // rcx
  __int64 v18; // rbx
  const struct wil::FailureInfo *v19; // r9
  _BYTE *v20; // rbp
  wchar_t *v21; // rdx
  __int64 v22; // rbx
  _BYTE *v23; // rbp
  wchar_t *v24; // rbx
  __int64 v25; // rax
  _BYTE *v26; // rbp
  wchar_t *v27; // rbx
  __int64 v28; // rax
  _BYTE *v29; // rdx
  _BYTE *v30; // rdx
  _BYTE *v31; // rdx
  _BYTE *v32; // rdx
  _BYTE *v33; // rdx
  _BYTE *v34; // rdx
  _BYTE *v35; // rdx
  _BYTE *v36; // rdx
  _BYTE v37[32]; // [rsp+0h] [rbp-68h] BYREF
  const wil::ResultException *v38; // [rsp+20h] [rbp-48h] BYREF
  __int64 v39; // [rsp+28h] [rbp-40h] BYREF
  const wil::ResultException *v40; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v41[2]; // [rsp+38h] [rbp-30h] BYREF
  const std::bad_alloc *v42; // [rsp+48h] [rbp-20h] BYREF
  const std::bad_alloc *v43; // [rsp+50h] [rbp-18h] BYREF
  std::exception *v44; // [rsp+58h] [rbp-10h] BYREF

  v41[1] = -2LL;
  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v38 )
    {
      v29 = v37;
      v4 = (wchar_t **)v29;
      v5 = (wil *)*((_QWORD *)v29 + 14);
      v6 = *((_QWORD *)v29 + 4);
      if ( v5 )
        wil::GetFailureLogString(v5, v4[15], v6 + 24, v7);
      *((_DWORD *)v4 + 34) = *(_DWORD *)(v6 + 28);
      return;
    }
    catch ( Platform::Exception *v39 )
    {
      v30 = v37;
      v8 = v30;
      **((_BYTE **)v30 + 16) = 1;
      v9 = (wchar_t *)*((_QWORD *)v30 + 14);
      v10 = *((_QWORD *)v8 + 5);
      if ( v9 )
        wil::details::MaybeGetExceptionString(v10, v9, *((_QWORD *)v8 + 15));
      *((_DWORD *)v8 + 34) = *(_DWORD *)(v10 + 64);
      return;
    }
    catch ( const std::bad_alloc *v42 )
    {
      v31 = v37;
      v11 = v31;
      v12 = (wchar_t *)*((_QWORD *)v31 + 14);
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v11 + 9) + 8LL))(*((_QWORD *)v11 + 9));
        StringCchPrintfW(v12, *((_QWORD *)v11 + 15), L"std::exception: %hs", v13);
      }
      return;
    }
    catch ( ... )
    {
      v32 = v37;
      v14 = v32;
      v15 = wil::details::RecognizeCaughtExceptionFromCallback(
              *((wil::details **)v14 + 14),
              *((unsigned __int16 **)v14 + 15));
      *((_DWORD *)v14 + 34) = v15;
      if ( v15 < 0 )
        return;
      return;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v40 )
  {
    v33 = v37;
    v16 = (wchar_t **)v33;
    v17 = (wil *)*((_QWORD *)v33 + 14);
    v18 = *((_QWORD *)v33 + 6);
    if ( v17 )
      wil::GetFailureLogString(v17, v16[15], v18 + 24, v19);
    *((_DWORD *)v16 + 34) = *(_DWORD *)(v18 + 28);
    return;
  }
  catch ( Platform::Exception *v41 )
  {
    v34 = v37;
    v20 = v34;
    **((_BYTE **)v34 + 16) = 1;
    v21 = (wchar_t *)*((_QWORD *)v34 + 14);
    v22 = *((_QWORD *)v20 + 7);
    if ( v21 )
      wil::details::MaybeGetExceptionString(v22, v21, *((_QWORD *)v20 + 15));
    *((_DWORD *)v20 + 34) = *(_DWORD *)(v22 + 64);
    return;
  }
  catch ( const std::bad_alloc *v43 )
  {
    v35 = v37;
    v23 = v35;
    v24 = (wchar_t *)*((_QWORD *)v35 + 14);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v23 + 10) + 8LL))(*((_QWORD *)v23 + 10));
      StringCchPrintfW(v24, *((_QWORD *)v23 + 15), L"std::exception: %hs", v25);
    }
    return;
  }
  catch ( std::exception *v44 )
  {
    v36 = v37;
    v26 = v36;
    v27 = (wchar_t *)*((_QWORD *)v36 + 14);
    if ( v27 )
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v26 + 11) + 8LL))(*((_QWORD *)v26 + 11));
      StringCchPrintfW(v27, *((_QWORD *)v26 + 15), L"std::exception: %hs", v28);
    }
    return;
  }
  catch ( ... )
  {
    return;
  }
}
