/*
 * XREFs of ndisSetOpenEthAddDeleteMulticast @ 0x1C00A7EEC
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C00A7E50 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C001E744 (ndisIsValidMulticastFilter.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qqqDD @ 0x1C0045D28 (WPP_SF_qqqDD.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C00A8224 (ethAddOneOpenMulticastAddress.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00E0C78 (ethDeleteOneOpenMulticastAddress.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r15
  unsigned __int8 v4; // bp
  int *v5; // r12
  __int64 *v8; // rbx
  int IsValidMulticastFilter; // r14d
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // r12
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // r8d
  int v18; // ecx
  __int64 v19; // r13
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // r9d
  int v25; // eax
  unsigned __int8 result; // al
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // dx
  __int64 v29; // r8
  char *v30; // rdx
  char *v31; // rcx
  unsigned int v32; // [rsp+90h] [rbp+8h] BYREF
  int *v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v33 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 1;
  v5 = a3;
  LOBYTE(v32) = 1;
  v8 = *(__int64 **)(v3 + 400);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(0x6Bu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, a2);
  IsValidMulticastFilter = ndisIsValidMulticastFilter(*(_QWORD *)(a1 + 16), a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C0092612 < 4u )
      goto LABEL_36;
    WPP_SF_(0x6Cu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids);
LABEL_34:
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qqqDD(0x6Eu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, a2, IsValidMulticastFilter, v4);
LABEL_36:
    if ( !IsValidMulticastFilter )
      goto LABEL_37;
    goto LABEL_56;
  }
  if ( !*(_DWORD *)(a1 + 440) )
  {
    IsValidMulticastFilter = 0;
    v4 = 1;
    goto LABEL_34;
  }
  if ( *(_DWORD *)(a2 + 48) == 6 )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v10 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = IsValidMulticastFilter & v10;
    *(_DWORD *)(a1 + 472) = v10;
    v11 = *(_QWORD *)(a2 + 40);
    if ( *(_DWORD *)(a2 + 32) == 16843272 )
      v12 = ethAddOneOpenMulticastAddress(a1, v11, &v32);
    else
      v12 = ethDeleteOneOpenMulticastAddress(a1, v11, &v32);
    v4 = v32;
    IsValidMulticastFilter = v12;
    if ( (_BYTE)v32 != 1 )
    {
      v13 = v8;
      v14 = *v8;
      memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
      v15 = *((_DWORD *)v8 + 92);
      *((_DWORD *)v8 + 92) = 0;
      *((_DWORD *)v8 + 93) = v15;
      do
      {
        while ( 1 )
        {
          if ( !v14 )
          {
            if ( IsValidMulticastFilter )
              goto LABEL_31;
            if ( v13 != v8 || (v13 = v8 + 1, (v14 = v8[1]) == 0) )
            {
              if ( v13 != v8 + 1 )
                break;
              v13 = v8 + 2;
              v14 = v8[2];
              if ( !v14 )
                break;
            }
          }
          if ( IsValidMulticastFilter )
            goto LABEL_31;
          v16 = 0LL;
          v32 = 0;
          if ( *(_DWORD *)(v14 + 456) )
          {
            while ( 1 )
            {
              v17 = *((_DWORD *)v8 + 92);
              v18 = -1;
              v19 = 0LL;
              if ( v17 )
              {
                v20 = v8[44];
                v21 = 3 * v16;
                v18 = -1;
                v34 = *(_QWORD *)(v14 + 448);
                v22 = *(_DWORD *)(v34 + 12 * v16 + 6);
                while ( 1 )
                {
                  v23 = *(_DWORD *)(v20 + 6 * v19 + 2);
                  if ( v23 > v22 )
                    break;
                  if ( v23 >= v22 )
                  {
                    v27 = *(_WORD *)(v20 + 6 * v19);
                    v28 = *(_WORD *)(v34 + 4 * v21 + 4);
                    if ( v27 > v28 )
                      break;
                    if ( v27 >= v28 )
                      goto LABEL_11;
                  }
                  v19 = (unsigned int)(v19 + 1);
                  if ( (unsigned int)v19 >= v17 )
                    goto LABEL_23;
                }
                v18 = 1;
              }
LABEL_23:
              *((_DWORD *)v8 + 92) = v17 + 1;
              if ( v17 + 1 > *((_DWORD *)v8 + 86) )
                break;
              if ( v18 > 0 )
                memmove(
                  (void *)(v8[44] + 6LL * (unsigned int)(v19 + 1)),
                  (const void *)(v8[44] + 6 * v19),
                  6 * (v17 + 1 - (unsigned int)v19) - 6);
              memmove((void *)(v8[44] + 6 * v19), (const void *)(*(_QWORD *)(v14 + 448) + 4 * (3LL * v32 + 1)), 6uLL);
LABEL_11:
              v16 = v32 + 1;
              v32 = v16;
              if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 456) )
                goto LABEL_12;
            }
            IsValidMulticastFilter = -1073676279;
          }
LABEL_12:
          v14 = *(_QWORD *)(v14 + 424);
        }
      }
      while ( v13 != v8 + 2 );
LABEL_31:
      v24 = *((_DWORD *)v8 + 92);
      if ( v24 == *((_DWORD *)v8 + 93) )
      {
        v29 = 0LL;
        if ( v24 )
        {
          v30 = (char *)v8[45];
          v31 = (char *)v8[44];
          while ( *(_DWORD *)&v31[6 * v29 + 2] == *(_DWORD *)&v30[6 * v29 + 2]
               && *(_WORD *)&v31[6 * v29] == *(_WORD *)&v30[6 * v29] )
          {
            v29 = (unsigned int)(v29 + 1);
            if ( (unsigned int)v29 >= v24 )
            {
              memmove(v31, v30, (unsigned int)(6 * *((_DWORD *)v8 + 86)));
              *((_DWORD *)v8 + 93) = 0;
              v4 = 1;
              goto LABEL_33;
            }
          }
        }
      }
      v4 = 0;
      *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(a2 + 160) = *(_DWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v8[44];
      v25 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 48) = 6 * *((_DWORD *)v8 + 92);
      *(_DWORD *)(a2 + 144) = v25;
      *(_DWORD *)(a2 + 32) = 16843011;
LABEL_33:
      v5 = v33;
    }
    goto LABEL_34;
  }
  *(_DWORD *)(a2 + 52) = 0;
  IsValidMulticastFilter = -1073676268;
  *(_DWORD *)(a2 + 56) = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qqq(0x6Du, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, a2);
    goto LABEL_34;
  }
LABEL_56:
  if ( (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(unsigned int *)(v3 + 4080),
      &SetOpenEthAddDeleteMulticastFailed,
      (const GUID *)(v3 + 4032),
      v3 + 4032,
      *(_DWORD *)(v3 + 4080),
      *(_QWORD *)(v3 + 4048),
      IsValidMulticastFilter,
      157,
      a1);
LABEL_37:
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
