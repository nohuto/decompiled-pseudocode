/*
 * XREFs of RegisterHvIdleStates @ 0x1C002A590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     GetHvPpmCapabilities @ 0x1C002A49C (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C002A63C (RegisterHvCStates.c)
 *     RegisterVmIdleStates @ 0x1C002B49C (RegisterVmIdleStates.c)
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
      GetHvPpmCapabilities(0LL, &v8);
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
        (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
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
