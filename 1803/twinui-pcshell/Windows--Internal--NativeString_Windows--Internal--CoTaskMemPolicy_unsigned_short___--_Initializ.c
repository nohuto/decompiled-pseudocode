/*
 * XREFs of Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___ @ 0x18001CE10
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D1B4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18021E208 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D094 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _vsnwprintf @ 0x180099240 (_vsnwprintf.c)
 */

__int64 Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___(
        __int64 a1,
        const wchar_t *a2,
        va_list a3,
        ...)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  signed int v8; // ebx
  unsigned __int64 v9; // r8
  _WORD *v10; // rax
  __int64 v11; // rsi
  wchar_t *v12; // r14
  size_t v13; // rsi
  int v14; // eax
  bool v15; // zf
  bool v16; // al
  unsigned __int64 v18; // rdx
  LPVOID v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  v6 = 32LL;
  do
  {
    while ( 1 )
    {
      v7 = -1LL;
      if ( v6 + 1 >= v6 )
        v7 = v6 + 1;
      v8 = v6 + 1 < v6 ? 0x80070216 : 0;
      if ( v6 + 1 >= v6 )
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( v9 == -1LL )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
          if ( *(_QWORD *)a1 )
            v9 = *(_QWORD *)(a1 + 8) + 1LL;
          else
            v9 = 0LL;
          *(_QWORD *)(a1 + 16) = v9;
        }
        if ( v9 )
        {
          if ( v7 <= v9 )
            goto LABEL_10;
          if ( !is_mul_ok(v9, 2uLL) )
          {
LABEL_47:
            v8 = -2147024362;
            goto LABEL_48;
          }
          v18 = v9 + 2048;
          v8 = 0;
          if ( v9 <= 0x800 )
            v18 = 2 * v9;
          if ( v7 <= v18 )
            v7 = v18;
          v19 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v7);
          if ( v19 )
          {
            *(_QWORD *)(a1 + 16) = v7;
            *(_QWORD *)a1 = v19;
            goto LABEL_10;
          }
        }
        else
        {
          if ( !is_mul_ok(v7, 2uLL) )
            goto LABEL_47;
          v8 = 0;
          v10 = CoTaskMemAlloc(2 * v7);
          if ( v10 )
          {
            *(_QWORD *)(a1 + 16) = v7;
            *(_QWORD *)a1 = v10;
            *v10 = 0;
            goto LABEL_10;
          }
        }
        v8 = -2147024882;
      }
LABEL_10:
      if ( v8 < 0 )
        goto LABEL_48;
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(wchar_t **)a1;
      _o__set_errno(0LL);
      v8 = 0;
      if ( (unsigned __int64)(v11 - 1) > 0x7FFFFFFE )
        v8 = -2147024809;
      if ( v8 < 0 )
      {
        if ( v11 )
          *v12 = 0;
      }
      else
      {
        v13 = v11 - 1;
        v8 = 0;
        v14 = vsnwprintf(v12, v13, a2, a3);
        if ( v14 < 0 || v14 > v13 )
        {
          v12[v13] = 0;
          v8 = -2147024774;
        }
        else if ( v14 == v13 )
        {
          v12[v13] = 0;
        }
      }
      v15 = v8 == -2147024774;
      if ( v8 == -2147024774 )
      {
        _o__get_errno((__int64 *)va);
        v8 = -2147024809;
        if ( (_DWORD)v21 != 22 )
          v8 = -2147024774;
        v15 = v8 == -2147024774;
      }
      v16 = v15;
      if ( !v15 )
        break;
      v20 = *(_QWORD *)(a1 + 16);
      v6 = -1LL;
      if ( v20 + 32 >= v20 )
        v6 = v20 + 32;
      v8 = v20 + 32 < v20 ? 0x80070216 : 0;
      if ( v20 + 32 < v20 )
      {
        v16 = 0;
        break;
      }
    }
  }
  while ( v16 );
  if ( v8 >= 0 )
  {
    *(_QWORD *)(a1 + 8) = -1LL;
    return (unsigned int)v8;
  }
LABEL_48:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  return (unsigned int)v8;
}
