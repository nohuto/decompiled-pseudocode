/*
 * XREFs of ndisQueryPowerCompleteSystemState @ 0x1C0020140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(int a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // r9
  NTSTATUS v6; // eax
  int v7; // ecx
  int v8; // esi

  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(34LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3, a2[12]);
  v5 = a2[12];
  if ( (int)v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_qD(35LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3, v5);
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
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_qD(36LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3, (unsigned int)v6);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxq(
          v7,
          (unsigned int)&QueryPowerCompleteSystemStatePoRequest,
          a3 + 4032,
          a3 + 4032,
          *(_DWORD *)(a3 + 4080),
          *(_QWORD *)(a3 + 4048),
          v8);
    }
    else
    {
      *(_QWORD *)(a3 + 776) = a2;
    }
    if ( v8 < 0 )
    {
      a2[12] = v8;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4144), a2, 0x20u);
    }
    else
    {
      v8 = -1073741802;
    }
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(37LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a3);
    return (unsigned int)v8;
  }
}
