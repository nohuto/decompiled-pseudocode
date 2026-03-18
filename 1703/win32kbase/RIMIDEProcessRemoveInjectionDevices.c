/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C00FF064
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01020DC (RIMIDERemoveInjectionDevice.c)
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
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  int v11; // edx
  _QWORD *result; // rax
  _QWORD *v13; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-10h]

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (__int64 *)gObRimDevList;
  v3 = &v13;
  v14 = &v13;
  v13 = &v13;
  while ( v2 != &gObRimDevList )
  {
    v4 = (unsigned __int64)(v2 + 6) & -(__int64)(v2 != (__int64 *)16);
    v5 = *(_QWORD *)(v4 + 0x178);
    if ( v5 && *(_DWORD *)(v5 + 84) == *(_DWORD *)(a1 + 56) )
    {
      v6 = (_QWORD *)(v4 + 152);
      if ( *v3 != &v13 )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)(v2 + 6) & -(__int64)(v2 != (__int64 *)16)) + 0xA0) = v3;
      *v6 = &v13;
      *v3 = v6;
      v14 = (_QWORD *)(v4 + 152);
      *(_DWORD *)(v4 + 200) |= 4u;
      v3 = (_QWORD **)v14;
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v7 = v13;
  while ( 1 )
  {
    result = &v13;
    if ( v7 == &v13 )
      break;
    v8 = v7 - 19;
    v7 = (_QWORD *)*v7;
    v9 = v8[19];
    v10 = (_QWORD *)v8[20];
    if ( *(_QWORD **)(v9 + 8) != v8 + 19 || (_QWORD *)*v10 != v8 + 19 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (int)RIMIDERemoveInjectionDevice(v8[4]) < 0 )
    {
      RIMLockExclusive((__int64)&gObListLock);
      *((_DWORD *)v8 + 50) &= ~4u;
      qword_1C018EC88 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        18,
        15,
        (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids);
    }
  }
  *(_DWORD *)(a1 + 768) &= ~0x100000u;
  return result;
}
