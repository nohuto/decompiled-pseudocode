/*
 * XREFs of McGenEventWriteKM @ 0x1C000D034
 * Callers:
 *     McTemplateK0pqqqqqqqsssxqqqtcctqqqqtxxqqqqq @ 0x1C0002554 (McTemplateK0pqqqqqqqsssxqqqtcctqqqqtxxqqqqq.c)
 *     McTemplateK0p @ 0x1C000D0C0 (McTemplateK0p.c)
 *     McTemplateK0pjqq @ 0x1C000D120 (McTemplateK0pjqq.c)
 *     McTemplateK0pppxsbb @ 0x1C000D1BC (McTemplateK0pppxsbb.c)
 *     McTemplateK0pptqqqq @ 0x1C000D2A0 (McTemplateK0pptqqqq.c)
 *     McTemplateK0pq @ 0x1C000D364 (McTemplateK0pq.c)
 *     McTemplateK0pqqh @ 0x1C000D3D8 (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C000D46C (McTemplateK0pqqq.c)
 *     McTemplateK0pt @ 0x1C000D500 (McTemplateK0pt.c)
 *     McTemplateK0ptqqp @ 0x1C000D57C (McTemplateK0ptqqp.c)
 *     McTemplateK0q @ 0x1C0017FEC (McTemplateK0q.c)
 *     McTemplateK0cqq @ 0x1C002454C (McTemplateK0cqq.c)
 *     McTemplateK0cqqq @ 0x1C00245CC (McTemplateK0cqqq.c)
 *     McTemplateK0 @ 0x1C00368A4 (McTemplateK0.c)
 *     McTemplateK0ppb @ 0x1C00368E4 (McTemplateK0ppb.c)
 *     McTemplateK0ppbc @ 0x1C003696C (McTemplateK0ppbc.c)
 *     McTemplateK0ppbqc @ 0x1C0036A08 (McTemplateK0ppbqc.c)
 *     McTemplateK0pppnnn @ 0x1C0036AAC (McTemplateK0pppnnn.c)
 *     McTemplateK0pppqqQ6qqqqn @ 0x1C0036B58 (McTemplateK0pppqqQ6qqqqn.c)
 *     McTemplateK0pqqqqqqqsssxqqqt @ 0x1C0036C64 (McTemplateK0pqqqqqqqsssxqqqt.c)
 *     McTemplateK0pqzr1q @ 0x1C0036E68 (McTemplateK0pqzr1q.c)
 *     McTemplateK0qqqq @ 0x1C003DF80 (McTemplateK0qqqq.c)
 *     McTemplateK0qqx @ 0x1C003E018 (McTemplateK0qqx.c)
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

  v5 = (unsigned __int16 *)qword_1C004B478;
  v6 = 0;
  if ( qword_1C004B478 )
  {
    UserData = a5;
    a5->Ptr = qword_1C004B478;
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
  return EtwWrite(MS_USBXHCI_ETW_PROVIDER_Context, a2, a3, a4, UserData);
}
