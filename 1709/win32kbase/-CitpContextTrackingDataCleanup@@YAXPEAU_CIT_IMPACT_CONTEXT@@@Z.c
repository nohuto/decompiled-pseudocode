/*
 * XREFs of ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082070
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081EF8 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01559B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C001C8C0 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C001C8FC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CitpContextTrackingDataCleanup(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2, __int64 a3)
{
  __int64 i; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 14); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)a1 + 96 * i;
    if ( *(_BYTE *)(v6 + 34) )
    {
      --*((_DWORD *)a1 + 15);
    }
    else if ( *(_BYTE *)(v6 + 35) )
    {
      --*((_DWORD *)a1 + 16);
    }
    v7 = (_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v6 + 16);
    if ( *(_QWORD *)(v8 + 8) != v6 + 16 || (v9 = *(_QWORD **)(v6 + 24), (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(v6 + 24) = v6 + 16;
    *v7 = v7;
    *(_QWORD *)v6 = 0LL;
    CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v6 + 88), (__int64)v9, a3);
    CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v6 + 40), v10, v11);
  }
  if ( *(_QWORD *)a1 )
  {
    Win32FreePool(*(_QWORD *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 17) = 0;
  v5 = *((_QWORD *)a1 + 11);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)a1 + 11) = 0LL;
  }
  *((_DWORD *)a1 + 18) = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_DWORD *)a1 + 19) = 0;
}
