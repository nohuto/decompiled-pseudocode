/*
 * XREFs of ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C00047CC
 * Callers:
 *     ndisIfUpdateFilterIfStack @ 0x1C000469C (ndisIfUpdateFilterIfStack.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003FB90 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C00048E4 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C0020694 (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisNsiChangeInterfaceInfo(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_NSI_INTERFACE_INFORMATION_RW *a2,
        int a3,
        int a4,
        unsigned __int16 *a5)
{
  int v6; // r12d
  unsigned int v9; // ebx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  char v11; // di
  int v12; // eax
  int v13; // ebp
  int v14; // r14d
  int updated; // eax
  int v16; // r12d
  _OWORD *v18; // rdi
  __int64 v19; // r8
  _IF_COUNTED_STRING_LH *PoolWithTag; // rax
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // r8
  _IF_COUNTED_STRING_LH *p_ifAlias; // rdx
  __int64 v25; // rax
  __int128 v26; // xmm1
  int v28; // [rsp+88h] [rbp+20h]

  v6 = a3;
  v9 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qq(120LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2);
  ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)a5;
  v11 = 0;
  v12 = v6;
  v13 = a4;
  v28 = v6;
  *(_DWORD *)a5 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
LABEL_13:
        v6 = a3;
        ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)a5;
        goto LABEL_14;
      }
      v14 = 0;
      if ( !a4 )
        break;
      if ( a4 == 16 )
      {
        v14 = 4;
        a1->ifAdminStatus = *((_DWORD *)a2 + 4);
        v13 = 20;
        goto LABEL_8;
      }
      if ( a4 != 20 )
      {
        if ( a4 == 536 )
          goto LABEL_29;
        if ( a4 == 570 )
        {
          v18 = (_OWORD *)((char *)a2 + 570);
          v14 = 516;
          if ( !ndisIsValidIfStringParts(&ifL2NetworkInfo->Length, *((unsigned __int16 *)a2 + 285)) )
            goto LABEL_29;
          if ( !a1->ifL2NetworkInfo )
          {
            PoolWithTag = (_IF_COUNTED_STRING_LH *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x204uLL, 0x6669444Eu);
            a1->ifL2NetworkInfo = PoolWithTag;
            if ( !PoolWithTag )
            {
              v9 = -1073741670;
LABEL_19:
              v12 = v28;
LABEL_20:
              v11 = 1;
              goto LABEL_12;
            }
            v19 = 128LL;
          }
          ifL2NetworkInfo = a1->ifL2NetworkInfo;
          v21 = 4LL;
          do
          {
            *(_OWORD *)&ifL2NetworkInfo->Length = *v18;
            *(_OWORD *)&ifL2NetworkInfo->String[7] = v18[1];
            *(_OWORD *)&ifL2NetworkInfo->String[15] = v18[2];
            *(_OWORD *)&ifL2NetworkInfo->String[23] = v18[3];
            *(_OWORD *)&ifL2NetworkInfo->String[31] = v18[4];
            *(_OWORD *)&ifL2NetworkInfo->String[39] = v18[5];
            *(_OWORD *)&ifL2NetworkInfo->String[47] = v18[6];
            ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)((char *)ifL2NetworkInfo + v19);
            v22 = v18[7];
            v18 = (_OWORD *)((char *)v18 + v19);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[249] = v22;
            --v21;
          }
          while ( v21 );
          v13 = 1086;
          *(_DWORD *)&ifL2NetworkInfo->Length = *(_DWORD *)v18;
        }
LABEL_41:
        v11 = 1;
        goto LABEL_8;
      }
      v14 = 516;
      if ( !ndisIsValidIfStringParts((const unsigned __int16 *)a2 + 10, *((unsigned __int16 *)a2 + 10))
        || a1->IsNdisFilter )
      {
LABEL_29:
        v9 = -1073741811;
        goto LABEL_19;
      }
      p_ifAlias = &a1->ifAlias;
      v25 = 4LL;
      do
      {
        *(_OWORD *)&p_ifAlias->Length = *(_OWORD *)&ifL2NetworkInfo->Length;
        *(_OWORD *)&p_ifAlias->String[7] = *(_OWORD *)&ifL2NetworkInfo->String[7];
        *(_OWORD *)&p_ifAlias->String[15] = *(_OWORD *)&ifL2NetworkInfo->String[15];
        *(_OWORD *)&p_ifAlias->String[23] = *(_OWORD *)&ifL2NetworkInfo->String[23];
        *(_OWORD *)&p_ifAlias->String[31] = *(_OWORD *)&ifL2NetworkInfo->String[31];
        *(_OWORD *)&p_ifAlias->String[39] = *(_OWORD *)&ifL2NetworkInfo->String[39];
        *(_OWORD *)&p_ifAlias->String[47] = *(_OWORD *)&ifL2NetworkInfo->String[47];
        p_ifAlias = (_IF_COUNTED_STRING_LH *)((char *)p_ifAlias + v23);
        v26 = *(_OWORD *)&ifL2NetworkInfo->String[55];
        ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)((char *)ifL2NetworkInfo + v23);
        *(_OWORD *)&p_ifAlias[-1].String[249] = v26;
        --v25;
      }
      while ( v25 );
      v13 = 536;
      *(_DWORD *)&p_ifAlias->Length = *(_DWORD *)&ifL2NetworkInfo->Length;
LABEL_8:
      if ( v9 )
        goto LABEL_19;
      v12 = v28;
      if ( !v14 || v28 < v14 )
        goto LABEL_20;
      v12 = a4 - v13 + v28;
      a4 = v13;
      v28 = v12;
LABEL_12:
      if ( v12 <= 0 )
        goto LABEL_13;
    }
    v14 = 16;
    updated = ndisIfUpdateInterfaceIsolationNetworkIdLocked(a1, (const struct _GUID *)a2, 0);
    if ( updated >= 0 )
    {
      v13 = 16;
      goto LABEL_8;
    }
    v9 = updated;
    goto LABEL_41;
  }
LABEL_14:
  v16 = v6 - v12;
  *(_DWORD *)&ifL2NetworkInfo->Length = v16;
  if ( !v16 )
    v9 = -1073741811;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqd(121LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, v9);
  return v9;
}
