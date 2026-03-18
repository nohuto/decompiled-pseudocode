/*
 * XREFs of DpGetDeviceInformation @ 0x1C01ED6B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DpGetDeviceInformation(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rsi
  int RegistryValues; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD v13[14]; // [rsp+30h] [rbp-78h] BYREF
  int v14; // [rsp+B0h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  if ( a1
    && a2
    && (v5 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v5 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v5 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v6 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v6);
    }
    memset(a2, 0, 0x50uLL);
    *a2 = *(_QWORD *)(v5 + 48);
    a2[1] = *(_QWORD *)(v5 + 152);
    a2[4] = *(_QWORD *)(v5 + 1152);
    a2[5] = DpGlobals;
    a2[6] = *(&DpGlobals + 1);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v5 + 528);
    a2[7] = *(_QWORD *)(v5 + 768);
    a2[8] = *(_QWORD *)(v5 + 760);
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL) >= 0x104Eu && *(_BYTE *)(v5 + 1141) == 1 )
    {
      memset(v13, 0, sizeof(v13));
      v14 = 0;
      v13[2] = L"DockingState";
      LODWORD(v13[1]) = 288;
      v7 = a2 + 9;
      LODWORD(v13[4]) = 0x4000000;
      v13[3] = v7;
      v13[5] = &v14;
      LODWORD(v13[6]) = 4;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"IDConfigDB\\CurrentDockInfo", v13, 0LL, 0LL);
      v3 = RegistryValues;
      if ( RegistryValues < 0 )
      {
        v10 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v10 + 24) = v3;
        WdLogEvent5_WdError(v10);
        LODWORD(v3) = 0;
        *v7 = v14;
      }
    }
  }
  else
  {
    LODWORD(v3) = -1073741811;
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v3;
}
