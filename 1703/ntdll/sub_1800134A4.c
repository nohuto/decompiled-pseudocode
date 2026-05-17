/*
 * XREFs of sub_1800134A4 @ 0x1800134A4
 * Callers:
 *     sub_180013438 @ 0x180013438 (sub_180013438.c)
 * Callees:
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A6490 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCreateTimer2 @ 0x1800A6A50 (ZwCreateTimer2.c)
 *     ZwCreateWaitCompletionPacket @ 0x1800A6B10 (ZwCreateWaitCompletionPacket.c)
 */

__int64 __fastcall sub_1800134A4(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  int WaitCompletionPacket; // ebp
  char v9; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = (_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  result = ZwCreateTimer2(a1 + 24, 0LL, 0LL, 8LL, 1048578);
  if ( (int)result >= 0 )
  {
    WaitCompletionPacket = ZwCreateWaitCompletionPacket(a1 + 32, 1LL);
    if ( WaitCompletionPacket < 0 )
    {
      ZwClose(*v3);
    }
    else
    {
      ZwAssociateWaitCompletionPacket(*(_QWORD *)(a1 + 32), *(_QWORD *)(a2 + 64), *v3, a1 + 40, a2 + 112, 0, a3, &v9);
      *(_QWORD *)(a1 + 96) = sub_180018A00;
      sub_180017A78(a2, a1 + 104, a1 + 108);
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 88) = a1 + 80;
      *(_QWORD *)(a1 + 80) = a1 + 80;
      *(_QWORD *)(a1 + 40) = off_1801101B0;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 52) = *(_BYTE *)(a1 + 108);
    }
    return (unsigned int)WaitCompletionPacket;
  }
  return result;
}
