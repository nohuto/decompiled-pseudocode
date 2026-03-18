/*
 * XREFs of ?ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z @ 0x18004C834
 * Callers:
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18004C5A8 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x172u);
      return v3;
    }
  }
  return v3;
}
