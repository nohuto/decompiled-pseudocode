/*
 * XREFs of sub_18005DD3C @ 0x18005DD3C
 * Callers:
 *     sub_18005DC70 @ 0x18005DC70 (sub_18005DC70.c)
 * Callees:
 *     sub_18005DEBC @ 0x18005DEBC (sub_18005DEBC.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18005DF10 (RtlExpandEnvironmentStrings_U.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18005DD3C(_WORD *a1)
{
  unsigned int Length; // edi
  __int64 v3; // r8
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v7[264]; // [rsp+50h] [rbp-B0h] BYREF

  if ( !a1 )
    return 0LL;
  *a1 = 0;
  memset(v7, 0, 0x208uLL);
  *(_DWORD *)&Source.Length = 1703960;
  Source.Buffer = L"%SystemRoot%";
  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = v7;
  if ( RtlExpandEnvironmentStrings_U(0LL, &Source, &Destination, 0LL) < 0 )
    return 0LL;
  Length = Destination.Length;
  v3 = Destination.Length >> 1;
  if ( (unsigned __int64)(2 * v3) >= 0x208 )
    _report_rangecheckfailure();
  v7[Destination.Length >> 1] = 0;
  if ( (unsigned int)v3 >= 0x104 || (int)sub_18005DEBC(a1, 260LL, v3, v7) >= 0 )
    return Length;
  else
    return 0LL;
}
