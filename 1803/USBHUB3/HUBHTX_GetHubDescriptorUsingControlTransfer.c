/*
 * XREFs of HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002DA8
 * Callers:
 *     HUBHSM_GettingHubDescriptor @ 0x1C00085C0 (HUBHSM_GettingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBHTX_GetDescriptor @ 0x1C0002CA4 (HUBHTX_GetDescriptor.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBHTX_GetHubDescriptorUsingControlTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 248);
  if ( v4 > 0 )
  {
    if ( v4 <= 2 )
    {
      LOBYTE(a4) = 41;
      v6 = 71LL;
      goto LABEL_6;
    }
    if ( v4 == 3 )
    {
      LOBYTE(a4) = 42;
      v6 = 12LL;
LABEL_6:
      result = HUBHTX_GetDescriptor(a1, a1 + 1172, v6, a4, v8, 1);
      goto LABEL_8;
    }
  }
  result = 3221225473LL;
LABEL_8:
  if ( (int)result < 0 )
  {
    LODWORD(v9) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2512),
      2u,
      3u,
      0x10u,
      (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
      v9);
    return HUBSM_AddEvent(a1 + 1256, 2004LL);
  }
  return result;
}
