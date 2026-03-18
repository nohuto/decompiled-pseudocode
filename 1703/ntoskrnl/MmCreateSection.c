/*
 * XREFs of MmCreateSection @ 0x140436B00
 * Callers:
 *     AlpcpCreateSection @ 0x140436860 (AlpcpCreateSection.c)
 *     PspApiSetCopyToSystemSpace @ 0x1406DE588 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1406DF654 (PspSiloInitializeUserSharedData.c)
 *     MiInitializeApiSets @ 0x140803BB0 (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x140804A04 (MiInitializeCfg.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, int a4, int a5, int a6, __int64 a7, __int64 a8)
{
  char PreviousMode; // di
  PACCESS_TOKEN v12; // rbx
  int SessionId; // eax
  unsigned int Section; // edi
  char v16; // [rsp+60h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v16 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
    v12 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v16 = 0;
    v12 = 0LL;
  }
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  Section = MiCreateSection(a1, a3, a8 != 0 ? 2 : 0, a4, a5, a6, (__int64)v12, v16, a7, a8, PreviousMode, SessionId);
  if ( v12 )
    ObfDereferenceObject(v12);
  return Section;
}
