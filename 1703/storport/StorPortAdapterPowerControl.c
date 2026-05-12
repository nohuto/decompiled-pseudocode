/*
 * XREFs of StorPortAdapterPowerControl @ 0x1C0036DD0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00124FC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall StorPortAdapterPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 result; // rax
  _DWORD v12[15]; // [rsp+24h] [rbp-44h] BYREF

  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 10) )
  {
    memset(v12, 0, sizeof(v12));
    *(_QWORD *)&v12[1] = 0LL;
    *(_QWORD *)&v12[11] = a5;
    *(_QWORD *)&v12[7] = a6;
    v12[0] = 64;
    *(_QWORD *)&v12[3] = a2;
    *(_QWORD *)&v12[9] = a3;
    *(_QWORD *)&v12[5] = a4;
    result = RaCallMiniportAdapterControl(a1 + 296);
    *a7 = **(_QWORD **)&v12[13];
  }
  else
  {
    *a7 = 0LL;
    return 3221225659LL;
  }
  return result;
}
