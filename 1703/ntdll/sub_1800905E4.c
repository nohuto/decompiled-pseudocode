/*
 * XREFs of sub_1800905E4 @ 0x1800905E4
 * Callers:
 *     sub_18005032C @ 0x18005032C (sub_18005032C.c)
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 *     sub_180089798 @ 0x180089798 (sub_180089798.c)
 *     sub_1800D65C8 @ 0x1800D65C8 (sub_1800D65C8.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18005F4F0 (EtwEventWriteTransfer.c)
 */

ULONG __fastcall sub_1800905E4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)a2 - (unsigned int)&unk_1801240B0) | (*a2 << 24);
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
