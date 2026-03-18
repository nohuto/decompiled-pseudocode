/*
 * XREFs of SepSetSystemPaths @ 0x1405CE854
 * Callers:
 *     SepIsMinTCB @ 0x1405454E0 (SepIsMinTCB.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepLoadNgenLocations @ 0x1405CE94C (SepLoadNgenLocations.c)
 */

__int64 __fastcall SepSetSystemPaths(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *CurrentServerSiloGlobals; // rbp
  size_t v4; // rsi
  char *PoolWithTag; // rax
  signed __int64 v6; // r14
  const WCHAR *v7; // rbx
  wchar_t *v8; // rbx
  void *v9; // rcx

  v2 = 0;
  SepLoadNgenLocations();
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = *((unsigned __int16 *)CurrentServerSiloGlobals + 508) + 30LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2 * v4 + 48, 0x63734943u);
  v6 = (signed __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = (const WCHAR *)(PoolWithTag + 48);
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)PoolWithTag + 24, v4, L"\\??\\%ws\\System32\\", CurrentServerSiloGlobals[128]);
    RtlInitUnicodeString((PUNICODE_STRING)v6, v7);
    v8 = (wchar_t *)&v7[v4 >> 1];
    RtlStringCbPrintfW(v8, v4, L"\\??\\%ws\\SysWOW64\\", CurrentServerSiloGlobals[128]);
    RtlInitUnicodeString((PUNICODE_STRING)(v6 + 16), v8);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)v6;
    *(_WORD *)(v6 + 32) = 12;
    v9 = (void *)(v6 & -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v6, 0LL) != 0));
    if ( v9 )
      ExFreePoolWithTag(v9, 0x63734943u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
