/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C000B420
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0108550 (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C0114A4C (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000C7E8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000C81C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMAllocateAndLinkHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11, (struct RIMLOCK *)&gTLCInfoLock);
  v4 = Win32AllocPoolZInit(0x30uLL);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    *(_WORD *)(v4 + 16) = a1;
    *(_WORD *)(v4 + 18) = a2;
    v8 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *(_QWORD *)(v7 + 8) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    v9 = qword_1C01936A0;
    RawInputManagerObject::gHidRequestTable = v7;
    while ( (__int64 *)v9 != &qword_1C01936A0 )
    {
      if ( *(_WORD *)(v9 + 16) == a1 )
      {
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v9 + 20);
        break;
      }
      v9 = *(_QWORD *)v9;
    }
    v6 = v7;
  }
  else
  {
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      18,
      10,
      (__int64)&WPP_e414603ebdb332c1317e233e5e6d1b0a_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11);
  return v6;
}
