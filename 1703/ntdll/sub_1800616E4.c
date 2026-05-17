/*
 * XREFs of sub_1800616E4 @ 0x1800616E4
 * Callers:
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18000FC40 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 *     RtlQueryPackageIdentity @ 0x180061980 (RtlQueryPackageIdentity.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _wcsnicmp @ 0x1800977C0 (_wcsnicmp.c)
 */

__int64 __fastcall sub_1800616E4(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  _WORD *i; // rcx
  const wchar_t *v13; // r15
  unsigned int v14; // esi
  size_t v15; // r12
  const wchar_t **v16; // r14
  const wchar_t *v17; // r13
  __int64 v18; // rax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v22[6]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String1[128]; // [rsp+70h] [rbp-90h] BYREF

  v4 = NtCurrentPeb();
  v22[0] = L"svchost.exe";
  v6 = 0;
  v22[1] = L"runtimebroker.exe";
  v22[2] = L"csrss.exe";
  v22[3] = L"smss.exe";
  v22[4] = L"services.exe";
  v22[5] = L"lsass.exe";
  if ( (RtlGetSuiteMask((__int64)a1, a2, a3, a4) & 0x10000) != 0 )
    goto LABEL_18;
  if ( RtlGetNtProductType(&v20, v7, v8, v9) && v20 != 1 )
    return v6;
  if ( (v4->BitField & 0x10) != 0 )
  {
LABEL_18:
    v6 = 1;
    dword_180158684 &= 0xFFFFFFFC;
    return v6;
  }
  if ( a1 )
  {
    v10 = 0;
    v11 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v11 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v11; --i )
    {
      if ( *i == 92 )
      {
        if ( v10 )
        {
          v13 = i + 1;
          if ( i != (_WORD *)-2LL )
          {
            v14 = 0;
            v15 = v10;
            v16 = (const wchar_t **)v22;
            while ( 1 )
            {
              v17 = *v16;
              if ( !wcsnicmp(v13, *v16, v15) )
              {
                v18 = -1LL;
                do
                  ++v18;
                while ( v17[v18] );
                if ( v15 == v18 )
                  goto LABEL_18;
              }
              ++v14;
              ++v16;
              if ( v14 >= 6 )
                goto LABEL_8;
            }
          }
        }
        break;
      }
      ++v10;
    }
LABEL_8:
    v21 = 256LL;
    if ( (int)RtlQueryPackageIdentity(-4, (unsigned int)String1, (unsigned int)&v21, 0, 0LL, 0LL) >= 0
      && !wcsnicmp(String1, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
    {
      goto LABEL_18;
    }
  }
  return v6;
}
