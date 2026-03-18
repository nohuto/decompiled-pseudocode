/*
 * XREFs of MmCreateSection @ 0x1404C1C80
 * Callers:
 *     NtCreateSection @ 0x1404C1930 (NtCreateSection.c)
 *     AlpcpCreateSection @ 0x140556B5C (AlpcpCreateSection.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x140778C28 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140779C68 (PspSiloInitializeUserSharedData.c)
 *     MiInitializeApiSets @ 0x14089C8B4 (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x14089D624 (MiInitializeCfg.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, int a4, int a5, int a6, __int64 a7, __int64 a8)
{
  int v8; // esi
  char PreviousMode; // di
  char v13; // bl
  PACCESS_TOKEN v14; // r12
  int SessionId; // eax
  __int64 result; // rax
  unsigned int v17; // ebx

  v8 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v13 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
    v14 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v14 = 0LL;
    v13 = 0;
  }
  if ( a8 )
    v8 = 2;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  result = MiCreateSection(a1, a3, v8, a4, a5, a6, (__int64)v14, v13, a7, a8, PreviousMode, SessionId);
  v17 = result;
  if ( v14 )
  {
    ObfDereferenceObject(v14);
    return v17;
  }
  return result;
}
