/*
 * XREFs of KdpReadPhysicalMemoryLong @ 0x1408044E8
 * Callers:
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpReadPhysicalMemory @ 0x1408043A4 (KdpReadPhysicalMemory.c)
 */

unsigned __int64 __fastcall KdpReadPhysicalMemoryLong(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // edi
  __int64 v6; // rsi
  int v8; // ebp
  unsigned int v9; // ecx
  __int128 i; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(_DWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 28);
  v11 = qword_1403C57D0;
  for ( i = KdpContext; v4; v4 -= result )
  {
    *(_QWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 24) = v4;
    *(_DWORD *)(a1 + 28) = v8;
    *a2 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    WORD3(i) = 13;
    KdpReadPhysicalMemory(a1, (__int64)a2, a3, (__int64)&i);
    v9 = *(_DWORD *)(a1 + 28);
    result = v9 & 0xC0000000;
    if ( (_DWORD)result == 0x40000000 )
      v9 *= 4;
    if ( *(int *)(a1 + 8) < 0 || !v9 )
      break;
    result = v4;
    if ( v9 <= v4 )
      result = v9;
    v6 += result;
  }
  return result;
}
