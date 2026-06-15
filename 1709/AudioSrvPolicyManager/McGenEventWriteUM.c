/*
 * XREFs of McGenEventWriteUM @ 0x18000B3A4
 * Callers:
 *     McTemplateU0zq @ 0x18000B414 (McTemplateU0zq.c)
 *     McTemplateU0zqq @ 0x18001EA80 (McTemplateU0zqq.c)
 *     McTemplateU0pt @ 0x180021C20 (McTemplateU0pt.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWriteUM(
        REGHANDLE *a1,
        EVENT_DESCRIPTOR *p_EventDescriptor,
        ULONG a3,
        struct _EVENT_DATA_DESCRIPTOR *a4)
{
  unsigned __int16 *v4; // r11
  char v5; // bl
  struct _EVENT_DATA_DESCRIPTOR *v6; // r10
  EVENT_DESCRIPTOR v7; // xmm0
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16 *)a1[1];
  v5 = 0;
  v6 = a4;
  if ( v4 )
  {
    a4->Ptr = (ULONGLONG)v4;
    a4->Size = *v4;
    a4->Reserved = 2;
  }
  else
  {
    --a3;
    v5 = 12;
    v6 = (struct _EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&a4[1] & -(__int64)(a3 != 0));
  }
  if ( p_EventDescriptor->Channel == v5 )
  {
    v7 = *p_EventDescriptor;
    p_EventDescriptor = &EventDescriptor;
    EventDescriptor = v7;
    EventDescriptor.Channel = v4 != 0LL ? 0xC : 0;
  }
  return EventWrite(*a1, p_EventDescriptor, a3, v6);
}
