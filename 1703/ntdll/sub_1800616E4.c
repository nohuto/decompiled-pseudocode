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

__int64 __fastcall sub_1800616E4(unsigned __int16 *a1)
{
  struct _PEB *v1; // r14
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  _WORD *i; // rcx
  const wchar_t *v7; // r15
  unsigned int v8; // esi
  size_t v9; // r12
  const wchar_t **v10; // r14
  const wchar_t *v11; // r13
  __int64 v12; // rax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR PackageSize; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[6]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR PackageFullName[128]; // [rsp+70h] [rbp-90h] BYREF

  v1 = NtCurrentPeb();
  v16[0] = L"svchost.exe";
  v3 = 0;
  v16[1] = L"runtimebroker.exe";
  v16[2] = L"csrss.exe";
  v16[3] = L"smss.exe";
  v16[4] = L"services.exe";
  v16[5] = L"lsass.exe";
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    goto LABEL_18;
  if ( RtlGetNtProductType(&NtProductType) && NtProductType != NtProductWinNt )
    return v3;
  if ( (v1->BitField & 0x10) != 0 )
  {
LABEL_18:
    v3 = 1;
    dword_180158684 &= 0xFFFFFFFC;
    return v3;
  }
  if ( a1 )
  {
    v4 = 0;
    v5 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v5 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v5; --i )
    {
      if ( *i == 92 )
      {
        if ( v4 )
        {
          v7 = i + 1;
          if ( i != (_WORD *)-2LL )
          {
            v8 = 0;
            v9 = v4;
            v10 = (const wchar_t **)v16;
            while ( 1 )
            {
              v11 = *v10;
              if ( !wcsnicmp(v7, *v10, v9) )
              {
                v12 = -1LL;
                do
                  ++v12;
                while ( v11[v12] );
                if ( v9 == v12 )
                  goto LABEL_18;
              }
              ++v8;
              ++v10;
              if ( v8 >= 6 )
                goto LABEL_8;
            }
          }
        }
        break;
      }
      ++v4;
    }
LABEL_8:
    PackageSize = 256LL;
    if ( RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, 0LL, 0LL, 0LL) >= 0
      && !wcsnicmp(PackageFullName, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
    {
      goto LABEL_18;
    }
  }
  return v3;
}
