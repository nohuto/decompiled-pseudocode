/*
 * XREFs of _PnpCtxGetObjectContext @ 0x14050C924
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x14050C6F0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x14050C810 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverInfFile @ 0x14050D160 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDeviceId @ 0x1405D79A0 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverFile @ 0x1407F44B0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectContext(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 392);
  return v3;
}
