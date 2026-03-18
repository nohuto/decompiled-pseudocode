/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00C81B8
 * Callers:
 *     PostDeviceNotification @ 0x1C00C7F8C (PostDeviceNotification.c)
 * Callees:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 */

__int64 __fastcall PostHidNotification(struct tagPROCESS_HID_REQUEST *a1, struct DEVICEINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx

  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( !v3 || (*((_DWORD *)a1 + 5) & 4) == 0 || *(char *)(v3 + 60) < 0 || *(char *)(v3 + 59) < 0 )
    return 1LL;
  LOBYTE(v2) = (unsigned int)PostInputMessage(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 408LL), v3, 0xFEu) != 0;
  return v2;
}
