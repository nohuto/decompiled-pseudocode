/*
 * XREFs of ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082274
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00820D4 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0082584 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00246DC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0082944 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0083BBC (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084B40 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
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
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // cx
  int v16; // r8d
  int v17; // r8d
  __int16 v18; // dx
  void *v19; // [rsp+20h] [rbp-18h]
  unsigned __int16 v20; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v21; // [rsp+50h] [rbp+18h] BYREF

  v20 = 0;
  LODWORD(v2) = 0;
  v21 = 0;
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
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v16 = v12 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                    goto LABEL_15;
                  LODWORD(v2) = *v4++ + 37 * v2;
                }
                LODWORD(v2) = *v4++ + 37 * v2;
              }
              LODWORD(v2) = *v4++ + 37 * v2;
            }
            LODWORD(v2) = *v4++ + 37 * v2;
          }
          LODWORD(v2) = *v4++ + 37 * v2;
        }
        LODWORD(v2) = *v4++ + 37 * v2;
      }
      LODWORD(v2) = *v4 + 37 * v2;
    }
  }
LABEL_15:
  if ( (int)CitpUpdateActiveBootId(v2, 1u, &v21, &v20, v19) >= 0 )
  {
    v13 = v20;
    if ( v20 )
    {
      v14 = *((_WORD *)a1 + 158);
      if ( !v14 || v14 > v20 )
        *((_WORD *)a1 + 158) = v20;
      v15 = *((_WORD *)a1 + 159);
      if ( !v15 || v15 < v13 )
        *((_WORD *)a1 + 159) = v13;
      if ( v21 )
      {
        if ( v21 != v13 )
        {
          CitpStatIncrement((unsigned __int16 *)a1 + 147, 1);
          CitpStatIncrement((unsigned __int16 *)a1 + 259, v18);
          CitpPostUpdateUseInfoSave(a1, 0LL);
          CitpDPDataSave(a1);
        }
      }
    }
  }
}
