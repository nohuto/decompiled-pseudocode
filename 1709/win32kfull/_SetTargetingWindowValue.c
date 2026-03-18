/*
 * XREFs of _SetTargetingWindowValue @ 0x1C011100C
 * Callers:
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C0110FA0 (NtUserRegisterTouchHitTestingWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall SetTargetingWindowValue(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx

  v3 = a2;
  if ( gSqmIsOptedIn )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v4 = 8635LL;
LABEL_5:
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v4, 1LL);
        return InternalSetProp(a1, (unsigned __int16)gatomPtrTargetFlags, v3, 5);
      }
      if ( a2 == 2 )
      {
        v4 = 8636LL;
        goto LABEL_5;
      }
    }
    else
    {
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 8295LL, 1LL);
    }
  }
  if ( (_DWORD)v3 )
    return InternalSetProp(a1, (unsigned __int16)gatomPtrTargetFlags, v3, 5);
  InternalRemoveProp(a1, (unsigned __int16)gatomPtrTargetFlags, 1LL);
  return 1LL;
}
