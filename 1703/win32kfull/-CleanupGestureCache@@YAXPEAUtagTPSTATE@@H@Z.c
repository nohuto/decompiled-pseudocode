/*
 * XREFs of ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01AA710
 * Callers:
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C019A540 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AA438 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AA7D8 (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01AB3F0 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     FreePointerRawDataList @ 0x1C019ABBC (FreePointerRawDataList.c)
 */

void __fastcall CleanupGestureCache(struct tagTPSTATE *a1)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rcx

  v2 = (_QWORD *)((char *)a1 + 1672);
  if ( *v2 )
  {
    HMAssignmentUnlock(v2);
    *((_DWORD *)a1 + 480) &= ~0x1000000u;
    *((_DWORD *)a1 + 481) = 0;
  }
  v3 = (_DWORD *)((char *)a1 + 264);
  v4 = 6LL;
  do
  {
    *v3 &= ~0x40u;
    v3 += 68;
    --v4;
  }
  while ( v4 );
  *((_DWORD *)a1 + 480) &= ~0x400u;
  v5 = *((_QWORD *)a1 + 239);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 88);
    if ( v6 )
      Win32FreePool(v6);
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 239) + 96LL);
    if ( v7 )
      Win32FreePool(v7);
    v8 = (_QWORD *)(*((_QWORD *)a1 + 239) + 104LL);
    if ( *v8 )
      HMAssignmentUnlock(v8);
    FreePointerRawDataList(*(_QWORD *)(*((_QWORD *)a1 + 239) + 80LL));
    Win32FreePool(*((_QWORD *)a1 + 239));
    *((_QWORD *)a1 + 239) = 0LL;
  }
}
