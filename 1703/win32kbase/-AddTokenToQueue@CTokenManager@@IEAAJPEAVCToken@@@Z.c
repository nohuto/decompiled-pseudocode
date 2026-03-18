/*
 * XREFs of ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C00059FC
 * Callers:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0005A74 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C01521E4 (-AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C000593C (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C0007160 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CompositionSurfaceObject **a2)
{
  int v4; // edi
  CTokenQueue *v5; // rcx
  struct CTokenManager::TokenQueueTableEntry *v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(struct CompositionSurfaceObject **))*a2 + 20))(a2) )
  {
    v5 = (CTokenManager *)((char *)this + 240);
    goto LABEL_4;
  }
  v4 = CTokenManager::EnsureTokenQueue(this, a2[4], &v7);
  if ( v4 >= 0 )
  {
    v5 = (CTokenQueue *)*((_QWORD *)v7 + 1);
LABEL_4:
    CTokenQueue::AddToken(v5, (struct CToken *)a2);
  }
  return (unsigned int)v4;
}
