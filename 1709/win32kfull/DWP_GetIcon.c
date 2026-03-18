/*
 * XREFs of DWP_GetIcon @ 0x1C010CAD8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 Prop; // rax
  __int64 v4; // rbx
  int v5; // r11d
  __int64 v7; // rax

  if ( (unsigned int)a2 > 2 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  else
  {
    if ( (_DWORD)a2 == 1 )
      v2 = *(_WORD *)(gpsi + 1358LL);
    else
      v2 = *(_WORD *)(gpsi + 1356LL);
    Prop = GetProp(a1, v2, 1);
    v4 = Prop;
    if ( !v5 )
    {
      if ( Prop )
      {
        v7 = HMValidateHandleNoRip(Prop, 3);
        if ( v7 )
        {
          if ( *(char *)(v7 + 80) < 0 )
            return 0LL;
        }
      }
    }
    return v4;
  }
}
