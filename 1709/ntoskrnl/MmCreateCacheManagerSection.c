/*
 * XREFs of MmCreateCacheManagerSection @ 0x140571B20
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall MmCreateCacheManagerSection(_QWORD *a1, int a2, char a3, __int64 a4)
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
    v10 = 0;
    v11 = 0LL;
  }
  SessionId = MmGetSessionIdEx((__int64)Process);
  Section = MiCreateSection(a1, 0, v4, a2, 4, 0x8000000, (__int64)v11, v10, 0LL, a4, PreviousMode, SessionId);
  if ( v11 )
    ObfDereferenceObject(v11);
  return Section;
}
