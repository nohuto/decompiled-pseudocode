/*
 * XREFs of MmCreateCacheManagerSection @ 0x140515F54
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall MmCreateCacheManagerSection(_QWORD *a1, int a2, char a3, __int64 a4)
{
  int v4; // ebx
  int v8; // esi
  char PreviousMode; // bp
  PACCESS_TOKEN v10; // rdi
  int SessionId; // eax
  unsigned int Section; // ebx
  char v14; // [rsp+A0h] [rbp+18h]

  v4 = 2;
  v8 = 0x8000000;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a3 & 2) != 0 )
  {
    v4 = 6;
  }
  else if ( (a3 & 1) != 0 )
  {
    v4 = 10;
  }
  if ( (a3 & 4) != 0 )
  {
    if ( (v4 & 8) != 0 )
      return 3221227019LL;
    v4 |= 0x20u;
  }
  if ( (a3 & 8) != 0 )
  {
    if ( (v4 & 8) == 0 )
    {
      v8 = 134479872;
      goto LABEL_6;
    }
    return 3221227019LL;
  }
LABEL_6:
  if ( PreviousMode == 1 )
  {
    v14 = BYTE1(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]);
    v10 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v14 = 0;
    v10 = 0LL;
  }
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  Section = MiCreateSection(a1, 0, v4, a2, 4, v8, (__int64)v10, v14, 0LL, a4, PreviousMode, SessionId);
  if ( v10 )
    ObfDereferenceObject(v10);
  return Section;
}
