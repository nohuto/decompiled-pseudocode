/*
 * XREFs of Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C003CC48
 * Callers:
 *     Crashdump_Cleanup @ 0x1C0038D30 (Crashdump_Cleanup.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C001917C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C00191C8 (Endpoint_GetMaxPrimaryStreams.c)
 *     Crashdump_Command_SendCommand @ 0x1C003B7F4 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ConfigureEndpointsForSaveState(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // r11
  __int64 DequeuePointer; // rax
  int v7; // edx
  int v8; // r10d
  __int64 v9; // r11
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v2 = -1073741823;
  v3 = 1;
  v4 = 176LL;
  do
  {
    v5 = *(_QWORD *)(v4 + *(_QWORD *)(a1 + 24));
    if ( *(_QWORD *)(v4 + a1 - 56) )
    {
      v12 = 0LL;
      DequeuePointer = Endpoint_GetDequeuePointer(v5, 1);
      v7 = *(unsigned __int8 *)(a1 + 56);
      v11 = DequeuePointer;
      HIDWORD(v12) = v8 & 0xE0FFFF | ((v3 & 0x1F | (v7 << 8)) << 16);
      if ( (unsigned int)Endpoint_GetMaxPrimaryStreams(v9) )
        LODWORD(v12) = (unsigned __int16)v12 | 0x10000;
      v2 = Crashdump_Command_SendCommand(*(_QWORD *)(a1 + 16), (__int64)&v11, 0LL);
      if ( v2 < 0 )
        break;
    }
    ++v3;
    v4 += 8LL;
  }
  while ( v3 < 0x20 );
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpointsForSaveState: end 0x%X\n", v2);
  return (unsigned int)v2;
}
