/*
 * XREFs of sub_180104A3C @ 0x180104A3C
 * Callers:
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18005A930 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18005A990 (RtlGetSuiteMask.c)
 *     RtlQueryPackageIdentity @ 0x18006D330 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x18008CC10 (_wcsnicmp.c)
 */

__int64 __fastcall sub_180104A3C(unsigned __int16 *a1)
{
  struct _PEB *v1; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  _WORD *i; // rcx
  const wchar_t *v7; // r14
  unsigned int v8; // edi
  size_t v9; // r15
  const wchar_t **v10; // rsi
  const wchar_t *v11; // r12
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
    goto LABEL_21;
  if ( RtlGetNtProductType(&NtProductType) && NtProductType != NtProductWinNt )
    return v3;
  if ( (v1->BitField & 0x10) != 0 )
  {
LABEL_21:
    dword_180159760 = 0;
    return 1;
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
                  goto LABEL_21;
              }
              ++v8;
              ++v10;
              if ( v8 >= 6 )
                goto LABEL_19;
            }
          }
        }
        break;
      }
      ++v4;
    }
LABEL_19:
    PackageSize = 256LL;
    if ( RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, 0LL, 0LL, 0LL) < 0
      || wcsnicmp(PackageFullName, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
    {
      return v3;
    }
    goto LABEL_21;
  }
  return v3;
}
