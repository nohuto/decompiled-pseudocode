/*
 * XREFs of ProtocolCommandCompletion @ 0x1C000D590
 * Callers:
 *     <none>
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  __int64 v8; // rbx
  _DWORD *v9; // rsi
  __int64 result; // rax
  __int64 v11; // r8

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
  if ( (result & 8) != 0 || (v11 = *(_QWORD *)(v8 + 4216)) == 0 )
  {
    *(_DWORD *)(v8 + 4216) = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, a1, v11, a4);
    *(_QWORD *)(v8 + 4216) = 0LL;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v9[5] = 0;
    v9[4] = 1;
  }
  else
  {
    v9[4] = 2;
    result = *(unsigned __int16 *)(a3 + 14);
    v9[5] = result;
    *(_BYTE *)(a2 + 3) = 1;
    if ( v9[7] )
      result = NVMeAllocateDmaBuffer(a1, 0x40u);
  }
  *(_BYTE *)(v8 + 4253) |= 8u;
  return result;
}
