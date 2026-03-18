/*
 * XREFs of HoldRimCompleteFrame @ 0x1C01A68DC
 * Callers:
 *     ProcessTouchInputViaRim @ 0x1C01B4144 (ProcessTouchInputViaRim.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01A616C (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     FindHoldingFrameForDevice @ 0x1C01A67E8 (FindHoldingFrameForDevice.c)
 *     InitTouchpadState @ 0x1C01B4038 (InitTouchpadState.c)
 *     IsTouchpadDevice @ 0x1C01B410C (IsTouchpadDevice.c)
 */

struct tagPOINTERHOLDINGFRAME *__fastcall HoldRimCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  struct tagTPSTATE *v13; // rax
  __int64 v14; // rdx
  struct tagHID_POINTER_DEVICE_INFO *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v19; // r8
  unsigned int v20; // r11d
  _OWORD *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // r8
  void *v31; // rax
  struct tagPOINTERHOLDINGFRAME *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned int v38; // r11d
  _DWORD *v39; // r8
  _OWORD *v40; // rbp
  __int64 v41; // rax
  _OWORD *v42; // rcx
  __int128 v43; // xmm1
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // r14
  __int64 v48; // rdi
  __int64 v49; // rsi
  void *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rsi
  _QWORD v54[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v55; // [rsp+50h] [rbp+8h] BYREF

  v55 = 0LL;
  LOBYTE(a3) = *(_DWORD *)(a1 + 48) == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(*(_QWORD *)(a1 + 32), 3LL, a3, &v55) < 0 )
    return 0LL;
  v4 = (_QWORD *)(v55 + 64);
  if ( v55 != -64 )
    v4 = (_QWORD *)*v4;
  RawInputManagerDeviceObjectDereference();
  HoldingFrameForDevice = FindHoldingFrameForDevice((__int64)v4);
  if ( HoldingFrameForDevice )
  {
    if ( *((_DWORD *)HoldingFrameForDevice + 8) != *(_DWORD *)(a1 + 24) )
    {
      v36 = *((_QWORD *)HoldingFrameForDevice + 8);
      if ( v36 )
      {
        Win32FreePool(v36, v5, v7);
        *((_QWORD *)HoldingFrameForDevice + 8) = 0LL;
      }
      v37 = 216LL * *(unsigned int *)(a1 + 24);
      v5 = 0xFFFFFFFFLL;
      if ( v37 <= 0xFFFFFFFF )
        *((_QWORD *)HoldingFrameForDevice + 8) = Win32AllocPoolZInit((unsigned int)v37, 1701868373LL);
      if ( !*((_QWORD *)HoldingFrameForDevice + 8) )
        goto LABEL_44;
      *((_DWORD *)HoldingFrameForDevice + 8) = *(_DWORD *)(a1 + 24);
    }
    v38 = 0;
    *((_QWORD *)HoldingFrameForDevice + 3) = *(_QWORD *)(a1 + 40);
    v39 = *(_DWORD **)(a1 + 88);
    if ( *(_DWORD *)(a1 + 24) )
    {
      v40 = v39 + 2;
      do
      {
        v41 = v38++;
        v5 = 216 * v41;
        LODWORD(v41) = *v39;
        v39 += 42;
        *(_DWORD *)(v5 + *((_QWORD *)HoldingFrameForDevice + 8) + 44) = v41;
        v42 = (_OWORD *)(v5 + *((_QWORD *)HoldingFrameForDevice + 8));
        v42[3] = *v40;
        v42[4] = v40[1];
        v42[5] = v40[2];
        v42[6] = v40[3];
        v42[7] = v40[4];
        v42[8] = v40[5];
        v42[9] = v40[6];
        v42[10] = v40[7];
        v42[11] = v40[8];
        v43 = v40[9];
        v40 = (_OWORD *)((char *)v40 + 168);
        v42[12] = v43;
        *(_QWORD *)(v5 + *((_QWORD *)HoldingFrameForDevice + 8) + 72) = v4;
      }
      while ( v38 < *(_DWORD *)(a1 + 24) );
    }
    v44 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v44 )
    {
      v45 = *(_QWORD *)(v44 + 16);
      v46 = v44;
      if ( v45 )
        Win32FreePool(v45, v5, v39);
      v44 = *(_QWORD *)(v44 + 24);
      Win32FreePool(v46, v5, v39);
    }
    *((_QWORD *)HoldingFrameForDevice + 6) = 0LL;
    v47 = 0LL;
    *((_QWORD *)HoldingFrameForDevice + 7) = 0LL;
    *((_DWORD *)HoldingFrameForDevice + 10) = *(_DWORD *)(a1 + 28);
    v48 = *(_QWORD *)(a1 + 80);
    if ( !v48 )
      return HoldingFrameForDevice;
    while ( 1 )
    {
      v49 = Win32AllocPoolZInit(32LL, 1685222229LL);
      if ( !v49 )
        break;
      v50 = (void *)Win32AllocPool(*(unsigned int *)(v48 + 4), 1685222229LL);
      *(_QWORD *)(v49 + 16) = v50;
      if ( !v50 )
        break;
      *(_DWORD *)(v49 + 4) = *(_DWORD *)v48;
      *(_DWORD *)(v49 + 8) = *(_DWORD *)(v48 + 4);
      memmove(v50, *(const void **)(v48 + 8), *(unsigned int *)(v48 + 4));
      if ( v47 )
        *(_QWORD *)(v47 + 24) = v49;
      else
        *((_QWORD *)HoldingFrameForDevice + 6) = v49;
      v48 = *(_QWORD *)(v48 + 16);
      v47 = v49;
      if ( !v48 )
      {
        *((_QWORD *)HoldingFrameForDevice + 7) = v49;
        return HoldingFrameForDevice;
      }
    }
    v51 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v51 )
    {
      v52 = *(_QWORD *)(v51 + 16);
      v53 = v51;
      if ( v52 )
        Win32FreePool(v52, v5, v7);
      v51 = *(_QWORD *)(v51 + 24);
      Win32FreePool(v53, v5, v7);
    }
    *((_QWORD *)HoldingFrameForDevice + 6) = 0LL;
    *((_QWORD *)HoldingFrameForDevice + 7) = 0LL;
LABEL_44:
    UnlinkAndFreeHoldingFrame(HoldingFrameForDevice, v5, v7);
    return 0LL;
  }
  LOBYTE(v5) = 19;
  v9 = HMValidateHandleNoSecure((unsigned __int64)v4, v5, v7, v8);
  HoldingFrameForDevice = (struct tagPOINTERHOLDINGFRAME *)Win32AllocPoolZInit(96LL, 1718645589LL);
  if ( !HoldingFrameForDevice )
    return 0LL;
  if ( (unsigned int)IsTouchpadDevice(v4, v10, v11) )
  {
    v13 = (struct tagTPSTATE *)Win32AllocPoolZInit(2104LL, 1886679893LL);
    if ( !v13 )
    {
LABEL_15:
      Win32FreePool(HoldingFrameForDevice, v14, v12);
      return 0LL;
    }
    *((_QWORD *)HoldingFrameForDevice + 11) = v13;
    v15 = *(struct tagHID_POINTER_DEVICE_INFO **)(v9 + 472);
    if ( v15 )
      InitTouchpadState(v13, v15);
  }
  v16 = 216LL * *(unsigned int *)(a1 + 24);
  v14 = 0xFFFFFFFFLL;
  if ( v16 <= 0xFFFFFFFF )
    *((_QWORD *)HoldingFrameForDevice + 8) = Win32AllocPoolZInit((unsigned int)v16, 1701868373LL);
  if ( !*((_QWORD *)HoldingFrameForDevice + 8) )
  {
LABEL_13:
    v17 = *((_QWORD *)HoldingFrameForDevice + 11);
    if ( v17 )
      Win32FreePool(v17, v14, v12);
    goto LABEL_15;
  }
  v19 = *(_DWORD **)(a1 + 88);
  v20 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v21 = v19 + 2;
    do
    {
      v22 = v20++;
      v23 = 216 * v22;
      LODWORD(v22) = *v19;
      v19 += 42;
      *(_DWORD *)(v23 + *((_QWORD *)HoldingFrameForDevice + 8) + 44) = v22;
      v24 = (_OWORD *)(v23 + *((_QWORD *)HoldingFrameForDevice + 8));
      v24[3] = *v21;
      v24[4] = v21[1];
      v24[5] = v21[2];
      v24[6] = v21[3];
      v24[7] = v21[4];
      v24[8] = v21[5];
      v24[9] = v21[6];
      v24[10] = v21[7];
      v24[11] = v21[8];
      v25 = v21[9];
      v21 = (_OWORD *)((char *)v21 + 168);
      v24[12] = v25;
      *(_QWORD *)(v23 + *((_QWORD *)HoldingFrameForDevice + 8) + 72) = v4;
    }
    while ( v20 < *(_DWORD *)(a1 + 24) );
  }
  v26 = 0LL;
  *((_DWORD *)HoldingFrameForDevice + 8) = *(_DWORD *)(a1 + 24);
  *((_QWORD *)HoldingFrameForDevice + 2) = v4;
  *((_QWORD *)HoldingFrameForDevice + 3) = *(_QWORD *)(a1 + 40);
  *((_DWORD *)HoldingFrameForDevice + 10) = *(_DWORD *)(a1 + 28);
  v27 = *(_QWORD *)(a1 + 80);
  if ( v27 )
  {
    while ( 1 )
    {
      v29 = Win32AllocPoolZInit(32LL, 1685222229LL);
      if ( !v29 )
        break;
      v31 = (void *)Win32AllocPool(*(unsigned int *)(v27 + 4), 1685222229LL);
      *(_QWORD *)(v29 + 16) = v31;
      if ( !v31 )
        break;
      *(_DWORD *)(v29 + 4) = *(_DWORD *)v27;
      *(_DWORD *)(v29 + 8) = *(_DWORD *)(v27 + 4);
      memmove(v31, *(const void **)(v27 + 8), *(unsigned int *)(v27 + 4));
      if ( v26 )
        *(_QWORD *)(v26 + 24) = v29;
      else
        *((_QWORD *)HoldingFrameForDevice + 6) = v29;
      v27 = *(_QWORD *)(v27 + 16);
      v26 = v29;
      if ( !v27 )
      {
        *((_QWORD *)HoldingFrameForDevice + 7) = v29;
        goto LABEL_28;
      }
    }
    v33 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 16);
      v35 = v33;
      if ( v34 )
        Win32FreePool(v34, v28, v30);
      v33 = *(_QWORD *)(v33 + 24);
      Win32FreePool(v35, v28, v30);
    }
    Win32FreePool(*((_QWORD *)HoldingFrameForDevice + 8), v28, v30);
    goto LABEL_13;
  }
LABEL_28:
  v54[0] = (char *)HoldingFrameForDevice + 80;
  v54[1] = *(_QWORD *)(v9 + 472);
  HMAssignmentLock(v54);
  v32 = qword_1C032B7B8;
  if ( *((struct tagPOINTERHOLDINGFRAME ***)qword_1C032B7B8 + 1) != &qword_1C032B7B8 )
    __fastfail(3u);
  *(_QWORD *)HoldingFrameForDevice = qword_1C032B7B8;
  *((_QWORD *)HoldingFrameForDevice + 1) = &qword_1C032B7B8;
  *((_QWORD *)v32 + 1) = HoldingFrameForDevice;
  qword_1C032B7B8 = HoldingFrameForDevice;
  return HoldingFrameForDevice;
}
