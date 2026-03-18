/*
 * XREFs of ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01608D8
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01603F4 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C016427C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C006A178 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C006A1B4 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void __fastcall CitpContextTrackingDataCleanup(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 i; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 14); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)a1 + 96 * i;
    if ( *(_BYTE *)(v3 + 34) )
    {
      --*((_DWORD *)a1 + 15);
    }
    else if ( *(_BYTE *)(v3 + 35) )
    {
      --*((_DWORD *)a1 + 16);
    }
    v4 = (_QWORD *)(v3 + 16);
    v5 = *(_QWORD *)(v3 + 16);
    if ( *(_QWORD *)(v5 + 8) != v3 + 16 || (v6 = *(_QWORD **)(v3 + 24), (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *v4 = v4;
    *(_QWORD *)v3 = 0LL;
    CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v3 + 88));
    CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v3 + 40));
  }
  if ( *(_QWORD *)a1 )
  {
    Win32FreePool(*(_QWORD *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 17) = 0;
  v7 = *((_QWORD *)a1 + 11);
  if ( v7 )
  {
    Win32FreePool(v7);
    *((_QWORD *)a1 + 11) = 0LL;
  }
  *((_DWORD *)a1 + 18) = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_DWORD *)a1 + 19) = 0;
}
