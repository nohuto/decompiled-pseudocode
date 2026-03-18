/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C00960DC
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0109528 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00906DC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0090700 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 */

_WORD *__fastcall RIMAllocateAndLinkHidTLCInfo(__int64 a1, __int16 a2, __int16 a3)
{
  _WORD *v5; // rax
  int v6; // edx
  _WORD *v7; // rbx
  _WORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v12,
    (struct _KTHREAD **)&gTLCInfoLock);
  v5 = Win32AllocPoolZInit(0x30uLL, 1886417746LL);
  v7 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    v5[8] = a2;
    v5[9] = a3;
    v9 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *((_QWORD *)v8 + 1) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v8 = v9;
    *(_QWORD *)(v9 + 8) = v8;
    v10 = qword_1C018E7E0;
    RawInputManagerObject::gHidRequestTable = v8;
    while ( (__int64 *)v10 != &qword_1C018E7E0 )
    {
      if ( *(_WORD *)(v10 + 16) == a2 )
      {
        *((_DWORD *)v8 + 7) = *(_DWORD *)(v10 + 20);
        break;
      }
      v10 = *(_QWORD *)v10;
    }
    v7 = v8;
  }
  else
  {
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      18,
      10,
      (__int64)&WPP_bf8c20d24c6d360276f53d429d2f3e3d_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v12);
  return v7;
}
