/*
 * XREFs of Log @ 0x1C007B120
 * Callers:
 *     pDCIAdjClr @ 0x1C007828C (pDCIAdjClr.c)
 *     ComputeRGBLUTAA @ 0x1C0078BBC (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C0079298 (AdjustSrcDevGamma.c)
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 * Callees:
 *     FD6DivL @ 0x1C007B200 (FD6DivL.c)
 *     FractionToMantissa @ 0x1C007B374 (FractionToMantissa.c)
 */

__int64 __fastcall Log(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  int v4; // ebx
  __int64 v5; // r8
  int v6; // edi
  __int64 v7; // rcx
  int v9; // eax

  v3 = a1;
  if ( (int)a1 < 10000 )
  {
    if ( (int)a1 < 100 )
    {
      if ( (int)a1 < 10 )
      {
        if ( (int)a1 <= 0 )
          return 4288967296LL;
        v4 = -6000000;
        LODWORD(a1) = 100000000 * a1;
      }
      else
      {
        v4 = -5000000;
        LODWORD(a1) = 10000000 * a1;
      }
    }
    else
    {
      v9 = 100000;
      if ( (int)a1 < 1000 )
        v9 = 1000000;
      v4 = -3000000;
      LODWORD(a1) = v9 * a1;
      if ( v3 < 1000 )
        v4 = -4000000;
    }
  }
  else
  {
    v4 = 1000000;
    if ( (int)a1 >= 1000000 )
    {
      if ( (int)a1 >= 10000000 )
      {
        if ( (int)a1 < 100000000 )
        {
          LODWORD(a1) = 10 * a1;
        }
        else if ( (int)a1 < 1000000000 )
        {
          v4 = 2000000;
        }
        else
        {
          if ( (int)a1 >= 2147483642 )
            return 3331930LL;
          v4 = 3000000;
          LODWORD(a1) = FD6DivL(a1, 10LL, a3);
        }
      }
      else
      {
        v4 = 0;
        LODWORD(a1) = 100 * a1;
      }
    }
    else if ( (int)a1 < 100000 )
    {
      v4 = -2000000;
      LODWORD(a1) = 10000 * a1;
    }
    else
    {
      v4 = -1000000;
      LODWORD(a1) = 1000 * a1;
    }
  }
  v5 = (int)a1 / 1000000 - 100;
  v6 = MantissaTable[v5];
  v7 = (unsigned int)((int)a1 % 1000000);
  if ( (_DWORD)v7 )
    v6 += FractionToMantissa(v7, (unsigned int)MantissaCorrectData[v5]);
  return (unsigned int)(v6 + v4);
}
