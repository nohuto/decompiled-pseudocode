/*
 * XREFs of VrpGetContextsForNotifyInfo @ 0x140679188
 * Callers:
 *     VrpShouldOperateOnCall @ 0x1406793FC (VrpShouldOperateOnCall.c)
 * Callees:
 *     <none>
 */

void __fastcall VrpGetContextsForNotifyInfo(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx

  if ( a1 > 30 )
  {
    if ( a1 > 40 )
    {
      v22 = a1 - 41;
      if ( !v22 )
        goto LABEL_39;
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_53;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_39;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_53;
      v26 = v25 - 1;
      if ( !v26 )
        goto LABEL_39;
      v27 = v26 - 1;
      if ( !v27 )
      {
LABEL_53:
        *a3 = a2[5];
        v13 = a2[4];
        goto LABEL_27;
      }
      v21 = v27 - 1;
      if ( !v21 )
        goto LABEL_17;
    }
    else
    {
      if ( a1 == 40 )
      {
        v11 = a2[1];
        goto LABEL_40;
      }
      v14 = a1 - 31;
      if ( !v14 )
        goto LABEL_53;
      v15 = v14 - 1;
      if ( !v15 )
      {
        v11 = a2[9];
        goto LABEL_40;
      }
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_53;
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_16;
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_53;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_17;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_53;
      v21 = v20 - 1;
      if ( !v21 )
      {
LABEL_39:
        v11 = a2[4];
        goto LABEL_40;
      }
    }
    if ( v21 != 1 )
      goto LABEL_52;
    goto LABEL_53;
  }
  if ( a1 == 30 )
    goto LABEL_18;
  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
    {
LABEL_14:
      v11 = a2[7];
LABEL_40:
      *a3 = v11;
      goto LABEL_41;
    }
    if ( a1 )
    {
      v4 = a1 - 1;
      if ( !v4 )
        goto LABEL_15;
      v5 = v4 - 1;
      if ( !v5 )
      {
LABEL_16:
        v11 = a2[3];
        goto LABEL_40;
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                if ( v10 == 1 )
                  goto LABEL_14;
LABEL_52:
                *a3 = 0LL;
                goto LABEL_41;
              }
            }
          }
LABEL_15:
          v11 = a2[6];
          goto LABEL_40;
        }
        goto LABEL_16;
      }
LABEL_17:
      v11 = a2[5];
      goto LABEL_40;
    }
LABEL_18:
    v11 = a2[2];
    goto LABEL_40;
  }
  if ( a1 == 11 || a1 == 13 )
    goto LABEL_53;
  if ( a1 == 14 )
    goto LABEL_18;
  if ( a1 <= 14 )
    goto LABEL_52;
  if ( a1 <= 25 )
    goto LABEL_53;
  if ( a1 != 26 && a1 != 28 )
  {
    v12 = *a2;
    *a3 = *(_QWORD *)(*a2 + 40LL);
    v13 = *(_QWORD *)(v12 + 32);
LABEL_27:
    *a4 = v13;
    return;
  }
  *a3 = *(_QWORD *)(*a2 + 88LL);
LABEL_41:
  *a4 = 0LL;
}
