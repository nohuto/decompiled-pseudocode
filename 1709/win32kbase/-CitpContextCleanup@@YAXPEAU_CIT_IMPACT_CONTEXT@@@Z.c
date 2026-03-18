/*
 * XREFs of ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081EF8
 * Callers:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081EB4 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0082584 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C001B4FC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082070 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0082944 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
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
  CitpInteractionSummariesFlush(a1, 1);
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v3 = (void *)*((_QWORD *)a1 + 12);
    if ( v3 )
    {
      v4 = RtlLengthSid(v3);
      v5 = (unsigned __int8 *)*((_QWORD *)a1 + 12);
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
      if ( v6 >= 1 && v6 <= 7 )
      {
        v10 = v6 - 1;
        if ( !v10 )
        {
LABEL_15:
          LODWORD(v2) = *v5 + 37 * v2;
          goto LABEL_16;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
LABEL_14:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_15;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
LABEL_13:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_14;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
LABEL_12:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_13;
        }
        v16 = v13 - 1;
        if ( !v16 )
        {
LABEL_26:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_12;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
LABEL_25:
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_26;
        }
        if ( v17 == 1 )
        {
          LODWORD(v2) = *v5++ + 37 * v2;
          goto LABEL_25;
        }
      }
    }
  }
LABEL_16:
  CitpUpdateActiveBootId(v2, 0, 0LL, 0LL, v18);
  CitpContextTrackingDataCleanup(a1);
  v14 = *((_QWORD *)a1 + 12);
  if ( v14 )
  {
    Win32FreePool(v14);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  v15 = (void *)*((_QWORD *)a1 + 63);
  if ( v15 )
  {
    ZwClose(v15);
    *((_QWORD *)a1 + 63) = 0LL;
  }
}
