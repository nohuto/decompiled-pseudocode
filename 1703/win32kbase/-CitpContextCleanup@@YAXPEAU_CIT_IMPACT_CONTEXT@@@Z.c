/*
 * XREFs of ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008501C
 * Callers:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084FD8 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0086458 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0052258 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008519C (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0085D64 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 */

void __fastcall CitpContextCleanup(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 v2; // rbx
  void *v3; // rcx
  ULONG v4; // eax
  unsigned __int8 *v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rcx
  void *v15; // rcx
  int v16; // r8d
  int v17; // r8d
  void *v18; // [rsp+20h] [rbp-18h]

  LODWORD(v2) = 0;
  CitpInteractionSummariesFlush(a1);
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v3 = (void *)*((_QWORD *)a1 + 52);
    if ( v3 )
    {
      v4 = RtlLengthSid(v3);
      v5 = (unsigned __int8 *)*((_QWORD *)a1 + 52);
      v2 = 314159LL;
      v6 = v4;
      if ( v4 >= 8uLL )
      {
        v7 = (unsigned __int64)v4 >> 3;
        v6 = v4 - 8 * v7;
        do
        {
          v8 = v5[6] + 37 * (v5[5] + 37 * (v5[4] + 37 * (v5[3] + 37 * (v5[2] + 37 * (v5[1] + 37 * (*v5 + 37 * v2))))));
          v9 = v5[7];
          v5 += 8;
          v2 = v9 + 37 * v8;
          --v7;
        }
        while ( v7 );
      }
      if ( (unsigned __int64)(v6 - 1) <= 6 )
      {
        v10 = v6 - 1;
        if ( !v10 )
        {
LABEL_14:
          LODWORD(v2) = *v5 + 37 * v2;
          goto LABEL_15;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
LABEL_13:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_14;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
LABEL_12:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_13;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
LABEL_11:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_12;
        }
        v16 = v13 - 1;
        if ( !v16 )
        {
LABEL_25:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_11;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
LABEL_24:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_25;
        }
        if ( v17 == 1 )
        {
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_24;
        }
      }
    }
  }
LABEL_15:
  CitpUpdateActiveBootId(v2, 0, 0LL, 0LL, v18);
  CitpContextTrackingDataCleanup(a1);
  v14 = *((_QWORD *)a1 + 52);
  if ( v14 )
  {
    Win32FreePool(v14);
    *((_QWORD *)a1 + 52) = 0LL;
  }
  v15 = (void *)*((_QWORD *)a1 + 105);
  if ( v15 )
  {
    ZwClose(v15);
    *((_QWORD *)a1 + 105) = 0LL;
  }
}
