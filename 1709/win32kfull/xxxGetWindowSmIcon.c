/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C008B494
 * Callers:
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     xxxCreateWindowSmIcon @ 0x1C0051CA4 (xxxCreateWindowSmIcon.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v3; // rsi
  __int64 Prop; // rax
  __int64 v6; // rdx
  ULONG_PTR v7; // rdi
  __int64 result; // rax
  __int64 WindowSmIcon; // rax
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 168);
  Prop = GetProp(BugCheckParameter2, *(_WORD *)(gpsi + 1356LL), 1);
  v7 = Prop;
  if ( !Prop || (LOBYTE(v6) = 3, (result = HMValidateHandleNoSecure(Prop, v6)) == 0) )
  {
    result = *(_QWORD *)(v3 + 168);
    if ( !result )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 61) & 2) != 0
        || (*(_BYTE *)(BugCheckParameter2 + 60) & 8) != 0 && (*(_BYTE *)(BugCheckParameter2 + 64) & 0x40) != 0
        || a2 )
      {
        return qword_1C0321938;
      }
      if ( xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 100, (ULONG_PTR)&BugCheckParameter3, 1, 0) )
        v7 = BugCheckParameter3;
      if ( !v7 )
        return qword_1C0321938;
      WindowSmIcon = xxxCreateWindowSmIcon(BugCheckParameter2, v7, 0);
      LOBYTE(v10) = 3;
      result = HMValidateHandleNoSecure(WindowSmIcon, v10);
      if ( !result )
        return qword_1C0321938;
    }
  }
  return result;
}
