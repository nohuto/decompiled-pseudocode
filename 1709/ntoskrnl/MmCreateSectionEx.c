/*
 * XREFs of MmCreateSectionEx @ 0x1404FA1DC
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1400B7580 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall MmCreateSectionEx(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        char a9)
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
    v13 = 0;
    v14 = 0LL;
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
