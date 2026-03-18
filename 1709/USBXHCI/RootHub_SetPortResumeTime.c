/*
 * XREFs of RootHub_SetPortResumeTime @ 0x1C0020858
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C00373D4 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_SetPortResumeTime(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  v5 = (unsigned __int64)(unsigned int)(a2 - 1) << 6;
  DynamicLock_Acquire(*(_QWORD *)(v5 + v3 + 16));
  ++*(_DWORD *)(v5 + v3 + 48);
  *(_WORD *)(v5 + v3 + 52) = a3;
  return DynamicLock_Release(*(_QWORD *)(v5 + *(_QWORD *)(a1 + 48) + 16));
}
