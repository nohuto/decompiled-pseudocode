/*
 * XREFs of ndisSetMiniportRSSParameters @ 0x1C002150C
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00BC5E0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C001676C (ndisCalculateRssParametersSize.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C003CA88 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSParameters(__int64 a1, __int64 a2, int *a3)
{
  char v5; // di
  unsigned __int8 v6; // r13
  unsigned int v7; // r12d
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned __int8 v10; // cl
  unsigned __int16 v11; // dx
  int v12; // eax
  int v13; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+20h] [rbp-58h]
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF
  int *v21; // [rsp+90h] [rbp+18h]

  v21 = a3;
  v5 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(149LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
    v5 = byte_1C0092612;
  }
  *(_DWORD *)(a2 + 56) = 0;
  v6 = 1;
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v13 = -1073676268;
    if ( (unsigned __int8)v5 < 2u )
      goto LABEL_13;
    v15 = 150LL;
LABEL_19:
    WPP_SF_qqd(v15, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, -1073676268);
LABEL_21:
    v5 = byte_1C0092612;
    goto LABEL_13;
  }
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 40;
  v10 = *(_BYTE *)(v8 + 1);
  if ( v10 >= 2u )
  {
    v11 = *(_WORD *)(v8 + 2);
    if ( v11 < 0x28u )
    {
      if ( (unsigned __int8)v5 < 2u )
      {
LABEL_25:
        v13 = -1073676268;
        goto LABEL_13;
      }
      v17 = 151LL;
LABEL_24:
      WPP_SF_qq(v17, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
      v5 = byte_1C0092612;
      goto LABEL_25;
    }
    if ( v10 >= 3u )
    {
      v9 = 44;
      if ( v11 < 0x2Cu )
      {
        if ( (unsigned __int8)v5 < 2u )
          goto LABEL_25;
        v17 = 152LL;
        goto LABEL_24;
      }
    }
    if ( v7 < v9 )
    {
      *(_DWORD *)(a2 + 56) = v9;
      v13 = -1073676268;
      if ( (unsigned __int8)v5 < 2u )
        goto LABEL_13;
      v15 = 153LL;
      goto LABEL_19;
    }
  }
  v12 = ndisCalculateRssParametersSize(*(_QWORD *)(a2 + 40), &v20);
  v13 = v12;
  if ( v12 )
  {
    if ( (unsigned __int8)v5 < 2u )
      goto LABEL_13;
    v16 = 154LL;
    v19 = v12;
    goto LABEL_20;
  }
  if ( *(_WORD *)(v8 + 12) > 0x200u )
  {
    if ( (unsigned __int8)v5 < 2u )
    {
LABEL_36:
      v13 = -1073676267;
      goto LABEL_13;
    }
    v18 = 155LL;
LABEL_35:
    WPP_SF_qqd(v18, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, 0);
    v5 = byte_1C0092612;
    goto LABEL_36;
  }
  if ( *(_WORD *)(v8 + 20) != 40 && (*(_BYTE *)(v8 + 4) & 0x10) == 0 && (unsigned __int8)*(_DWORD *)(v8 + 8) )
  {
    if ( (unsigned __int8)v5 < 2u )
      goto LABEL_36;
    v18 = 156LL;
    goto LABEL_35;
  }
  v13 = 0;
  if ( v7 >= v20 )
  {
    v6 = 0;
    goto LABEL_13;
  }
  *(_DWORD *)(a2 + 56) = v20;
  v13 = -1073676268;
  if ( (unsigned __int8)v5 >= 2u )
  {
    v16 = 157LL;
    v19 = -1073676268;
LABEL_20:
    WPP_SF_qqd(v16, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, v19);
    goto LABEL_21;
  }
LABEL_13:
  *v21 = v13;
  if ( (unsigned __int8)v5 >= 4u )
    WPP_SF_qqDD(158LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, v6, v13);
  if ( v13 && (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(_DWORD *)(a1 + 4080),
      (unsigned int)&SetMiniportRSSCapsFailed,
      a1 + 4032,
      a1 + 4032,
      *(_DWORD *)(a1 + 4080),
      *(_QWORD *)(a1 + 4048),
      v13,
      103,
      a2);
  return v6;
}
