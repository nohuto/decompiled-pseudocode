/*
 * XREFs of HUBPDO_ReportDeviceFailure @ 0x1C0016EE8
 * Callers:
 *     HUBDSM_MarkingUnknownDeviceAsFailed @ 0x1C001D400 (HUBDSM_MarkingUnknownDeviceAsFailed.c)
 * Callees:
 *     McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh @ 0x1C0010D68 (McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh.c)
 *     HUBMISC_CreateWerReport @ 0x1C002C28C (HUBMISC_CreateWerReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_ReportDeviceFailure(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // r14d
  const char *v4; // rdi
  __int16 v5; // r15
  int v6; // ebp
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // r11
  const char *v10; // rdx
  const char *v11; // rcx
  __int64 v12; // rax
  int v14; // [rsp+140h] [rbp+8h]
  int v15; // [rsp+148h] [rbp+10h]

  v2 = *a1;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x200) != 0 )
  {
    v3 = *(_DWORD *)(v2 + 160);
    v4 = 0LL;
    if ( v3 == 1 )
    {
      v5 = *(_WORD *)(v2 + 176);
      v6 = *(_DWORD *)(v2 + 172);
      v7 = *(_DWORD *)(v2 + 168);
      v8 = *(_DWORD *)(v2 + 188);
      v14 = *(_DWORD *)(v2 + 184);
      v15 = *(_DWORD *)(v2 + 180);
    }
    else
    {
      LOBYTE(v6) = -1;
      LOBYTE(v14) = 0;
      LOBYTE(v7) = -1;
      LOBYTE(v15) = 0;
      LOBYTE(v5) = 0;
      LOBYTE(v8) = 0;
    }
    v9 = a1[1];
    v10 = 0LL;
    v11 = 0LL;
    if ( v3 == 2 )
    {
      v10 = (const char *)(v2 + 178);
      v4 = (const char *)(v2 + 168);
      v11 = (const char *)(v2 + 173);
    }
    McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh(
      (__int64)v11,
      (__int64)v10,
      (const GUID *)((char *)a1 + 1516),
      a1[3],
      *((_DWORD *)a1 + 608),
      *((_WORD *)a1 + 998),
      *((_WORD *)a1 + 999),
      *((_WORD *)a1 + 1000),
      *((_DWORD *)a1 + 43),
      *((_DWORD *)a1 + 390),
      *((_DWORD *)a1 + 391),
      *(_WORD *)(v9 + 200),
      *(_BYTE *)(v9 + 202),
      *(_DWORD *)(v9 + 208),
      *(_WORD *)(v9 + 192),
      *(_WORD *)(v9 + 194),
      *(_DWORD *)(v9 + 12),
      *(_WORD *)(v2 + 48),
      v3,
      v15,
      v14,
      v8,
      v7,
      v6,
      v5,
      v4,
      v11,
      v10,
      *(_WORD *)(v2 + 2456),
      *(_WORD *)(v2 + 2458),
      *(_WORD *)(v2 + 2460));
    v2 = *a1;
  }
  HUBMISC_CreateWerReport(v2, 2LL, *((unsigned int *)a1 + 608));
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1[2]);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
           WdfDriverGlobals,
           v12,
           1LL);
}
