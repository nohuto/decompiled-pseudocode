/*
 * XREFs of ndisSetOpenEthMulticastList @ 0x1C00C4A78
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C00C49B0 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C0020108 (ndisIsValidMulticastFilter.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqqDD @ 0x1C0044014 (WPP_SF_qqqDD.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthMulticastList(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r13
  int *v4; // rbx
  __int64 v5; // r14
  unsigned __int8 v7; // bp
  __int64 *v8; // rdi
  __int64 v9; // rcx
  int IsValidMulticastFilter; // r15d
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // r13
  unsigned int v14; // r8d
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // r10
  int v25; // ecx
  __int64 v26; // r11
  unsigned int v27; // r9d
  unsigned int v28; // eax
  unsigned int v29; // r8d
  int v30; // eax
  __int64 v32; // r11
  unsigned int v33; // r10d
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // r10
  unsigned __int16 v38; // ax
  unsigned __int16 v39; // r9
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // dx
  __int64 v42; // [rsp+50h] [rbp-58h]
  __int64 v43; // [rsp+50h] [rbp-58h]
  __int64 v44; // [rsp+58h] [rbp-50h]
  unsigned int v45; // [rsp+B0h] [rbp+8h]
  unsigned int v46; // [rsp+B0h] [rbp+8h]
  __int64 v49; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a3;
  v5 = a2;
  v49 = v3;
  v7 = 1;
  v8 = *(__int64 **)(v3 + 400);
  v9 = v3;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qqq(0x71u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, a2);
    v9 = *(_QWORD *)(a1 + 16);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, v5);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
      WPP_SF_qqq(0x72u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, v5);
  }
  else if ( *(_DWORD *)(a1 + 440) )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v11 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = IsValidMulticastFilter & v11;
    *(_DWORD *)(a1 + 472) = v11;
    v45 = *(_DWORD *)(v5 + 48) / 6u;
    if ( v45 )
    {
      v12 = 0;
      v13 = *(_QWORD *)(v5 + 40);
      do
      {
        v14 = *(_DWORD *)(a1 + 456);
        v15 = 0LL;
        v16 = -1;
        if ( v14 )
        {
          v32 = *(_QWORD *)(a1 + 448);
          v33 = *(_DWORD *)(6 * v12 + v13 + 2);
          while ( 1 )
          {
            v34 = *(_DWORD *)(v32 + 12 * v15 + 6);
            if ( v34 > v33 )
              break;
            if ( v34 >= v33 )
            {
              v38 = *(_WORD *)(v32 + 12 * v15 + 4);
              v39 = *(_WORD *)(6 * v12 + v13);
              if ( v38 > v39 )
                break;
              if ( v38 >= v39 )
                goto LABEL_11;
            }
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= v14 )
              goto LABEL_8;
          }
          v16 = 1;
        }
LABEL_8:
        v17 = (unsigned int)v15;
        *(_DWORD *)(a1 + 456) = v14 + 1;
        if ( v16 > 0 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 448) + 12LL * (unsigned int)(v15 + 1)),
            (const void *)(*(_QWORD *)(a1 + 448) + 12 * v15),
            12LL * (v14 - (unsigned int)v15));
        v18 = 3 * v17;
        memmove((void *)(*(_QWORD *)(a1 + 448) + 4LL + 4 * v18), (const void *)(v13 + 6 * v12), 6uLL);
        *(_DWORD *)(*(_QWORD *)(a1 + 448) + 4 * v18) = 1;
LABEL_11:
        ++v12;
      }
      while ( v12 < v45 );
      v5 = a2;
      v3 = v49;
    }
    else
    {
      *(_DWORD *)(a1 + 456) = 0;
    }
    v19 = v8;
    v20 = *v8;
    memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
    v21 = *((_DWORD *)v8 + 92);
    *((_DWORD *)v8 + 92) = 0;
    *((_DWORD *)v8 + 93) = v21;
    do
    {
      if ( v20 )
        goto LABEL_17;
LABEL_31:
      if ( v19 != v8 || (v19 = v8 + 1, (v20 = v8[1]) == 0) )
      {
        if ( v19 != v8 + 1 )
          continue;
        v19 = v8 + 2;
        v20 = v8[2];
        if ( !v20 )
          continue;
      }
LABEL_17:
      while ( !IsValidMulticastFilter )
      {
        v22 = 0LL;
        v46 = 0;
        if ( *(_DWORD *)(v20 + 456) )
        {
          while ( 1 )
          {
            v23 = *((_DWORD *)v8 + 92);
            v24 = 0LL;
            v25 = -1;
            if ( v23 )
            {
              v26 = v8[44];
              v44 = *(_QWORD *)(v20 + 448);
              v42 = 3 * v22;
              v27 = *(_DWORD *)(v44 + 12 * v22 + 6);
              v25 = -1;
              while ( 1 )
              {
                v28 = *(_DWORD *)(v26 + 6 * v24 + 2);
                if ( v28 > v27 )
                  break;
                if ( v28 >= v27 )
                {
                  v40 = *(_WORD *)(v26 + 6 * v24);
                  v41 = *(_WORD *)(v44 + 4 * v42 + 4);
                  v3 = v49;
                  if ( v40 > v41 )
                    break;
                  if ( v40 >= v41 )
                    goto LABEL_28;
                }
                v24 = (unsigned int)(v24 + 1);
                if ( (unsigned int)v24 >= v23 )
                  goto LABEL_24;
              }
              v25 = 1;
            }
LABEL_24:
            *((_DWORD *)v8 + 92) = v23 + 1;
            if ( v23 + 1 > *((_DWORD *)v8 + 86) )
              break;
            v43 = 6 * v24;
            if ( v25 > 0 )
              memmove(
                (void *)(v8[44] + 6LL * (unsigned int)(v24 + 1)),
                (const void *)(6 * v24 + v8[44]),
                6 * (v23 + 1 - (unsigned int)v24) - 6);
            memmove((void *)(v8[44] + v43), (const void *)(*(_QWORD *)(v20 + 448) + 4 * (3LL * v46 + 1)), 6uLL);
LABEL_28:
            v22 = v46 + 1;
            v46 = v22;
            if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 456) )
              goto LABEL_29;
          }
          IsValidMulticastFilter = -1073676279;
        }
LABEL_29:
        v20 = *(_QWORD *)(v20 + 424);
        if ( !v20 )
        {
          if ( IsValidMulticastFilter )
            goto LABEL_38;
          goto LABEL_31;
        }
      }
      goto LABEL_38;
    }
    while ( v19 != v8 + 2 );
    v29 = *((_DWORD *)v8 + 92);
    if ( v29 == *((_DWORD *)v8 + 93) )
    {
      v35 = 0LL;
      if ( v29 )
      {
        v36 = v8[45];
        v37 = v8[44];
        while ( *(_DWORD *)(v37 + 6 * v35 + 2) == *(_DWORD *)(v36 + 6 * v35 + 2)
             && *(_WORD *)(v37 + 6 * v35) == *(_WORD *)(v36 + 6 * v35) )
        {
          v30 = 0;
          v35 = (unsigned int)(v35 + 1);
          if ( (unsigned int)v35 >= v29 )
            goto LABEL_36;
        }
LABEL_37:
        v7 = 0;
        *(_QWORD *)(v5 + 152) = *(_QWORD *)(v5 + 40);
        *(_DWORD *)(v5 + 160) = *(_DWORD *)(v5 + 48);
        *(_QWORD *)(v5 + 40) = v8[44];
        *(_DWORD *)(v5 + 48) = 6 * *((_DWORD *)v8 + 92);
        goto LABEL_38;
      }
    }
    v30 = -1;
LABEL_36:
    if ( v30 )
      goto LABEL_37;
    memmove((void *)v8[44], (const void *)v8[45], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
    *((_DWORD *)v8 + 93) = 0;
    IsValidMulticastFilter = 0;
LABEL_38:
    v4 = a3;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqDD(0x73u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, v5, IsValidMulticastFilter, v7);
  if ( IsValidMulticastFilter && (dword_1C009AF04 & 4) != 0 )
    McTemplateK0jqxqqq(
      *(unsigned int *)(v3 + 4080),
      &SetOpenEthMulticastListFailed,
      (const GUID *)(v3 + 4032),
      v3 + 4032,
      *(_DWORD *)(v3 + 4080),
      *(_QWORD *)(v3 + 4048),
      IsValidMulticastFilter,
      89,
      a1);
  *v4 = IsValidMulticastFilter;
  return v7;
}
