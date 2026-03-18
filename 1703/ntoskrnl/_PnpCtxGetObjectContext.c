/*
 * XREFs of _PnpCtxGetObjectContext @ 0x1404E8A88
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1404E8230 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverDatabase @ 0x1404E8770 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDeviceId @ 0x1404E8890 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverPackage @ 0x1404E8970 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140745820 (DrvDbDispatchDriverFile.c)
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
