/*
 * XREFs of ndisSetOpenEthAddDeleteMulticast @ 0x1C00CB110
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C00CB070 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C0020108 (ndisIsValidMulticastFilter.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqqDD @ 0x1C0044014 (WPP_SF_qqqDD.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C00CB454 (ethAddOneOpenMulticastAddress.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00ED6BC (ethDeleteOneOpenMulticastAddress.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r15
  unsigned __int8 v4; // bp
  int *v5; // r12
  __int64 *v8; // rbx
  __int64 v9; // rcx
  int IsValidMulticastFilter; // r14d
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // r12
  __int64 v15; // rbp
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // r13
  unsigned int v23; // r10d
  unsigned int v24; // eax
  __int64 v25; // r13
  unsigned int v26; // r8d
  int v27; // eax
  unsigned __int8 result; // al
  unsigned __int16 v29; // ax
  unsigned __int16 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r10
  unsigned int v34; // [rsp+90h] [rbp+8h] BYREF
  int *v35; // [rsp+A0h] [rbp+18h]
  __int64 v36; // [rsp+A8h] [rbp+20h]

  v35 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 1;
  v5 = a3;
  LOBYTE(v34) = 1;
  v8 = *(__int64 **)(v3 + 400);
  v9 = v3;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qqq(0x68u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, a2);
    v9 = *(_QWORD *)(a1 + 16);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C0099612 < 4u )
      goto LABEL_37;
    WPP_SF_(0x69u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids);
    goto LABEL_35;
  }
  if ( !*(_DWORD *)(a1 + 440) )
  {
    IsValidMulticastFilter = 0;
    v4 = 1;
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a2 + 48) == 6 )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v11 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = IsValidMulticastFilter & v11;
    *(_DWORD *)(a1 + 472) = v11;
    v12 = *(_QWORD *)(a2 + 40);
    if ( *(_DWORD *)(a2 + 32) == 16843272 )
      v13 = ethAddOneOpenMulticastAddress(a1, v12, &v34);
    else
      v13 = ethDeleteOneOpenMulticastAddress(a1, v12, &v34);
    v4 = v34;
    IsValidMulticastFilter = v13;
    if ( (_BYTE)v34 != 1 )
    {
      v14 = v8;
      v15 = *v8;
      memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
      v16 = *((_DWORD *)v8 + 92);
      *((_DWORD *)v8 + 92) = 0;
      v17 = -1;
      *((_DWORD *)v8 + 93) = v16;
      do
      {
        while ( 1 )
        {
          if ( !v15 )
          {
            if ( IsValidMulticastFilter )
              goto LABEL_31;
            if ( v14 != v8 || (v14 = v8 + 1, (v15 = v8[1]) == 0) )
            {
              if ( v14 != v8 + 1 )
                break;
              v14 = v8 + 2;
              v15 = v8[2];
              if ( !v15 )
                break;
            }
          }
          if ( IsValidMulticastFilter )
            goto LABEL_31;
          v18 = 0LL;
          v34 = 0;
          if ( *(_DWORD *)(v15 + 456) )
          {
            while ( 1 )
            {
              v19 = *((_DWORD *)v8 + 92);
              v20 = 0LL;
              if ( v19 )
              {
                v21 = v8[44];
                v22 = 3 * v18;
                v17 = -1;
                v36 = *(_QWORD *)(v15 + 448);
                v23 = *(_DWORD *)(v36 + 12 * v18 + 6);
                while ( 1 )
                {
                  v24 = *(_DWORD *)(v21 + 6 * v20 + 2);
                  if ( v24 > v23 )
                    break;
                  if ( v24 >= v23 )
                  {
                    v29 = *(_WORD *)(v21 + 6 * v20);
                    v30 = *(_WORD *)(v36 + 4 * v22 + 4);
                    if ( v29 > v30 )
                      break;
                    if ( v29 >= v30 )
                      goto LABEL_22;
                  }
                  v20 = (unsigned int)(v20 + 1);
                  if ( (unsigned int)v20 >= v19 )
                    goto LABEL_18;
                }
                v17 = 1;
              }
LABEL_18:
              *((_DWORD *)v8 + 92) = v19 + 1;
              if ( v19 + 1 > *((_DWORD *)v8 + 86) )
                break;
              v25 = (unsigned int)v20;
              if ( v17 > 0 )
                memmove(
                  (void *)(v8[44] + 6LL * (unsigned int)(v20 + 1)),
                  (const void *)(v8[44] + 2 * ((unsigned int)v20 + 2 * v20)),
                  6 * (v19 + 1 - (unsigned int)v20) - 6);
              memmove((void *)(v8[44] + 6 * v25), (const void *)(*(_QWORD *)(v15 + 448) + 4 * (3LL * v34 + 1)), 6uLL);
LABEL_22:
              v17 = -1;
              v18 = v34 + 1;
              v34 = v18;
              if ( (unsigned int)v18 >= *(_DWORD *)(v15 + 456) )
              {
                v17 = -1;
                goto LABEL_24;
              }
            }
            IsValidMulticastFilter = -1073676279;
            v17 = -1;
          }
LABEL_24:
          v15 = *(_QWORD *)(v15 + 424);
        }
      }
      while ( v14 != v8 + 2 );
LABEL_31:
      v26 = *((_DWORD *)v8 + 92);
      if ( v26 == *((_DWORD *)v8 + 93) && (v31 = 0LL, v26) )
      {
        v32 = v8[45];
        v33 = v8[44];
        while ( *(_DWORD *)(v33 + 6 * v31 + 2) == *(_DWORD *)(v32 + 6 * v31 + 2)
             && *(_WORD *)(v33 + 6 * v31) == *(_WORD *)(v32 + 6 * v31) )
        {
          v17 = 0;
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= v26 )
            goto LABEL_32;
        }
      }
      else
      {
LABEL_32:
        if ( !v17 )
        {
          memmove((void *)v8[44], (const void *)v8[45], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
          *((_DWORD *)v8 + 93) = 0;
          v4 = 1;
          goto LABEL_34;
        }
      }
      v4 = 0;
      *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(a2 + 160) = *(_DWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v8[44];
      v27 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 48) = 6 * *((_DWORD *)v8 + 92);
      *(_DWORD *)(a2 + 144) = v27;
      *(_DWORD *)(a2 + 32) = 16843011;
LABEL_34:
      v5 = v35;
    }
LABEL_35:
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qqqDD(0x6Bu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, a2, IsValidMulticastFilter, v4);
LABEL_37:
    if ( !IsValidMulticastFilter )
      goto LABEL_38;
    goto LABEL_57;
  }
  *(_DWORD *)(a2 + 52) = 0;
  IsValidMulticastFilter = -1073676268;
  *(_DWORD *)(a2 + 56) = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    WPP_SF_qqq(0x6Au, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, a2);
    goto LABEL_35;
  }
LABEL_57:
  if ( (dword_1C009AF04 & 4) != 0 )
    McTemplateK0jqxqqq(
      *(unsigned int *)(v3 + 4080),
      &SetOpenEthAddDeleteMulticastFailed,
      (const GUID *)(v3 + 4032),
      v3 + 4032,
      *(_DWORD *)(v3 + 4080),
      *(_QWORD *)(v3 + 4048),
      IsValidMulticastFilter,
      148,
      a1);
LABEL_38:
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
