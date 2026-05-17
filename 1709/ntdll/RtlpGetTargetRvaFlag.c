/*
 * XREFs of RtlpGetTargetRvaFlag @ 0x1800016B8
 * Callers:
 *     RtlGuardIsExportSuppressedAddress @ 0x180001690 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800F6978 (RtlpGuardIsSuppressedAddress.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     bsearch_s @ 0x1800936F0 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 */

char __fastcall RtlpGetTargetRvaFlag(unsigned __int64 a1, _BYTE *a2)
{
  int v4; // ebx
  __int64 Config; // rax
  unsigned int v6; // ecx
  rsize_t v7; // r8
  const void *v8; // rdx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  char v11; // cl
  char result; // al
  unsigned __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+40h] [rbp-28h]
  _QWORD Key[2]; // [rsp+48h] [rbp-20h] BYREF

  Key[0] = 0LL;
  Key[1] = 0LL;
  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v13, 24LL, 0LL) < 0 )
    return 0;
  v4 = v13;
  if ( !v13 )
    return 0;
  if ( (v14 & 2) != 0 )
    return 0;
  if ( (v14 & 1) != 0 )
    return 0;
  if ( a1 < v13 )
    return 0;
  Config = LdrImageDirectoryEntryToLoadConfig(v13);
  if ( !Config )
    return 0;
  if ( *(_DWORD *)Config < 0x94u )
    return 0;
  v6 = *(_DWORD *)(Config + 144);
  v7 = *(unsigned int *)(Config + 136);
  if ( (v6 & 0x400) == 0 )
    return 0;
  v8 = *(const void **)(Config + 128);
  if ( !v8 )
    return 0;
  v9 = (v6 >> 28) + 4;
  if ( v9 <= 4 )
    return 0;
  LODWORD(Key[0]) = a1 - v4;
  v10 = bsearch_s(Key, v8, v7, v9, RtlpTargetCompare, 0LL);
  if ( !v10 )
    return 0;
  v11 = v10[4];
  result = 1;
  *a2 = v11;
  return result;
}
