/*
 * XREFs of CmpIsVirtEnabled @ 0x140569DE8
 * Callers:
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 */

char CmpIsVirtEnabled()
{
  void *v0; // rax
  unsigned __int64 v1; // rbx
  bool v3; // [rsp+40h] [rbp+8h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(TokenInformation) = 0;
  v0 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v5, &v3, &v6, 0LL);
  v1 = (unsigned __int64)v0;
  if ( v5 == 1 )
  {
    SeQueryInformationToken(v0, TokenVirtualizationEnabled, &TokenInformation);
    ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v1);
  }
  else if ( v0 )
  {
    ObfDereferenceObject(v0);
  }
  return (char)TokenInformation;
}
