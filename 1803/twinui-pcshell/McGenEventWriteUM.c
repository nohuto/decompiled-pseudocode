/*
 * XREFs of McGenEventWriteUM @ 0x18001F258
 * Callers:
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     McTemplateU0zqtq @ 0x18001F1A0 (McTemplateU0zqtq.c)
 *     McTemplateU0qq @ 0x180060F5C (McTemplateU0qq.c)
 *     McTemplateU0q @ 0x1800610F8 (McTemplateU0q.c)
 *     McTemplateU0dz @ 0x18008F814 (McTemplateU0dz.c)
 *     McTemplateU0pqztp @ 0x1800950B0 (McTemplateU0pqztp.c)
 *     McTemplateU0dddd @ 0x180118C78 (McTemplateU0dddd.c)
 *     McTemplateU0zzz @ 0x1802B2FA4 (McTemplateU0zzz.c)
 *     McTemplateU0zzzq @ 0x1802B309C (McTemplateU0zzzq.c)
 *     McTemplateU0ddz @ 0x1802F75F8 (McTemplateU0ddz.c)
 *     McTemplateU0qdddd @ 0x1802F7674 (McTemplateU0qdddd.c)
 *     McTemplateU0sqq @ 0x1802FB658 (McTemplateU0sqq.c)
 *     McTemplateU0z @ 0x1802FC248 (McTemplateU0z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWriteUM(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        ULONG a3,
        struct _EVENT_DATA_DESCRIPTOR *a4)
{
  unsigned __int16 *v4; // r11
  char v5; // bl
  struct _EVENT_DATA_DESCRIPTOR *v6; // r10
  EVENT_DESCRIPTOR v8; // xmm0
  EVENT_DESCRIPTOR v9; // [rsp+20h] [rbp-18h] BYREF

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
  if ( a2->Channel == v5 )
  {
    v8 = *a2;
    a2 = &v9;
    v9 = v8;
    v9.Channel = v4 != 0LL ? 0xC : 0;
  }
  return EventWrite(*a1, a2, a3, v6);
}
