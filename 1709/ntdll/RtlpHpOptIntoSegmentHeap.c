/*
 * XREFs of RtlpHpOptIntoSegmentHeap @ 0x180102E54
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800EEF80 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x180007D50 (RtlGetNtProductType.c)
 *     RtlQueryPackageIdentity @ 0x180071190 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1800926C0 (_wcsnicmp.c)
 */

__int64 __fastcall RtlpHpOptIntoSegmentHeap(unsigned __int16 *a1, __int64 a2)
{
  struct _PEB *v2; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  _WORD *i; // rcx
  const wchar_t *v9; // r14
  unsigned int v10; // edi
  size_t v11; // r15
  const wchar_t **v12; // rsi
  const wchar_t *v13; // r12
  __int64 v14; // rax
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[6]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String1[128]; // [rsp+70h] [rbp-90h] BYREF

  v2 = NtCurrentPeb();
  v18[0] = L"svchost.exe";
  v4 = 0;
  v18[1] = L"runtimebroker.exe";
  v18[2] = L"csrss.exe";
  v18[3] = L"smss.exe";
  v18[4] = L"services.exe";
  v18[5] = L"lsass.exe";
  if ( (RtlGetSuiteMask((__int64)a1, a2) & 0x10000) != 0 )
    goto LABEL_21;
  if ( RtlGetNtProductType(&v16, v5) && v16 != 1 )
    return v4;
  if ( (v2->BitField & 0x10) != 0 )
  {
LABEL_21:
    RtlpHpAppCompatFlags &= 0xFFFFFFFC;
    return 1;
  }
  if ( a1 )
  {
    v6 = 0;
    v7 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v7 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i > v7; --i )
    {
      if ( *i == 92 )
      {
        if ( v6 )
        {
          v9 = i + 1;
          if ( i != (_WORD *)-2LL )
          {
            v10 = 0;
            v11 = v6;
            v12 = (const wchar_t **)v18;
            while ( 1 )
            {
              v13 = *v12;
              if ( !wcsnicmp(v9, *v12, v11) )
              {
                v14 = -1LL;
                do
                  ++v14;
                while ( v13[v14] );
                if ( v11 == v14 )
                  goto LABEL_21;
              }
              ++v10;
              ++v12;
              if ( v10 >= 6 )
                goto LABEL_19;
            }
          }
        }
        break;
      }
      ++v6;
    }
LABEL_19:
    v17 = 256LL;
    if ( (int)RtlQueryPackageIdentity(-4, (int)String1, (int)&v17, 0, 0LL, 0LL) < 0
      || wcsnicmp(String1, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
    {
      return v4;
    }
    goto LABEL_21;
  }
  return v4;
}
