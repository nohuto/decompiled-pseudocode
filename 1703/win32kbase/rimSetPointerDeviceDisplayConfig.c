/*
 * XREFs of rimSetPointerDeviceDisplayConfig @ 0x1C000B8E4
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000B4AC (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000BAA0 (RIMUpdatePointerDeviceScalingInfo.c)
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
 *     rimNotifyPointerDeviceChangeClients @ 0x1C0108A70 (rimNotifyPointerDeviceChangeClients.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1C0108BA0 (rimUpdatePointerDeviceOrientation.c)
 */

__int64 __fastcall rimSetPointerDeviceDisplayConfig(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _DWORD *v7; // rsi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v15; // rcx
  BOOL v16; // esi
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // [rsp+50h] [rbp-58h] BYREF
  int v23; // [rsp+60h] [rbp-48h]
  _OWORD v24[3]; // [rsp+70h] [rbp-38h] BYREF
  char v25; // [rsp+C0h] [rbp+18h] BYREF

  if ( a3 )
  {
    v7 = (_DWORD *)(a2 + 720);
    if ( RtlCompareMemory((const void *)(a2 + 720), (const void *)(*a4 + 20LL), 0x30uLL) != 48
      || (v8 = (_DWORD *)a4[1], *(_DWORD *)(a2 + 768) != v8[4])
      || *(_DWORD *)(a2 + 772) != v8[5]
      || *(_DWORD *)(a2 + 780) != v8[7]
      || *(_DWORD *)(a2 + 784) != v8[8]
      || (v9 = a4[3], v10 = *(_DWORD *)(a2 + 828), (v10 != 0) != (v9 != 0))
      || v10 && v9 && RtlCompareMemory((const void *)(a2 + 788), (const void *)(v9 + 16), 0x28uLL) != 40 )
    {
      v15 = *a4;
      v16 = *v7 != *(_DWORD *)(*a4 + 20LL)
         || *(_DWORD *)(a2 + 724) != *(_DWORD *)(v15 + 24)
         || *(_DWORD *)(a2 + 728) != *(_DWORD *)(v15 + 28);
      RIMEndAllActiveContacts(a1, a2, &v25);
      v17 = a4[1];
      *(_OWORD *)(a2 + 124) = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 288) + 40LL) + 28LL);
      v18 = *(_OWORD *)(v17 + 16);
      v23 = *(_DWORD *)(v17 + 32);
      v19 = *a4;
      v22 = v18;
      v20 = *(_OWORD *)(v19 + 36);
      v24[0] = *(_OWORD *)(v19 + 20);
      v21 = *(_OWORD *)(v19 + 52);
      v24[1] = v20;
      v24[2] = v21;
      rimNotifyPointerDeviceChangeClients(a2, v24, &v22, v16);
    }
  }
  v11 = *a4;
  *(_OWORD *)(a2 + 720) = *(_OWORD *)(*a4 + 20LL);
  *(_OWORD *)(a2 + 736) = *(_OWORD *)(v11 + 36);
  *(_OWORD *)(a2 + 752) = *(_OWORD *)(v11 + 52);
  if ( *(_DWORD *)(a2 + 700) != *(_DWORD *)(v11 + 40) )
    rimUpdatePointerDeviceOrientation(a2);
  v12 = a4[1];
  v13 = a4[3];
  *(_OWORD *)(a2 + 768) = *(_OWORD *)(v12 + 16);
  *(_DWORD *)(a2 + 784) = *(_DWORD *)(v12 + 32);
  *(_DWORD *)(a2 + 828) = v13 != 0;
  if ( v13 )
  {
    *(_OWORD *)(a2 + 788) = *(_OWORD *)(v13 + 16);
    *(_OWORD *)(a2 + 804) = *(_OWORD *)(v13 + 32);
    *(_QWORD *)(a2 + 820) = *(_QWORD *)(v13 + 48);
  }
  return RIMUpdatePointerDeviceScalingInfo((int)a2 + 156, (int)a2 + 768, a4[2], v13, a2 + 720);
}
