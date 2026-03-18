/*
 * XREFs of ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0052640
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C004FFD8 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0050264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CFlipPresentUpdate::SetFlipPropertySet(CFlipPresentUpdate *this, struct CFlipPropertySet *a2)
{
  CFlipPropertySetBase *v4; // rcx

  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  v4 = (CFlipPropertySetBase *)*((_QWORD *)this + 7);
  if ( v4 )
    CFlipPropertySetBase::Release(v4);
  *((_QWORD *)this + 7) = a2;
}
