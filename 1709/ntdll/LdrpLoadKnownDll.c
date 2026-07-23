/*
 * XREFs of LdrpLoadKnownDll @ 0x180035B64
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x1800203DC (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 * Callees:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180022430 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFindKnownDll @ 0x18004D750 (LdrpFindKnownDll.c)
 *     LdrpHashUnicodeString @ 0x180053000 (LdrpHashUnicodeString.c)
 *     LdrpCheckKnownDllFullPath @ 0x1800744EC (LdrpCheckKnownDllFullPath.c)
 *     LdrpLoadContextReplaceModule @ 0x18008041C (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(_BYTE *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rbp
  int KnownDll; // edi
  char v5; // al
  HANDLE *v6; // rsi
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  v2 = (__int64)a1;
  v3 = *((_QWORD *)a1 + 7);
  KnownDll = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = LdrpCheckKnownDllFullPath(a1, v8);
    a1 = v8;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    v6 = (HANDLE *)(v2 + 24);
    KnownDll = LdrpFindKnownDll(
                 (PCUNICODE_STRING)a1,
                 (PUNICODE_STRING)(v3 + 88),
                 (PUNICODE_STRING)(v3 + 72),
                 (PHANDLE)(v2 + 24));
    if ( KnownDll >= 0 )
    {
      *(_DWORD *)(v2 + 32) |= 0x100000u;
      LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
      v9 = 0LL;
      *(_DWORD *)(v3 + 264) = LdrpHashUnicodeString(v3 + 88);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      KnownDll = LdrpFindLoadedDllByNameLockHeld(
                   (PUNICODE_STRING)(v3 + 88),
                   (PUNICODE_STRING)(v3 + 72),
                   *(_DWORD *)(v2 + 32),
                   &v9,
                   *(_DWORD *)(v3 + 264));
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v9 )
      {
        LdrpLoadContextReplaceModule(v2, v9);
      }
      else
      {
        LdrpLogDllState(0, v3 + 72, 0x14AAu);
        KnownDll = LdrpMapDllWithSectionHandle(v2);
      }
      NtClose(*v6);
      *v6 = 0LL;
    }
  }
  return (unsigned int)KnownDll;
}
