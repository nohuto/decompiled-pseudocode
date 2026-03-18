/*
 * XREFs of RaisePower @ 0x1C00EDF60
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C0033BA4 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C0034290 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C0034BB8 (AdjustSrcDevGamma.c)
 *     BuildExpandAAInfo @ 0x1C0036860 (BuildExpandAAInfo.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00ED180 (HT_CreateDeviceHalftoneInfo.c)
 *     HT_ComputeRGBGammaTable @ 0x1C023C8A0 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x1C023D020 (ComputeBGRMappingTable.c)
 * Callees:
 *     MulFD6 @ 0x1C0034154 (MulFD6.c)
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     AntiLog @ 0x1C00EE06C (AntiLog.c)
 *     Log @ 0x1C00EE1B8 (Log.c)
 *     FD6DivL @ 0x1C00EE288 (FD6DivL.c)
 */

__int64 __fastcall RaisePower(int a1, signed int a2, char a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  __int64 v6; // r8
  unsigned int v7; // r9d
  BOOL v8; // ebp
  unsigned int v9; // eax
  __int64 result; // rax
  BOOL v11; // esi
  unsigned int v12; // r9d

  v4 = a2;
  v5 = a1;
  v6 = (unsigned int)a1;
  v7 = 1000000;
  if ( (a3 & 2) == 0 )
  {
    if ( a2 != 1000000 )
    {
      if ( a2 == 1000000 * (a2 / 1000000) )
      {
        v4 = a2 / 1000000;
        a3 |= 2u;
      }
      goto LABEL_5;
    }
    return (unsigned int)a1;
  }
  if ( a2 == 1 )
    return (unsigned int)a1;
LABEL_5:
  v8 = a1 <= 0;
  if ( a1 <= 0 )
  {
    v5 = -a1;
    if ( !a1 )
      return 0LL;
  }
  if ( v4 )
  {
    if ( v5 != 10000000 )
      v7 = Log(v5);
    if ( (a3 & 2) != 0 )
    {
      v11 = (v4 & 1) != 0 && v8;
      if ( (a3 & 1) != 0 )
        v12 = FD6DivL(v7, v4, v6);
      else
        v12 = v4 * v7;
      result = AntiLog(v12);
    }
    else
    {
      if ( (a3 & 1) != 0 )
        v9 = DivFD6(v7, v4);
      else
        v9 = MulFD6(v7, v4);
      result = AntiLog(v9);
      v11 = v8;
    }
    if ( v11 )
      return (unsigned int)-(int)result;
  }
  else
  {
    result = 4293967296LL;
    if ( a1 > 0 )
      return 1000000LL;
  }
  return result;
}
