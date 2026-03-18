/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C0081368
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00322E4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C0081450 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        enum _EVENT_TYPE a1,
        int a2,
        struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v4; // rax
  unsigned int v5; // edx
  DirectComposition::CEvent *v6; // rdi
  NTSTATUS v7; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *EventHandle; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 )
    v4 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76654344u);
  else
    v4 = (DirectComposition::CEvent *)Win32AllocPoolZInit(0x10uLL, 1986347844LL);
  v6 = v4;
  v7 = v4 == 0LL ? 0xC0000017 : 0;
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
