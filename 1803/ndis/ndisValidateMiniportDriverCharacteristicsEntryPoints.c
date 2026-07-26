/*
 * XREFs of ndisValidateMiniportDriverCharacteristicsEntryPoints @ 0x1C00C81A4
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 */

__int64 __fastcall ndisValidateMiniportDriverCharacteristicsEntryPoints(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned int v4; // ebx
  unsigned int Arg2; // edi
  int v7; // ecx
  __int64 v8; // rax
  _BOOL8 v9; // rcx

  v4 = 0;
  Arg2 = a2;
  if ( !*(_QWORD *)(a1 + 48)
    || !*(_QWORD *)(a1 + 56)
    || !*(_QWORD *)(a1 + 72)
    || !*(_QWORD *)(a1 + 80)
    || !*(_QWORD *)(a1 + 88)
    || !*(_QWORD *)(a1 + 128) )
  {
    return (unsigned int)-1073676283;
  }
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 24);
  if ( (v7 & 0x20) != 0 )
  {
    if ( v8
      || *(_QWORD *)(a1 + 32)
      || *(_QWORD *)(a1 + 112)
      || *(_QWORD *)(a1 + 120)
      || *(_QWORD *)(a1 + 40)
      || *(_QWORD *)(a1 + 96)
      || *(_QWORD *)(a1 + 104) )
    {
      return (unsigned int)-1073676283;
    }
  }
  else if ( !v8 || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 112) || !*(_QWORD *)(a1 + 120) )
  {
    return (unsigned int)-1073676283;
  }
  if ( (v7 & 0x30) == 0 && !*(_QWORD *)(a1 + 40) )
    return (unsigned int)-1073676283;
  if ( a3 > 6 || a3 == 6 && a4 )
  {
    v9 = *(_QWORD *)(a1 + 144) == 0LL;
    if ( v9 != (*(_QWORD *)(a1 + 136) == 0LL) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x22u, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, a2);
      v4 = -1073676283;
      if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
        McTemplateK0qqq(
          (PMCGEN_TRACE_CONTEXT)v9,
          &RegisterMiniportDriverFailed,
          &NDIS_PROVIDER_ID,
          0xC0010005,
          0xA99u,
          Arg2);
    }
  }
  return v4;
}
