/*
 * XREFs of ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x180033DC4
 * Callers:
 *     ?Describe@PropertyNode@Input@@UEBAKPEAGKK@Z @ 0x180031300 (-Describe@PropertyNode@Input@@UEBAKPEAGKK@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18003301C (-StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z @ 0x180033B3C (-Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800340E8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180034164 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Input::PropertyInfo::Describe(Input::PropertyInfo *this, unsigned __int16 *a2, __int64 a3, char a4)
{
  Input::PropertyInfo *v5; // r15
  unsigned __int16 *v6; // rdi
  unsigned __int64 v7; // rsi
  char v8; // r13
  void **v9; // r12
  _DWORD *v10; // r15
  __int64 v11; // rcx
  Input::PropertyInfo *v12; // rbx
  char *p_Src; // r8
  unsigned __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h]
  Input::PropertyInfo *v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h]
  char *Src; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-88h]
  unsigned __int64 v22; // [rsp+88h] [rbp-80h]
  wchar_t Buffer[128]; // [rsp+98h] [rbp-70h] BYREF

  v19 = -2LL;
  v5 = this;
  v18 = this;
  *a2 = 0;
  v6 = a2;
  v16 = a2;
  v7 = 128LL;
  v15 = 128LL;
  v8 = a4 & 7;
  if ( (a4 & 1) != 0 && (int)StringCchPrintfW(Buffer, 128LL, L"%s") >= 0 )
  {
    StringCchCatNExW(a2, 128LL, (char *)Buffer, 0x80uLL, &v16, &v15);
    v6 = v16;
    v7 = v15;
  }
  if ( (v8 & 4) != 0 )
  {
    v21 = 0LL;
    v22 = 7LL;
    LOWORD(Src) = 0;
    if ( *((_DWORD *)v5 + 14) )
    {
      v9 = (void **)off_1800D97F0;
      v10 = &unk_1800DF520;
      v11 = 4LL;
      v17 = 4LL;
      v12 = v18;
      do
      {
        if ( (*((_DWORD *)v12 + 14) & *v10) != 0 )
        {
          if ( v21 )
            std::wstring::append(&Src, L" | ");
          std::wstring::append(&Src, *v9);
          v11 = v17;
        }
        ++v10;
        ++v9;
        v17 = --v11;
      }
      while ( v11 );
      v5 = v18;
    }
    else
    {
      std::wstring::assign(&Src, L"PROPPOLICY_PRIVATE");
    }
    if ( a2 != v6 )
    {
      StringCchCatNExW(v6, v7, (char *)L", ", 2uLL, &v16, &v15);
      v6 = v16;
      v7 = v15;
    }
    p_Src = (char *)&Src;
    if ( v22 >= 8 )
      p_Src = Src;
    StringCchCatNExW(v6, v7, p_Src, v21, &v16, &v15);
    std::wstring::_Tidy_deallocate((unsigned __int64 *)&Src);
    v6 = v16;
    v7 = v15;
  }
  if ( (v8 & 2) != 0 && (unsigned int)Input::PropertyTypeInfo::Describe(*((Input::PropertyTypeInfo **)v5 + 6), Buffer) )
  {
    if ( a2 != v6 )
    {
      StringCchCatNExW(v6, v7, (char *)L", ", 2uLL, &v16, &v15);
      v6 = v16;
      v7 = v15;
    }
    StringCchCatNExW(v6, v7, (char *)Buffer, 0x80uLL, &v16, &v15);
    LODWORD(v7) = v15;
  }
  return (unsigned int)(128 - v7);
}
