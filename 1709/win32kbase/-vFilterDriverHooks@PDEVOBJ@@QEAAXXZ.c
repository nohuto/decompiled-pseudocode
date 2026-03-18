/*
 * XREFs of ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C003D1EC
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C003DE40 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 * Callees:
 *     wcsrchr @ 0x1C00A7470 (wcsrchr.c)
 *     _wcsicmp @ 0x1C00A74A4 (_wcsicmp.c)
 */

void __fastcall PDEVOBJ::vFilterDriverHooks(PDEVOBJ *this)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  wchar_t *v4; // rax
  const wchar_t *v5; // rdi
  __int64 v6; // rdx
  int v7; // r8d
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 1808LL) + 16LL);
  if ( v3 )
  {
    v4 = wcsrchr(*(const wchar_t **)(v3 + 8), 0x5Cu);
    if ( v4 )
      v5 = v4 + 1;
    else
      v5 = *(const wchar_t **)(v3 + 8);
    if ( wcsicmp(v5, L"stbv128.dll") )
    {
      if ( wcsicmp(v5, L"s3disp.dll") )
      {
        if ( (!wcsicmp(v5, L"rrctrl1.dll")
           || !wcsicmp(v5, L"rrctrl2.dll")
           || !wcsicmp(v5, L"rrctrl3.dll")
           || !wcsicmp(v5, L"rrctrl4.dll")
           || !wcsicmp(v5, L"rrctrl5.dll")
           || !wcsicmp(v5, L"rrctrl6.dll"))
          && *(_DWORD *)(*(_QWORD *)this + 2628LL) < 2u )
        {
          *(_DWORD *)(*(_QWORD *)this + 2628LL) = 2;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 2936LL) = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 2784LL) = 0LL;
    }
    v6 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 1) != 0 )
    {
      v7 = *(_DWORD *)(v6 + 2624);
      v8 = *(_DWORD *)(v6 + 2628);
      if ( (v7 & 1) != 0 )
      {
        v8 = 5;
        *(_DWORD *)(v6 + 2628) = 5;
      }
      if ( v8 < 5 )
      {
        if ( v8 )
        {
          *(_QWORD *)(*(_QWORD *)this + 2936LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 2784LL) = 0LL;
        }
        if ( v8 >= 2 )
          *(_DWORD *)(v2 + 112) &= 0xFFFC5E39;
        v9 = 2896LL;
        if ( v8 >= 4 )
        {
          *(_DWORD *)(v2 + 112) &= 0xFFFC5E39;
          v10 = 2896LL;
          *(_DWORD *)(*(_QWORD *)this + 1840LL) &= 0x8090420u;
          *(_DWORD *)(*(_QWORD *)this + 2144LL) &= 0xC0u;
          *(_QWORD *)(*(_QWORD *)this + 3024LL) = 0LL;
          do
          {
            *(_QWORD *)(v10 + *(_QWORD *)this) = 0LL;
            v10 += 8LL;
          }
          while ( v10 < 2912 );
          *(_QWORD *)(*(_QWORD *)this + 2760LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 3136LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 3144LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 3152LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 2616LL) = *(_QWORD *)(*(_QWORD *)this + 2848LL);
          *(_QWORD *)(*(_QWORD *)this + 2848LL) = FilteredBitBlt;
        }
        if ( (v7 & 8) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)this + 3136LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 3144LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 3152LL) = 0LL;
        }
        if ( (v7 & 0x10) != 0 )
        {
          do
          {
            *(_QWORD *)(v9 + *(_QWORD *)this) = 0LL;
            v9 += 8LL;
          }
          while ( v9 < 2912 );
        }
      }
    }
  }
}
