/*
 * XREFs of ?_pDRTTargetInfoCollectorCB@DRTGetTargetCBContext@@SAJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z @ 0x1C01E3410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DRTGetTargetCBContext::_pDRTTargetInfoCollectorCB(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6)
{
  int v6; // edi
  int v7; // ebp
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx

  v6 = 0;
  v7 = a4;
  v8 = a3;
  if ( !a1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v8 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *(_QWORD *)a2;
  v14 = a2[2];
  if ( (unsigned int)v14 < *(_DWORD *)(*(_QWORD *)a2 + 16LL) )
  {
    v15 = 3 * v14;
    *(_DWORD *)(v13 + 4 * v15 + 20) = v8;
    LOBYTE(v6) = a5 != 0;
    *(_DWORD *)(v13 + 4 * v15 + 24) = v7;
    *(_DWORD *)(v13 + 4 * v15 + 28) = (a6 != 0 ? 2 : 0) | v6;
  }
  ++a2[2];
  return 0LL;
}
