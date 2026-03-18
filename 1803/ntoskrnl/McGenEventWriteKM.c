/*
 * XREFs of McGenEventWriteKM @ 0x14014761C
 * Callers:
 *     McTemplateK0zzjzzzqq @ 0x1401471B0 (McTemplateK0zzjzzzqq.c)
 *     McTemplateK0zzjzzztzqzztqz @ 0x140147358 (McTemplateK0zzjzzztzqzztqz.c)
 *     McTemplateK0z @ 0x1401857E8 (McTemplateK0z.c)
 *     McTemplateK0jq @ 0x140225E10 (McTemplateK0jq.c)
 *     McTemplateK0xxxqq @ 0x140225E88 (McTemplateK0xxxqq.c)
 *     McTemplateK0xxxqqqq @ 0x140225F30 (McTemplateK0xxxqqqq.c)
 *     McTemplateK0qzq @ 0x14023A374 (McTemplateK0qzq.c)
 *     McTemplateK0hzr0 @ 0x14023ABB8 (McTemplateK0hzr0.c)
 *     McTemplateK0hzr0qqhzr4 @ 0x14023AC40 (McTemplateK0hzr0qqhzr4.c)
 *     McTemplateK0j @ 0x14023B648 (McTemplateK0j.c)
 *     McTemplateK0zjqq @ 0x14023B6DC (McTemplateK0zjqq.c)
 *     McTemplateK0p @ 0x14023B79C (McTemplateK0p.c)
 *     McTemplateK0pqzzzzzzz @ 0x14023B800 (McTemplateK0pqzzzzzzz.c)
 *     McTemplateK0zzjzxtq @ 0x14023BB70 (McTemplateK0zzjzxtq.c)
 *     McTemplateK0zq @ 0x14023C3CC (McTemplateK0zq.c)
 *     McTemplateK0zqq @ 0x14023C46C (McTemplateK0zqq.c)
 *     McTemplateK0jzt @ 0x14023D670 (McTemplateK0jzt.c)
 *     McTemplateK0q @ 0x14023D72C (McTemplateK0q.c)
 *     McTemplateK0qz @ 0x14023D790 (McTemplateK0qz.c)
 *     McTemplateK0zzt @ 0x14023D83C (McTemplateK0zzt.c)
 *     McTemplateK0pz @ 0x14023DA3C (McTemplateK0pz.c)
 *     McTemplateK0qhzr1z @ 0x14023DAEC (McTemplateK0qhzr1z.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 */

NTSTATUS __fastcall McGenEventWriteKM(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *ActivityId,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a5)
{
  unsigned __int16 *v5; // r11
  char v7; // di
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdx
  EVENT_DESCRIPTOR v10; // xmm0
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  v5 = (unsigned __int16 *)a1[1];
  if ( v5 )
  {
    UserData = a5;
    v7 = 0;
    a5->Ptr = (ULONGLONG)v5;
    a5->Size = *v5;
    a5->Reserved = 2;
  }
  else
  {
    --UserDataCount;
    v7 = 12;
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&a5[1] & -(__int64)(UserDataCount != 0));
  }
  if ( a2->Channel == v7 )
  {
    v10 = *a2;
    a2 = &v11;
    v11 = v10;
    v11.Channel = v5 != 0LL ? 0xC : 0;
  }
  return EtwWriteEx(*a1, a2, 0LL, 0, ActivityId, 0LL, UserDataCount, UserData);
}
