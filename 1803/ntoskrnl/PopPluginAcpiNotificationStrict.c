/*
 * XREFs of PopPluginAcpiNotificationStrict @ 0x140283B00
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140282BF4 (PopFxAcpiDispatchNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x140282F48 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x140283060 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x140283158 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginAcpiNotificationStrict(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4)
{
  unsigned int v4; // edi
  __int64 result; // rax

  v4 = BugCheckParameter2;
  result = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(BugCheckParameter3 + 112))(
             (unsigned int)BugCheckParameter2,
             BugCheckParameter4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x668uLL, v4, BugCheckParameter3, BugCheckParameter4);
  return result;
}
