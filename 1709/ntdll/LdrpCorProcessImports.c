/*
 * XREFs of LdrpCorProcessImports @ 0x1800877D4
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpSendDllNotifications @ 0x180021068 (LdrpSendDllNotifications.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     AVrfDllLoadNotification @ 0x180087838 (AVrfDllLoadNotification.c)
 */

__int64 __fastcall LdrpCorProcessImports(__int64 a1)
{
  int Notification; // edi

  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 6;
  Notification = AVrfDllLoadNotification(a1);
  if ( Notification >= 0 )
  {
    LdrpSendDllNotifications(a1, 1u);
    LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 7;
  }
  return (unsigned int)Notification;
}
