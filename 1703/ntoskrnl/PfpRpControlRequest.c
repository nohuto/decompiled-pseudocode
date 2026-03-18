/*
 * XREFs of PfpRpControlRequest @ 0x140561B04
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfpRpControlRequestVerify @ 0x14012CC78 (PfpRpControlRequestVerify.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfpRpControlRequestPerform @ 0x140561BC0 (PfpRpControlRequestPerform.c)
 *     PfpRpControlRequestCopy @ 0x140561C3C (PfpRpControlRequestCopy.c)
 */

__int64 __fastcall PfpRpControlRequest(__int64 a1, char a2)
{
  int v2; // ebx

  if ( (dword_14036DF70 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 24) < 0x18u )
    {
      return (unsigned int)-1073741306;
    }
    else
    {
      v2 = PfpRpControlRequestCopy(*(void **)(a1 + 16), a2);
      if ( v2 >= 0 )
      {
        if ( (unsigned int)PfpRpControlRequestVerify(0LL) )
          return (unsigned int)-1073741701;
        else
          return (unsigned int)PfpRpControlRequestPerform(&unk_14036DED8, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741696;
  }
  return (unsigned int)v2;
}
