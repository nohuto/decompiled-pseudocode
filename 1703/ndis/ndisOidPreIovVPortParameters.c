/*
 * XREFs of ndisOidPreIovVPortParameters @ 0x1C00E7D80
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C003CA88 (WPP_SF_qqDD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006ABA8 (ndisIovFindVPortByVPortId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVPortParameters(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  _BYTE *v4; // r14
  __int64 v5; // rbp
  char v7; // r12
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r11d
  __int64 v12; // rax
  int v13; // r14d
  char v14; // al
  unsigned int v15; // r15d
  __int64 *VPortByVPortId; // rax
  int v17; // r11d
  __int64 *v18; // r10
  _BYTE *OidSourceHandle; // rax
  __int64 v20; // r10
  int v21; // eax
  char v22; // al
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // r8
  __int128 v26; // xmm1
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // r8
  __int128 v30; // xmm1

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0LL;
  v5 = 0LL;
  v7 = byte_1C0092621;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
  {
    WPP_SF_qq(0x37u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v1, v3);
    v7 = byte_1C0092621;
  }
  v8 = *(_DWORD *)(v3 + 4);
  if ( (v8 & 0xFFFFFFFD) != 0 && v8 != 1 )
    goto LABEL_5;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x23Cu )
  {
    *(_DWORD *)(v3 + 56) = 572;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    v2 = 1;
    goto LABEL_51;
  }
  if ( v1 )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      v12 = *(_QWORD *)(v1 + 4640);
      if ( !v12 || !*(_QWORD *)(v1 + 3584) || (*(_BYTE *)(v12 + 8) & 3) != 3 )
        goto LABEL_5;
    }
    v13 = *(_DWORD *)(v3 + 4);
    if ( (v13 & v10) != 0 )
    {
      if ( v13 == 1 )
      {
        v5 = *(_QWORD *)(v3 + 40);
        if ( !v5 )
          goto LABEL_32;
        v14 = *(_BYTE *)(v5 + 1);
        if ( v14 == 1 )
        {
          *(_DWORD *)(v3 + 52) = v11;
        }
        else if ( v14 == 2 )
        {
          *(_DWORD *)(v3 + 52) = 748;
        }
      }
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 40);
      *(_DWORD *)(v3 + 52) = 0;
      if ( !v5 )
        goto LABEL_32;
    }
    v15 = *(_DWORD *)(v5 + 12);
    VPortByVPortId = ndisIovFindVPortByVPortId(v9, v15);
    v18 = VPortByVPortId;
    if ( VPortByVPortId )
    {
      if ( (v13 & 0xFFFFFFFD) != 0 )
      {
        if ( v13 != 1 )
        {
          v4 = 0LL;
          goto LABEL_51;
        }
        OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
        if ( OidSourceHandle && *OidSourceHandle == 18 )
        {
          v4 = OidSourceHandle;
          if ( !v15 || *(_BYTE **)(v20 + 80) == OidSourceHandle )
          {
            v21 = *(_DWORD *)(v5 + 4);
            if ( (v21 & 0xFFFF0000) == 0
              || (v21 & 0x20000) != 0 && *(_WORD *)(v5 + 16) > 0x200u
              || (v21 & 0x80000) != 0
              && ((*(_DWORD *)(v20 + 64) & 3) != 0 || *(_DWORD *)(v5 + 544) != 1 || *(_DWORD *)(v20 + 656) == 1) )
            {
              v2 = 1;
              *(_DWORD *)(a1 + 40) = -1073741811;
            }
            else
            {
              *(_QWORD *)(v3 + 152) = v20;
            }
            goto LABEL_51;
          }
LABEL_5:
          v2 = 1;
          *(_DWORD *)(a1 + 40) = -1073741637;
          goto LABEL_51;
        }
        *(_DWORD *)(a1 + 40) = -1073741637;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = 0;
        v22 = *((_BYTE *)VPortByVPortId + 113);
        if ( v22 == 1 )
        {
          v23 = *(_QWORD *)(v3 + 40);
          v24 = v18 + 14;
          v25 = 4LL;
          do
          {
            *(_OWORD *)v23 = *(_OWORD *)v24;
            *(_OWORD *)(v23 + 16) = *((_OWORD *)v24 + 1);
            *(_OWORD *)(v23 + 32) = *((_OWORD *)v24 + 2);
            *(_OWORD *)(v23 + 48) = *((_OWORD *)v24 + 3);
            *(_OWORD *)(v23 + 64) = *((_OWORD *)v24 + 4);
            *(_OWORD *)(v23 + 80) = *((_OWORD *)v24 + 5);
            *(_OWORD *)(v23 + 96) = *((_OWORD *)v24 + 6);
            v23 += 128LL;
            v26 = *((_OWORD *)v24 + 7);
            v24 += 16;
            *(_OWORD *)(v23 - 16) = v26;
            --v25;
          }
          while ( v25 );
          *(_OWORD *)v23 = *(_OWORD *)v24;
          *(_OWORD *)(v23 + 16) = *((_OWORD *)v24 + 1);
          *(_OWORD *)(v23 + 32) = *((_OWORD *)v24 + 2);
          *(_QWORD *)(v23 + 48) = v24[6];
          *(_DWORD *)(v23 + 56) = *((_DWORD *)v24 + 14);
          *(_DWORD *)(v3 + 52) = v17;
        }
        else if ( v22 == 2 )
        {
          v27 = *(_QWORD *)(v3 + 40);
          v28 = v18 + 14;
          v29 = 5LL;
          do
          {
            *(_OWORD *)v27 = *(_OWORD *)v28;
            *(_OWORD *)(v27 + 16) = *((_OWORD *)v28 + 1);
            *(_OWORD *)(v27 + 32) = *((_OWORD *)v28 + 2);
            *(_OWORD *)(v27 + 48) = *((_OWORD *)v28 + 3);
            *(_OWORD *)(v27 + 64) = *((_OWORD *)v28 + 4);
            *(_OWORD *)(v27 + 80) = *((_OWORD *)v28 + 5);
            *(_OWORD *)(v27 + 96) = *((_OWORD *)v28 + 6);
            v27 += 128LL;
            v30 = *((_OWORD *)v28 + 7);
            v28 += 16;
            *(_OWORD *)(v27 - 16) = v30;
            --v29;
          }
          while ( v29 );
          *(_OWORD *)v27 = *(_OWORD *)v28;
          *(_OWORD *)(v27 + 16) = *((_OWORD *)v28 + 1);
          *(_OWORD *)(v27 + 32) = *((_OWORD *)v28 + 2);
          *(_OWORD *)(v27 + 48) = *((_OWORD *)v28 + 3);
          *(_OWORD *)(v27 + 64) = *((_OWORD *)v28 + 4);
          *(_OWORD *)(v27 + 80) = *((_OWORD *)v28 + 5);
          *(_QWORD *)(v27 + 96) = v28[12];
          *(_DWORD *)(v27 + 104) = *((_DWORD *)v28 + 26);
          *(_DWORD *)(v3 + 52) = 748;
        }
      }
LABEL_33:
      v4 = 0LL;
      v2 = 1;
      goto LABEL_51;
    }
LABEL_32:
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_33;
  }
LABEL_51:
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qqDD(0x38u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v1, v4, v2, *(_DWORD *)(a1 + 40));
  return v2;
}
