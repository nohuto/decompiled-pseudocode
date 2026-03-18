/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C00FF37C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01028C0 (RIMIDERemoveInjectionDevice.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1)
{
  __int64 *v2; // rdx
  _QWORD **v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *result; // rax
  _QWORD *v12; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-10h]

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (__int64 *)gObRimDevList;
  v3 = &v12;
  v13 = &v12;
  v12 = &v12;
  while ( v2 != &gObRimDevList )
  {
    v4 = (unsigned __int64)(v2 + 6) & -(__int64)(v2 != (__int64 *)16);
    v5 = *(_QWORD *)(v4 + 0x178);
    if ( v5 && *(_DWORD *)(v5 + 84) == *(_DWORD *)(a1 + 56) )
    {
      v6 = (_QWORD *)(v4 + 152);
      if ( *v3 != &v12 )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)(v2 + 6) & -(__int64)(v2 != (__int64 *)16)) + 0xA0) = v3;
      *v6 = &v12;
      *v3 = v6;
      v13 = (_QWORD *)(v4 + 152);
      *(_DWORD *)(v4 + 200) |= 4u;
      v3 = (_QWORD **)v13;
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v7 = v12;
  while ( 1 )
  {
    result = &v12;
    if ( v7 == &v12 )
      break;
    v8 = v7 - 19;
    v7 = (_QWORD *)*v7;
    v9 = v8[19];
    if ( *(_QWORD **)(v9 + 8) != v8 + 19 || (v10 = (_QWORD *)v8[20], (_QWORD *)*v10 != v8 + 19) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (int)RIMIDERemoveInjectionDevice(v8[4]) < 0 )
    {
      RIMLockExclusive((__int64)&gObListLock);
      *((_DWORD *)v8 + 50) &= ~4u;
      qword_1C0193AE8 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0xFu,
        (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids);
    }
  }
  *(_DWORD *)(a1 + 776) &= ~0x100000u;
  return result;
}
