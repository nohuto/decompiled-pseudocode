/*
 * XREFs of ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0119D60
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?GetQueueAnyDestination@CInputDest@@QEBA_KXZ @ 0x1C0117138 (-GetQueueAnyDestination@CInputDest@@QEBA_KXZ.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C011D088 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011D248 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0126EF4 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 */

void __fastcall CTouchProcessor::AdjustEdgyFrameInputDest(PERESOURCE *a1, PERESOURCE *a2, const struct CInputDest *a3)
{
  PERESOURCE *v3; // rbx
  CInputDest *v7; // rdi
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v9; // r14
  struct CPointerInfoNode *v10; // rdi
  unsigned __int64 QueueAnyDestination; // rax
  struct CPointerQFrame *v12; // r10
  PERESOURCE *v13; // rcx
  PERESOURCE *v14; // rdx
  struct _ERESOURCE *v15; // rcx
  char v16[208]; // [rsp+50h] [rbp-1D8h] BYREF
  _BYTE v17[208]; // [rsp+120h] [rbp-108h] BYREF

  v3 = a1 + 28;
  CInpLockGuard::LockExclusive(a1 + 28);
  CInputDest::CInputDest((CInputDest *)v17, a3);
  v7 = CInputDest::CInputDest((CInputDest *)v16, (const struct CInputDest *)v17);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, WORD2(a2[12][2].ExclusiveWaiters), 0, 0);
  v9 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 48, (__int64)v7);
    *((_DWORD *)v9 + 86) = *((_DWORD *)v9 + 86) & 0xFFFFFF8F | 0x10;
  }
  CInputDest::SetEmpty(v7);
  do
  {
    v10 = (struct CPointerInfoNode *)a2[12];
    if ( (unsigned int)CPointerInfoNode::IsValid(v10) )
    {
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        (const struct CPointerInputFrame *)a2,
        0,
        (const struct CInputDest *)v17,
        1,
        0LL,
        0,
        1,
        0,
        0);
      if ( a2[13]->SystemResourcesList.Blink == (struct _LIST_ENTRY *)-1LL )
      {
        QueueAnyDestination = CInputDest::GetQueueAnyDestination((CInputDest *)v17);
        CTouchProcessor::EndQFrameNodeDeferment(
          (CTouchProcessor *)a1,
          v12,
          v10,
          (struct CPointerInputFrame *)a2,
          QueueAnyDestination);
      }
      v13 = (PERESOURCE *)a2[2];
      v14 = 0LL;
      if ( v13 && v13 != a1 + 35 )
        v14 = v13 - 1;
      a2 = v14;
    }
  }
  while ( a2 );
  CInputDest::SetEmpty((CInputDest *)v17);
  v15 = *v3;
  v3[4] = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v15);
}
