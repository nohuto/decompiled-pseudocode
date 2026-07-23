/*
 * XREFs of ShipAssert @ 0x1800DE830
 * Callers:
 *     ShipAssertMsgW @ 0x1800DE980 (ShipAssertMsgW.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800DE6C4 @ 0x1800DE6C4 (sub_1800DE6C4.c)
 *     WerReportSQMEvent @ 0x1800DEE50 (WerReportSQMEvent.c)
 */

__int64 __fastcall ShipAssert(int a1, int a2)
{
  struct _TEB *v4; // rbx
  ULONG LastErrorValue; // edi
  __int64 result; // rax
  _DWORD *v7; // rax
  unsigned int v8; // ecx
  _DWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = NtCurrentTeb();
  LastErrorValue = v4->LastErrorValue;
  result = v4->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v4->SameTebFlags = result | 0x10;
    v7 = sub_1800DE6C4();
    if ( v7 && v7 != (_DWORD *)255 && v7 != (_DWORD *)238 )
    {
      v8 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_180158DF0, 1u) + 1) & 0x3FF;
      v7[2 * v8] = a1;
      v7[2 * v8 + 1] = a2;
    }
    v9[0] = a1;
    v9[1] = a2;
    v9[2] = 0;
    WerReportSQMEvent(1LL, v9, 3LL);
    result = 65519LL;
    v4->SameTebFlags &= ~0x10u;
    v4->LastErrorValue = LastErrorValue;
  }
  return result;
}
