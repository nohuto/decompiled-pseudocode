/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C01143CC
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00A490C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C011407C (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C0114290 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C01148D4 (rimObsPushInputMessage.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v5; // ebx
  void *v6; // rdx
  HANDLE v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  int v10; // r15d
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  void **v15; // rsi
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD v19[6]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v20[12]; // [rsp+78h] [rbp+7h] BYREF
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
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0xBu,
        (__int64)&WPP_fd349965ce453fe84f61905a3071c021_Traceguids);
      v5 = -1073741670;
      ObCloseHandle(Handle, *(_BYTE *)(a2 + 64));
      goto LABEL_29;
    }
    v8[2] = Handle;
    v9 = *(_QWORD **)(a2 + 128);
    if ( *v9 != a2 + 120 )
      __fastfail(3u);
    *v8 = a2 + 120;
    v8[1] = v9;
    *v9 = v8;
    v7 = Handle;
    *(_QWORD *)(a2 + 128) = v8;
  }
  v10 = 48;
  memset(v19, 0, sizeof(v19));
  v11 = *(unsigned int *)(a1 + 256);
  if ( (int)v11 < 0 )
  {
    v5 = *(_DWORD *)(a1 + 256);
LABEL_14:
    if ( v5 < 0 )
      goto LABEL_29;
    v12 = *(unsigned __int8 *)(a1 + 48);
    v19[3] = *(_QWORD *)(a1 + 264);
    LODWORD(v19[4]) = v12;
    LODWORD(v19[0]) = 0;
    LODWORD(v19[2]) = v11;
    v19[1] = v7;
    v19[5] = 0LL;
    if ( (int)v11 < 0 )
      goto LABEL_23;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          v19[5] = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
        goto LABEL_23;
      }
      v14 = a1 + 492;
    }
    else
    {
      v14 = a1 + 468;
    }
    v19[5] = v14;
LABEL_23:
    if ( *(_DWORD *)(a2 + 80) == 1 )
    {
      v15 = *(void ***)(a2 + 88);
      LOBYTE(v11) = *(_BYTE *)(a2 + 64);
      v5 = rimObsCopyMessage((__int64)v19, v11, v15);
      if ( v5 == -1073741789 )
      {
        memset(v20, 0, sizeof(v20));
        LOBYTE(v16) = *(_BYTE *)(a2 + 64);
        v20[0] = 1;
        v20[2] = 0;
        v20[3] = v10;
        rimObsCopyMessage((__int64)v20, v16, v15);
        v5 = rimObsPushInputMessage(a2, v19);
      }
      v17 = *(void **)(a2 + 72);
      *(_DWORD *)(a2 + 80) = 0;
      ZwSetEvent(v17, 0LL);
    }
    else
    {
      v5 = rimObsPushInputMessage(a2, v19);
      if ( v5 == -1073741756 )
        v5 = 0;
    }
    goto LABEL_29;
  }
  if ( *(_QWORD *)(a1 + 264) > 0xFFFFFFCFuLL )
    v5 = -1073741675;
  if ( v5 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 264) + 48;
    goto LABEL_14;
  }
LABEL_29:
  *(_QWORD *)(v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
