/*
 * XREFs of DpiEnumSystemFirmwareTables @ 0x1C01FD470
 * Callers:
 *     <none>
 * Callees:
 *     DpiQuerySystemFirmwareTables @ 0x1C01FE334 (DpiQuerySystemFirmwareTables.c)
 */

__int64 __fastcall DpiEnumSystemFirmwareTables(__int64 a1, int a2, int a3, void *a4, _DWORD *a5)
{
  __int64 v6; // r10
  __int64 v8; // rax

  if ( a1
    && (v6 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v6 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1 )
  {
    if ( *(_BYTE *)(v6 + 2559) )
    {
      *a5 = 0;
      return 3221226599LL;
    }
    else
    {
      return DpiQuerySystemFirmwareTables(0, a2, 0, a3, a4, (__int64)a5);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = a1;
    *(_QWORD *)(v8 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v8);
    return 3221225711LL;
  }
}
