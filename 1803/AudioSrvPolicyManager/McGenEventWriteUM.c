/*
 * XREFs of McGenEventWriteUM @ 0x1800101BC
 * Callers:
 *     McTemplateU0zq @ 0x18001022C (McTemplateU0zq.c)
 *     McTemplateU0zqq @ 0x180027FB8 (McTemplateU0zqq.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWriteUM(
        __int64 a1,
        EVENT_DESCRIPTOR *p_EventDescriptor,
        ULONG a3,
        struct _EVENT_DATA_DESCRIPTOR *a4)
{
  unsigned __int16 *v4; // r10
  char v5; // r11
  EVENT_DESCRIPTOR v6; // xmm0
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16 *)qword_18004E058;
  v5 = 0;
  if ( qword_18004E058 )
  {
    a4->Ptr = qword_18004E058;
    a4->Size = *v4;
    a4->Reserved = 2;
  }
  else
  {
    --a3;
    v5 = 12;
    a4 = (struct _EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&a4[1] & -(__int64)(a3 != 0));
  }
  if ( p_EventDescriptor->Channel == v5 )
  {
    v6 = *p_EventDescriptor;
    p_EventDescriptor = &EventDescriptor;
    EventDescriptor = v6;
    EventDescriptor.Channel = v4 != 0LL ? 0xC : 0;
  }
  return EventWrite(AUDIO_EVENT_PROVIDER_Context, p_EventDescriptor, a3, a4);
}
