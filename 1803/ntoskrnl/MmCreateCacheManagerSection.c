/*
 * XREFs of MmCreateCacheManagerSection @ 0x1404C10BC
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateCacheManagerSection(int a1, int a2, char a3, __int64 a4)
{
  int v4; // edi
  _KPROCESS *Process; // rbp
  char PreviousMode; // r14
  char v10; // si
  PACCESS_TOKEN v11; // rbx
  int SessionId; // eax
  unsigned int Section; // edi

  v4 = 2;
  Process = KeGetCurrentThread()->ApcState.Process;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a3 & 2) != 0 )
  {
    v4 = 6;
  }
  else if ( (a3 & 1) != 0 )
  {
    v4 = 10;
  }
  if ( PreviousMode == 1 )
  {
    v10 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
    v11 = PsReferencePrimaryToken(Process);
  }
  else
  {
    v11 = 0LL;
    v10 = 0;
  }
  SessionId = MmGetSessionIdEx((__int64)Process);
  Section = MiCreateSection(a1, 0, v4, a2, 4, 0x8000000, (__int64)v11, v10, 0LL, a4, PreviousMode, SessionId);
  if ( v11 )
    ObfDereferenceObject(v11);
  return Section;
}
