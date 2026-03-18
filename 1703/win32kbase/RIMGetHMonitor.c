/*
 * XREFs of RIMGetHMonitor @ 0x1C0107EC8
 * Callers:
 *     RIMGetDevicePropertiesLockfree @ 0x1C01017A0 (RIMGetDevicePropertiesLockfree.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F0D4 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F264 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetHMonitor(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  int v3; // r10d
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 472);
  v2 = 0LL;
  if ( !v1 )
    return -1LL;
  v3 = *(_DWORD *)(v1 + 260);
  if ( __CFSHR__(v3, 6) )
    goto LABEL_6;
  if ( (unsigned int)(*(_DWORD *)(v1 + 24) - 6) <= 1 )
    return v2;
  if ( __CFSHR__(*(_DWORD *)(v1 + 260), 6) )
  {
LABEL_6:
    if ( (v3 & 0x8000) == 0 )
      return v2;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x1000000) == 0 )
  {
    v4 = *(_QWORD *)(v1 + 288);
    if ( v4 )
      return *(_QWORD *)v4;
  }
  return v2;
}
