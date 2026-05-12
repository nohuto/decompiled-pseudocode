/*
 * XREFs of StorPortUnitFlushActivePendingRequestQueue @ 0x1C0006988
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C0006900 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0015D30 (RaUnitDeregisterFromIdleDetection.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 */

void __fastcall StorPortUnitFlushActivePendingRequestQueue(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rcx
  KIRQL v7; // bl

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)(*(_QWORD *)(a1 + 1488) + 88LL);
      if ( (_QWORD *)*v2 == v2 )
        break;
      v3 = *(_QWORD **)(*(_QWORD *)(a1 + 1488) + 96LL);
      if ( (_QWORD *)*v3 != v2 || (v4 = (_QWORD *)v3[1], (_QWORD *)*v4 != v3) )
        __fastfail(3u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 96LL) = v4;
      *v4 = v2;
      v5 = v3[2];
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
      LOBYTE(v2) = *(_BYTE *)(v6 + 2);
      if ( (_BYTE)v2 == 40 )
        LODWORD(v2) = *(_DWORD *)(v6 + 20);
      else
        LODWORD(v2) = (unsigned __int8)v2;
      if ( (_DWORD)v2 == 16 || (unsigned int)v2 > 0x11 && ((unsigned int)v2 <= 0x13 || (_DWORD)v2 == 32) )
      {
        v7 = KfRaiseIrql(2u);
        RaUnitStartResetIo(*(_QWORD *)(a1 + 8), v5, a1 + 1440);
        KeLowerIrql(v7);
      }
      ExFreePoolWithTag(v3, 0x4F506152u);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
