/*
 * XREFs of ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008519C
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008501C (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0154F8C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0051FF8 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0052034 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void __fastcall CitpContextTrackingDataCleanup(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 90); ++i )
  {
    v6 = *((_QWORD *)a1 + 38) + 176LL * i;
    if ( *(_BYTE *)(v6 + 34) )
    {
      --*((_DWORD *)a1 + 91);
    }
    else if ( *(_BYTE *)(v6 + 35) )
    {
      --*((_DWORD *)a1 + 92);
    }
    v7 = (_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v6 + 16);
    v9 = *(_QWORD **)(v6 + 24);
    if ( *(_QWORD *)(v8 + 8) != v6 + 16 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(v6 + 24) = v6 + 16;
    *v7 = v7;
    *(_QWORD *)v6 = 0LL;
    CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v6 + 80));
    CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v6 + 40));
  }
  v3 = *((_QWORD *)a1 + 38);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)a1 + 38) = 0LL;
  }
  v4 = *((_QWORD *)a1 + 50);
  *((_DWORD *)a1 + 90) = 0;
  *((_DWORD *)a1 + 93) = 0;
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)a1 + 50) = 0LL;
  }
  v5 = *((_QWORD *)a1 + 49);
  *((_DWORD *)a1 + 102) = 0;
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)a1 + 49) = 0LL;
  }
  *((_QWORD *)a1 + 47) = 0LL;
  *((_QWORD *)a1 + 48) = 0LL;
}
