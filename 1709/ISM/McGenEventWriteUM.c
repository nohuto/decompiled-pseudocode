/*
 * XREFs of McGenEventWriteUM @ 0x180001B54
 * Callers:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0qqqq @ 0x180005A78 (McTemplateU0qqqq.c)
 *     McTemplateU0qqqqqqq @ 0x180005B08 (McTemplateU0qqqqqqq.c)
 *     McTemplateU0qqqqq @ 0x180012DA8 (McTemplateU0qqqqq.c)
 *     McTemplateU0qqqqqq @ 0x180012E48 (McTemplateU0qqqqqq.c)
 *     McTemplateU0qq @ 0x180012EF8 (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x180012F64 (McTemplateU0q.c)
 *     McTemplateU0qqffq @ 0x18002BA94 (McTemplateU0qqffq.c)
 *     McTemplateU0p @ 0x18008611C (McTemplateU0p.c)
 *     McTemplateU0sqq @ 0x1800BF55C (McTemplateU0sqq.c)
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
