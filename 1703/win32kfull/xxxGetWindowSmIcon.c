/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C001D71C
 * Callers:
 *     SendDwmIconChange @ 0x1C001D7AC (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     xxxCreateWindowSmIcon @ 0x1C00C1950 (xxxCreateWindowSmIcon.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 Prop; // rax
  __int64 v6; // rdx
  ULONG_PTR v7; // rdi
  __int64 result; // rax
  __int64 WindowSmIcon; // rax
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  v7 = Prop;
  if ( !Prop || (LOBYTE(v6) = 3, (result = HMValidateHandleNoSecure(Prop, v6)) == 0) )
  {
    result = *(_QWORD *)(v3 + 160);
    if ( !result )
    {
      if ( (*(_BYTE *)(a1 + 61) & 2) != 0 || (*(_BYTE *)(a1 + 60) & 8) != 0 && (*(_BYTE *)(a1 + 64) & 0x40) != 0 || a2 )
        return qword_1C0325938;
      if ( xxxSendTransformableMessageTimeout(a1, 55, 0, 0, 0, 100, (ULONG_PTR)&BugCheckParameter3, 1, 0) )
        v7 = BugCheckParameter3;
      if ( !v7 )
        return qword_1C0325938;
      WindowSmIcon = xxxCreateWindowSmIcon(a1, v7, 0LL);
      LOBYTE(v10) = 3;
      result = HMValidateHandleNoSecure(WindowSmIcon, v10);
      if ( !result )
        return qword_1C0325938;
    }
  }
  return result;
}
