/*
 * XREFs of MmCreateSectionEx @ 0x140493E0C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14005E8F0 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall MmCreateSectionEx(int a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, __int64 a8, char a9)
{
  char PreviousMode; // bp
  PACCESS_TOKEN v13; // rsi
  int v14; // r8d
  unsigned int Section; // ebx
  int SessionId; // [rsp+58h] [rbp-30h]
  char v18; // [rsp+98h] [rbp+10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v18 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
    v13 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v18 = 0;
    v13 = 0LL;
  }
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v14 = (a8 != 0 ? 2 : 0) | 8;
  if ( (a9 & 2) == 0 )
    v14 = a8 != 0 ? 2 : 0;
  Section = MiCreateSection(a1, a3, v14, a4, a5, a6, (__int64)v13, v18, 0LL, a8, PreviousMode, SessionId);
  if ( v13 )
    ObfDereferenceObject(v13);
  return Section;
}
