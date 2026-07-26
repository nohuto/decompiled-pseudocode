/*
 * XREFs of ndisSetOpenEthMulticastList @ 0x1C00BA148
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C00BA080 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C001E744 (ndisIsValidMulticastFilter.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qqqDD @ 0x1C0045D28 (WPP_SF_qqqDD.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthMulticastList(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbx
  int *v4; // r12
  __int64 v5; // r14
  unsigned __int8 v7; // bp
  __int64 *v8; // rdi
  int IsValidMulticastFilter; // r15d
  int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  __int64 v13; // r14
  unsigned int v14; // edx
  int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // r10
  unsigned int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 *v21; // r12
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r8d
  __int64 v26; // r13
  int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // r11
  unsigned int v30; // r9d
  unsigned int v31; // eax
  unsigned int v32; // r9d
  __int64 v34; // r8
  char *v35; // rdx
  char *v36; // rcx
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // r8
  unsigned __int16 v39; // ax
  unsigned __int16 v40; // dx
  __int64 v41; // [rsp+50h] [rbp-58h]
  unsigned int v42; // [rsp+B0h] [rbp+8h]
  __int64 v45; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a3;
  v5 = a2;
  v45 = v3;
  v7 = 1;
  v8 = *(__int64 **)(v3 + 400);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(0x74u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, a2);
  IsValidMulticastFilter = ndisIsValidMulticastFilter(*(_QWORD *)(a1 + 16), a1, v5);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C0092612 >= 2u )
      WPP_SF_qqq(0x75u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, v5);
  }
  else if ( *(_DWORD *)(a1 + 440) )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v10 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = IsValidMulticastFilter & v10;
    *(_DWORD *)(a1 + 472) = v10;
    v11 = *(_DWORD *)(v5 + 48) / 6u;
    if ( v11 )
    {
      v12 = 0;
      v13 = *(_QWORD *)(v5 + 40);
      do
      {
        v14 = *(_DWORD *)(a1 + 456);
        v15 = -1;
        v16 = 0LL;
        if ( v14 )
        {
          v17 = *(_QWORD *)(a1 + 448);
          v15 = -1;
          v18 = *(_DWORD *)(6 * v12 + v13 + 2);
          while ( 1 )
          {
            v19 = *(_DWORD *)(v17 + 12 * v16 + 6);
            if ( v19 > v18 )
              break;
            if ( v19 >= v18 )
            {
              v37 = *(_WORD *)(v17 + 12 * v16 + 4);
              v38 = *(_WORD *)(6 * v12 + v13);
              if ( v37 > v38 )
                break;
              if ( v37 >= v38 )
                goto LABEL_17;
            }
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= v14 )
              goto LABEL_14;
          }
          v15 = 1;
        }
LABEL_14:
        *(_DWORD *)(a1 + 456) = v14 + 1;
        if ( v15 > 0 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 448) + 12LL * (unsigned int)(v16 + 1)),
            (const void *)(*(_QWORD *)(a1 + 448) + 12 * v16),
            12LL * (v14 - (unsigned int)v16));
        v20 = 3 * v16;
        memmove((void *)(*(_QWORD *)(a1 + 448) + 4LL + 4 * v20), (const void *)(v13 + 6 * v12), 6uLL);
        *(_DWORD *)(*(_QWORD *)(a1 + 448) + 4 * v20) = 1;
LABEL_17:
        ++v12;
      }
      while ( v12 < v11 );
      v5 = a2;
    }
    else
    {
      *(_DWORD *)(a1 + 456) = 0;
    }
    v21 = v8;
    v22 = *v8;
    memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
    v23 = *((_DWORD *)v8 + 92);
    *((_DWORD *)v8 + 92) = 0;
    *((_DWORD *)v8 + 93) = v23;
    do
    {
      if ( v22 )
        goto LABEL_23;
LABEL_37:
      if ( v21 != v8 || (v21 = v8 + 1, (v22 = v8[1]) == 0) )
      {
        if ( v21 != v8 + 1 )
          continue;
        v21 = v8 + 2;
        v22 = v8[2];
        if ( !v22 )
          continue;
      }
LABEL_23:
      while ( !IsValidMulticastFilter )
      {
        v24 = 0LL;
        v42 = 0;
        if ( *(_DWORD *)(v22 + 456) )
        {
          while ( 1 )
          {
            v25 = *((_DWORD *)v8 + 92);
            v26 = 0LL;
            v27 = -1;
            if ( v25 )
            {
              v28 = v8[44];
              v29 = 3 * v24;
              v41 = *(_QWORD *)(v22 + 448);
              v30 = *(_DWORD *)(v41 + 12 * v24 + 6);
              while ( 1 )
              {
                v31 = *(_DWORD *)(v28 + 6 * v26 + 2);
                if ( v31 > v30 )
                  break;
                if ( v31 >= v30 )
                {
                  v39 = *(_WORD *)(v28 + 6 * v26);
                  v40 = *(_WORD *)(v41 + 4 * v29 + 4);
                  if ( v39 > v40 )
                    break;
                  if ( v39 >= v40 )
                    goto LABEL_34;
                }
                v26 = (unsigned int)(v26 + 1);
                if ( (unsigned int)v26 >= v25 )
                  goto LABEL_30;
              }
              v27 = 1;
            }
LABEL_30:
            *((_DWORD *)v8 + 92) = v25 + 1;
            if ( v25 + 1 > *((_DWORD *)v8 + 86) )
              break;
            if ( v27 > 0 )
              memmove(
                (void *)(v8[44] + 6LL * (unsigned int)(v26 + 1)),
                (const void *)(v8[44] + 6 * v26),
                6 * (v25 + 1 - (unsigned int)v26) - 6);
            memmove((void *)(v8[44] + 6 * v26), (const void *)(*(_QWORD *)(v22 + 448) + 4 * (3LL * v42 + 1)), 6uLL);
LABEL_34:
            v24 = v42 + 1;
            v42 = v24;
            if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 456) )
              goto LABEL_35;
          }
          IsValidMulticastFilter = -1073676279;
        }
LABEL_35:
        v22 = *(_QWORD *)(v22 + 424);
        if ( !v22 )
        {
          if ( IsValidMulticastFilter )
            goto LABEL_42;
          goto LABEL_37;
        }
      }
      goto LABEL_42;
    }
    while ( v21 != v8 + 2 );
    v32 = *((_DWORD *)v8 + 92);
    if ( v32 == *((_DWORD *)v8 + 93) )
    {
      v34 = 0LL;
      if ( v32 )
      {
        v35 = (char *)v8[45];
        v36 = (char *)v8[44];
        while ( *(_DWORD *)&v36[6 * v34 + 2] == *(_DWORD *)&v35[6 * v34 + 2]
             && *(_WORD *)&v36[6 * v34] == *(_WORD *)&v35[6 * v34] )
        {
          v34 = (unsigned int)(v34 + 1);
          if ( (unsigned int)v34 >= v32 )
          {
            memmove(v36, v35, (unsigned int)(6 * *((_DWORD *)v8 + 86)));
            *((_DWORD *)v8 + 93) = 0;
            IsValidMulticastFilter = 0;
            goto LABEL_42;
          }
        }
      }
    }
    v7 = 0;
    *(_QWORD *)(v5 + 152) = *(_QWORD *)(v5 + 40);
    *(_DWORD *)(v5 + 160) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 40) = v8[44];
    *(_DWORD *)(v5 + 48) = 6 * *((_DWORD *)v8 + 92);
LABEL_42:
    v3 = v45;
    v4 = a3;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqqDD(0x76u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, v5, IsValidMulticastFilter, v7);
  if ( IsValidMulticastFilter && (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(unsigned int *)(v3 + 4080),
      &SetOpenEthMulticastListFailed,
      (const GUID *)(v3 + 4032),
      v3 + 4032,
      *(_DWORD *)(v3 + 4080),
      *(_QWORD *)(v3 + 4048),
      IsValidMulticastFilter,
      98,
      a1);
  *v4 = IsValidMulticastFilter;
  return v7;
}
