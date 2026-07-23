/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x180031E0C
 * Callers:
 *     LdrpBuildSystem32FileName @ 0x1800164A0 (LdrpBuildSystem32FileName.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x180031AA8 (LdrpApplyFileNameRedirection.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D6828 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(const void **a1, unsigned __int16 *a2)
{
  int v4; // edi
  unsigned int v5; // ebp
  unsigned int v7; // ebp
  __int64 v8; // rsi
  PVOID StringRoutine; // rax

  v4 = 0;
  if ( !*a2 )
    return (unsigned int)v4;
  v5 = *a2 + *(unsigned __int16 *)a1 + 2;
  if ( v5 > *((unsigned __int16 *)a1 + 1) )
  {
    if ( v5 > 0xFFFE )
    {
      v4 = -1073741562;
      goto LABEL_3;
    }
    v7 = (v5 + 63) & 0xFFFFFFC0;
    if ( v7 > 0xFFFE )
      v7 = 65534;
    if ( a1[1] == a1 + 2 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v7);
      v8 = (__int64)StringRoutine;
      if ( !StringRoutine )
      {
LABEL_17:
        v4 = -1073741801;
        goto LABEL_3;
      }
      if ( *(_WORD *)a1 )
        memmove(StringRoutine, a1[1], *(unsigned __int16 *)a1);
    }
    else
    {
      v8 = NtdllpReallocateStringRoutine(v7);
    }
    if ( v8 )
    {
      a1[1] = (const void *)v8;
      *((_WORD *)a1 + 1) = v7;
      goto LABEL_3;
    }
    goto LABEL_17;
  }
LABEL_3:
  if ( v4 >= 0 )
  {
    memmove((char *)a1[1] + *(unsigned __int16 *)a1, *((const void **)a2 + 1), *a2);
    *(_WORD *)a1 += *a2;
    *((_WORD *)a1[1] + ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
  }
  return (unsigned int)v4;
}
