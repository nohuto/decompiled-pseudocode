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
  unsigned int v2; // edi
  __int64 v3; // r8
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v6; // [rsp+38h] [rbp-C8h]
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v8; // [rsp+48h] [rbp-B8h]
  _WORD v9[264]; // [rsp+50h] [rbp-B0h] BYREF

  if ( !a1 )
    return 0LL;
  *a1 = 0;
  memset(v9, 0, 0x208uLL);
  v7 = 1703960;
  v8 = L"%SystemRoot%";
  v5 = 34078720;
  v6 = v9;
  if ( (int)RtlExpandEnvironmentStrings_U(0LL, &v7, &v5, 0LL) < 0 )
    return 0LL;
  v2 = (unsigned __int16)v5;
  v3 = (unsigned __int16)v5 >> 1;
  if ( (unsigned __int64)(2 * v3) >= 0x208 )
    _report_rangecheckfailure();
  v9[(unsigned __int16)v5 >> 1] = 0;
  if ( (unsigned int)v3 >= 0x104 || (int)sub_18005DEBC(a1, 260LL, v3, v9) >= 0 )
    return v2;
  else
    return 0LL;
}
