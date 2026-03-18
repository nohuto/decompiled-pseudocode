/*
 * XREFs of ExpWin32DeleteProcedure @ 0x14044BA10
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 */

POBJECT_TYPE *__fastcall ExpWin32DeleteProcedure(__int64 a1)
{
  unsigned __int64 v1; // r8
  POBJECT_TYPE *result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+18h] BYREF

  v1 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v4 = a1;
  result = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v1];
  if ( result == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v3 = 36LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v3, &v4, 1LL);
  }
  if ( result == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v3 = 30LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v3, &v4, 1LL);
  }
  if ( result == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v3 = 21LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v3, &v4, 1LL);
  }
  if ( result == ExDesktopObjectType )
  {
    v3 = 11LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v3, &v4, 1LL);
  }
  if ( result == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v3 = 14LL;
    return (POBJECT_TYPE *)PsInvokeWin32Callout(v3, &v4, 1LL);
  }
  return result;
}
