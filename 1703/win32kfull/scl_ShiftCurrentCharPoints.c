/*
 * XREFs of scl_ShiftCurrentCharPoints @ 0x1C02BFC38
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C02C7F5C (fsg_MergeGlyphData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ShiftCurrentCharPoints(__int64 a1, int a2, int a3)
{
  __int64 v3; // r10
  unsigned int v5; // edi
  __int64 result; // rax
  __int64 v7; // rcx

  v3 = 0LL;
  if ( a2 )
  {
    v5 = 0;
    result = *(_QWORD *)(a1 + 64);
    if ( *(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) != 0xFFFF )
    {
      do
      {
        v7 = v5++;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v7) += a2;
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
      }
      while ( v5 < (unsigned int)result );
    }
  }
  if ( a3 )
  {
    result = *(_QWORD *)(a1 + 64);
    if ( *(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) != 0xFFFF )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v3) += a3;
        v3 = (unsigned int)(v3 + 1);
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
      }
      while ( (unsigned int)v3 < (unsigned int)result );
    }
  }
  return result;
}
