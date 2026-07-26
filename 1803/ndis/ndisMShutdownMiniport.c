/*
 * XREFs of ndisMShutdownMiniport @ 0x1C010FC5C
 * Callers:
 *     ndisSetSystemPower @ 0x1C00B09DC (ndisSetSystemPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisMInvokeShutdown @ 0x1C0060844 (ndisMInvokeShutdown.c)
 */

__int64 __fastcall ndisMShutdownMiniport(__int64 a1)
{
  KIRQL v2; // al
  int v3; // edx
  void (__fastcall *v4)(_QWORD); // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x74u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 124) |= 0x1000000u;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  *(_DWORD *)(a1 + 120) = v3 & 0x7FFFFFFE | 0x80000000;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( (*(_DWORD *)(a1 + 124) & 0x4004) == 0 && (unsigned int)(*(_DWORD *)(a1 + 3892) - 2) > 2 )
  {
    if ( *(_BYTE *)(a1 + 32) >= 6u )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 232LL) )
        ndisMInvokeShutdown(a1, 0);
    }
    else
    {
      v4 = *(void (__fastcall **)(_QWORD))(a1 + 2072);
      if ( v4 )
        v4(*(_QWORD *)(a1 + 2064));
    }
    *(_DWORD *)(a1 + 124) |= 0x800000u;
    if ( (unsigned __int8)byte_1C0099610 >= 4u )
      WPP_SF_qZ(0x75u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, *(const wchar_t **)(a1 + 3880));
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x76u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  return 0LL;
}
