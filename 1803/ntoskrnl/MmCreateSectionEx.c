/*
 * XREFs of MmCreateSectionEx @ 0x1404BF1DC
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14004D470 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSectionEx(int a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, __int64 a8, char a9)
{
  _KPROCESS *Process; // rbp
  char PreviousMode; // r15
  char v13; // r14
  PACCESS_TOKEN v14; // rsi
  int v15; // r8d
  unsigned int Section; // ebx
  int SessionId; // [rsp+58h] [rbp-30h]

  Process = KeGetCurrentThread()->ApcState.Process;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v13 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
    v14 = PsReferencePrimaryToken(Process);
  }
  else
  {
    v14 = 0LL;
    v13 = 0;
  }
  SessionId = MmGetSessionIdEx((__int64)Process);
  v15 = (a8 != 0 ? 2 : 0) | 8;
  if ( (a9 & 2) == 0 )
    v15 = a8 != 0 ? 2 : 0;
  Section = MiCreateSection(a1, a3, v15, a4, a5, a6, (__int64)v14, v13, 0LL, a8, PreviousMode, SessionId);
  if ( v14 )
    ObfDereferenceObject(v14);
  return Section;
}
