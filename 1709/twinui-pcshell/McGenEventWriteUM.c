/*
 * XREFs of McGenEventWriteUM @ 0x180025C48
 * Callers:
 *     McTemplateU0 @ 0x180025CB8 (McTemplateU0.c)
 *     McTemplateU0dddd @ 0x180034C0C (McTemplateU0dddd.c)
 *     McTemplateU0qq @ 0x180034C9C (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x180034D08 (McTemplateU0q.c)
 *     McTemplateU0pqztp @ 0x18006100C (McTemplateU0pqztp.c)
 *     McTemplateU0zqtq @ 0x180061D64 (McTemplateU0zqtq.c)
 *     McTemplateU0dz @ 0x18006737C (McTemplateU0dz.c)
 *     McTemplateU0sqq @ 0x1801BE404 (McTemplateU0sqq.c)
 *     McTemplateU0z @ 0x1801BF534 (McTemplateU0z.c)
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
