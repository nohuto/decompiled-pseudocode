/*
 * XREFs of ?ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z @ 0x180097F44
 * Callers:
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180097C88 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::ValidateBatches(CPrimitiveGroup *this, char *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 i; // rax

  v3 = 0;
  for ( i = 0LL; (int)i + 144 <= a3; i = (unsigned int)(i + 144) )
  {
    if ( *(_DWORD *)&a2[i] > 3u || *(_DWORD *)&a2[i + 12] > 7u )
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x167u);
      return v3;
    }
  }
  return v3;
}
