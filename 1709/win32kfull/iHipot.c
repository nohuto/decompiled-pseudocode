/*
 * XREFs of iHipot @ 0x1C0232834
 * Callers:
 *     fxPtSize @ 0x1C02327D0 (fxPtSize.c)
 *     vCheckForSingularXform @ 0x1C0232CF0 (vCheckForSingularXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iHipot(int a1, int a2)
{
  unsigned int v2; // r9d
  char v3; // r10
  int v4; // ecx
  __int64 result; // rax
  int v6; // edx
  unsigned int v7; // eax
  int v8; // r8d

  v2 = 0;
  v3 = 0;
  v4 = abs32(a1);
  result = abs32(a2);
  if ( v4 )
  {
    if ( (_DWORD)result )
    {
      while ( v4 > 0x8000 || (int)result > 0x8000 )
      {
        v4 >>= 1;
        LODWORD(result) = (int)result >> 1;
        ++v3;
      }
      if ( v4 <= (int)result )
      {
        v6 = result;
        v7 = v4 * v4;
      }
      else
      {
        v6 = v4;
        v7 = result * result;
      }
      if ( v7 )
      {
        v8 = 2 * v6;
        do
        {
          ++v6;
          v2 += v8 + 1;
          v8 += 2;
        }
        while ( v2 < v7 );
      }
      return (unsigned int)(v6 << v3);
    }
    else
    {
      return (unsigned int)v4;
    }
  }
  return result;
}
