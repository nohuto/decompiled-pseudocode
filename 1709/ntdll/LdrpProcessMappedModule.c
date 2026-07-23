/*
 * XREFs of LdrpProcessMappedModule @ 0x180022BE8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpSignalModuleMapped @ 0x1800226F0 (LdrpSignalModuleMapped.c)
 *     RtlInsertInvertedFunctionTable @ 0x180022828 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGenRandom @ 0x180022BB8 (LdrpGenRandom.c)
 *     LdrpValidateEntrySection @ 0x180022DC0 (LdrpValidateEntrySection.c)
 *     LdrInitSecurityCookie @ 0x180022E04 (LdrInitSecurityCookie.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B994 (LdrpCfgProcessLoadConfig.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpProcessMappedModule(__int64 a1, int a2, int a3)
{
  char *v3; // rsi
  NTSTATUS Config; // edi
  PIMAGE_NT_HEADERS v8; // rbp
  char *v9; // rax
  int v10; // eax
  int inited; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(char **)(a1 + 48);
  Config = RtlImageNtHeaderEx(3u, v3, 0LL, &OutHeaders);
  if ( Config < 0 )
    return (unsigned int)Config;
  v8 = OutHeaders;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( OutHeaders->OptionalHeader.AddressOfEntryPoint )
      v9 = &v3[OutHeaders->OptionalHeader.AddressOfEntryPoint];
    else
      v9 = 0LL;
    *(_QWORD *)(a1 + 56) = v9;
  }
  if ( !(unsigned __int8)LdrpValidateEntrySection(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = v8->OptionalHeader.ImageBase;
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0 && (*(_BYTE *)(a1 + 104) & 4) != 0 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a3 )
  {
    v14 = 0LL;
    v10 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(
               (_DWORD)v3,
               *(_DWORD *)(a1 + 64),
               0,
               v10 ^ LdrSystemDllInitBlock.RngData,
               (__int64)&v14);
    if ( v3 == (char *)0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (OutHeaders->OptionalHeader.MajorSubsystemVersion != 6 || OutHeaders->OptionalHeader.MinorSubsystemVersion < 3u)
      && OutHeaders->OptionalHeader.MajorSubsystemVersion < 7u
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig(a1, OutHeaders, v14);
      if ( Config < 0 )
        return (unsigned int)Config;
      goto LABEL_17;
    }
    return (unsigned int)-1073741701;
  }
LABEL_17:
  if ( (*(_DWORD *)(a1 + 104) & 0x200) == 0 && (a2 & 0x800000) == 0 )
    RtlInsertInvertedFunctionTable((unsigned __int64)v3, *(_DWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 104) |= 0x2200u;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 && *(_QWORD *)(a1 + 176) )
    LdrpSignalModuleMapped(a1);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 5281LL);
  return (unsigned int)Config;
}
