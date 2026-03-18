/*
 * XREFs of Crashdump_Endpoint_SendControlTransfer @ 0x1C003C0A0
 * Callers:
 *     Crashdump_SendUrb @ 0x1C0039D40 (Crashdump_SendUrb.c)
 *     Crashdump_SendUrbAsync @ 0x1C0039E20 (Crashdump_SendUrbAsync.c)
 *     Crashdump_UsbDevice_ChangePortFeature @ 0x1C003C5BC (Crashdump_UsbDevice_ChangePortFeature.c)
 *     Crashdump_UsbDevice_Configure @ 0x1C003C75C (Crashdump_UsbDevice_Configure.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C003CD3C (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C003CEBC (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C003DAD4 (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C003C28C (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendControlTransfer(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  int v8; // r10d
  __int64 v9; // rdi
  __int64 v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  signed __int32 v22[10]; // [rsp+0h] [rbp-28h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: begin\n");
  v8 = *(unsigned __int8 *)a2 >> 7;
  if ( *(_DWORD *)(a1 + 160) )
  {
    v9 = *(_QWORD *)(a1 + 112);
    v10 = 80LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 88);
    v10 = 104LL;
  }
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 8) = 0LL;
  v11 = 1;
  *(_QWORD *)v9 = *a2;
  *(_DWORD *)(v9 + 8) = *(_DWORD *)(v9 + 8) & 0xFFFE0000 | 8;
  *(_DWORD *)(v9 + 12) = *(_DWORD *)(v9 + 12) & 0xFFFF03BF | 0x840;
  if ( a3 )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    v11 = 2;
    v12 = (v8 << 16) | *(_DWORD *)(v9 + 28) & 0xFFFE0FFF | 0xC00;
    *(_DWORD *)(v9 + 28) = v12;
    *(_QWORD *)(v9 + 16) = *a4;
    *(_DWORD *)(v9 + 24) ^= (a3 ^ *(_DWORD *)(v9 + 24)) & 0x1FFFF;
    *(_DWORD *)(v9 + 28) = v12 | 1;
  }
  v13 = 16LL * v11;
  v14 = v11 + 1;
  v15 = v9 + v13;
  v16 = v9 + 16LL * v14;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  v17 = v9 + 16LL * (v14 + 1);
  *(_DWORD *)(v15 + 12) = *(_DWORD *)(v15 + 12) & 0xFFFE13FF | ((v8 ^ 1) << 16) | 0x1011;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 8) = 0LL;
  LODWORD(v15) = *(_DWORD *)(v16 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v16 + 12) = v15;
  v18 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v16 + 8) &= 0x3FFFFFu;
  *(_DWORD *)(v16 + 12) = v15 | 0x21;
  *(_QWORD *)v16 = v18;
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)(v17 + 8) = 0LL;
  LODWORD(v15) = *(_DWORD *)(v17 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v17 + 12) = v15;
  *(_QWORD *)v17 = *(_QWORD *)(v10 + a1);
  *(_DWORD *)(v17 + 12) = v15 & 0xFFFFFFFC | 1;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a1 + 160) == 0;
  *(_BYTE *)(v9 + 12) ^= 1u;
  _InterlockedOr(v22, 0);
  v19 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
  *(_DWORD *)(v9 + 12) &= ~1u;
  v20 = v19;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: end 0x%X\n", v19);
  return v20;
}
