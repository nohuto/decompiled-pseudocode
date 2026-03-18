/*
 * XREFs of Log @ 0x1C00EE1B8
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C0033BA4 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C0034290 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C0034BB8 (AdjustSrcDevGamma.c)
 *     RaisePower @ 0x1C00EDF60 (RaisePower.c)
 * Callees:
 *     FD6DivL @ 0x1C00EE288 (FD6DivL.c)
 *     FractionToMantissa @ 0x1C00EE3F8 (FractionToMantissa.c)
 */

__int64 __fastcall Log(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r8
  int v5; // edi
  __int64 v6; // rcx
  int v8; // eax

  if ( (int)a1 < 10000 )
  {
    if ( (int)a1 < 100 )
    {
      if ( (int)a1 < 10 )
      {
        if ( (int)a1 <= 0 )
          return 4288967296LL;
        v3 = -6000000;
        LODWORD(a1) = 100000000 * a1;
      }
      else
      {
        v3 = -5000000;
        LODWORD(a1) = 10000000 * a1;
      }
    }
    else
    {
      if ( (int)a1 < 1000 )
      {
        v3 = -4000000;
        v8 = 1000000;
      }
      else
      {
        v3 = -3000000;
        v8 = 100000;
      }
      LODWORD(a1) = v8 * a1;
    }
  }
  else if ( (int)a1 >= 1000000 )
  {
    if ( (int)a1 >= 10000000 )
    {
      if ( (int)a1 < 100000000 )
      {
        v3 = 1000000;
        LODWORD(a1) = 10 * a1;
      }
      else if ( (int)a1 < 1000000000 )
      {
        v3 = 2000000;
      }
      else
      {
        if ( (int)a1 >= 2147483642 )
          return 3331930LL;
        v3 = 3000000;
        LODWORD(a1) = FD6DivL(a1, 10LL, a3);
      }
    }
    else
    {
      v3 = 0;
      LODWORD(a1) = 100 * a1;
    }
  }
  else if ( (int)a1 < 100000 )
  {
    v3 = -2000000;
    LODWORD(a1) = 10000 * a1;
  }
  else
  {
    v3 = -1000000;
    LODWORD(a1) = 1000 * a1;
  }
  v4 = (int)a1 / 1000000 - 100;
  v5 = MantissaTable[v4];
  v6 = (unsigned int)((int)a1 % 1000000);
  if ( (_DWORD)v6 )
    v5 += FractionToMantissa(v6, (unsigned int)MantissaCorrectData[v4]);
  return (unsigned int)(v5 + v3);
}
