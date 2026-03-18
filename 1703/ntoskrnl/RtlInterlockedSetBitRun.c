/*
 * XREFs of RtlInterlockedSetBitRun @ 0x14023D450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlInterlockedSetBitRun(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r9d
  char v5; // r11
  volatile signed __int32 *v6; // r10
  int v7; // edx

  result = *(_QWORD *)(a1 + 8);
  v4 = a3;
  v5 = a2;
  v6 = (volatile signed __int32 *)(result + 4 * ((unsigned __int64)a2 >> 5));
  if ( a3 + (unsigned __int64)(a2 & 0x1F) > 0x20 )
  {
    v7 = a2 & 0x1F;
    if ( v7 )
    {
      _InterlockedOr(v6, ((1 << (32 - v7)) - 1) << (v5 & 0x1F));
      v4 = a3 - (32 - v7);
      ++v6;
    }
    if ( v4 >= 0x20 )
    {
      result = (unsigned __int64)v4 >> 5;
      do
      {
        *v6 = -1;
        v4 -= 32;
        ++v6;
        --result;
      }
      while ( result );
    }
    if ( v4 )
    {
      result = (unsigned int)((1 << v4) - 1);
      _InterlockedOr(v6, result);
    }
  }
  else if ( a3 == 32 )
  {
    *v6 = -1;
  }
  else
  {
    _InterlockedOr(v6, ((1 << a3) - 1) << (a2 & 0x1F));
  }
  return result;
}
