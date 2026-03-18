/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C00013E8
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000BC94 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00014C8 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        enum _EVENT_TYPE a1,
        int a2,
        struct DirectComposition::CEvent **a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  DirectComposition::CEvent *v6; // rdi
  NTSTATUS v7; // ebx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *EventHandle; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 )
    v4 = Win32AllocPoolWithQuotaZInit(0x10uLL);
  else
    v4 = Win32AllocPoolZInit(0x10uLL);
  v6 = (DirectComposition::CEvent *)v4;
  v7 = v4 == 0 ? 0xC0000017 : 0;
  if ( v4 )
  {
    EventHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v7 < 0 )
      goto LABEL_10;
    v7 = DirectComposition::CEvent::Initialize(v6, EventHandle, 1);
    ObCloseHandle(EventHandle, 0);
  }
  if ( v7 >= 0 )
  {
    *a3 = v6;
    return (unsigned int)v7;
  }
LABEL_10:
  if ( v6 )
    DirectComposition::CEvent::`scalar deleting destructor'(v6, v5);
  return (unsigned int)v7;
}
