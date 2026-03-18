/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x14042D3E8
 * Callers:
 *     CmpRollbackLightWeightTransaction @ 0x14042D390 (CmpRollbackLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140669900 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x14042D494 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x14042E45C (CmpTransMgrRollback.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp-78h] BYREF
  int v4; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-70h] BYREF
  int *v6; // [rsp+58h] [rbp-50h]
  int v7; // [rsp+60h] [rbp-48h]
  int v8; // [rsp+64h] [rbp-44h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-38h] BYREF

  v3 = 0;
  if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 1uLL) )
    TlgWrite(&stru_14033C3C0, &unk_1402AAD15, 0LL, 0LL, 2u, &pData);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2, 8LL);
  }
  if ( stru_14033C3C0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C3C0, 1uLL) )
    {
      v8 = 0;
      v4 = v3;
      v6 = &v4;
      v7 = 4;
      TlgWrite(&stru_14033C3C0, &unk_1402AACDF, 0LL, 0LL, 3u, &v5);
    }
  }
}
