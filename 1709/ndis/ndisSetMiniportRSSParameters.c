/*
 * XREFs of ndisSetMiniportRSSParameters @ 0x1C001CC10
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00C4530 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C001CF9C (ndisCalculateRssParametersSize.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSParameters(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int8 v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // r14
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

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(167LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  *(_DWORD *)(a2 + 56) = 0;
  v6 = 1;
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v13 = -1073676268;
    if ( (unsigned __int8)byte_1C0098752 < 2u )
      goto LABEL_13;
    v15 = 168LL;
    goto LABEL_19;
  }
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 40;
  v10 = *(_BYTE *)(v8 + 1);
  if ( v10 >= 2u )
  {
    v11 = *(_WORD *)(v8 + 2);
    if ( v11 < 0x28u )
    {
      if ( (unsigned __int8)byte_1C0098752 < 2u )
      {
LABEL_24:
        v13 = -1073676268;
        goto LABEL_13;
      }
      v17 = 169LL;
LABEL_23:
      WPP_SF_qq(v17, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
      goto LABEL_24;
    }
    if ( v10 >= 3u )
    {
      v9 = 44;
      if ( v11 < 0x2Cu )
      {
        if ( (unsigned __int8)byte_1C0098752 < 2u )
          goto LABEL_24;
        v17 = 170LL;
        goto LABEL_23;
      }
    }
    if ( v7 < v9 )
    {
      *(_DWORD *)(a2 + 56) = v9;
      v13 = -1073676268;
      if ( (unsigned __int8)byte_1C0098752 < 2u )
        goto LABEL_13;
      v15 = 171LL;
LABEL_19:
      WPP_SF_qqd(v15, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, -1073676268);
      goto LABEL_13;
    }
  }
  v12 = ndisCalculateRssParametersSize(*(_QWORD *)(a2 + 40), &v20);
  v13 = v12;
  if ( v12 )
  {
    if ( (unsigned __int8)byte_1C0098752 < 2u )
      goto LABEL_13;
    v16 = 172LL;
    v19 = v12;
LABEL_20:
    WPP_SF_qqd(v16, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v19);
    goto LABEL_13;
  }
  if ( *(_WORD *)(v8 + 12) > 0x200u )
  {
    if ( (unsigned __int8)byte_1C0098752 < 2u )
    {
LABEL_35:
      v13 = -1073676267;
      goto LABEL_13;
    }
    v18 = 173LL;
LABEL_34:
    WPP_SF_qqd(v18, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, 0);
    goto LABEL_35;
  }
  if ( *(_WORD *)(v8 + 20) != 40 && (*(_BYTE *)(v8 + 4) & 0x10) == 0 && (unsigned __int8)*(_DWORD *)(v8 + 8) )
  {
    if ( (unsigned __int8)byte_1C0098752 < 2u )
      goto LABEL_35;
    v18 = 174LL;
    goto LABEL_34;
  }
  v13 = 0;
  if ( v7 >= v20 )
  {
    v6 = 0;
    goto LABEL_13;
  }
  *(_DWORD *)(a2 + 56) = v20;
  v13 = -1073676268;
  if ( (unsigned __int8)byte_1C0098752 >= 2u )
  {
    v16 = 175LL;
    v19 = -1073676268;
    goto LABEL_20;
  }
LABEL_13:
  *a3 = v13;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqDD(176LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v6, v13);
  if ( v13 && (dword_1C0099FC4 & 4) != 0 )
    McTemplateK0jqxqqq(
      *(_DWORD *)(a1 + 4080),
      (unsigned int)&SetMiniportRSSCapsFailed,
      a1 + 4032,
      a1 + 4032,
      *(_DWORD *)(a1 + 4080),
      *(_QWORD *)(a1 + 4048),
      v13,
      40,
      a2);
  return v6;
}
