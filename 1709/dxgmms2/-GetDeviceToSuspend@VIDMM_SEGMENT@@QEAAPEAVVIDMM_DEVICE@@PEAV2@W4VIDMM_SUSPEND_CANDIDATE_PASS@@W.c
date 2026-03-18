/*
 * XREFs of ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C00A13FC
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C00A1A08 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00A0878 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00A0BA4 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x1C00A17B8 (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_SEGMENT::GetDeviceToSuspend(
        __int64 a1,
        VIDMM_DEVICE *a2,
        int a3,
        int a4,
        struct VIDMM_DEVICE **a5)
{
  _QWORD *v5; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  VIDMM_DEVICE *v10; // rdi
  VIDMM_DEVICE *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx

  v5 = (_QWORD *)(a1 + 136);
  v7 = *(_QWORD **)(a1 + 136);
  if ( v7 != (_QWORD *)(a1 + 136) )
  {
    do
    {
      v8 = v7 - 3;
      v7 = (_QWORD *)*v7;
      if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)*v8) && !*(_BYTE *)(*(_QWORD *)(*v8 + 32LL) + 304LL) )
      {
        v9 = (_QWORD *)v8[5];
        while ( v9 != v8 + 5 )
        {
          v10 = (VIDMM_DEVICE *)v9[4];
          v9 = (_QWORD *)*v9;
          if ( VIDMM_DEVICE::CanSuspendThisDevice(v10, a2, a3, a4) )
          {
            if ( !VIDMM_DEVICE::IsResumedRecently(v10) )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v10;
              v14 = v8 + 3;
              v15 = v8[3];
              if ( *(_QWORD **)(v15 + 8) != v8 + 3 || (v16 = (_QWORD *)v8[4], (_QWORD *)*v16 != v14) )
                __fastfail(3u);
              *v16 = v15;
              *(_QWORD *)(v15 + 8) = v16;
              v17 = (_QWORD *)v5[1];
              if ( (_QWORD *)*v17 != v5 )
                __fastfail(3u);
              *v14 = v5;
              v8[4] = v17;
              *v17 = v14;
              v5[1] = v14;
              return v10;
            }
            if ( VIDMM_DEVICE::IsBetterYieldCandidate(v11, *a5) )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v10;
              *a5 = v10;
            }
          }
        }
      }
    }
    while ( v7 != v5 );
  }
  return 0LL;
}
