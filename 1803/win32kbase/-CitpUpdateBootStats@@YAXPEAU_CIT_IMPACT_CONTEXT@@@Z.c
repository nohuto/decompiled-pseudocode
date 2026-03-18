/*
 * XREFs of ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0164958
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0160B5C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0164570 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C003BDB8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0161834 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0163794 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0164664 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 */

void __fastcall CitpUpdateBootStats(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 v2; // rbx
  ULONG v3; // eax
  unsigned __int8 *v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // cx
  __int16 v18; // dx
  unsigned __int16 v19; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v20; // [rsp+50h] [rbp+18h] BYREF

  v19 = 0;
  LODWORD(v2) = 0;
  v20 = 0;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v3 = RtlLengthSid(*((PSID *)a1 + 12));
    v4 = (unsigned __int8 *)*((_QWORD *)a1 + 12);
    v2 = 314159LL;
    v5 = v3;
    if ( v3 >= 8uLL )
    {
      v6 = (unsigned __int64)v3 >> 3;
      v5 = v3 - 8 * v6;
      do
      {
        v7 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v2))))));
        v8 = v4[7];
        v4 += 8;
        v2 = v8 + 37 * v7;
        --v6;
      }
      while ( v6 );
    }
    if ( v5 >= 1 && v5 <= 7 )
    {
      v9 = v5 - 1;
      if ( !v9 )
      {
LABEL_20:
        LODWORD(v2) = *v4 + 37 * v2;
        goto LABEL_21;
      }
      v10 = v9 - 1;
      if ( !v10 )
      {
LABEL_19:
        LODWORD(v2) = *v4++ + 37 * v2;
        goto LABEL_20;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
LABEL_18:
        LODWORD(v2) = *v4++ + 37 * v2;
        goto LABEL_19;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
LABEL_17:
        LODWORD(v2) = *v4++ + 37 * v2;
        goto LABEL_18;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_16:
        LODWORD(v2) = *v4++ + 37 * v2;
        goto LABEL_17;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
LABEL_15:
        LODWORD(v2) = *v4++ + 37 * v2;
        goto LABEL_16;
      }
      if ( v14 == 1 )
      {
        LODWORD(v2) = *v4++ + 37 * v2;
        goto LABEL_15;
      }
    }
  }
LABEL_21:
  if ( (int)CitpUpdateActiveBootId(v2, 1, &v20, &v19) >= 0 )
  {
    v15 = v19;
    if ( v19 )
    {
      v16 = *((_WORD *)a1 + 158);
      if ( !v16 || v16 > v19 )
        *((_WORD *)a1 + 158) = v19;
      v17 = *((_WORD *)a1 + 159);
      if ( !v17 || v17 < v15 )
        *((_WORD *)a1 + 159) = v15;
      if ( v20 )
      {
        if ( v20 != v15 )
        {
          CitpStatIncrement((unsigned __int16 *)a1 + 147, 1);
          CitpStatIncrement((unsigned __int16 *)a1 + 267, v18);
          CitpPostUpdateUseInfoSave(a1, 0LL);
          CitpDPDataSave(a1);
        }
      }
    }
  }
}
