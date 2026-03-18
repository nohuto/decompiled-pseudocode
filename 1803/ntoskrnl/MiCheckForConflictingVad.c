/*
 * XREFs of MiCheckForConflictingVad @ 0x14003E910
 * Callers:
 *     MiCheckForConflictingVadExistence @ 0x14003E8F0 (MiCheckForConflictingVadExistence.c)
 *     MiLocateLowestConflictingVad @ 0x14006A518 (MiLocateLowestConflictingVad.c)
 *     MmGetImageBase @ 0x14058C804 (MmGetImageBase.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiCheckForConflictingVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **result; // rax
  unsigned __int64 v4; // r8

  result = *(__int64 ***)(a1 + 1576);
  v4 = a3 >> 12;
  while ( result )
  {
    if ( v4 < (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32)) )
    {
      result = (__int64 **)*result;
    }
    else
    {
      if ( a2 >> 12 <= (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
        return result;
      result = (__int64 **)result[1];
    }
  }
  return 0LL;
}
