/*
 * XREFs of ndisWmiExecuteMethod @ 0x1C00A6DE0
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A6BB4 (ndisWMIDispatch.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisWmiGetGuid @ 0x1C0011B58 (ndisWmiGetGuid.c)
 *     ndisOidPMAddRemove @ 0x1C00230F8 (ndisOidPMAddRemove.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisWmiFindInstanceName @ 0x1C00A7120 (ndisWmiFindInstanceName.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00E2A28 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1C00E2C48 (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1C00E2F64 (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C0109638 (ndisDereferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  signed int InstanceName; // ebx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r13
  int v15; // ecx
  void *v16; // rdx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  void *v20; // rcx
  unsigned int SetMiniport; // eax
  __int64 v22; // rcx
  unsigned int v23; // esi
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  signed int v36; // eax
  int v37; // eax
  _QWORD *v38; // rcx
  __m128i *v39; // r8
  __m128i v40; // xmm0
  __int32 v41; // edx
  unsigned int v42; // ecx
  int v43; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  int v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+64h] [rbp-9Ch]
  __int64 v47; // [rsp+68h] [rbp-98h]
  void *v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v50[248]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v51; // [rsp+180h] [rbp+80h]
  __int32 v52; // [rsp+190h] [rbp+90h]

  P = 0LL;
  v46 = 0;
  v48 = 0LL;
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_q(0x3Bu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
  {
    P = 0LL;
LABEL_6:
    v9 = *(_QWORD *)(a1 + 3792);
    if ( v9 )
      ndisReferenceMiniportByName((PCUNICODE_STRING)(v9 + 8));
    goto LABEL_8;
  }
  InstanceName = ndisWmiFindInstanceName(
                   &P,
                   a1,
                   *(unsigned int *)(a2 + 48) + a2 + 2,
                   *(unsigned __int16 *)(*(unsigned int *)(a2 + 48) + a2));
  if ( InstanceName < 0 )
  {
    if ( (unsigned __int8)byte_1C0092619 >= 2u )
      WPP_SF_q(0x3Cu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    P = 0LL;
    goto LABEL_48;
  }
  if ( !P )
    goto LABEL_6;
LABEL_8:
  if ( (int)ndisWmiGetGuid(&v49, a1, (_QWORD *)(a2 + 24), 0) < 0 )
  {
    if ( (unsigned __int8)byte_1C0092619 >= 2u )
      WPP_SF_q(0x3Du, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    goto LABEL_56;
  }
  v10 = v49;
  v11 = *(_DWORD *)(v49 + 24);
  if ( (v11 & 0x80u) == 0 )
  {
    if ( (unsigned __int8)byte_1C0092619 >= 2u )
      WPP_SF_q(0x3Eu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    InstanceName = -1073741637;
    goto LABEL_37;
  }
  if ( (v11 & 0x200) == 0 )
  {
    memset(v50, 0, sizeof(v50));
    *(_DWORD *)&v50[88] |= 8u;
    *(_DWORD *)&v50[8] = 0;
    v33 = *(unsigned int *)(a2 + 60);
    *(_QWORD *)&v50[104] = &ndisIntReqWmi;
    *(_DWORD *)v50 = 15466902;
    *(_DWORD *)&v50[4] = 12;
    *(_DWORD *)&v50[32] = *(_DWORD *)(v49 + 16);
    *(_DWORD *)&v50[56] = *(_DWORD *)(a2 + 56);
    *(_QWORD *)&v50[40] = a2 + v33;
    *(_DWORD *)&v50[48] = *(_DWORD *)(a2 + 64);
    *(_DWORD *)&v50[52] = a3 - v33;
    goto LABEL_23;
  }
  v12 = *(unsigned int *)(a2 + 64);
  if ( (unsigned int)v12 < 0x20
    || (v13 = *(unsigned int *)(a2 + 60), v14 = v13 + a2, *(_BYTE *)(v13 + a2) != 2)
    || *(_BYTE *)(v14 + 1) != 1
    || *(_WORD *)(v14 + 2) < 0x20u )
  {
LABEL_56:
    InstanceName = -1073741811;
    goto LABEL_37;
  }
  v45 = *(_DWORD *)(v14 + 4);
  v47 = *(_QWORD *)(v14 + 16);
  v43 = *(_DWORD *)(v14 + 24);
  if ( (v11 & 0x2000000) == 0 )
  {
    if ( *(_DWORD *)(v49 + 16) == 66086 && a3 - (unsigned int)v13 < 0x43C )
    {
      v30 = v13 + 1084;
      goto LABEL_62;
    }
    memmove((void *)(v13 + a2), (const void *)(v14 + 32), v12 - 32);
    if ( (*(_DWORD *)(v10 + 24) & 0x4000000) == 0 )
    {
      memset(v50, 0, sizeof(v50));
      v16 = &ndisIntReqWmi;
      *(_DWORD *)&v50[88] |= 8u;
      v32 = *(unsigned int *)(a2 + 60);
      *(_DWORD *)&v50[8] = v45;
      *(_QWORD *)&v50[104] = &ndisIntReqWmi;
      *(_DWORD *)v50 = 15466902;
      *(_DWORD *)&v50[4] = 12;
      *(_DWORD *)&v50[32] = *(_DWORD *)(v10 + 16);
      *(_DWORD *)&v50[56] = *(_DWORD *)(a2 + 56);
      *(_QWORD *)&v50[40] = a2 + v32;
      *(_DWORD *)&v50[48] = *(_DWORD *)(a2 + 64) - 32;
      *(_DWORD *)&v50[52] = a3 - v32;
      goto LABEL_20;
    }
    if ( *(_DWORD *)(a2 + 56) == 1 )
    {
      v31 = *(unsigned int *)(a2 + 60);
      if ( a3 - (unsigned int)v31 < 0x10 )
      {
        v30 = v31 + 16;
        if ( a3 >= 0x38 )
        {
          *(_DWORD *)(a2 + 44) |= 0x20u;
          goto LABEL_65;
        }
LABEL_64:
        InstanceName = -1073741789;
        *a4 = 4;
        goto LABEL_37;
      }
      v46 = 16;
      memset(v50, 0, sizeof(v50));
      *(_DWORD *)&v50[88] |= 8u;
      v16 = &ndisIntReqWmi;
      *(_QWORD *)&v50[104] = &ndisIntReqWmi;
      *(_DWORD *)v50 = 15466902;
      *(_DWORD *)&v50[32] = *(_DWORD *)(v10 + 16);
      *(_DWORD *)&v50[8] = v45;
      *(_QWORD *)&v50[40] = a2 + v31;
      v17 = *(_DWORD *)(a2 + 64) - 32;
      *(_DWORD *)&v50[4] = 1;
      goto LABEL_19;
    }
    goto LABEL_56;
  }
  v15 = *(_DWORD *)(v49 + 16);
  if ( ((v15 + 67042805) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v15 + 67042802) <= 1 && a3 - (unsigned int)v13 < 0x20 )
    {
      v30 = v13 + 32;
      goto LABEL_62;
    }
    goto LABEL_18;
  }
  if ( a3 - (unsigned int)v13 >= 0x10C )
  {
LABEL_18:
    memset(v50, 0, sizeof(v50));
    *(_DWORD *)&v50[88] |= 8u;
    v16 = &ndisIntReqWmi;
    *(_QWORD *)&v50[104] = &ndisIntReqWmi;
    *(_DWORD *)v50 = 15466902;
    *(_DWORD *)&v50[32] = *(_DWORD *)(v49 + 16);
    *(_DWORD *)&v50[4] = 2;
    *(_DWORD *)&v50[8] = *(_DWORD *)(v14 + 4);
    v17 = a3 - v13;
    *(_QWORD *)&v50[40] = v13 + a2;
LABEL_19:
    *(_DWORD *)&v50[48] = v17;
LABEL_20:
    *(_QWORD *)&v50[16] = v47;
    if ( !v47 )
      v16 = *(void **)&v50[24];
    *(_QWORD *)&v50[24] = v16;
    *(_DWORD *)&v50[12] = v43;
LABEL_23:
    v18 = *(_DWORD *)(v10 + 16) + 50265846;
    if ( v18 <= 5 && (v19 = 43, _bittest(&v19, v18)) )
    {
      SetMiniport = ndisOidPMAddRemove((NDIS_HANDLE)a1, 0LL, (PNDIS_OID_REQUEST)v50);
    }
    else
    {
      if ( P || (v20 = v48) == 0LL )
        v20 = (void *)a1;
      SetMiniport = ndisQuerySetMiniport(v20, P, (struct _NDIS_OID_REQUEST *)v50, 0LL, 0LL);
    }
    v23 = SetMiniport;
    if ( ((SetMiniport + 1073676268) & 0xFFFFFFFD) != 0 )
    {
      if ( SetMiniport )
      {
        if ( (unsigned __int8)byte_1C0092619 >= 2u )
          WPP_SF_q(0x3Fu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
          Template_jqxqqq(
            v22,
            &ExecuteMethodFailed,
            (const GUID *)(a1 + 4032),
            a1 + 4032,
            *(_DWORD *)(a1 + 4080),
            *(_QWORD *)(a1 + 4048),
            v23,
            78,
            *(_DWORD *)(a2 + 56));
        if ( (*(_DWORD *)(v10 + 24) & 0x200) != 0 )
        {
          if ( (v23 & 0xC0010000) == 0xC0010000 )
            v23 = (unsigned __int16)v23 | 0xC0230000;
        }
        else if ( v23 != 259 && v23 != -2147483643 )
        {
          v34 = -1073741823;
          if ( v23 != -1073741823 && v23 != -1073741670 && v23 != -1073741637 )
          {
            if ( v23 == -1073676267 )
              v34 = -1073741811;
            InstanceName = v34;
            goto LABEL_37;
          }
        }
        InstanceName = v23;
      }
      else
      {
        if ( *(_DWORD *)&v50[4] != 12 )
        {
          if ( *(_DWORD *)&v50[4] == 1 )
          {
            v37 = *(_DWORD *)(v10 + 16);
            if ( v37 == -50265846 || v37 == -50265843 )
            {
              v25 = 196;
            }
            else
            {
              v38 = (_QWORD *)(a2 + *(unsigned int *)(a2 + 60));
              *v38 = 0LL;
              v38[1] = 0LL;
              *(_DWORD *)v38 = 1048837;
              *((_BYTE *)v38 + 8) = v50[232];
              v25 = v46;
            }
          }
          else
          {
            v24 = *(_DWORD *)(v10 + 16);
            if ( ((v24 + 67042805) & 0xFFFFFFFD) != 0 )
            {
              if ( (unsigned int)(v24 + 67042802) <= 1 )
              {
                v39 = (__m128i *)(a2 + *(unsigned int *)(a2 + 60));
                v40 = *v39;
                v41 = v39[1].m128i_i32[0];
                v39[1].m128i_i32[3] = v41;
                v52 = v41;
                v39->m128i_i32[0] = _mm_cvtsi128_si32(v40);
                v39->m128i_i16[1] = 32;
                v42 = _mm_cvtsi128_si32(_mm_srli_si128(v40, 8));
                v51 = v40;
                v39->m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v40, 4));
                v39->m128i_i32[2] = v42 & 3;
                v39->m128i_i32[3] = (v42 >> 2) & 3;
                v39[1].m128i_i32[0] = (v42 >> 4) & 3;
                v39[1].m128i_i32[1] = (unsigned __int8)v42 >> 6;
                v39[1].m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v40, 12));
                v26 = *(_DWORD *)(a2 + 60) + 32;
                *(_DWORD *)(a2 + 64) = 32;
                goto LABEL_36;
              }
              v25 = *(_DWORD *)&v50[52];
            }
            else
            {
              ndisWmiXlateNdisOffloadToWmiOffload(a2 + *(unsigned int *)(a2 + 60));
              v25 = 268;
            }
          }
LABEL_35:
          v26 = v25 + *(_DWORD *)(a2 + 60);
          *(_DWORD *)(a2 + 64) = v25;
LABEL_36:
          *(_DWORD *)a2 = v26;
          InstanceName = 0;
          *a4 = v26;
          goto LABEL_37;
        }
        v35 = *(_DWORD *)(v10 + 16);
        if ( v35 == 66086 )
        {
          ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams(a2 + *(unsigned int *)(a2 + 60));
          v25 = 1084;
          goto LABEL_35;
        }
        if ( v35 != 66085 )
        {
          v25 = *(_DWORD *)&v50[60];
          goto LABEL_35;
        }
        v36 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
                (void *)(a2 + *(unsigned int *)(a2 + 60)),
                *(unsigned int *)&v50[60]);
        InstanceName = v36;
        if ( v36 == -1073676268 )
        {
          if ( a3 >= 0x38 )
          {
            *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 60) + 32;
            *(_DWORD *)(a2 + 44) |= 0x20u;
            goto LABEL_66;
          }
          goto LABEL_64;
        }
        if ( !v36 )
        {
          v25 = 0;
          goto LABEL_35;
        }
        if ( (v36 & 0xC0010000) == 0xC0010000 )
          InstanceName = (unsigned __int16)v36 | 0xC0230000;
      }
    }
    else
    {
      v28 = *(_DWORD *)&v50[68];
      if ( *(_DWORD *)&v50[4] != 12 )
        v28 = *(_DWORD *)&v50[56];
      v29 = *(_DWORD *)(a2 + 60) + v28;
      if ( a3 < 0x38 )
        goto LABEL_64;
      *(_DWORD *)a2 = 56;
      *(_DWORD *)(a2 + 44) |= 0x20u;
      *(_DWORD *)(a2 + 48) = v29 + 32;
      InstanceName = 0;
      *a4 = 56;
    }
LABEL_48:
    if ( InstanceName == 259 )
      goto LABEL_39;
    goto LABEL_37;
  }
  v30 = v13 + 268;
LABEL_62:
  if ( a3 < 0x38 )
    goto LABEL_64;
  *(_DWORD *)(a2 + 44) |= 0x20u;
LABEL_65:
  *(_DWORD *)(a2 + 48) = v30;
LABEL_66:
  *(_DWORD *)a2 = 56;
  InstanceName = 0;
  *a4 = 56;
LABEL_37:
  if ( P )
    ndisDereferenceVcPtr(P);
LABEL_39:
  if ( v48 )
    ndisDereferenceMiniport((__int64)v48, 0x61u);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
    WPP_SF_qD(0x40u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1, InstanceName);
  return (unsigned int)InstanceName;
}
