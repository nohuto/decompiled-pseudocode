/*
 * XREFs of HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C001D680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0psqzq @ 0x1C0026BD0 (McTemplateK0psqzq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBDSM_ComparingSerialNumberOnReEnumeration(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  unsigned int v3; // edi
  int v4; // esi
  int v5; // esi
  const void *v6; // r15
  unsigned int v7; // ebp
  int v8; // edx
  int v9; // ecx
  int v10; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0LL;
  v3 = 4089;
  v4 = *(_DWORD *)(v1 + 2148);
  if ( (*(_DWORD *)(v1 + 1636) & 0x800) != 0 )
    v5 = v4 - 14;
  else
    v5 = v4 - 2;
  v6 = (const void *)(*(_QWORD *)(v1 + 2152) + 12LL);
  if ( (*(_DWORD *)(v1 + 1636) & 0x800) == 0 )
    v6 = *(const void **)(v1 + 2152);
  v7 = *(_DWORD *)(v1 + 256) - 2;
  if ( v5 == v7 )
  {
    v2 = v1 + 1732;
    v10 = RtlCompareMemory((const void *)(v1 + 1734), v6, v7);
    if ( v10 == v7 )
      return v3;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x71u,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      v10,
      v7);
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x70u,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
  }
  if ( (*(_DWORD *)(v1 + 2436) & 0x20) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierSerialNumberMismatchOnRenumeration", v1 + 504);
  if ( v2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400000) != 0 )
      McTemplateK0psqzq(v9, v8, v1 + 1516, *(_QWORD *)(*(_QWORD *)v1 + 240LL), (__int64)v6, v5, v2 + 2, v7);
    return 4061;
  }
  else
  {
    v3 = 4061;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400000) != 0 )
      McTemplateK0psqzq(v9, v8, v1 + 1516, *(_QWORD *)(*(_QWORD *)v1 + 240LL), (__int64)v6, v5, 0LL, 0);
  }
  return v3;
}
