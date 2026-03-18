/*
 * XREFs of RaisePower @ 0x1C007AEC8
 * Callers:
 *     BuildExpandAAInfo @ 0x1C0074300 (BuildExpandAAInfo.c)
 *     pDCIAdjClr @ 0x1C007828C (pDCIAdjClr.c)
 *     ComputeRGBLUTAA @ 0x1C0078BBC (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C0079298 (AdjustSrcDevGamma.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C01061A0 (HT_CreateDeviceHalftoneInfo.c)
 *     HT_ComputeRGBGammaTable @ 0x1C023E1E0 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x1C023E944 (ComputeBGRMappingTable.c)
 * Callees:
 *     MulFD6 @ 0x1C007915C (MulFD6.c)
 *     DivFD6 @ 0x1C00794D8 (DivFD6.c)
 *     AntiLog @ 0x1C007AFD4 (AntiLog.c)
 *     Log @ 0x1C007B120 (Log.c)
 *     FD6DivL @ 0x1C007B200 (FD6DivL.c)
 */

__int64 __fastcall RaisePower(int a1, __int64 a2, char a3)
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
    if ( (_DWORD)a2 != 1000000 )
    {
      a2 = (unsigned int)((int)a2 / 1000000);
      if ( v4 == 1000000 * (_DWORD)a2 )
      {
        v4 = a2;
        a3 |= 2u;
      }
      goto LABEL_5;
    }
    return (unsigned int)a1;
  }
  if ( (_DWORD)a2 == 1 )
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
      v7 = Log(v5, a2, (unsigned int)a1);
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
