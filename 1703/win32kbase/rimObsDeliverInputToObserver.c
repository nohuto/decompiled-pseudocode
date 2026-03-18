/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C0115900
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0099C1C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C01155AC (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C01157C0 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C0115E08 (rimObsPushInputMessage.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v5; // ebx
  void *v6; // rdx
  HANDLE v7; // r14
  _QWORD *v8; // rax
  int v9; // edx
  _QWORD *v10; // rdx
  int v11; // r15d
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  void **v16; // rsi
  __int64 v17; // rdx
  void *v18; // rcx
  _QWORD v20[6]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v21[12]; // [rsp+78h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+67h] BYREF

  v2 = a2 + 168;
  v5 = 0;
  RIMLockExclusive(a2 + 168);
  v6 = *(void **)(a1 + 32);
  Handle = (HANDLE)-1LL;
  Handle = rimObsCheckForExistingDeviceHandle(a2, v6);
  v7 = Handle;
  if ( Handle == (HANDLE)-1LL )
  {
    v5 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v5 < 0 )
      goto LABEL_29;
    v8 = Win32AllocPoolZInit(0x18uLL, 1701334866LL);
    if ( !v8 )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        18,
        11,
        (__int64)&WPP_c3e998bf1f303cec21152f5fc17d2fdb_Traceguids);
      v5 = -1073741670;
      ObCloseHandle(Handle, *(_BYTE *)(a2 + 64));
      goto LABEL_29;
    }
    v8[2] = Handle;
    v10 = *(_QWORD **)(a2 + 128);
    if ( *v10 != a2 + 120 )
      __fastfail(3u);
    *v8 = a2 + 120;
    v8[1] = v10;
    *v10 = v8;
    v7 = Handle;
    *(_QWORD *)(a2 + 128) = v8;
  }
  v11 = 48;
  memset(v20, 0, sizeof(v20));
  v12 = *(unsigned int *)(a1 + 256);
  if ( (int)v12 < 0 )
  {
    v5 = *(_DWORD *)(a1 + 256);
LABEL_14:
    if ( v5 < 0 )
      goto LABEL_29;
    v13 = *(unsigned __int8 *)(a1 + 48);
    v20[3] = *(_QWORD *)(a1 + 264);
    LODWORD(v20[4]) = v13;
    LODWORD(v20[0]) = 0;
    LODWORD(v20[2]) = v12;
    v20[1] = v7;
    v20[5] = 0LL;
    if ( (int)v12 < 0 )
      goto LABEL_23;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          v20[5] = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
        goto LABEL_23;
      }
      v15 = a1 + 492;
    }
    else
    {
      v15 = a1 + 468;
    }
    v20[5] = v15;
LABEL_23:
    if ( *(_DWORD *)(a2 + 80) == 1 )
    {
      v16 = *(void ***)(a2 + 88);
      LOBYTE(v12) = *(_BYTE *)(a2 + 64);
      v5 = rimObsCopyMessage((__int64)v20, v12, v16);
      if ( v5 == -1073741789 )
      {
        memset(v21, 0, sizeof(v21));
        LOBYTE(v17) = *(_BYTE *)(a2 + 64);
        v21[0] = 1;
        v21[2] = 0;
        v21[3] = v11;
        rimObsCopyMessage((__int64)v21, v17, v16);
        v5 = rimObsPushInputMessage(a2, v20);
      }
      v18 = *(void **)(a2 + 72);
      *(_DWORD *)(a2 + 80) = 0;
      ZwSetEvent(v18, 0LL);
    }
    else
    {
      v5 = rimObsPushInputMessage(a2, v20);
      if ( v5 == -1073741756 )
        v5 = 0;
    }
    goto LABEL_29;
  }
  if ( *(_QWORD *)(a1 + 264) > 0xFFFFFFCFuLL )
    v5 = -1073741675;
  if ( v5 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 264) + 48;
    goto LABEL_14;
  }
LABEL_29:
  *(_QWORD *)(v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
