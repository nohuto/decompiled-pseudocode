/*
 * XREFs of ProtocolCommandCompletion @ 0x1C000D0D0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // cl
  __int64 v8; // rbx
  _DWORD *v9; // rsi
  __int64 result; // rax
  __int64 v11; // r8
  __int64 PhysicalAddress; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+48h] [rbp+10h]

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  if ( v6 == 40 )
    v9 = *(_DWORD **)(a2 + 64);
  else
    v9 = *(_DWORD **)(a2 + 24);
  v9[16] = *(_DWORD *)a3;
  result = *(unsigned int *)(a1 + 52);
  if ( (result & 8) != 0 || (v11 = *(_QWORD *)(v8 + 4208)) == 0 )
  {
    *(_DWORD *)(v8 + 4208) = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, a1, v11, a4);
    *(_QWORD *)(v8 + 4208) = 0LL;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v9[5] = 0;
    v9[4] = 1;
LABEL_15:
    *(_BYTE *)(v8 + 4245) |= 8u;
    return result;
  }
  v9[4] = 2;
  result = *(unsigned __int16 *)(a3 + 14);
  v9[5] = result;
  *(_BYTE *)(a2 + 3) = 1;
  if ( !v9[7] )
    goto LABEL_15;
  v14 = 0LL;
  result = NVMeAllocateDmaBuffer(a1, 0x40u);
  if ( !v14 )
    goto LABEL_15;
  memset(v14, 0, 0x40uLL);
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v14, &v13);
  *(_DWORD *)(v8 + 4100) = -1;
  *(_QWORD *)(v8 + 4120) = PhysicalAddress;
  *(_BYTE *)(v8 + 4136) = 1;
  LODWORD(PhysicalAddress) = *(_DWORD *)(v8 + 4136);
  *(_BYTE *)(v8 + 4096) = 2;
  *(_DWORD *)(v8 + 4136) = PhysicalAddress & 0xF000FFFF | 0xF0000;
  *(_BYTE *)(v8 + 4245) |= 4u;
  *(_QWORD *)(v8 + 4216) = NVMeGetErrorInfoLogPageCompletion;
  *(_QWORD *)(v8 + 4200) = v14;
  *(_DWORD *)(v8 + 4232) = 64;
  return ProcessCommand(a1, a2);
}
