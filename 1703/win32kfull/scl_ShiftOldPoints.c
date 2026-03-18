/*
 * XREFs of scl_ShiftOldPoints @ 0x1C02BFCFC
 * Callers:
 *     scl_AdjustOldCharSideBearing @ 0x1C02BDE3C (scl_AdjustOldCharSideBearing.c)
 *     scl_AdjustOldPhantomSideBearing @ 0x1C02BDEA4 (scl_AdjustOldPhantomSideBearing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ShiftOldPoints(__int64 a1, int a2, __int64 a3, unsigned __int16 a4, unsigned __int16 a5)
{
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    v7 = a4;
    v8 = a4 + a5;
    if ( v7 < v8 )
    {
      v9 = 4LL * v7;
      v10 = v8 - v7;
      do
      {
        result = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(v9 + result) += a2;
        v9 += 4LL;
        --v10;
      }
      while ( v10 );
    }
  }
  return result;
}
