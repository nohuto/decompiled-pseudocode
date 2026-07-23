/*
 * XREFs of sub_1800559B0 @ 0x1800559B0
 * Callers:
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 *     sub_180055BBC @ 0x180055BBC (sub_180055BBC.c)
 *     sub_180055C44 @ 0x180055C44 (sub_180055C44.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 *     sub_18008965C @ 0x18008965C (sub_18008965C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

char __fastcall sub_1800559B0(PCWSTR SourceString)
{
  char v2; // si
  void (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // rdi
  __int64 *v5; // rbx
  int v7; // ecx
  _QWORD *v8; // rcx
  NTSTATUS v9; // ebx
  char v10; // al
  char v11; // al
  __int64 *i; // rax
  __int64 v13; // [rsp+30h] [rbp-89h]
  PVOID BaseAddress; // [rsp+40h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  PWSTR Path[15]; // [rsp+60h] [rbp-59h] BYREF
  char v17; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  sub_180042054(0LL, (const WCHAR *)0x4001, (const WCHAR **)Path);
  byte_18015CFBC = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016F210, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v7 = sub_18003B7AC((__int64)&DestinationString, (__int64)Path, 0, 0, &BaseAddress);
    if ( v7 < 0 )
    {
      v10 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(v13) = v7;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2186,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v13);
        v10 = dword_180156A70;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *((_DWORD *)BaseAddress + 26) |= 0x100u;
      sub_180059158(BaseAddress);
      v8 = BaseAddress;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) == 7 )
      {
        v9 = sub_180054DE8(*((_QWORD *)BaseAddress + 19));
        if ( v9 < 0 )
        {
          v11 = dword_180156A70;
          if ( (dword_180156A70 & 3) != 0 )
          {
            LODWORD(v13) = v9;
            sub_1800CA554(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2212,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v13);
            v11 = dword_180156A70;
          }
          if ( (v11 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          sub_18008965C((unsigned int)v9);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v9);
          break;
        }
        v8 = BaseAddress;
      }
      v3(v8[6]);
      sub_18001F5FC((char *)BaseAddress);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v17 )
    RtlReleasePath(Path[0]);
  ((void (*)(void))(__ROR8__(qword_18016F248, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016F260, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection(&stru_1801564C0);
  if ( byte_18015CFB4 )
  {
    for ( i = (__int64 *)qword_18015C370; i != &qword_18015C370; i = (__int64 *)*i )
    {
      BaseAddress = i;
      *((_BYTE *)i + 105) &= ~8u;
    }
  }
  v5 = (__int64 *)qword_18015C370;
  if ( dword_18015CFB8 >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_10:
    if ( v5 == &qword_18015C370 )
      break;
    BaseAddress = v5;
    sub_180055BBC(v5[19], v4);
  }
  byte_18015CFBC = 0;
  byte_18015CFB4 = 1;
  RtlLeaveCriticalSection(&stru_1801564C0);
  sub_180055C44();
  return v2;
}
