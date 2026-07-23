/*
 * XREFs of sub_1800886A4 @ 0x1800886A4
 * Callers:
 *     sub_18007A164 @ 0x18007A164 (sub_18007A164.c)
 *     sub_18007A318 @ 0x18007A318 (sub_18007A318.c)
 *     sub_18007D594 @ 0x18007D594 (sub_18007D594.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 *     sub_1800CC088 @ 0x1800CC088 (sub_1800CC088.c)
 *     sub_1800CC2EC @ 0x1800CC2EC (sub_1800CC2EC.c)
 *     sub_1801022B8 @ 0x1801022B8 (sub_1801022B8.c)
 *     sub_18010230C @ 0x18010230C (sub_18010230C.c)
 *     sub_180102360 @ 0x180102360 (sub_180102360.c)
 *     sub_180102438 @ 0x180102438 (sub_180102438.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x180007440 (EtwEventWriteTransfer.c)
 */

ULONG __fastcall sub_1800886A4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)a2 - (unsigned int)&unk_1801236D0) | (*a2 << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  *(_QWORD *)UserData = *(_QWORD *)(a1 + 8);
  v7 = **(unsigned __int16 **)(a1 + 8);
  *((_QWORD *)UserData + 2) = a2 + 11;
  *((_DWORD *)UserData + 2) = v7;
  *((_DWORD *)UserData + 3) = 2;
  *((_DWORD *)UserData + 6) = *(unsigned __int16 *)(a2 + 11);
  *((_DWORD *)UserData + 7) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, UserDataCount, UserData);
}
