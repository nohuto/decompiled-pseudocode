/*
 * XREFs of HoldRimCompleteFrame @ 0x1C019AC00
 * Callers:
 *     ProcessTouchInputViaRim @ 0x1C01B0D54 (ProcessTouchInputViaRim.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C019A540 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     FindHoldingFrameForDevice @ 0x1C019AB7C (FindHoldingFrameForDevice.c)
 *     InitTouchpadState @ 0x1C01B0C48 (InitTouchpadState.c)
 *     IsTouchpadDevice @ 0x1C01B0D1C (IsTouchpadDevice.c)
 */

struct tagPOINTERHOLDINGFRAME *__fastcall HoldRimCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  int v5; // edx
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  struct tagTPSTATE *v10; // rax
  struct tagHID_POINTER_DEVICE_INFO *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v15; // r8
  unsigned int v16; // r11d
  _OWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  __int128 v21; // xmm1
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdi
  void *v25; // rax
  struct tagPOINTERHOLDINGFRAME *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned int v32; // r11d
  _DWORD *v33; // r8
  _OWORD *v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rdx
  _OWORD *v37; // rcx
  __int128 v38; // xmm1
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rbp
  __int64 v42; // r14
  __int64 v43; // rdi
  __int64 v44; // rsi
  void *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rsi
  _QWORD v49[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v50; // [rsp+50h] [rbp+8h] BYREF

  v50 = 0LL;
  LOBYTE(a3) = *(_DWORD *)(a1 + 48) == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(*(_QWORD *)(a1 + 32), 3LL, a3, &v50) < 0 )
    return 0LL;
  v4 = (_QWORD *)(v50 + 64);
  if ( v50 != -64 )
    v4 = (_QWORD *)*v4;
  RawInputManagerDeviceObjectDereference();
  HoldingFrameForDevice = FindHoldingFrameForDevice((__int64)v4);
  if ( HoldingFrameForDevice )
  {
    if ( *((_DWORD *)HoldingFrameForDevice + 8) != *(_DWORD *)(a1 + 24) )
    {
      v30 = *((_QWORD *)HoldingFrameForDevice + 8);
      if ( v30 )
      {
        Win32FreePool(v30);
        *((_QWORD *)HoldingFrameForDevice + 8) = 0LL;
      }
      v31 = 216LL * *(unsigned int *)(a1 + 24);
      if ( v31 <= 0xFFFFFFFF )
        *((_QWORD *)HoldingFrameForDevice + 8) = Win32AllocPoolZInit((unsigned int)v31, 1701868373LL);
      if ( !*((_QWORD *)HoldingFrameForDevice + 8) )
        goto LABEL_44;
      *((_DWORD *)HoldingFrameForDevice + 8) = *(_DWORD *)(a1 + 24);
    }
    v32 = 0;
    *((_QWORD *)HoldingFrameForDevice + 3) = *(_QWORD *)(a1 + 40);
    v33 = *(_DWORD **)(a1 + 88);
    if ( *(_DWORD *)(a1 + 24) )
    {
      v34 = v33 + 2;
      do
      {
        v35 = v32++;
        v36 = 216 * v35;
        LODWORD(v35) = *v33;
        v33 += 42;
        *(_DWORD *)(v36 + *((_QWORD *)HoldingFrameForDevice + 8) + 44) = v35;
        v37 = (_OWORD *)(v36 + *((_QWORD *)HoldingFrameForDevice + 8));
        v37[3] = *v34;
        v37[4] = v34[1];
        v37[5] = v34[2];
        v37[6] = v34[3];
        v37[7] = v34[4];
        v37[8] = v34[5];
        v37[9] = v34[6];
        v37[10] = v34[7];
        v37[11] = v34[8];
        v38 = v34[9];
        v34 = (_OWORD *)((char *)v34 + 168);
        v37[12] = v38;
        *(_QWORD *)(v36 + *((_QWORD *)HoldingFrameForDevice + 8) + 72) = v4;
      }
      while ( v32 < *(_DWORD *)(a1 + 24) );
    }
    v39 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 16);
      v41 = v39;
      if ( v40 )
        Win32FreePool(v40);
      v39 = *(_QWORD *)(v39 + 24);
      Win32FreePool(v41);
    }
    *((_QWORD *)HoldingFrameForDevice + 6) = 0LL;
    v42 = 0LL;
    *((_QWORD *)HoldingFrameForDevice + 7) = 0LL;
    *((_DWORD *)HoldingFrameForDevice + 10) = *(_DWORD *)(a1 + 28);
    v43 = *(_QWORD *)(a1 + 80);
    if ( !v43 )
      return HoldingFrameForDevice;
    while ( 1 )
    {
      v44 = Win32AllocPoolZInit(32LL, 1685222229LL);
      if ( !v44 )
        break;
      v45 = (void *)Win32AllocPool(*(unsigned int *)(v43 + 4), 1685222229LL);
      *(_QWORD *)(v44 + 16) = v45;
      if ( !v45 )
        break;
      *(_DWORD *)(v44 + 4) = *(_DWORD *)v43;
      *(_DWORD *)(v44 + 8) = *(_DWORD *)(v43 + 4);
      memmove(v45, *(const void **)(v43 + 8), *(unsigned int *)(v43 + 4));
      if ( v42 )
        *(_QWORD *)(v42 + 24) = v44;
      else
        *((_QWORD *)HoldingFrameForDevice + 6) = v44;
      v43 = *(_QWORD *)(v43 + 16);
      v42 = v44;
      if ( !v43 )
      {
        *((_QWORD *)HoldingFrameForDevice + 7) = v44;
        return HoldingFrameForDevice;
      }
    }
    v46 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v46 )
    {
      v47 = *(_QWORD *)(v46 + 16);
      v48 = v46;
      if ( v47 )
        Win32FreePool(v47);
      v46 = *(_QWORD *)(v46 + 24);
      Win32FreePool(v48);
    }
    *((_QWORD *)HoldingFrameForDevice + 6) = 0LL;
    *((_QWORD *)HoldingFrameForDevice + 7) = 0LL;
LABEL_44:
    UnlinkAndFreeHoldingFrame(HoldingFrameForDevice, v5);
    return 0LL;
  }
  v7 = HMValidateHandleNoSecure((unsigned __int64)v4, 19);
  HoldingFrameForDevice = (struct tagPOINTERHOLDINGFRAME *)Win32AllocPoolZInit(96LL, 1718645589LL);
  if ( !HoldingFrameForDevice )
    return 0LL;
  if ( (unsigned int)IsTouchpadDevice(v4, v8, v9) )
  {
    v10 = (struct tagTPSTATE *)Win32AllocPoolZInit(2104LL, 1886679893LL);
    if ( !v10 )
    {
LABEL_15:
      Win32FreePool(HoldingFrameForDevice);
      return 0LL;
    }
    *((_QWORD *)HoldingFrameForDevice + 11) = v10;
    v11 = *(struct tagHID_POINTER_DEVICE_INFO **)(v7 + 472);
    if ( v11 )
      InitTouchpadState(v10, v11);
  }
  v12 = 216LL * *(unsigned int *)(a1 + 24);
  if ( v12 <= 0xFFFFFFFF )
    *((_QWORD *)HoldingFrameForDevice + 8) = Win32AllocPoolZInit((unsigned int)v12, 1701868373LL);
  if ( !*((_QWORD *)HoldingFrameForDevice + 8) )
  {
LABEL_13:
    v13 = *((_QWORD *)HoldingFrameForDevice + 11);
    if ( v13 )
      Win32FreePool(v13);
    goto LABEL_15;
  }
  v15 = *(_DWORD **)(a1 + 88);
  v16 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v17 = v15 + 2;
    do
    {
      v18 = v16++;
      v19 = 216 * v18;
      LODWORD(v18) = *v15;
      v15 += 42;
      *(_DWORD *)(v19 + *((_QWORD *)HoldingFrameForDevice + 8) + 44) = v18;
      v20 = (_OWORD *)(v19 + *((_QWORD *)HoldingFrameForDevice + 8));
      v20[3] = *v17;
      v20[4] = v17[1];
      v20[5] = v17[2];
      v20[6] = v17[3];
      v20[7] = v17[4];
      v20[8] = v17[5];
      v20[9] = v17[6];
      v20[10] = v17[7];
      v20[11] = v17[8];
      v21 = v17[9];
      v17 = (_OWORD *)((char *)v17 + 168);
      v20[12] = v21;
      *(_QWORD *)(v19 + *((_QWORD *)HoldingFrameForDevice + 8) + 72) = v4;
    }
    while ( v16 < *(_DWORD *)(a1 + 24) );
  }
  v22 = 0LL;
  *((_DWORD *)HoldingFrameForDevice + 8) = *(_DWORD *)(a1 + 24);
  *((_QWORD *)HoldingFrameForDevice + 2) = v4;
  *((_QWORD *)HoldingFrameForDevice + 3) = *(_QWORD *)(a1 + 40);
  *((_DWORD *)HoldingFrameForDevice + 10) = *(_DWORD *)(a1 + 28);
  v23 = *(_QWORD *)(a1 + 80);
  if ( v23 )
  {
    while ( 1 )
    {
      v24 = Win32AllocPoolZInit(32LL, 1685222229LL);
      if ( !v24 )
        break;
      v25 = (void *)Win32AllocPool(*(unsigned int *)(v23 + 4), 1685222229LL);
      *(_QWORD *)(v24 + 16) = v25;
      if ( !v25 )
        break;
      *(_DWORD *)(v24 + 4) = *(_DWORD *)v23;
      *(_DWORD *)(v24 + 8) = *(_DWORD *)(v23 + 4);
      memmove(v25, *(const void **)(v23 + 8), *(unsigned int *)(v23 + 4));
      if ( v22 )
        *(_QWORD *)(v22 + 24) = v24;
      else
        *((_QWORD *)HoldingFrameForDevice + 6) = v24;
      v23 = *(_QWORD *)(v23 + 16);
      v22 = v24;
      if ( !v23 )
      {
        *((_QWORD *)HoldingFrameForDevice + 7) = v24;
        goto LABEL_28;
      }
    }
    v27 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 16);
      v29 = v27;
      if ( v28 )
        Win32FreePool(v28);
      v27 = *(_QWORD *)(v27 + 24);
      Win32FreePool(v29);
    }
    Win32FreePool(*((_QWORD *)HoldingFrameForDevice + 8));
    goto LABEL_13;
  }
LABEL_28:
  v49[0] = (char *)HoldingFrameForDevice + 80;
  v49[1] = *(_QWORD *)(v7 + 472);
  HMAssignmentLock(v49);
  v26 = qword_1C03302F8;
  if ( *((struct tagPOINTERHOLDINGFRAME ***)qword_1C03302F8 + 1) != &qword_1C03302F8 )
    __fastfail(3u);
  *(_QWORD *)HoldingFrameForDevice = qword_1C03302F8;
  *((_QWORD *)HoldingFrameForDevice + 1) = &qword_1C03302F8;
  *((_QWORD *)v26 + 1) = HoldingFrameForDevice;
  qword_1C03302F8 = HoldingFrameForDevice;
  return HoldingFrameForDevice;
}
