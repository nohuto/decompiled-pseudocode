/*
 * XREFs of sub_18003A7B0 @ 0x18003A7B0
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_180039AE0 @ 0x180039AE0 (sub_180039AE0.c)
 *     sub_180039C44 @ 0x180039C44 (sub_180039C44.c)
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 *     sub_18003A4FC @ 0x18003A4FC (sub_18003A4FC.c)
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 *     sub_18003A958 @ 0x18003A958 (sub_18003A958.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 */

__int64 __fastcall sub_18003A7B0(__int64 a1, int a2)
{
  char *v2; // rsi
  NTSTATUS v5; // edi
  PIMAGE_NT_HEADERS v6; // rbp
  char *v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  int v10; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(char **)(a1 + 48);
  v5 = RtlImageNtHeaderEx(3u, v2, 0LL, &OutHeaders);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = OutHeaders;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( OutHeaders->OptionalHeader.AddressOfEntryPoint )
      v7 = &v2[OutHeaders->OptionalHeader.AddressOfEntryPoint];
    else
      v7 = 0LL;
    *(_QWORD *)(a1 + 56) = v7;
  }
  if ( !(unsigned __int8)sub_18003A958(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = v6->OptionalHeader.ImageBase;
  v8 = (*(_BYTE *)(a1 + 104) & 4) == 0;
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( !v8 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a2 )
  {
    v13 = 0LL;
    v9 = sub_18003A4FC();
    v10 = sub_18003A528(v2, *(unsigned int *)(a1 + 64), 0LL, v9 ^ LdrSystemDllInitBlock.RngData, &v13);
    if ( v2 == (char *)0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (OutHeaders->OptionalHeader.MajorSubsystemVersion != 6 || OutHeaders->OptionalHeader.MinorSubsystemVersion < 3u)
      && OutHeaders->OptionalHeader.MajorSubsystemVersion < 7u
      || v10 )
    {
      v5 = sub_180039F38(a1, (unsigned __int16 *)OutHeaders, v13);
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_16;
    }
    return (unsigned int)-1073741701;
  }
LABEL_16:
  if ( (*(_DWORD *)(a1 + 104) & 0x200) == 0 )
    sub_180039AE0((unsigned __int64)v2, *(_DWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 104) |= 0x2200u;
  RtlAcquireSRWLockExclusive(&stru_18015C040);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( *(_QWORD *)(a1 + 176) )
    sub_180039C44(a1);
  RtlReleaseSRWLockExclusive(&stru_18015C040);
  sub_18003CA5C(*(_QWORD *)(a1 + 48), a1 + 72, 5281LL);
  return (unsigned int)v5;
}
