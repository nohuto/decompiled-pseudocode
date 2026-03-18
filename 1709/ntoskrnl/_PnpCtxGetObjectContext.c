/*
 * XREFs of _PnpCtxGetObjectContext @ 0x14053198C
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1405305C0 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverInfFile @ 0x140530710 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverDatabase @ 0x140531320 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x1405317C0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140787CF0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectContext(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 9 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 224);
  return v3;
}
