/*
 * XREFs of rimSetDeviceDisplayConfig @ 0x1C008DEC8
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C008E0A8 (RIMUpdatePointerDeviceScalingInfo.c)
 *     rimNotifyPointerDeviceChangeClients @ 0x1C0106A98 (rimNotifyPointerDeviceChangeClients.c)
 */

__int64 __fastcall rimSetDeviceDisplayConfig(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  _BOOL8 v8; // r9
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2
    && a3
    && (*(_DWORD *)(a1 + 1336) != *(_DWORD *)(a4 + 16)
     || *(_DWORD *)(a1 + 1340) != *(_DWORD *)(a4 + 20)
     || *(_DWORD *)(a1 + 1344) != *(_DWORD *)(a4 + 24)
     || *(_DWORD *)(a1 + 1348) != *(_DWORD *)(a4 + 28)
     || *(_DWORD *)(a1 + 1436) != *(_DWORD *)(a4 + 116)
     || *(_DWORD *)(a1 + 1440) != *(_DWORD *)(a4 + 120)
     || *(_DWORD *)(a1 + 1444) != *(_DWORD *)(a4 + 124)
     || *(_DWORD *)(a1 + 1448) != *(_DWORD *)(a4 + 128)
     || *(_DWORD *)(a1 + 1408) != *(_DWORD *)(a4 + 88)
     || *(_DWORD *)(a1 + 1412) != *(_DWORD *)(a4 + 92)
     || *(_DWORD *)(a1 + 1376) != *(_DWORD *)(a4 + 56)
     || *(_DWORD *)(a1 + 1380) != *(_DWORD *)(a4 + 60)
     || *(_DWORD *)(a1 + 1424) != *(_DWORD *)(a4 + 104)
     || *(_DWORD *)(a1 + 1428) != *(_DWORD *)(a4 + 108)
     || RtlCompareMemory((const void *)(a1 + 1460), (const void *)(a4 + 140), 0x10uLL) != 16) )
  {
    v8 = *(_DWORD *)(a1 + 1336) != *(_DWORD *)(a4 + 16)
      || *(_DWORD *)(a1 + 1340) != *(_DWORD *)(a4 + 20)
      || *(_DWORD *)(a1 + 1348) != *(_DWORD *)(a4 + 28);
    rimNotifyPointerDeviceChangeClients(a1, a2, a4, v8);
  }
  *(_OWORD *)(a1 + 1320) = *(_OWORD *)a4;
  result = a4 + 128;
  *(_OWORD *)(a1 + 1336) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 1352) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 1368) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a1 + 1384) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a1 + 1400) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a1 + 1416) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a1 + 1432) = *(_OWORD *)(a4 + 112);
  *(_OWORD *)(a1 + 1448) = *(_OWORD *)(a4 + 128);
  *(_OWORD *)(a1 + 1464) = *(_OWORD *)(a4 + 144);
  *(_OWORD *)(a1 + 1480) = *(_OWORD *)(a4 + 160);
  *(_OWORD *)(a1 + 1496) = *(_OWORD *)(a4 + 176);
  if ( a2 )
    return RIMUpdatePointerDeviceScalingInfo((int)a2 + 140, a4, 0, (int)a1 + 1512, (__int64)v9);
  return result;
}
