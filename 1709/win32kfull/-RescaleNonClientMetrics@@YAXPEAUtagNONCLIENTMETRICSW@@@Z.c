/*
 * XREFs of ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B767C
 * Callers:
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01B842C (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RescaleNonClientMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // ax
  INT v4; // ebx

  v2 = *(_WORD *)(PsGetCurrentProcessWin32Process(a1) + 284);
  v3 = *(_WORD *)(gpsi + 9974LL);
  if ( v2 != v3 )
  {
    v4 = v2;
    *((_DWORD *)a1 + 4) = EngMulDiv(*((_DWORD *)a1 + 4), v3, v2);
    *((_DWORD *)a1 + 5) = EngMulDiv(*((_DWORD *)a1 + 5), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 7) = EngMulDiv(*((_DWORD *)a1 + 7), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 6) = EngMulDiv(*((_DWORD *)a1 + 6), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 29) = EngMulDiv(*((_DWORD *)a1 + 29), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 30) = EngMulDiv(*((_DWORD *)a1 + 30), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 32) = EngMulDiv(*((_DWORD *)a1 + 32), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 31) = EngMulDiv(*((_DWORD *)a1 + 31), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 54) = EngMulDiv(*((_DWORD *)a1 + 54), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 55) = EngMulDiv(*((_DWORD *)a1 + 55), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 57) = EngMulDiv(*((_DWORD *)a1 + 57), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 56) = EngMulDiv(*((_DWORD *)a1 + 56), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 80) = EngMulDiv(*((_DWORD *)a1 + 80), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 79) = EngMulDiv(*((_DWORD *)a1 + 79), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 103) = EngMulDiv(*((_DWORD *)a1 + 103), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 102) = EngMulDiv(*((_DWORD *)a1 + 102), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 2) = EngMulDiv(*((_DWORD *)a1 + 2), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 3) = EngMulDiv(*((_DWORD *)a1 + 3), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 1) = EngMulDiv(*((_DWORD *)a1 + 1), *(unsigned __int16 *)(gpsi + 9974LL), v4);
    *((_DWORD *)a1 + 125) = EngMulDiv(*((_DWORD *)a1 + 125), *(unsigned __int16 *)(gpsi + 9974LL), v4);
  }
}
