/*
 * XREFs of TppInitializeTimer @ 0x18000C73C
 * Callers:
 *     TpAllocWait @ 0x18000BAE0 (TpAllocWait.c)
 *     TpAllocTimer @ 0x18000C830 (TpAllocTimer.c)
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000A1B0 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     TppWorkInitialize @ 0x180036DB4 (TppWorkInitialize.c)
 */

__int64 __fastcall TppInitializeTimer(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = a4;
  if ( a4 )
    LODWORD(a4) = *(_DWORD *)(a4 + 56);
  result = TppWorkInitialize(a1, a3, v6, a4, a5, a6);
  if ( (int)result >= 0 )
  {
    TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 1LL);
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_BYTE *)(a1 + 353) = a2;
    if ( v6 )
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(a1 + 16) )
      TppCleanupGroupAddMember(a1);
    return 0LL;
  }
  return result;
}
