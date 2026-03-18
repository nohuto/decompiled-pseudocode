/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00B1960
 * Callers:
 *     PostDeviceNotification @ 0x1C00B173C (PostDeviceNotification.c)
 * Callees:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 */

__int64 __fastcall PostHidNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax

  v5 = 0;
  v6 = *((_QWORD *)a1 + 4);
  if ( !v6 || (*((_DWORD *)a1 + 5) & 4) == 0 || *(char *)(v6 + 60) < 0 || *(char *)(v6 + 59) < 0 )
    return 1LL;
  v7 = 0LL;
  if ( a2 )
    v7 = *(_QWORD *)a2;
  LOBYTE(v5) = (unsigned int)PostInputMessage(
                               *(struct tagMLIST **)(*(_QWORD *)(v6 + 16) + 384LL),
                               (InputTransform *)v6,
                               0xFEu,
                               a4,
                               v7,
                               0,
                               0LL,
                               0LL,
                               0,
                               0LL,
                               0LL,
                               0LL) != 0;
  return v5;
}
