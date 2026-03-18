/*
 * XREFs of CopyTPPointerInputFrame @ 0x1C01A6348
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AD764 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01ADB8C (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C01A3CFC (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A4A90 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 */

_QWORD *__fastcall CopyTPPointerInputFrame(struct tagPOINTERINPUTFRAME *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned int v10; // ecx
  void *v11; // rcx
  struct tagPOINTERQFRAME *v12; // rax
  __int64 v13; // r9
  struct tagPOINTERRAWDATA *v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = Win32AllocPoolZInit(112LL, 1718645589LL);
  v7 = (_QWORD *)v4;
  if ( v4 )
  {
    v8 = v4 + 104;
    *(_OWORD *)v4 = *(_OWORD *)a1;
    *(_OWORD *)(v4 + 16) = *((_OWORD *)a1 + 1);
    *(_OWORD *)(v4 + 32) = *((_OWORD *)a1 + 2);
    *(_OWORD *)(v4 + 48) = *((_OWORD *)a1 + 3);
    *(_OWORD *)(v4 + 64) = *((_OWORD *)a1 + 4);
    *(_OWORD *)(v4 + 80) = *((_OWORD *)a1 + 5);
    *(_OWORD *)(v4 + 96) = *((_OWORD *)a1 + 6);
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
    v9 = *((unsigned int *)a1 + 10);
    if ( (_DWORD)v9 && (v10 = 216 * v9, v5 = 0xFFFFFFFFLL, (unsigned __int64)(216 * v9) <= 0xFFFFFFFF) && v10 )
      v11 = (void *)Win32AllocPoolZInit(v10, 1701868373LL);
    else
      v11 = 0LL;
    v7[11] = v11;
    if ( v11 )
    {
      memmove(v11, *((const void **)a1 + 11), 216LL * *((unsigned int *)a1 + 10));
      v12 = AllocPointerQFrameList(*((_DWORD *)a1 + 10));
      v7[12] = v12;
      if ( v12 )
      {
        memmove(v12, *((const void **)a1 + 12), 40LL * *((unsigned int *)a1 + 10));
        if ( !*((_QWORD *)a1 + 10) || (v14 = CopyRawDataList(a1), (v7[10] = v14) != 0LL) )
        {
          LOBYTE(v5) = 19;
          v18[0] = v8;
          v18[1] = *(_QWORD *)(HMValidateHandleNoSecure(a2, v5, v6, v13) + 472);
          HMAssignmentLock(v18);
          return v7;
        }
      }
    }
    v16 = v7[11];
    if ( v16 )
      Win32FreePool(v16, v5, v6);
    v17 = v7[12];
    if ( v17 )
      Win32FreePool(v17, v5, v6);
    Win32FreePool(v7, v5, v6);
  }
  return 0LL;
}
