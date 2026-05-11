/*
 * XREFs of McGenEventWriteKM @ 0x1C000185C
 * Callers:
 *     McTemplateK0 @ 0x1C0001954 (McTemplateK0.c)
 *     McTemplateK0zq @ 0x1C0001994 (McTemplateK0zq.c)
 *     McTemplateK0q @ 0x1C0001A30 (McTemplateK0q.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWriteKM(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *a5)
{
  unsigned __int16 *v5; // r8
  char v6; // r11
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdx
  EVENT_DESCRIPTOR v9; // xmm0
  EVENT_DESCRIPTOR v11; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned __int16 *)qword_1C000D018;
  v6 = 0;
  if ( qword_1C000D018 )
  {
    UserData = a5;
    a5->Ptr = qword_1C000D018;
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
  return EtwWrite(EXBUSAUD_PROVIDER_Context, a2, 0LL, a4, UserData);
}
