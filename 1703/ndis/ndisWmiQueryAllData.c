/*
 * XREFs of ndisWmiQueryAllData @ 0x1C00A72F4
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A6BB4 (ndisWMIDispatch.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisWmiGetGuid @ 0x1C0011B58 (ndisWmiGetGuid.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisQueryGuidData @ 0x1C00A651C (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00A6788 (ndisQueryGuidDataSize.c)
 *     ndisWmiGuidIsAdapterSpecific @ 0x1C00A71BC (ndisWmiGuidIsAdapterSpecific.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C0109638 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C0109894 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        GUID *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // r12
  unsigned int *v10; // r13
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int GuidDataSize; // esi
  __int64 v13; // r14
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v17; // rax
  size_t v18; // rdx
  int VcCount; // edx
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  unsigned int v22; // ecx
  unsigned int v23; // r14d
  unsigned int v24; // r14d
  unsigned __int16 *v25; // r9
  unsigned int v26; // r15d
  unsigned __int16 v27; // cx
  unsigned int v28; // r8d
  __int64 v29; // rdx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v31; // r13
  unsigned int v32; // esi
  unsigned int v33; // eax
  unsigned __int16 *v34; // r9
  unsigned int v35; // r15d
  __int64 v36; // rcx
  int v37; // [rsp+28h] [rbp-58h]
  unsigned int Size; // [rsp+40h] [rbp-40h] BYREF
  unsigned int Size_4; // [rsp+44h] [rbp-3Ch]
  _LIST_ENTRY **p_Flink; // [rsp+48h] [rbp-38h]
  unsigned int v41; // [rsp+50h] [rbp-30h]
  unsigned __int16 *v42; // [rsp+58h] [rbp-28h]
  __int64 v43; // [rsp+60h] [rbp-20h]
  unsigned int v44; // [rsp+68h] [rbp-18h]
  unsigned int *v45; // [rsp+70h] [rbp-10h]
  __int64 v46; // [rsp+78h] [rbp-8h] BYREF
  char v50; // [rsp+E8h] [rbp+68h]

  v5 = 0LL;
  v43 = 0LL;
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_q(0x22u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v10 = a5;
  *a5 = 0;
  if ( a4 < 0x38 )
  {
    GuidDataSize = -1073741789;
    *a5 = 4;
    goto LABEL_18;
  }
  if ( (int)ndisWmiGetGuid(&v46, (__int64)a1, (_QWORD *)(a3 + 24), 0) >= 0 )
  {
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths);
      v5 = (struct _NDIS_MINIPORT_BLOCK *)v43;
    }
    if ( ndisWmiGuidIsAdapterSpecific(a2) || (a1->Flags & 0x20000) == 0 )
    {
      GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, 0LL, a2, v5);
      if ( GuidDataSize < 0 )
      {
        if ( (unsigned __int8)byte_1C0092619 < 2u )
          goto LABEL_16;
        v27 = 36;
        goto LABEL_64;
      }
      v13 = (Size + 3) & 0xFFFFFFFC;
      v14 = a1->pAdapterInstanceName->Length + 2;
      v15 = v14 + v13 + 76;
      if ( v15 < 0x48 || v15 < (unsigned int)v13 || v15 < v14 )
      {
        if ( (unsigned __int8)byte_1C0092619 < 2u )
          goto LABEL_16;
        v27 = 37;
        goto LABEL_64;
      }
      if ( a4 < v15 )
      {
        *(_DWORD *)(a3 + 48) = v15;
        goto LABEL_14;
      }
      v17 = MEMORY[0xFFFFF78000000014];
      v18 = Size;
      v5 = (struct _NDIS_MINIPORT_BLOCK *)v43;
      *(_DWORD *)(a3 + 44) |= 0x10u;
      *(_QWORD *)(a3 + 16) = v17;
      *(_DWORD *)(a3 + 56) = v13 + 72;
      *(_DWORD *)a3 = v15;
      *(_DWORD *)(a3 + 52) = 1;
      *(_DWORD *)(a3 + 48) = 72;
      *(_DWORD *)(a3 + 60) = v18;
      GuidDataSize = ndisQueryGuidData((CHAR *)(a3 + 72), v18, a1, 0LL, a2, v37, v5);
      if ( GuidDataSize >= 0 )
      {
        *(_DWORD *)(*(unsigned int *)(a3 + 56) + a3) = v13 + 76;
        *(_WORD *)(v13 + a3 + 76) = a1->pAdapterInstanceName->Length;
        memmove(
          (void *)((unsigned int)v13 + a3 + 78),
          a1->pAdapterInstanceName->Buffer,
          a1->pAdapterInstanceName->Length);
        GuidDataSize = 0;
        *a5 = *(_DWORD *)a3;
        goto LABEL_16;
      }
      if ( (unsigned __int8)byte_1C0092619 >= 2u )
      {
        v27 = 38;
LABEL_64:
        WPP_SF_q(v27, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
      }
    }
    else
    {
      VcCount = a1->VcCount;
      v50 = 0;
      v5 = (struct _NDIS_MINIPORT_BLOCK *)v43;
      *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
      v41 = VcCount + 1;
      v20 = ((8 * (VcCount + 1) + 3) & 0xFFFFFFFC) + 72;
      *(_DWORD *)(a3 + 56) = v20;
      v45 = (unsigned int *)(a3 + v20);
      v21 = (v20 + 4 * (VcCount + 1) + 7) & 0xFFFFFFF8;
      v42 = (unsigned __int16 *)(a3 + v21);
      GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, 0LL, a2, v5);
      if ( GuidDataSize < 0 )
      {
        if ( (unsigned __int8)byte_1C0092619 < 2u )
          goto LABEL_16;
        v27 = 40;
        goto LABEL_64;
      }
      v22 = a4;
      v23 = (a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8;
      Size_4 = (Size + 7) & 0xFFFFFFF8;
      v24 = v21 + Size_4 + v23;
      if ( a4 >= v24 )
      {
        v25 = v42;
        *v45 = v21;
        *v25 = a1->pAdapterInstanceName->Length;
        memmove(v25 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
        v26 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v21;
        GuidDataSize = ndisQueryGuidData((CHAR *)(a3 + v26), Size, a1, 0LL, a2, v37, v5);
        if ( GuidDataSize < 0 )
        {
          if ( (unsigned __int8)byte_1C0092619 < 2u )
            goto LABEL_16;
          v27 = 39;
          goto LABEL_64;
        }
        v22 = a4;
        *(_DWORD *)(a3 + 64) = Size;
        *(_DWORD *)(a3 + 60) = v26;
        v21 = Size_4 + v26;
        v42 = (unsigned __int16 *)(a3 + v21);
      }
      v28 = v41;
      Size_4 = 1;
      v29 = 1LL;
      if ( v41 == 1 )
      {
        if ( v22 >= v24 )
        {
          *(_DWORD *)a3 = v24;
          *(_DWORD *)(a3 + 52) = 1;
          *a5 = v24;
          goto LABEL_15;
        }
        *(_DWORD *)(a3 + 48) = v24;
LABEL_14:
        *(_DWORD *)(a3 + 44) |= 0x20u;
        *(_DWORD *)a3 = 56;
        *a5 = 56;
LABEL_15:
        GuidDataSize = 0;
        goto LABEL_16;
      }
      Flink = a1->WmiEnabledVcs.Flink;
      p_Flink = &Flink->Flink;
      if ( Flink != &a1->WmiEnabledVcs )
      {
        while ( (unsigned int)v29 < v28 )
        {
          v31 = Flink - 20;
          if ( (unsigned __int8)ndisReferenceVcPtr(&Flink[-20], v29) )
          {
            if ( v31[19].Flink )
            {
              GuidDataSize = ndisQueryGuidDataSize((int *)&Size, (__int64)a1, v31, a2, v5);
              if ( GuidDataSize >= 0 )
              {
                v32 = Size;
                v33 = ((Size + 7) & 0xFFFFFFF8) + ((LOWORD(v31[18].Blink) + 9) & 0xFFFFFFF8);
                v44 = (Size + 7) & 0xFFFFFFF8;
                v24 += v33;
                if ( a4 >= v24 )
                {
                  v34 = v42;
                  v45[Size_4] = v21;
                  *v34 = (unsigned __int16)v31[18].Blink;
                  memmove(v34 + 1, v31[19].Flink, LOWORD(v31[18].Blink));
                  v35 = ((LOWORD(v31[18].Blink) + 9) & 0xFFFFFFF8) + v21;
                  GuidDataSize = ndisQueryGuidData((CHAR *)(a3 + v35), v32, a1, v31, a2, v37, v5);
                  if ( GuidDataSize < 0 )
                  {
                    if ( (unsigned __int8)byte_1C0092619 >= 2u )
                      WPP_SF_qq(0x29u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1, v31);
                    ndisDereferenceVcPtr(v31);
                    LODWORD(v29) = Size_4;
                    break;
                  }
                  v36 = Size_4;
                  *(_DWORD *)(a3 + 8LL * Size_4 + 64) = Size;
                  *(_DWORD *)(a3 + 8 * v36 + 60) = v35;
                  v21 = v44 + v35;
                  ++Size_4;
                  v42 = (unsigned __int16 *)(a3 + v21);
                }
                else
                {
                  *(_DWORD *)(a3 + 44) |= 0x20u;
                  *(_DWORD *)a3 = 56;
                  GuidDataSize = 0;
                  *(_DWORD *)(a3 + 48) = v24;
                  *a5 = 56;
                  v50 = 1;
                }
              }
            }
            ndisDereferenceVcPtr(v31);
          }
          v29 = Size_4;
          Flink = *p_Flink;
          p_Flink = &Flink->Flink;
          if ( Flink == &a1->WmiEnabledVcs )
            break;
          v28 = v41;
        }
        if ( v50 )
          goto LABEL_16;
        v10 = a5;
      }
      *(_DWORD *)a3 = v24;
      GuidDataSize = 0;
      *(_DWORD *)(a3 + 52) = v29;
      *v10 = v24;
    }
LABEL_16:
    if ( v5 )
      ndisDereferenceMiniport((__int64)v5, 0x5Fu);
    goto LABEL_18;
  }
  if ( (unsigned __int8)byte_1C0092619 >= 2u )
    WPP_SF_q(0x23u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1);
  GuidDataSize = -1073741811;
LABEL_18:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_qD(0x2Au, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a1, GuidDataSize);
  return (unsigned int)GuidDataSize;
}
