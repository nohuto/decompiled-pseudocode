/*
 * XREFs of IsWindowGhosted @ 0x1C0060008
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     xxxUpdateInputHangInfo @ 0x1C00A8200 (xxxUpdateInputHangInfo.c)
 *     xxxHandleHealthyThread @ 0x1C01340D0 (xxxHandleHealthyThread.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01E7930 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     _FindProp @ 0x1C0064018 (_FindProp.c)
 */

__int64 __fastcall IsWindowGhosted(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  _QWORD *Prop; // rax
  __int64 v7; // r8
  __int64 v8; // r11
  _QWORD *v9; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *(_WORD *)(gpsi + 884LL);
  if ( *(_WORD *)(v3 + 8) != v4 && *(_QWORD *)(a1 + 184) )
  {
    Prop = (_QWORD *)FindProp(a1, v4, 1LL);
    if ( Prop )
    {
      if ( *Prop )
        return (unsigned int)v7;
    }
    v9 = (_QWORD *)FindProp(v8, *(unsigned __int16 *)(gpsi + 1362LL), v7);
    if ( v9 )
    {
      if ( *v9 )
        return (unsigned int)v7;
    }
  }
  return v2;
}
