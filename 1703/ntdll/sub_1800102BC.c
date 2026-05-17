/*
 * XREFs of sub_1800102BC @ 0x1800102BC
 * Callers:
 *     TpAllocIoCompletion @ 0x180010340 (TpAllocIoCompletion.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 *     sub_180106250 @ 0x180106250 (sub_180106250.c)
 * Callees:
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     ZwSetInformationFile @ 0x1800A57E0 (ZwSetInformationFile.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall sub_1800102BC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF

  if ( a1 && a2 && a3 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    v4 = *(_QWORD *)(a3 + 64);
    v6[1] = a2;
    v6[0] = v4;
    result = ZwSetInformationFile(a1, &v7, v6, 16LL, 30);
    if ( (int)result >= 0 )
    {
      sub_1800142F8(a3, 1LL);
      return 0LL;
    }
  }
  else
  {
    sub_1801058B8();
    return 3221225485LL;
  }
  return result;
}
