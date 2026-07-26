/*
 * XREFs of McGenEventWriteKM @ 0x1C003D074
 * Callers:
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 *     McTemplateK0j @ 0x1C00411D8 (McTemplateK0j.c)
 *     McTemplateK0q @ 0x1C0041240 (McTemplateK0q.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     McTemplateK0qx @ 0x1C004131C (McTemplateK0qx.c)
 *     McTemplateK0qxqqq @ 0x1C00413A0 (McTemplateK0qxqqq.c)
 *     McTemplateK0jqxptqq @ 0x1C0043424 (McTemplateK0jqxptqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     McTemplateK0jqb @ 0x1C0049528 (McTemplateK0jqb.c)
 *     McTemplateK0jqxtpp @ 0x1C00495AC (McTemplateK0jqxtpp.c)
 *     McTemplateK0xq @ 0x1C0049664 (McTemplateK0xq.c)
 *     McTemplateK0 @ 0x1C004F148 (McTemplateK0.c)
 *     McTemplateK0qq @ 0x1C004F1A0 (McTemplateK0qq.c)
 *     McTemplateK0qqx @ 0x1C004F214 (McTemplateK0qqx.c)
 *     McTemplateK0qxq @ 0x1C004F298 (McTemplateK0qxq.c)
 *     McTemplateK0qzz @ 0x1C004F31C (McTemplateK0qzz.c)
 *     McTemplateK0x @ 0x1C004F404 (McTemplateK0x.c)
 *     McTemplateK0pp @ 0x1C0054478 (McTemplateK0pp.c)
 *     McTemplateK0zq @ 0x1C00586C4 (McTemplateK0zq.c)
 *     McTemplateK0jqxz @ 0x1C005C040 (McTemplateK0jqxz.c)
 *     McTemplateK0jqxzqqQR5 @ 0x1C005D4EC (McTemplateK0jqxzqqQR5.c)
 *     McTemplateK0jqxb @ 0x1C005E3B8 (McTemplateK0jqxb.c)
 *     McTemplateK0jqxzqq @ 0x1C005E450 (McTemplateK0jqxzqq.c)
 *     McTemplateK0z @ 0x1C0061EC8 (McTemplateK0z.c)
 *     McTemplateK0jqx @ 0x1C0065DD8 (McTemplateK0jqx.c)
 *     McTemplateK0jqxqqt @ 0x1C0065E50 (McTemplateK0jqxqqt.c)
 *     McTemplateK0jqxzq @ 0x1C0065F08 (McTemplateK0jqxzq.c)
 *     McTemplateK0qqqqqqqq @ 0x1C0069A68 (McTemplateK0qqqqqqqq.c)
 *     McTemplateK0cjjp @ 0x1C007540C (McTemplateK0cjjp.c)
 *     McTemplateK0cjqzr2jx @ 0x1C00754AC (McTemplateK0cjqzr2jx.c)
 *     McTemplateK0qxxq @ 0x1C007556C (McTemplateK0qxxq.c)
 *     McTemplateK0qxzzxxxxxx @ 0x1C007560C (McTemplateK0qxzzxxxxxx.c)
 *     McTemplateK0xqq @ 0x1C0075778 (McTemplateK0xqq.c)
 *     McTemplateK0xqqq @ 0x1C00757FC (McTemplateK0xqqq.c)
 *     McTemplateK0xqx @ 0x1C0075894 (McTemplateK0xqx.c)
 *     McTemplateK0jcqjzzz @ 0x1C0075DE0 (McTemplateK0jcqjzzz.c)
 *     McTemplateK0jqxjqxqq @ 0x1C0075F34 (McTemplateK0jqxjqxqq.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWriteKM(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        _EVENT_DATA_DESCRIPTOR *a5)
{
  unsigned __int16 *v5; // r11
  char v6; // di
  _EVENT_DATA_DESCRIPTOR *UserData; // rdx
  EVENT_DESCRIPTOR v9; // xmm0
  EVENT_DESCRIPTOR v11; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    UserData = a5;
    a5->Ptr = (unsigned __int64)v5;
    a5->Size = *v5;
    a5->Reserved = 2;
  }
  else
  {
    --a4;
    v6 = 12;
    UserData = (_EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&a5[1] & -(__int64)(a4 != 0));
  }
  if ( a2->Channel == v6 )
  {
    v9 = *a2;
    a2 = &v11;
    v11 = v9;
    v11.Channel = v5 != 0LL ? 0xC : 0;
  }
  return EtwWrite(*a1, a2, a3, a4, UserData);
}
