/*
 * XREFs of DWP_GetIcon @ 0x1C003C818
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  __int64 Prop; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // r10d
  __int64 v8; // rax

  if ( a2 > 2 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  else
  {
    if ( a2 == 1 )
      v2 = *(_WORD *)(gpsi + 1358LL);
    else
      v2 = *(_WORD *)(gpsi + 1356LL);
    Prop = GetProp(a1, v2, 1LL);
    v5 = Prop;
    if ( !v6 )
    {
      if ( Prop )
      {
        LOBYTE(v4) = 3;
        v8 = HMValidateHandleNoRip(Prop, v4);
        if ( v8 )
        {
          if ( *(char *)(v8 + 80) < 0 )
            return 0LL;
        }
      }
    }
    return v5;
  }
}
