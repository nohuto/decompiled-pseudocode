/*
 * XREFs of RIMUpdateSecondaryRim @ 0x1C010FB20
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004F1D8 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     RIMBroadcastToSecondaryRims @ 0x1C0094508 (RIMBroadcastToSecondaryRims.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C0094628 (rimIsSecondaryRimUsagesMatchingForDevice.c)
 *     ApiSetEditionClientRimDevCallback @ 0x1C013A21C (ApiSetEditionClientRimDevCallback.c)
 */

__int64 __fastcall RIMUpdateSecondaryRim(__int64 a1)
{
  __int64 v2; // rbx
  char *v3; // rax
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // rsi
  __int16 v11; // r13
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r15
  int v15; // r12d
  int v16; // eax
  BOOLEAN IsResourceAcquiredExclusiveLite; // bp
  void *v18; // rcx
  int v20; // [rsp+50h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp+8h] BYREF
  int v22; // [rsp+B8h] [rbp+10h]
  __int64 v23; // [rsp+C0h] [rbp+18h]
  __int64 v24; // [rsp+C8h] [rbp+20h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    60,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(char **)(a1 + 32);
  v20 = (int)v3;
  Object = 0LL;
  v4 = *(_QWORD *)(v2 + 408);
  if ( *(_BYTE *)(v2 + 112) != 3 && (int)RawInputManagerObjectResolveHandle(v3, 3u, 1, &Object) >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v10 = Object;
    if ( ThreadWin32Thread
      && gptiCurrent
      && *((_QWORD *)v10 + 4) == PsGetCurrentProcess(v7, v6, v8, v9)
      && *((_QWORD *)v10 + 96)
      && (*((_DWORD *)gptiCurrent + 110) & 1) == 0
      && (unsigned int)rimIsSecondaryRimUsagesMatchingForDevice((__int64)v10, v2) )
    {
      if ( *(_BYTE *)(v4 + 72) && !*(_BYTE *)(v4 + 73) || *(_BYTE *)(v4 + 74) )
      {
        *(_QWORD *)(v4 + 704) = 0LL;
        ExReleasePushLockExclusiveEx(v4 + 696, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v4 + 104) = 0LL;
      ExReleasePushLockExclusiveEx(v4 + 96, 0LL);
      KeLeaveCriticalRegion();
      v10[75] = 1;
      ObReferenceObjectByPointer((PVOID)v2, 3u, ExRawInputManagerObjectType, 0);
      v11 = 0;
      LOWORD(Object) = 0;
      *((_QWORD *)gptiCurrent + 151) = v2;
      *((_QWORD *)gptiCurrent + 152) = v4;
      *((_QWORD *)gptiCurrent + 153) = v10;
      if ( *(_BYTE *)(v2 + 112) == 2 )
      {
        v12 = *(_QWORD *)(v2 + 520);
        if ( v12 )
        {
          v11 = *(_WORD *)(v12 + 40);
          LOWORD(Object) = *(_WORD *)(v12 + 42);
        }
      }
      v13 = *(_DWORD *)(v2 + 248);
      v14 = *(_QWORD *)(v2 + 80);
      v15 = *(_DWORD *)a1;
      v22 = *(_DWORD *)(a1 + 8);
      v24 = *(_QWORD *)(a1 + 16);
      v23 = *((_QWORD *)v10 + 96);
      if ( (v13 & 0x1000) != 0 )
      {
        v16 = v15;
        if ( v15 == 1 )
          v16 = 2;
        if ( v15 == 4 )
          v16 = 3;
        v15 = v16;
        if ( (v13 & 0x20000) != 0 || (v13 & 0x40000) != 0 )
          v14 = *(_QWORD *)(v2 + 416);
      }
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      if ( IsResourceAcquiredExclusiveLite )
        ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
      ApiSetEditionClientRimDevCallback(
        v15,
        *(unsigned __int8 *)(v2 + 112),
        v22,
        v20,
        v14,
        v11,
        (__int16)Object,
        v24,
        v23);
      if ( IsResourceAcquiredExclusiveLite )
        ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
      *((_QWORD *)gptiCurrent + 151) = 0LL;
      *((_QWORD *)gptiCurrent + 152) = 0LL;
      *((_QWORD *)gptiCurrent + 153) = 0LL;
      ObfDereferenceObject(v10);
      RIMLockExclusive(v4 + 96);
      if ( *(_BYTE *)(v4 + 72) && !*(_BYTE *)(v4 + 73) || *(_BYTE *)(v4 + 74) )
        RIMLockExclusive(v4 + 696);
      v10[75] = 0;
      if ( (*(_DWORD *)(v2 + 264) & 0x80u) != 0 || (*(_DWORD *)(v2 + 248) & 0x1000) != 0 )
      {
        if ( *(_DWORD *)a1 == 2 )
          *(_DWORD *)(v2 + 248) |= 0x200000u;
        if ( *(_DWORD *)a1 == 3 )
          *(_DWORD *)(v2 + 248) |= 0x400000u;
      }
      v18 = (void *)v2;
    }
    else
    {
      v18 = v10;
    }
    ObfDereferenceObject(v18);
  }
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           61,
           (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
}
