/*
 * XREFs of VslFreePoolTransferObject @ 0x1401F1E4C
 * Callers:
 *     VslFinishSecureImageValidation @ 0x1401F31E0 (VslFinishSecureImageValidation.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x140159CE0 (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFreePoolTransferObject(__int64 *P, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = *(_QWORD *)(v3 + 32) + *(unsigned int *)(v3 + 44);
  if ( a2 )
    *a2 = *(unsigned int *)(v3 + 40);
  VslpUnlockPagesForTransfer((__int64)P);
  ExFreePoolWithTag(P, 0);
  return v4;
}
