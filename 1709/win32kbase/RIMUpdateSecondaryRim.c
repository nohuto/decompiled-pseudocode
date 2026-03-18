/*
 * XREFs of RIMUpdateSecondaryRim @ 0x1C010E49C
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0019C1C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     RIMBroadcastToSecondaryRims @ 0x1C008FDEC (RIMBroadcastToSecondaryRims.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C0018518 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C008FF08 (rimIsSecondaryRimUsagesMatchingForDevice.c)
 *     ApiSetEditionClientRimDevCallback @ 0x1C01394F4 (ApiSetEditionClientRimDevCallback.c)
 */

__int64 __fastcall RIMUpdateSecondaryRim(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // rax
  __int64 v4; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int16 v9; // r13
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // r15
  int v13; // r12d
  int v14; // eax
  BOOLEAN IsResourceAcquiredExclusiveLite; // bl
  void *v16; // rcx
  int v18; // [rsp+50h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp+8h] BYREF
  int v20; // [rsp+B8h] [rbp+10h]
  __int64 v21; // [rsp+C0h] [rbp+18h]
  __int64 v22; // [rsp+C8h] [rbp+20h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x3Du,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(char **)(a1 + 32);
  v18 = (int)v3;
  Object = 0LL;
  v4 = *(_QWORD *)(v2 + 408);
  if ( *(_BYTE *)(v2 + 112) != 3 && (int)RawInputManagerObjectResolveHandle(v3, 3u, 1, &Object) >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v8 = Object;
    if ( ThreadWin32Thread
      && gptiCurrent
      && v8[4] == PsGetCurrentProcess(v7, v6)
      && v8[96]
      && (*((_DWORD *)gptiCurrent + 116) & 1) == 0
      && (unsigned int)rimIsSecondaryRimUsagesMatchingForDevice((__int64)v8, v2) )
    {
      RIMLockExclusive((__int64)(v8 + 12));
      RIMHandleAnySignalledReadsOnDestroyed(a1, (__int64)v8);
      v8[13] = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 12, 0LL);
      KeLeaveCriticalRegion();
      if ( *(_BYTE *)(v4 + 72) && !*(_BYTE *)(v4 + 73) || *(_BYTE *)(v4 + 74) )
      {
        *(_QWORD *)(v4 + 704) = 0LL;
        ExReleasePushLockExclusiveEx(v4 + 696, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v4 + 104) = 0LL;
      ExReleasePushLockExclusiveEx(v4 + 96, 0LL);
      KeLeaveCriticalRegion();
      *((_BYTE *)v8 + 75) = 1;
      ObReferenceObjectByPointer((PVOID)v2, 3u, ExRawInputManagerObjectType, 0);
      v9 = 0;
      LOWORD(Object) = 0;
      *((_QWORD *)gptiCurrent + 162) = v2;
      *((_QWORD *)gptiCurrent + 163) = v4;
      *((_QWORD *)gptiCurrent + 164) = v8;
      if ( *(_BYTE *)(v2 + 112) == 2 )
      {
        v10 = *(_QWORD *)(v2 + 520);
        if ( v10 )
        {
          v9 = *(_WORD *)(v10 + 40);
          LOWORD(Object) = *(_WORD *)(v10 + 42);
        }
      }
      v11 = *(_DWORD *)(v2 + 248);
      v12 = *(_QWORD *)(v2 + 80);
      v13 = *(_DWORD *)a1;
      v20 = *(_DWORD *)(a1 + 8);
      v22 = *(_QWORD *)(a1 + 16);
      v21 = v8[96];
      if ( (v11 & 0x1000) != 0 )
      {
        v14 = v13;
        if ( v13 == 1 )
          v14 = 2;
        if ( v13 == 4 )
          v14 = 3;
        v13 = v14;
        if ( (v11 & 0x20000) != 0 || (v11 & 0x40000) != 0 )
          v12 = *(_QWORD *)(v2 + 416);
      }
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      if ( IsResourceAcquiredExclusiveLite )
        ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
      ApiSetEditionClientRimDevCallback(
        v13,
        *(unsigned __int8 *)(v2 + 112),
        v20,
        v18,
        v12,
        v9,
        (__int16)Object,
        v22,
        v21);
      if ( IsResourceAcquiredExclusiveLite )
        ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
      *((_QWORD *)gptiCurrent + 162) = 0LL;
      *((_QWORD *)gptiCurrent + 163) = 0LL;
      *((_QWORD *)gptiCurrent + 164) = 0LL;
      ObfDereferenceObject(v8);
      RIMLockExclusive(v4 + 96);
      if ( *(_BYTE *)(v4 + 72) && !*(_BYTE *)(v4 + 73) || *(_BYTE *)(v4 + 74) )
        RIMLockExclusive(v4 + 696);
      *((_BYTE *)v8 + 75) = 0;
      if ( (*(_DWORD *)(v2 + 264) & 0x80u) != 0 || (*(_DWORD *)(v2 + 248) & 0x1000) != 0 )
      {
        if ( *(_DWORD *)a1 == 2 )
          *(_DWORD *)(v2 + 248) |= 0x200000u;
        if ( *(_DWORD *)a1 == 3 )
          *(_DWORD *)(v2 + 248) |= 0x400000u;
      }
      v16 = (void *)v2;
    }
    else
    {
      v16 = v8;
    }
    ObfDereferenceObject(v16);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x3Eu,
           (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
}
