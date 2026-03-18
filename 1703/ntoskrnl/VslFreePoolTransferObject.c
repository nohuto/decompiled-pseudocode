/*
 * XREFs of VslFreePoolTransferObject @ 0x1401ECFCC
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     VslFinishSecureImageValidation @ 0x14026A2C0 (VslFinishSecureImageValidation.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFreePoolTransferObject(__int64 *P, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = *(_QWORD *)(v3 + 32) + *(unsigned int *)(v3 + 44);
  if ( a2 )
    *a2 = *(unsigned int *)(v3 + 40);
  VslpUnlockPagesForTransfer(P);
  ExFreePoolWithTag(P, 0);
  return v4;
}
