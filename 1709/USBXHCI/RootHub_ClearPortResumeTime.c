/*
 * XREFs of RootHub_ClearPortResumeTime @ 0x1C001F7EC
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x1C0035E30 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ClearPortResumeTime(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 48);
  v4 = (unsigned __int64)(unsigned int)(a2 - 1) << 6;
  DynamicLock_Acquire(*(_QWORD *)(v4 + v2 + 16));
  --*(_DWORD *)(v4 + v2 + 48);
  return DynamicLock_Release(*(_QWORD *)(v4 + *(_QWORD *)(a1 + 48) + 16));
}
