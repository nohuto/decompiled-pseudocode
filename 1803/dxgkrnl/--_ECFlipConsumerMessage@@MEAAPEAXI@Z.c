/*
 * XREFs of ??_ECFlipConsumerMessage@@MEAAPEAXI@Z @ 0x1C004DB00
 * Callers:
 *     ??_ECFlipConsumerMessage@@OCI@EAAPEAXI@Z @ 0x1C001CDA0 (--_ECFlipConsumerMessage@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipConsumerMessage@@MEAA@XZ @ 0x1C004DAB0 (--1CFlipConsumerMessage@@MEAA@XZ.c)
 */

CFlipConsumerMessage *__fastcall CFlipConsumerMessage::`vector deleting destructor'(CFlipConsumerMessage *P, char a2)
{
  CFlipConsumerMessage::~CFlipConsumerMessage(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
