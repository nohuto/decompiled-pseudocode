/*
 * XREFs of VrpGetContextsForNotifyInfo @ 0x1406A31A4
 * Callers:
 *     VrpShouldOperateOnCall @ 0x1406A397C (VrpShouldOperateOnCall.c)
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
  __int64 v14; // rcx
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
  int v28; // ecx

  if ( a1 > 30 )
  {
    if ( a1 > 40 )
    {
      v23 = a1 - 41;
      if ( !v23 )
        goto LABEL_40;
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
          goto LABEL_40;
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
            goto LABEL_40;
          v28 = v27 - 1;
          if ( v28 )
          {
            v22 = v28 - 1;
            if ( !v22 )
              goto LABEL_17;
LABEL_52:
            if ( v22 != 1 )
              goto LABEL_53;
          }
        }
      }
    }
    else
    {
      if ( a1 == 40 )
      {
        v11 = a2[1];
        goto LABEL_41;
      }
      v15 = a1 - 31;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          v14 = *(_QWORD *)(*a2 + 72LL);
          goto LABEL_29;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
LABEL_26:
          v12 = *a2;
          *a3 = *(_QWORD *)(*a2 + 40LL);
          v13 = *(_QWORD *)(v12 + 32);
LABEL_27:
          *a4 = v13;
          return;
        }
        v18 = v17 - 1;
        if ( !v18 )
          goto LABEL_16;
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
            goto LABEL_17;
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( !v22 )
            {
LABEL_40:
              v11 = a2[4];
              goto LABEL_41;
            }
            goto LABEL_52;
          }
        }
      }
    }
LABEL_54:
    *a3 = a2[5];
    v13 = a2[4];
    goto LABEL_27;
  }
  if ( a1 == 30 )
    goto LABEL_18;
  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
    {
LABEL_14:
      v11 = a2[7];
LABEL_41:
      *a3 = v11;
      goto LABEL_42;
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
        goto LABEL_41;
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
LABEL_53:
                *a3 = 0LL;
                goto LABEL_42;
              }
            }
          }
LABEL_15:
          v11 = a2[6];
          goto LABEL_41;
        }
        goto LABEL_16;
      }
LABEL_17:
      v11 = a2[5];
      goto LABEL_41;
    }
LABEL_18:
    v11 = a2[2];
    goto LABEL_41;
  }
  if ( a1 == 11 || a1 == 13 )
    goto LABEL_54;
  if ( a1 == 14 )
    goto LABEL_18;
  if ( a1 <= 14 )
    goto LABEL_53;
  if ( a1 <= 25 )
    goto LABEL_54;
  if ( a1 != 26 && a1 != 28 )
    goto LABEL_26;
  v14 = *(_QWORD *)(*a2 + 88LL);
LABEL_29:
  *a3 = v14;
LABEL_42:
  *a4 = 0LL;
}
