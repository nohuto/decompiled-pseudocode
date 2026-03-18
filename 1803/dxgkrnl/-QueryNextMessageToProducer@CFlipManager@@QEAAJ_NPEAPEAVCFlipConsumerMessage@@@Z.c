/*
 * XREFs of ?QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0050C24
 * Callers:
 *     ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C004E0DC (-QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1C00503E0 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 */

__int64 __fastcall CFlipManager::QueryNextMessageToProducer(
        CFlipManager *this,
        char a2,
        struct CFlipConsumerMessage **a3)
{
  _QWORD *v3; // rbx
  CFlipManager *v4; // r9
  unsigned int v5; // edi
  struct CFlipConsumerMessage *v7; // rcx
  CFlipPropertySetBase *v8; // rax

  v3 = (_QWORD *)((char *)this + 152);
  v4 = (CFlipManager *)*((_QWORD *)this + 19);
  v5 = -1073741823;
  if ( v4 != (CFlipManager *)((char *)this + 152) )
  {
    v5 = 0;
    v7 = (struct CFlipConsumerMessage *)(((unsigned __int64)v4 - 48) & -(__int64)(v4 != 0LL));
    *a3 = v7;
    ++*((_DWORD *)v7 + 2);
    if ( a2 )
    {
      v8 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v3);
      CFlipPropertySetBase::Release(v8);
      if ( (_QWORD *)*v3 == v3 )
        KeResetEvent(*((PRKEVENT *)this + 26));
    }
  }
  return v5;
}
