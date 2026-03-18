/*
 * XREFs of McGenEventWriteKM @ 0x1C00011C4
 * Callers:
 *     McTemplateK0 @ 0x1C00012B0 (McTemplateK0.c)
 *     McTemplateK0pnq @ 0x1C00012F0 (McTemplateK0pnq.c)
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     McTemplateK0ppqzznhCR6zcqQ6qqqqqqqqqsssccx @ 0x1C00013DC (McTemplateK0ppqzznhCR6zcqQ6qqqqqqqqqsssccx.c)
 *     McTemplateK0pqccxqqqqqqqsss @ 0x1C0001774 (McTemplateK0pqccxqqqqqqqsss.c)
 *     McTemplateK0pqn @ 0x1C0001968 (McTemplateK0pqn.c)
 *     McTemplateK0pqhh @ 0x1C0001BDC (McTemplateK0pqhh.c)
 *     McTemplateK0qhhhqhhh @ 0x1C0001C70 (McTemplateK0qhhhqhhh.c)
 *     McTemplateK0pqqq @ 0x1C0001D48 (McTemplateK0pqqq.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     McTemplateK0ppqqqq @ 0x1C0008B7C (McTemplateK0ppqqqq.c)
 *     McTemplateK0pqqh @ 0x1C000A75C (McTemplateK0pqqh.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     McTemplateK0ppqq @ 0x1C0010AE4 (McTemplateK0ppqq.c)
 *     McTemplateK0ppn @ 0x1C0010B74 (McTemplateK0ppn.c)
 *     McTemplateK0pqqhhhq @ 0x1C0010BF4 (McTemplateK0pqqhhhq.c)
 *     McTemplateK0pjq @ 0x1C0010CB8 (McTemplateK0pjq.c)
 *     McTemplateK0pqhhh @ 0x1C0010D38 (McTemplateK0pqhhh.c)
 *     McTemplateK0pcchz @ 0x1C0022138 (McTemplateK0pcchz.c)
 *     McTemplateK0phczc @ 0x1C0022210 (McTemplateK0phczc.c)
 *     McTemplateK0psqzq @ 0x1C00260D0 (McTemplateK0psqzq.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWriteKM(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *a5)
{
  unsigned __int16 *v5; // r10
  char v6; // bl
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdx
  EVENT_DESCRIPTOR v9; // xmm0
  EVENT_DESCRIPTOR v11; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned __int16 *)qword_1C005B158;
  v6 = 0;
  if ( qword_1C005B158 )
  {
    UserData = a5;
    a5->Ptr = qword_1C005B158;
    a5->Size = *v5;
    a5->Reserved = 2;
  }
  else
  {
    --a4;
    v6 = 12;
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&a5[1] & -(__int64)(a4 != 0));
  }
  if ( a2->Channel == v6 )
  {
    v9 = *a2;
    a2 = &v11;
    v11 = v9;
    v11.Channel = v5 != 0LL ? 0xC : 0;
  }
  return EtwWrite(MS_USBHUB3_ETW_PROVIDER_Context, a2, a3, a4, UserData);
}
