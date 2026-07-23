/*
 * XREFs of CompatCachepLookupCdb @ 0x18007873C
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x180020F14 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800819EC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D18F0 (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x1800969C0 (wcsrchr.c)
 *     NtApphelpCacheControl @ 0x1800A0A40 (NtApphelpCacheControl.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall CompatCachepLookupCdb(wchar_t *Str, int a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rax
  const WCHAR *v6; // rax
  _QWORD v8[48]; // [rsp+20h] [rbp-188h] BYREF
  int v9; // [rsp+1C0h] [rbp+18h] BYREF

  memset(v8, 0, 0x178uLL);
  v4 = 0;
  v9 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  if ( RtlInitUnicodeStringEx((PUNICODE_STRING)&v8[29], v6) < 0 )
    return 0LL;
  LODWORD(v8[46]) = 4;
  v8[45] = &v9;
  if ( (int)NtApphelpCacheControl(6LL, v8) >= 0 && (a2 & v9) != 0 )
    return 1;
  return v4;
}
