/*
 * XREFs of FreeData @ 0x1C0004EA8
 * Callers:
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     ACPIGetWorkerForString @ 0x1C0004CA0 (ACPIGetWorkerForString.c)
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C000A640 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIGetWorkerForInteger @ 0x1C0010510 (ACPIGetWorkerForInteger.c)
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ExprOp2_64 @ 0x1C001AB40 (ExprOp2_64.c)
 *     Store @ 0x1C001B040 (Store.c)
 *     ValidateTarget @ 0x1C001B7DC (ValidateTarget.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00251F4 (ACPIIoctlEvalControlMethodEx.c)
 * Callees:
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
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
