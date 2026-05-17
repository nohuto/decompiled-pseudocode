/*
 * XREFs of sub_180058424 @ 0x180058424
 * Callers:
 *     sub_1800583B8 @ 0x1800583B8 (sub_1800583B8.c)
 * Callees:
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009BC70 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCreateTimer2 @ 0x18009C250 (ZwCreateTimer2.c)
 *     ZwCreateWaitCompletionPacket @ 0x18009C310 (ZwCreateWaitCompletionPacket.c)
 */

__int64 __fastcall sub_180058424(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  int WaitCompletionPacket; // ebp
  char v9; // [rsp+70h] [rbp+8h] BYREF

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
      *(_QWORD *)(a1 + 96) = sub_180029160;
      sub_180024854(a2, (_DWORD *)(a1 + 104), (BYTE *)(a1 + 108));
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 88) = a1 + 80;
      *(_QWORD *)(a1 + 80) = a1 + 80;
      *(_QWORD *)(a1 + 40) = off_1801106C0;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 52) = *(_BYTE *)(a1 + 108);
    }
    return (unsigned int)WaitCompletionPacket;
  }
  return result;
}
