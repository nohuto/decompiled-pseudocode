/*
 * XREFs of sub_18006F0A0 @ 0x18006F0A0
 * Callers:
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     sub_1800048B8 @ 0x1800048B8 (sub_1800048B8.c)
 *     sub_18001A084 @ 0x18001A084 (sub_18001A084.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006F2AC @ 0x18006F2AC (sub_18006F2AC.c)
 *     sub_18006F334 @ 0x18006F334 (sub_18006F334.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_18006FD08 @ 0x18006FD08 (sub_18006FD08.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

char __fastcall sub_18006F0A0(PCWSTR SourceString)
{
  char v2; // si
  void (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // rdi
  __int64 *v5; // rbx
  int v7; // ecx
  _QWORD *v8; // rcx
  int v9; // ebx
  char v10; // al
  char v11; // al
  __int64 *i; // rax
  __int64 v13; // [rsp+30h] [rbp-89h]
  PVOID BaseAddress; // [rsp+40h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  PWSTR Path[15]; // [rsp+60h] [rbp-59h] BYREF
  char v17; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  sub_18003BE90(0LL, 16385LL, (__int64 *)Path);
  byte_18015BF56 = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016B200, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v7 = sub_18003C350((__int64)&DestinationString, (int)Path, 0, 0, &BaseAddress);
    if ( v7 < 0 )
    {
      v10 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        LODWORD(v13) = v7;
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2211,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v13);
        v10 = dword_180155A10;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *((_DWORD *)BaseAddress + 26) |= 0x100u;
      sub_18001A084((__int64)BaseAddress);
      v8 = BaseAddress;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) == 7 )
      {
        v9 = sub_18006FD08(*((_QWORD *)BaseAddress + 19));
        if ( v9 < 0 )
        {
          v11 = dword_180155A10;
          if ( (dword_180155A10 & 3) != 0 )
          {
            LODWORD(v13) = v9;
            sub_1800D5274(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2237,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v13);
            v11 = dword_180155A10;
          }
          if ( (v11 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          sub_1800048B8(v9);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v9);
          break;
        }
        v8 = BaseAddress;
      }
      v3(v8[6]);
      sub_18003015C((char *)BaseAddress);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v17 )
    RtlReleasePath(Path[0]);
  ((void (*)(void))(__ROR8__(qword_18016B238, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016B250, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection(&CriticalSection);
  if ( byte_18015BF54 )
  {
    for ( i = (__int64 *)qword_18015B350; i != &qword_18015B350; i = (__int64 *)*i )
    {
      BaseAddress = i;
      *((_BYTE *)i + 105) &= ~8u;
    }
  }
  v5 = (__int64 *)qword_18015B350;
  if ( dword_18015C018 >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_10:
    if ( v5 == &qword_18015B350 )
      break;
    BaseAddress = v5;
    sub_18006F2AC(v5[19], v4);
  }
  byte_18015BF56 = 0;
  byte_18015BF54 = 1;
  RtlLeaveCriticalSection(&CriticalSection);
  sub_18006F334();
  return v2;
}
