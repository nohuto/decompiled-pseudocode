/*
 * XREFs of CopyTPPointerInputFrame @ 0x1C019A718
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AA438 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AA7D8 (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C019815C (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C0198F30 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 */

_QWORD *__fastcall CopyTPPointerInputFrame(struct tagPOINTERINPUTFRAME *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned int v8; // ecx
  void *v9; // rcx
  struct tagPOINTERQFRAME *v10; // rax
  struct tagPOINTERRAWDATA *v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = Win32AllocPoolZInit(112LL, 1718645589LL);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v6 = v4 + 104;
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
    v7 = *((unsigned int *)a1 + 10);
    if ( (_DWORD)v7 && (v8 = 216 * v7, (unsigned __int64)(216 * v7) <= 0xFFFFFFFF) && v8 )
      v9 = (void *)Win32AllocPoolZInit(v8, 1701868373LL);
    else
      v9 = 0LL;
    v5[11] = v9;
    if ( v9 )
    {
      memmove(v9, *((const void **)a1 + 11), 216LL * *((unsigned int *)a1 + 10));
      v10 = AllocPointerQFrameList(*((_DWORD *)a1 + 10));
      v5[12] = v10;
      if ( v10 )
      {
        memmove(v10, *((const void **)a1 + 12), 40LL * *((unsigned int *)a1 + 10));
        if ( !*((_QWORD *)a1 + 10) || (v11 = CopyRawDataList(a1), (v5[10] = v11) != 0LL) )
        {
          v15[0] = v6;
          v15[1] = *(_QWORD *)(HMValidateHandleNoSecure(a2, 19) + 472);
          HMAssignmentLock(v15);
          return v5;
        }
      }
    }
    v13 = v5[11];
    if ( v13 )
      Win32FreePool(v13);
    v14 = v5[12];
    if ( v14 )
      Win32FreePool(v14);
    Win32FreePool(v5);
  }
  return 0LL;
}
