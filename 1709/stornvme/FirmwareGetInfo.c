/*
 * XREFs of FirmwareGetInfo @ 0x1C000A5FC
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C000C370 (IoctlFirmwareProcess.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // ebp
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 PhysicalAddress; // rax
  __int64 v10; // rbx
  int v11; // eax
  void *v12; // rax
  char v14; // [rsp+F8h] [rbp+10h] BYREF
  void *v15; // [rsp+100h] [rbp+18h]

  v15 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_DWORD **)(a2 + 64);
  else
    v4 = *(_DWORD **)(a2 + 24);
  v5 = v4[12];
  if ( v5 < 0x10 )
  {
    v4[5] = 3;
    *(_BYTE *)(a2 + 3) = 21;
    v6 = -1056964602;
LABEL_18:
    StorPortExtendedFunction(60LL, a1, 0LL, 1LL);
    return v6;
  }
  v7 = (_DWORD *)((char *)v4 + (unsigned int)v4[11]);
  if ( *v7 == 2 && v7[1] >= 0x18u && v5 < 0x18 )
  {
    v4[5] = 3;
    v6 = -1056964602;
    *(_BYTE *)(a2 + 3) = 21;
    goto LABEL_18;
  }
  NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( !v15 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    v6 = -1056964605;
    v4[5] = 1;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  memset(v15, 0, 0x200uLL);
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v15, &v14);
  *(_BYTE *)(v8 + 4245) |= 3u;
  v10 = PhysicalAddress;
  SrbAssignQueueId(a1, a2);
  *(_DWORD *)(v8 + 4100) = -1;
  *(_BYTE *)(v8 + 4136) = 3;
  v11 = *(_DWORD *)(v8 + 4136);
  *(_BYTE *)(v8 + 4096) = 2;
  *(_QWORD *)(v8 + 4120) = v10;
  *(_DWORD *)(v8 + 4136) = v11 & 0xF000FFFF | 0x7F0000;
  *(_BYTE *)(v8 + 4245) |= 4u;
  *(_QWORD *)(v8 + 4216) = NVMeGetLogPageFirmwareSlotCompletion;
  v12 = v15;
  *(_DWORD *)(v8 + 4232) = 512;
  v6 = 0;
  *(_QWORD *)(v8 + 4200) = v12;
  return v6;
}
