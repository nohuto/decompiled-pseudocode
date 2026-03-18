/*
 * XREFs of _GetWindowIcon @ 0x1C0139C3C
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x1C0139930 (NtUserInternalGetWindowIcon.c)
 *     xxxSendShutdownData @ 0x1C013AE48 (xxxSendShutdownData.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     _DuplicateCursor @ 0x1C0139CE0 (_DuplicateCursor.c)
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
     || ((v7 = *(_QWORD *)(a1 + 168), !v3) ? (v6 = *(_QWORD *)(v7 + 160)) : (v6 = *(_QWORD *)(v7 + 120)),
         v6 || (v6 = qword_1C0325938) != 0))
    && (v8 = DuplicateCursor(v6)) != 0 )
  {
    return *(_QWORD *)v8;
  }
  else
  {
    return 0LL;
  }
}
