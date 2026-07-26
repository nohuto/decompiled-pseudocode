/*
 * XREFs of ndisWmiRegister @ 0x1C00B9248
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A6BB4 (ndisWMIDispatch.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C00B93F0 (ndisQuerySupportedGuidToOidList.c)
 */

__int64 __fastcall ndisWmiRegister(__int64 a1, __int64 a2, int *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // edi
  int v7; // ebx
  const void **v10; // r15
  unsigned __int16 v12; // dx
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  int v15; // r13d
  unsigned int v16; // eax
  _DWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned int v26; // ecx
  _OWORD *v27; // rbx
  __int128 *i; // rdx
  __int128 v29; // xmm0
  char *v30; // rbx
  char *v31; // rbx
  int v32; // [rsp+68h] [rbp+10h]

  v5 = 0;
  v7 = 0;
  v32 = 0;
  v10 = 0LL;
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_q(0x15u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
  *a5 = 0;
  if ( a2 )
  {
    if ( (unsigned __int8)byte_1C0092619 >= 4u )
      WPP_SF_q(0x18u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    v5 = -1073741811;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(a1 + 1368) && (unsigned int)ndisQuerySupportedGuidToOidList(a1) )
  {
    if ( (unsigned __int8)byte_1C0092619 >= 2u )
      WPP_SF_q(0x16u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    goto LABEL_32;
  }
  v12 = *(_WORD *)(a1 + 1388);
  if ( v12 )
  {
    v24 = *(_QWORD *)(a1 + 3784);
    v25 = *(_QWORD *)(v24 + 32);
    if ( v25 )
      v10 = (const void **)(v25 + 8);
    else
      v10 = (const void **)(v24 + 48);
    v7 = 32 * v12 + *(unsigned __int16 *)v10 + 58;
    v32 = v7;
  }
  v13 = (v7 + 7) & 0xFFFFFFF8;
  v14 = *(unsigned __int16 *)(a1 + 1386) - v12;
  v15 = 32 * v14 + 24;
  v16 = v13 + v15;
  if ( v13 + v15 < v13 )
  {
LABEL_32:
    v5 = -1073741823;
    goto LABEL_7;
  }
  if ( a4 < v16 )
  {
    *a3 = v16;
    v5 = -1073741789;
    *a5 = 4;
    if ( (unsigned __int8)byte_1C0092619 < 4u )
      return v5;
    WPP_SF_q(0x17u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
  }
  else
  {
    *a5 = v16;
    memset(a3, 0, v16);
    if ( v13 && v10 )
    {
      v26 = 0;
      a3[1] = v13;
      v27 = a3 + 6;
      *a3 = v32;
      a3[4] = *(unsigned __int16 *)(a1 + 1388);
      for ( i = *(__int128 **)(a1 + 1376); v26 < *(unsigned __int16 *)(a1 + 1388); v27 += 2 )
      {
        v29 = *i;
        ++v26;
        i = (__int128 *)((char *)i + 28);
        *v27 = v29;
      }
      a3[2] = (_DWORD)v27 - (_DWORD)a3;
      *(_WORD *)v27 = *(_WORD *)v10;
      v30 = (char *)v27 + 2;
      memmove(v30, v10[1], *(unsigned __int16 *)v10);
      v31 = &v30[*(unsigned __int16 *)v10];
      a3[3] = (_DWORD)v31 - (_DWORD)a3;
      *(_WORD *)v31 = 30;
      *(_OWORD *)(v31 + 2) = *(_OWORD *)L"NdisMofResource";
      *(_QWORD *)(v31 + 18) = *(_QWORD *)L"esource";
      *(_DWORD *)(v31 + 26) = *(_DWORD *)L"rce";
      *((_WORD *)v31 + 15) = aNdismofresourc[14];
      a3 = (int *)((char *)a3 + (unsigned int)a3[1]);
    }
    *a3 = v15;
    v17 = a3 + 6;
    a3[1] = 0;
    a3[4] = v14;
    v18 = *(_QWORD **)(a1 + 1368);
    if ( v14 )
    {
      v19 = v14;
      do
      {
        v20 = *v18 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
        if ( *v18 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
          v20 = v18[1] - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
        if ( !v20 )
          goto LABEL_29;
        v21 = *v18 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
        if ( *v18 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
          v21 = v18[1] - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
        if ( !v21 )
          goto LABEL_29;
        v22 = *v18 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
        if ( *v18 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
          v22 = v18[1] - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
        if ( !v22 )
        {
LABEL_29:
          *((_QWORD *)v17 + 3) = *(_QWORD *)(a1 + 3856);
          v17[4] = 32;
          v17[5] = 1;
        }
        v23 = *(_OWORD *)v18;
        v18 = (_QWORD *)((char *)v18 + 28);
        *(_OWORD *)v17 = v23;
        v17 += 8;
        --v19;
      }
      while ( v19 );
    }
    *((_QWORD *)a3 + 1) = 0LL;
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_qD(0x19u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1, v5);
  return v5;
}
