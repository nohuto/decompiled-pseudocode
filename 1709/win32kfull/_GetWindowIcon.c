/*
 * XREFs of _GetWindowIcon @ 0x1C0140914
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x1C013FBD0 (NtUserInternalGetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C0141AF4 (xxxSendShutdownData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     _DuplicateCursor @ 0x1C01409BC (_DuplicateCursor.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, int a2)
{
  int v3; // edi
  __int16 v4; // ax
  __int64 Prop; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a2 == 1 )
  {
    v3 = 1;
    v4 = *(_WORD *)(gpsi + 1358LL);
  }
  else
  {
    v3 = 0;
    v4 = *(_WORD *)(gpsi + 1356LL);
  }
  Prop = GetProp(a1, v4, 1);
  v6 = HMValidateHandleNoRip(Prop, 3);
  if ( (v6
     || ((v7 = *(_QWORD *)(a1 + 168), !v3) ? (v6 = *(_QWORD *)(v7 + 168)) : (v6 = *(_QWORD *)(v7 + 128)),
         v6 || (v6 = qword_1C0321938) != 0))
    && (v8 = DuplicateCursor(v6)) != 0 )
  {
    return *(_QWORD *)v8;
  }
  else
  {
    return 0LL;
  }
}
