/*
 * XREFs of PspEnforceLimitsJobPreCallback @ 0x140510310
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PspQueryRateControlHistory @ 0x14051041C (PspQueryRateControlHistory.c)
 */

__int64 __fastcall PspEnforceLimitsJobPreCallback(__int64 a1, _QWORD *a2)
{
  int v4; // ebp
  int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // edi

  *(_DWORD *)(a1 + 1216) = PspEnforcementSequenceNumber;
  if ( (*(_DWORD *)(a1 + 848) & 6) != 0 || *(_DWORD *)(a1 + 868) || (*(_DWORD *)(a1 + 1304) & 0x800) != 0 )
  {
    v4 = (_DWORD)a2 + 44;
    v5 = 0;
    *a2 = *(_QWORD *)(a1 + 784);
    v6 = 60LL;
    a2[1] = *(_QWORD *)(a1 + 824);
    a2[2] = 0LL;
    do
    {
      v7 = *(_QWORD *)(a1 + 984);
      if ( !v7 || (v8 = *(_DWORD *)(v6 + v7)) == 0 )
        v8 = 1;
      PspQueryRateControlHistory(a1, v8, 0, v4, v5);
      *(_DWORD *)((char *)a2 + v6 - 28) = v8;
      ++v5;
      v6 += 4LL;
      v4 += 4;
    }
    while ( v5 < 3 );
    return 0LL;
  }
  else
  {
    memset((void *)(a1 + 1120), 0, 0x58uLL);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFFBFFFFF);
    return 3221225760LL;
  }
}
