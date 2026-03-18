/*
 * XREFs of UserFindBaseWindowHandleLocked @ 0x1C00E6D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     HMFindEntry @ 0x1C00DE7D0 (HMFindEntry.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00E6EB8 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall UserFindBaseWindowHandleLocked(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  char *v7; // rax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  _QWORD v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v4 = a2;
  v6 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      15,
      15,
      (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gHmLock, 0LL);
  v12[0] = a1;
  v12[1] = v4;
  v12[2] = a3;
  v7 = HMFindEntry((__int64)v12, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
  if ( v7 )
  {
    v6 = **((_QWORD **)gpKernelHandleTable + 2 * (unsigned int)((v7 - (_BYTE *)qword_1C0189E38) >> 5));
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    if ( v4 )
      v9 = *(_DWORD *)(v4 + 56);
    else
      LOBYTE(v9) = 0;
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_qD(gBaseLog, v8, 15, 16, (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids, a1, v9);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        15,
        17,
        (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids);
    }
  }
  ExReleasePushLockSharedEx(&gHmLock, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
