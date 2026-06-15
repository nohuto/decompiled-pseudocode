/*
 * XREFs of WARBIRD::GetFunctionAddress @ 0x1800456C0
 * Callers:
 *     WARBIRD::GetFunctionAddress @ 0x1800456C0 (WARBIRD--GetFunctionAddress.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     WARBIRD::GetFunctionAddress @ 0x1800456C0 (WARBIRD--GetFunctionAddress.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall WARBIRD::GetFunctionAddress(unsigned __int8 *a1, __int16 a2, __int64 a3, const char **a4)
{
  unsigned __int64 v4; // r11
  int v5; // edi
  unsigned __int64 v6; // rbp
  int v8; // r10d
  unsigned __int64 v9; // rbx
  int v10; // r9d
  int v11; // r8d
  unsigned __int8 *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int8 v14; // cl
  int v15; // eax
  unsigned int FunctionAddress; // ebp
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  unsigned __int64 v19; // rbx
  HANDLE CurrentProcess; // rax
  char *v22; // rbx
  __int64 v23; // rcx
  char *v24; // rcx
  char *v25; // r10
  int v26; // ecx
  unsigned __int16 *v27; // rdx
  unsigned __int16 v28; // r8
  int v29; // eax
  HMODULE Library; // rax
  HMODULE v31; // rdi
  FARPROC ProcAddress; // rsi
  HANDLE v33; // rax
  char v34[8]; // [rsp+30h] [rbp-68h] BYREF
  const char *v35; // [rsp+38h] [rbp-60h] BYREF
  HMODULE phModule; // [rsp+40h] [rbp-58h] BYREF
  __int128 v37; // [rsp+48h] [rbp-50h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]
  const char **v39; // [rsp+60h] [rbp-38h]
  _QWORD v40[2]; // [rsp+68h] [rbp-30h] BYREF

  v4 = *(_QWORD *)a3;
  v5 = 0;
  v6 = *(_QWORD *)a3 + *(unsigned int *)(a3 + 12);
  v39 = a4;
  v40[0] = a3;
  v35 = 0LL;
  phModule = 0LL;
  v37 = 0uLL;
  if ( !a1 )
  {
    v18 = a2 - *(_WORD *)(v6 + 16);
    goto LABEL_15;
  }
  v8 = 0;
  v9 = v4 + *(unsigned int *)(v6 + 32);
  v10 = *(_DWORD *)(v6 + 24) - 1;
  v38 = v4 + *(unsigned int *)(v6 + 36);
  if ( v10 < 0 )
    return (unsigned int)-1073741702;
  while ( 1 )
  {
    v11 = (v10 + v8) >> 1;
    v12 = a1;
    v13 = v4 + *(unsigned int *)(v9 + 4LL * v11) - (_QWORD)a1;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 != v12[v13] )
        break;
      ++v12;
      if ( !v14 )
      {
        v15 = 0;
        goto LABEL_7;
      }
    }
    v15 = v14 < v12[v13] ? -1 : 1;
LABEL_7:
    if ( v15 < 0 )
    {
      v10 = v11 - 1;
      goto LABEL_10;
    }
    if ( v15 <= 0 )
      break;
    v8 = v11 + 1;
LABEL_10:
    if ( v10 < v8 )
      return (unsigned int)-1073741702;
  }
  if ( v10 < v8 )
    return (unsigned int)-1073741702;
  v17 = v11;
  a3 = v40[0];
  v18 = *(_WORD *)(v38 + 2 * v17);
LABEL_15:
  v19 = v4 + *(unsigned int *)(v4 + *(unsigned int *)(v6 + 28) + 4LL * v18);
  v35 = (const char *)v19;
  if ( v19 < v4 || v19 >= v4 + *(unsigned int *)(a3 + 8) )
    return (unsigned int)-1073741702;
  if ( v19 <= v6 || v19 >= v6 + *(unsigned int *)(a3 + 16) )
  {
    FunctionAddress = 0;
LABEL_19:
    CurrentProcess = GetCurrentProcess();
    if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 7LL, v34) )
    {
      if ( (v34[0] & 2) != 0 )
      {
        Library = LoadLibraryExW(L"kernelbase.dll", 0LL, 0x800u);
        v31 = Library;
        if ( Library )
        {
          ProcAddress = GetProcAddress(Library, "SetProcessValidCallTargets");
          if ( ProcAddress )
          {
            v40[1] = 4LL;
            v40[0] = v19 & 0xFFF;
            v33 = GetCurrentProcess();
            ((void (__fastcall *)(HANDLE, unsigned __int64, __int64, __int64, _QWORD *))ProcAddress)(
              v33,
              v19 & 0xFFFFFFFFFFFFF000uLL,
              4096LL,
              1LL,
              v40);
          }
          FreeLibrary(v31);
        }
      }
    }
    *v39 = v35;
    return FunctionAddress;
  }
  v22 = strchr((const char *)v19, 46);
  if ( !v22 )
    return (unsigned int)-1073741701;
  if ( !GetModuleHandleExW(0, L"ntdll.dll", &phModule) )
    return (unsigned int)-1073741702;
  if ( !phModule )
    return (unsigned int)-1073741702;
  if ( *(_WORD *)phModule != 23117 )
    return (unsigned int)-1073741702;
  v23 = *((int *)phModule + 15);
  if ( (unsigned int)v23 >= 0x10000000 )
    return (unsigned int)-1073741702;
  v24 = (char *)phModule + v23;
  if ( v24 < (char *)phModule || *(_DWORD *)v24 != 17744 || ((*((_WORD *)v24 + 12) - 267) & 0xFEFF) != 0 )
    return (unsigned int)-1073741702;
  *(_QWORD *)((char *)&v37 + 4) = *((_QWORD *)v24 + 17);
  LODWORD(v37) = *((_DWORD *)v24 + 20);
  v25 = v22 + 1;
  FunctionAddress = 0;
  v26 = 0;
  if ( v22[1] != 35 )
  {
LABEL_48:
    FunctionAddress = WARBIRD::GetFunctionAddress(v25, (unsigned __int16)v26, &phModule, &v35);
    if ( (FunctionAddress & 0x80000000) != 0 )
      return FunctionAddress;
    v19 = (unsigned __int64)v35;
    goto LABEL_19;
  }
  v27 = (unsigned __int16 *)(v22 + 2);
  v25 = 0LL;
  if ( v22 == (char *)-2LL )
    return FunctionAddress;
  for ( ; *v27 == 32; ++v27 )
    ;
  if ( *v27 == 45 )
  {
    v5 = 1;
    ++v27;
  }
  for ( ; *v27 == 32; ++v27 )
    ;
  v28 = *v27;
  if ( !*v27 )
  {
LABEL_46:
    if ( v5 )
      v26 = -v26;
    goto LABEL_48;
  }
  while ( (unsigned __int16)(v28 - 48) <= 9u )
  {
    ++v27;
    v29 = v28;
    v28 = *v27;
    v26 = v29 + 2 * (5 * v26 - 24);
    if ( !*v27 )
      goto LABEL_46;
  }
  return FunctionAddress;
}
