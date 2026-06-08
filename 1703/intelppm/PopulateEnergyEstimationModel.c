/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C003202C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0031254 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     RtlStringCchCatW @ 0x1C000D4B4 (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x1C000D51C (RtlStringCchPrintfW.c)
 *     RtlStringCopyWorkerW @ 0x1C000D59C (RtlStringCopyWorkerW.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001AD70 (GetRegistryDwordValueNoDefault.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, _DWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rax
  wchar_t *v5; // rcx
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // edx
  __int64 v9; // rcx
  wchar_t *v10; // rax
  int v11; // r10d
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // r9
  wchar_t v15; // cx
  size_t v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rdx
  wchar_t *v21; // rax
  int v22; // r10d
  __int64 v23; // rcx
  char *v24; // rdx
  wchar_t v25; // r9
  int result; // eax
  __int64 v27; // rdi
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  size_t cchToCopya; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v32; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszSrc[16]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v35[192]; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = a1;
  memset(a2, 0, 0xD8uLL);
  LODWORD(cchToCopy) = v3;
  if ( RtlStringCchPrintfW(
         pszDest,
         0xC0uLL,
         L"%s\\EfficiencyClass\\%d",
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU") >= 0
    && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)&v31) >= 0
    && (unsigned int)(v31 - 1) <= 0x3E7F )
  {
    *a2 = v31;
    v4 = 192LL;
    v5 = pszDest;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v4;
    }
    while ( v4 );
    v6 = 0;
    v7 = -1073741811;
    v8 = -1073741811;
    if ( v4 )
    {
      v8 = 0;
      v9 = 192 - v4;
    }
    else
    {
      v9 = 0LL;
    }
    if ( v8 >= 0 )
    {
      v10 = &pszDest[v9];
      v11 = 0;
      v12 = 192 - v9;
      if ( v9 == 192 )
        goto LABEL_18;
      v13 = 2147483646LL;
      v14 = (char *)((char *)L"\\EnergyEquation" - (char *)v10);
      while ( v13 )
      {
        v15 = *(wchar_t *)((char *)v10 + (_QWORD)v14);
        if ( !v15 )
          break;
        *v10 = v15;
        --v13;
        ++v10;
        if ( !--v12 )
          goto LABEL_18;
      }
      if ( !v12 )
      {
LABEL_18:
        --v10;
        v11 = -2147483643;
      }
      *v10 = 0;
      if ( v11 >= 0
        && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"EquationIndex", (__int64)&v32) >= 0
        && RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v32) >= 0
        && RtlStringCchCatW(pszDest, v16, pszSrc) >= 0
        && (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"NumberOfCounters", (__int64)&v30) >= 0
        && v30 - 1 <= 0xF )
      {
        a2[1] = v30;
        v18 = 192LL;
        v19 = pszDest;
        do
        {
          if ( !*v19 )
            break;
          ++v19;
          --v18;
        }
        while ( v18 );
        if ( v18 )
        {
          v7 = 0;
          v20 = 192 - v18;
        }
        else
        {
          v20 = 0LL;
        }
        if ( v7 >= 0 )
        {
          v21 = &pszDest[v20];
          v22 = 0;
          v23 = 192 - v20;
          if ( v20 == 192 )
            goto LABEL_39;
          v17 = 2147483646LL;
          v24 = (char *)((char *)L"\\EnergyCounter" - (char *)v21);
          while ( v17 )
          {
            v25 = *(wchar_t *)((char *)v21 + (_QWORD)v24);
            if ( !v25 )
              break;
            *v21 = v25;
            --v17;
            ++v21;
            if ( !--v23 )
              goto LABEL_39;
          }
          if ( !v23 )
          {
LABEL_39:
            --v21;
            v22 = -2147483643;
          }
          *v21 = 0;
          if ( v22 >= 0 )
          {
            result = RtlStringCopyWorkerW(v35, 0xC0uLL, (size_t *)v17, pszDest, cchToCopy);
            if ( result >= 0 )
            {
              v27 = (__int64)(a2 + 2);
              if ( !v30 )
                return result;
              while ( 1 )
              {
                LODWORD(cchToCopya) = v6;
                if ( RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v35, cchToCopya) < 0 )
                  break;
                if ( (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"CounterId", v27) < 0 )
                  break;
                if ( (int)GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"CounterType", v27 + 4) < 0 )
                  break;
                result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"Factor", v27 + 8);
                if ( result < 0 )
                  break;
                ++v6;
                v27 += 12LL;
                if ( v6 >= v30 )
                  return result;
              }
            }
          }
        }
      }
    }
  }
  result = (unsigned int)memset(a2, 0, 0xD8uLL);
  *a2 = 750;
  return result;
}
