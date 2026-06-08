/*
 * XREFs of RegisterHvIdleStates @ 0x1C001A410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     GetHvPpmCapabilities @ 0x1C001A310 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C001A4BC (RegisterHvCStates.c)
 *     RegisterVmIdleStates @ 0x1C001B2F8 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  unsigned __int16 v4; // r9
  int v5; // eax
  int v7; // [rsp+28h] [rbp-10h]
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 264);
  v2 = 0;
  if ( (v1 & 0x200) != 0 )
  {
    v2 = RegisterHvCStates();
    if ( v2 >= 0 )
    {
      GetHvPpmCapabilities(0LL, &v8, 0LL);
      if ( v8 )
        v2 = RegisterVmIdleStates(a1);
    }
    if ( v2 < 0 )
    {
      v4 = 10;
      v7 = v2;
LABEL_10:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v4,
        (__int64)&WPP_15b16aaf01ba346f37f33139b3211597_Traceguids,
        v7);
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v5 = RegisterHvCStates();
    v2 = v5;
    if ( v5 < 0 )
    {
      v4 = 11;
      v7 = v5;
      goto LABEL_10;
    }
  }
  return (unsigned int)v2;
}
