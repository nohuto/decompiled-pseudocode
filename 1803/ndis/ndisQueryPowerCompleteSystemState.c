/*
 * XREFs of ndisQueryPowerCompleteSystemState @ 0x1C00100B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(int a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // r9
  NTSTATUS v6; // eax
  int v7; // ecx
  __int64 v8; // r9
  int v9; // esi

  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(34LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, a2[12]);
  v5 = a2[12];
  if ( (int)v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qD(35LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v5);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxq(
        a1,
        (unsigned int)&QueryPowerCompleteSystemState,
        a3 + 4032,
        a3 + 4032,
        *(_DWORD *)(a3 + 4080),
        *(_QWORD *)(a3 + 4048),
        a2[12]);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4144), a2, 0x20u);
    return a2[12];
  }
  else
  {
    v6 = PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(a3 + 3856),
           3u,
           *(POWER_STATE *)(a3 + 3152),
           ndisQueryPowerComplete,
           (PVOID)a3,
           0LL);
    v9 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_qD(36LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, (unsigned int)v6);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxq(
          v7,
          (unsigned int)&QueryPowerCompleteSystemStatePoRequest,
          a3 + 4032,
          a3 + 4032,
          *(_DWORD *)(a3 + 4080),
          *(_QWORD *)(a3 + 4048),
          v9);
    }
    else
    {
      *(_QWORD *)(a3 + 776) = a2;
    }
    if ( v9 < 0 )
    {
      a2[12] = v9;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4144), a2, 0x20u);
    }
    else
    {
      v9 = -1073741802;
    }
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(37LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v8);
    return (unsigned int)v9;
  }
}
