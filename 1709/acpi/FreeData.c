/*
 * XREFs of FreeData @ 0x1C000CC84
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C0003980 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIGetWorkerForInteger @ 0x1C00074D0 (ACPIGetWorkerForInteger.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     ACPIGetWorkerForString @ 0x1C000DA00 (ACPIGetWorkerForString.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     Store @ 0x1C001F810 (Store.c)
 *     ExprOp2_64 @ 0x1C0020100 (ExprOp2_64.c)
 *     ValidateTarget @ 0x1C00208D4 (ValidateTarget.c)
 * Callees:
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

void *__fastcall FreeData(_QWORD *a1)
{
  __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1[1];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData(v3);
  }
  else if ( a1[4] )
  {
    if ( *((int *)a1 + 2) > 0 )
    {
      *(_WORD *)a1 |= 8u;
    }
    else
    {
      if ( *((_WORD *)a1 + 1) == 4 )
        FreeDataBuffs(a1[4] + 8LL, *(unsigned int *)a1[4]);
      FreeObjData(a1);
    }
  }
  return memset(a1, 0, 0x28uLL);
}
