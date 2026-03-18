/*
 * XREFs of MmCreateSection @ 0x14049B260
 * Callers:
 *     AlpcpCreateSection @ 0x140460E08 (AlpcpCreateSection.c)
 *     NtCreateSection @ 0x14049C090 (NtCreateSection.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x140714A38 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140715AD4 (PspSiloInitializeUserSharedData.c)
 *     MiInitializeApiSets @ 0x140829744 (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x140857188 (MiInitializeCfg.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, int a4, int a5, int a6, __int64 a7, __int64 a8)
{
  int v8; // ebp
  char PreviousMode; // si
  PACCESS_TOKEN v13; // rbx
  int SessionId; // eax
  __int64 result; // rax
  unsigned int v16; // edi
  char v17; // [rsp+60h] [rbp-28h]

  v8 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v17 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
    v13 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v17 = 0;
    v13 = 0LL;
  }
  if ( a8 )
    v8 = 2;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  result = MiCreateSection(a1, a3, v8, a4, a5, a6, (__int64)v13, v17, a7, a8, PreviousMode, SessionId);
  v16 = result;
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    return v16;
  }
  return result;
}
