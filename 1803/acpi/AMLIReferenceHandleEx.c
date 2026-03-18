/*
 * XREFs of AMLIReferenceHandleEx @ 0x1C0044014
 * Callers:
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0074CA0 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIReferenceHandleEx(__int64 a1)
{
  __int64 result; // rax

  dword_1C00677B8 = 0;
  result = (unsigned int)gdwfAMLI;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
