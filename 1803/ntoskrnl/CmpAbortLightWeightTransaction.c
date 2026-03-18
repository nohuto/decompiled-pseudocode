/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x14054BBE8
 * Callers:
 *     CmpRollbackLightWeightTransaction @ 0x14054BB90 (CmpRollbackLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x14054BE4C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpTransMgrRollback @ 0x14054BC94 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightTransaction @ 0x14054BEFC (CmpCleanupLightWeightTransaction.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-60h] BYREF
  int *v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+64h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-30h] BYREF

  v3 = 0;
  if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 1uLL) )
    TlgWrite(&stru_140397090, &unk_14030840C, 0LL, 0LL, 2u, &pData);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2, 8LL);
  }
  if ( stru_140397090.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140397090, 1uLL) )
    {
      v8 = 0;
      v4 = v3;
      v6 = &v4;
      v7 = 4;
      TlgWrite(&stru_140397090, &unk_1403083D6, 0LL, 0LL, 3u, &v5);
    }
  }
}
