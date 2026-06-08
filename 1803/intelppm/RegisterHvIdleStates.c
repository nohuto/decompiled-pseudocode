/*
 * XREFs of RegisterHvIdleStates @ 0x1C002C6E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     RegisterHvCStates @ 0x1C002C018 (RegisterHvCStates.c)
 *     RegisterHvPepIdleStatesV2 @ 0x1C002CB74 (RegisterHvPepIdleStatesV2.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v3; // eax
  unsigned __int16 v4; // r9

  v1 = *(_QWORD *)(a1 + 264);
  v2 = 0;
  if ( (v1 & 0x200) != 0 )
  {
    v3 = RegisterHvPepIdleStatesV2();
    v2 = v3;
    if ( v3 < 0 )
    {
      v4 = 10;
LABEL_7:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v4,
        (__int64)&WPP_15b16aaf01ba346f37f33139b3211597_Traceguids,
        v3);
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    v2 = v3;
    if ( v3 < 0 )
    {
      v4 = 11;
      goto LABEL_7;
    }
  }
  return v2;
}
