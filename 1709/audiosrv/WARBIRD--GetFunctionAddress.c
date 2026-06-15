/*
 * XREFs of WARBIRD::GetFunctionAddress @ 0x1800050F0
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x1800020F0 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     WARBIRD::GetFunctionAddress @ 0x1800050F0 (WARBIRD--GetFunctionAddress.c)
 * Callees:
 *     WARBIRD::GetFunctionAddress @ 0x1800050F0 (WARBIRD--GetFunctionAddress.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall WARBIRD::GetFunctionAddress(unsigned __int8 *a1, __int16 a2, __int64 a3, const char **a4)
{
  unsigned __int64 v4; // rsi
  int v5; // edi
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  int v9; // r10d
  unsigned __int64 v10; // rbx
  int v11; // r9d
  unsigned __int8 *v12; // rax
  int v13; // r8d
  __int64 v14; // r11
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // cl
  int v17; // eax
  unsigned int FunctionAddress; // ebp
  unsigned __int16 v19; // dx
  unsigned __int64 v20; // rbx
  HANDLE CurrentProcess; // rax
  char *v23; // rbx
  __int64 v24; // rcx
  char *v25; // rcx
  char *v26; // r10
  int v27; // ecx
  unsigned __int16 *v28; // rdx
  unsigned __int16 v29; // r8
  int v30; // eax
  HMODULE Library; // rax
  HMODULE v32; // rdi
  FARPROC ProcAddress; // rsi
  HANDLE v34; // rax
  char v35[8]; // [rsp+30h] [rbp-78h] BYREF
  const char *v36; // [rsp+38h] [rbp-70h] BYREF
  HMODULE phModule; // [rsp+40h] [rbp-68h] BYREF
  __int128 v38; // [rsp+48h] [rbp-60h]
  unsigned __int64 v39; // [rsp+58h] [rbp-50h]
  unsigned __int64 v40; // [rsp+60h] [rbp-48h]
  const char **v41; // [rsp+68h] [rbp-40h]
  _QWORD v42[2]; // [rsp+70h] [rbp-38h] BYREF

  v4 = *(_QWORD *)a3;
  v42[0] = a3;
  v5 = 0;
  v41 = a4;
  v7 = a3;
  v36 = 0LL;
  v8 = v4 + *(unsigned int *)(a3 + 12);
  phModule = 0LL;
  v38 = 0uLL;
  v40 = v8;
  if ( !a1 )
  {
    v19 = a2 - *(_WORD *)(v8 + 16);
    goto LABEL_15;
  }
  v9 = 0;
  v10 = v4 + *(unsigned int *)(v8 + 32);
  v11 = *(_DWORD *)(v8 + 24) - 1;
  v39 = v4 + *(unsigned int *)(v8 + 36);
  if ( v11 < 0 )
    return (unsigned int)-1073741702;
  while ( 1 )
  {
    v12 = a1;
    v13 = (v11 + v9) >> 1;
    v14 = v13;
    v15 = v4 + *(unsigned int *)(v10 + 4LL * v13) - (_QWORD)a1;
    while ( 1 )
    {
      v16 = *v12;
      if ( *v12 != v12[v15] )
        break;
      ++v12;
      if ( !v16 )
      {
        v17 = 0;
        goto LABEL_7;
      }
    }
    v17 = v16 < v12[v15] ? -1 : 1;
LABEL_7:
    if ( v17 < 0 )
    {
      v11 = v13 - 1;
      goto LABEL_10;
    }
    if ( v17 <= 0 )
      break;
    v9 = v13 + 1;
LABEL_10:
    if ( v11 < v9 )
      return (unsigned int)-1073741702;
  }
  if ( v11 < v9 )
    return (unsigned int)-1073741702;
  v8 = v40;
  v7 = v42[0];
  v19 = *(_WORD *)(v39 + 2 * v14);
LABEL_15:
  v20 = v4 + *(unsigned int *)(v4 + *(unsigned int *)(v8 + 28) + 4LL * v19);
  v36 = (const char *)v20;
  if ( v20 < v4 || v20 >= v4 + *(unsigned int *)(v7 + 8) )
    return (unsigned int)-1073741702;
  if ( v20 <= v8 || v20 >= v8 + *(unsigned int *)(v7 + 16) )
  {
    FunctionAddress = 0;
LABEL_19:
    CurrentProcess = GetCurrentProcess();
    if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 7LL, v35, 4LL) )
    {
      if ( (v35[0] & 2) != 0 )
      {
        Library = LoadLibraryExW(L"kernelbase.dll", 0LL, 0x800u);
        v32 = Library;
        if ( Library )
        {
          ProcAddress = GetProcAddress(Library, "SetProcessValidCallTargets");
          if ( ProcAddress )
          {
            v42[1] = 4LL;
            v42[0] = v20 & 0xFFF;
            v34 = GetCurrentProcess();
            ((void (__fastcall *)(HANDLE, unsigned __int64, __int64, __int64, _QWORD *))ProcAddress)(
              v34,
              v20 & 0xFFFFFFFFFFFFF000uLL,
              4096LL,
              1LL,
              v42);
          }
          FreeLibrary(v32);
        }
      }
    }
    *v41 = v36;
    return FunctionAddress;
  }
  v23 = strchr((const char *)v20, 46);
  if ( !v23 )
    return (unsigned int)-1073741701;
  if ( !GetModuleHandleExW(0, L"ntdll.dll", &phModule) )
    return (unsigned int)-1073741702;
  if ( !phModule )
    return (unsigned int)-1073741702;
  if ( *(_WORD *)phModule != 23117 )
    return (unsigned int)-1073741702;
  v24 = *((int *)phModule + 15);
  if ( (unsigned int)v24 >= 0x10000000 )
    return (unsigned int)-1073741702;
  v25 = (char *)phModule + v24;
  if ( v25 < (char *)phModule || *(_DWORD *)v25 != 17744 || ((*((_WORD *)v25 + 12) - 267) & 0xFEFF) != 0 )
    return (unsigned int)-1073741702;
  *(_QWORD *)((char *)&v38 + 4) = *((_QWORD *)v25 + 17);
  LODWORD(v38) = *((_DWORD *)v25 + 20);
  v26 = v23 + 1;
  FunctionAddress = 0;
  v27 = 0;
  if ( v23[1] != 35 )
  {
LABEL_48:
    FunctionAddress = WARBIRD::GetFunctionAddress(v26, (unsigned __int16)v27, &phModule, &v36);
    if ( (FunctionAddress & 0x80000000) != 0 )
      return FunctionAddress;
    v20 = (unsigned __int64)v36;
    goto LABEL_19;
  }
  v28 = (unsigned __int16 *)(v23 + 2);
  v26 = 0LL;
  if ( v23 == (char *)-2LL )
    return FunctionAddress;
  for ( ; *v28 == 32; ++v28 )
    ;
  if ( *v28 == 45 )
  {
    v5 = 1;
    ++v28;
  }
  for ( ; *v28 == 32; ++v28 )
    ;
  v29 = *v28;
  if ( !*v28 )
  {
LABEL_46:
    if ( v5 )
      v27 = -v27;
    goto LABEL_48;
  }
  while ( (unsigned __int16)(v29 - 48) <= 9u )
  {
    ++v28;
    v30 = v29;
    v29 = *v28;
    v27 = v30 + 2 * (5 * v27 - 24);
    if ( !*v28 )
      goto LABEL_46;
  }
  return FunctionAddress;
}
