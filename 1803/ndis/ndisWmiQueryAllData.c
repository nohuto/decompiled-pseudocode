/*
 * XREFs of ndisWmiQueryAllData @ 0x1C00AC238
 * Callers:
 *     ndisWMIDispatch @ 0x1C00AD13C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C0009820 (ndisWmiGetGuid.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisWmiGuidIsAdapterSpecific @ 0x1C00AC514 (ndisWmiGuidIsAdapterSpecific.c)
 *     ndisQueryGuidData @ 0x1C00ACC5C (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00ACEE0 (ndisQueryGuidDataSize.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisReferenceMiniportByName @ 0x1C01003B4 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C0114684 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C01148E4 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v5; // r13
  int v10; // r15d
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int GuidData; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int64 v19; // rax
  size_t v20; // rdx
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // r12d
  _UNICODE_STRING *pAdapterInstanceName; // rcx
  unsigned int v25; // edx
  unsigned int v26; // r14d
  unsigned __int16 *v27; // r9
  unsigned int v28; // r12d
  unsigned __int16 v29; // cx
  unsigned int v30; // ecx
  _LIST_ENTRY *p_WmiEnabledVcs; // rdx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v33; // r15
  unsigned int v34; // esi
  unsigned int v35; // eax
  unsigned __int16 *v36; // r9
  unsigned int v37; // r12d
  __int64 v38; // rcx
  bool v39; // zf
  int v40; // [rsp+28h] [rbp-58h]
  unsigned int Size; // [rsp+40h] [rbp-40h] BYREF
  unsigned int Size_4; // [rsp+44h] [rbp-3Ch]
  _LIST_ENTRY **p_Flink; // [rsp+48h] [rbp-38h]
  unsigned int v44; // [rsp+50h] [rbp-30h]
  unsigned __int16 *v45; // [rsp+58h] [rbp-28h]
  __int64 v46; // [rsp+60h] [rbp-20h]
  unsigned int v47; // [rsp+68h] [rbp-18h]
  unsigned int *v48; // [rsp+70h] [rbp-10h]
  __int64 v49; // [rsp+78h] [rbp-8h] BYREF
  char v53; // [rsp+E8h] [rbp+68h]

  v5 = 0LL;
  v46 = 0LL;
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_q(0x22u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
  ndisReferencePackage(&ndisPkgs);
  v10 = 56;
  *a5 = 0;
  if ( a4 < 0x38 )
  {
    GuidData = -1073741789;
    *a5 = 4;
    goto LABEL_16;
  }
  if ( (int)ndisWmiGetGuid(&v49, (__int64)a1, (_QWORD *)(a3 + 24), 0) >= 0 )
  {
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths);
      v5 = v46;
    }
    if ( !(unsigned __int8)ndisWmiGuidIsAdapterSpecific(a2) && (a1->Flags & 0x20000) != 0 )
    {
      v53 = 0;
      v21 = a1->VcCount + 1;
      v5 = v46;
      *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
      v22 = 8 * v21 + 72;
      v44 = v21;
      *(_DWORD *)(a3 + 56) = v22;
      v48 = (unsigned int *)(a3 + v22);
      v23 = (v22 + 4 * v21 + 7) & 0xFFFFFFF8;
      v45 = (unsigned __int16 *)(a3 + v23);
      GuidData = ndisQueryGuidDataSize(&Size, a1, 0LL, a2, v5);
      if ( GuidData < 0 )
      {
        if ( (unsigned __int8)byte_1C0099619 < 2u )
          goto LABEL_14;
        v29 = 40;
        goto LABEL_62;
      }
      pAdapterInstanceName = a1->pAdapterInstanceName;
      v25 = a4;
      Size_4 = (Size + 7) & 0xFFFFFFF8;
      v26 = v23 + Size_4 + ((pAdapterInstanceName->Length + 9) & 0xFFFFFFF8);
      if ( a4 >= v26 )
      {
        v27 = v45;
        *v48 = v23;
        *v27 = a1->pAdapterInstanceName->Length;
        memmove(v27 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
        v28 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v23;
        GuidData = ndisQueryGuidData((void *)(a3 + v28), Size, a1, a2, v40, v5);
        if ( GuidData < 0 )
        {
          if ( (unsigned __int8)byte_1C0099619 < 2u )
            goto LABEL_14;
          v29 = 39;
          goto LABEL_62;
        }
        v25 = a4;
        *(_DWORD *)(a3 + 64) = Size;
        *(_DWORD *)(a3 + 60) = v28;
        v23 = Size_4 + v28;
        v45 = (unsigned __int16 *)(a3 + v23);
      }
      v13 = v44;
      Size_4 = 1;
      v30 = 1;
      if ( v44 == 1 )
      {
        if ( v25 < v26 )
        {
          *(_DWORD *)(a3 + 44) |= 0x20u;
          *(_DWORD *)(a3 + 48) = v26;
          v26 = 56;
        }
        else
        {
          *(_DWORD *)(a3 + 52) = 1;
          v10 = v26;
        }
        GuidData = 0;
        *(_DWORD *)a3 = v10;
        *a5 = v26;
      }
      else
      {
        p_WmiEnabledVcs = &a1->WmiEnabledVcs;
        Flink = a1->WmiEnabledVcs.Flink;
        p_Flink = &Flink->Flink;
        if ( Flink == &a1->WmiEnabledVcs )
          goto LABEL_53;
        while ( v30 < (unsigned int)v13 )
        {
          v33 = Flink - 20;
          if ( (unsigned __int8)ndisReferenceVcPtr(&Flink[-20], p_WmiEnabledVcs) )
          {
            if ( v33[19].Flink )
            {
              GuidData = ndisQueryGuidDataSize(&Size, a1, v33, a2, v5);
              if ( GuidData >= 0 )
              {
                v34 = Size;
                v35 = ((Size + 7) & 0xFFFFFFF8) + ((LOWORD(v33[18].Blink) + 9) & 0xFFFFFFF8);
                v47 = (Size + 7) & 0xFFFFFFF8;
                v26 += v35;
                if ( a4 >= v26 )
                {
                  v36 = v45;
                  v48[Size_4] = v23;
                  *v36 = (unsigned __int16)v33[18].Blink;
                  memmove(v36 + 1, v33[19].Flink, LOWORD(v33[18].Blink));
                  v37 = ((LOWORD(v33[18].Blink) + 9) & 0xFFFFFFF8) + v23;
                  GuidData = ndisQueryGuidData((void *)(a3 + v37), v34, a1, a2, v40, v5);
                  if ( GuidData < 0 )
                  {
                    if ( (unsigned __int8)byte_1C0099619 >= 2u )
                      WPP_SF_qq(0x29u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1, v33);
                    ndisDereferenceVcPtr(v33);
                    v30 = Size_4;
                    break;
                  }
                  v38 = Size_4;
                  *(_DWORD *)(a3 + 8LL * Size_4 + 64) = Size;
                  *(_DWORD *)(a3 + 8 * v38 + 60) = v37;
                  v23 = v47 + v37;
                  ++Size_4;
                  v45 = (unsigned __int16 *)(a3 + v23);
                }
                else
                {
                  *(_DWORD *)(a3 + 44) |= 0x20u;
                  GuidData = 0;
                  *(_DWORD *)a3 = 56;
                  *(_DWORD *)(a3 + 48) = v26;
                  v53 = 1;
                  *a5 = 56;
                }
              }
            }
            ndisDereferenceVcPtr(v33);
          }
          Flink = *p_Flink;
          v39 = *p_Flink == &a1->WmiEnabledVcs;
          p_Flink = (_LIST_ENTRY **)*p_Flink;
          v30 = Size_4;
          if ( v39 )
            break;
          v13 = v44;
        }
        if ( !v53 )
        {
LABEL_53:
          GuidData = 0;
          *(_DWORD *)a3 = v26;
          *(_DWORD *)(a3 + 52) = v30;
          *a5 = v26;
        }
      }
      goto LABEL_14;
    }
    GuidData = ndisQueryGuidDataSize(&Size, a1, 0LL, a2, v5);
    if ( GuidData < 0 )
    {
      if ( (unsigned __int8)byte_1C0099619 < 2u )
        goto LABEL_14;
      v29 = 36;
    }
    else
    {
      v15 = (Size + 3) & 0xFFFFFFFC;
      v16 = a1->pAdapterInstanceName->Length + 2;
      v17 = v16 + v15 + 76;
      if ( v17 < 0x48 || v17 < (unsigned int)v15 || v17 < v16 )
      {
        if ( (unsigned __int8)byte_1C0099619 < 2u )
          goto LABEL_14;
        v29 = 37;
      }
      else
      {
        if ( a4 < v17 )
        {
          *(_DWORD *)(a3 + 44) |= 0x20u;
          *(_DWORD *)a3 = 56;
          GuidData = 0;
          *(_DWORD *)(a3 + 48) = v17;
          *a5 = 56;
          goto LABEL_14;
        }
        v19 = MEMORY[0xFFFFF78000000014];
        v20 = Size;
        v5 = v46;
        *(_DWORD *)(a3 + 44) |= 0x10u;
        *(_QWORD *)(a3 + 16) = v19;
        *(_DWORD *)(a3 + 56) = v15 + 72;
        *(_DWORD *)a3 = v17;
        *(_DWORD *)(a3 + 52) = 1;
        *(_DWORD *)(a3 + 48) = 72;
        *(_DWORD *)(a3 + 60) = v20;
        GuidData = ndisQueryGuidData((void *)(a3 + 72), v20, a1, a2, v40, v5);
        if ( GuidData >= 0 )
        {
          *(_DWORD *)(*(unsigned int *)(a3 + 56) + a3) = v15 + 76;
          *(_WORD *)(v15 + a3 + 76) = a1->pAdapterInstanceName->Length;
          memmove(
            (void *)((unsigned int)v15 + a3 + 78),
            a1->pAdapterInstanceName->Buffer,
            a1->pAdapterInstanceName->Length);
          GuidData = 0;
          *a5 = *(_DWORD *)a3;
          goto LABEL_14;
        }
        if ( (unsigned __int8)byte_1C0099619 < 2u )
        {
LABEL_14:
          if ( v5 )
            ndisDereferenceMiniport(v5, 0x5Fu, v13, v14);
          goto LABEL_16;
        }
        v29 = 38;
      }
    }
LABEL_62:
    WPP_SF_q(v29, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
    goto LABEL_14;
  }
  if ( (unsigned __int8)byte_1C0099619 >= 2u )
    WPP_SF_q(0x23u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1);
  GuidData = -1073741811;
LABEL_16:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_qD(0x2Au, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a1, GuidData);
  return (unsigned int)GuidData;
}
