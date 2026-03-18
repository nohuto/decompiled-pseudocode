/*
 * XREFs of ??1CFlipConsumerMessage@@MEAA@XZ @ 0x1C004DAB0
 * Callers:
 *     ??_ECFlipConsumerMessage@@MEAAPEAXI@Z @ 0x1C004DB00 (--_ECFlipConsumerMessage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipPropertySetBase@@MEAA@XZ @ 0x1C0050DE0 (--1CFlipPropertySetBase@@MEAA@XZ.c)
 */

void __fastcall CFlipConsumerMessage::~CFlipConsumerMessage(CFlipConsumerMessage *this)
{
  CFlipConsumerMessage **v1; // r8
  CFlipConsumerMessage **v2; // rax

  *(_QWORD *)this = &CFlipConsumerMessage::`vftable'{for `CFlipPropertySetBase'};
  *((_QWORD *)this + 5) = &CFlipQueuedObject::`vftable';
  v1 = (CFlipConsumerMessage **)*((_QWORD *)this + 6);
  if ( v1[1] != (CFlipConsumerMessage *)((char *)this + 48)
    || (v2 = (CFlipConsumerMessage **)*((_QWORD *)this + 7), *v2 != (CFlipConsumerMessage *)((char *)this + 48)) )
  {
    __fastfail(3u);
  }
  *v2 = (CFlipConsumerMessage *)v1;
  v1[1] = (CFlipConsumerMessage *)v2;
  CFlipPropertySetBase::~CFlipPropertySetBase(this);
}
