/*
 * XREFs of ndisWmiExecuteMethod @ 0x1C00B7E2C
 * Callers:
 *     ndisWMIDispatch @ 0x1C00B7BFC (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C000930C (ndisWmiGetGuid.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     ndisOidPMAddRemove @ 0x1C001E894 (ndisOidPMAddRemove.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00ECA30 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1C00ECC50 (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1C00ECF6C (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ndisReferenceMiniportByName @ 0x1C0101EBC (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C0112648 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C01128A4 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  signed __int32 v8; // eax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  wchar_t *v11; // rdx
  signed int v12; // ebx
  _QWORD *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r13
  int v20; // ecx
  void *v21; // rdx
  int v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  void *v25; // r13
  unsigned int SetMiniport; // eax
  __int64 v27; // rcx
  unsigned int v28; // esi
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  int v33; // eax
  int v34; // eax
  _QWORD *v35; // rsi
  __int64 v36; // rdx
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  signed int v44; // eax
  int v45; // eax
  _QWORD *v46; // rcx
  __m128i *v47; // r8
  __m128i v48; // xmm0
  __int32 v49; // edx
  unsigned int v50; // ecx
  PVOID P; // [rsp+50h] [rbp-B0h]
  int v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+64h] [rbp-9Ch]
  __int64 v55; // [rsp+68h] [rbp-98h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v58[248]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v59; // [rsp+190h] [rbp+90h]
  __int32 v60; // [rsp+1A0h] [rbp+A0h]

  v54 = 0;
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_q(0x3Bu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
  v8 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v8 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  v9 = 0LL;
  P = 0LL;
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
    goto LABEL_11;
  v10 = *(unsigned int *)(a2 + 48);
  v11 = (wchar_t *)(v10 + a2 + 2);
  v12 = 0;
  v13 = 0LL;
  String2.Buffer = v11;
  String2.MaximumLength = *(_WORD *)(v10 + a2);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v11 && v11[5] == 58 )
  {
    v35 = *(_QWORD **)(a1 + 1352);
    while ( 1 )
    {
      v37 = (_QWORD *)(a1 + 1352);
      if ( v35 == (_QWORD *)(a1 + 1352) )
        break;
      v13 = v35 - 40;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v35 - 3), &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(v35 - 40, v36) )
        {
          if ( (unsigned __int8)byte_1C0098759 >= 2u )
            WPP_SF_q(0xAu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
          v12 = -1073741823;
        }
        v37 = (_QWORD *)(a1 + 1352);
        break;
      }
      v35 = (_QWORD *)*v35;
      v13 = 0LL;
    }
    if ( v35 == v37 )
    {
      if ( (unsigned __int8)byte_1C0098759 >= 4u )
        WPP_SF_qZ(0xBu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1, &String2.Length);
      v12 = -1073741162;
    }
    if ( v12 < 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = v13;
      P = v13;
    }
  }
  else if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(a1 + 3880), &String2, 1u) )
  {
    if ( (unsigned __int8)byte_1C0098759 >= 2u )
      WPP_SF_q(0xCu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    v12 = -1073741162;
  }
  if ( v12 < 0 )
  {
    if ( (unsigned __int8)byte_1C0098759 >= 2u )
      WPP_SF_q(0x3Cu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    v25 = 0LL;
    goto LABEL_49;
  }
  if ( !v9 )
  {
LABEL_11:
    v14 = *(_QWORD *)(a1 + 3792);
    if ( v14 )
      ndisReferenceMiniportByName((PCUNICODE_STRING)(v14 + 8));
  }
  if ( (int)ndisWmiGetGuid(&v57, a1, (_QWORD *)(a2 + 24), 0) < 0 )
  {
    if ( (unsigned __int8)byte_1C0098759 >= 2u )
      WPP_SF_q(0x3Du, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    goto LABEL_80;
  }
  v15 = v57;
  v16 = *(_DWORD *)(v57 + 24);
  if ( (v16 & 0x80u) == 0 )
  {
    if ( (unsigned __int8)byte_1C0098759 >= 2u )
      WPP_SF_q(0x3Eu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    v12 = -1073741637;
    goto LABEL_82;
  }
  if ( (v16 & 0x200) == 0 )
  {
    memset(v58, 0, sizeof(v58));
    *(_DWORD *)&v58[88] |= 8u;
    *(_DWORD *)&v58[8] = 0;
    v41 = *(unsigned int *)(a2 + 60);
    *(_QWORD *)&v58[104] = &ndisIntReqWmi;
    *(_DWORD *)v58 = 15466902;
    *(_DWORD *)&v58[4] = 12;
    *(_DWORD *)&v58[32] = *(_DWORD *)(v57 + 16);
    *(_DWORD *)&v58[56] = *(_DWORD *)(a2 + 56);
    *(_QWORD *)&v58[40] = a2 + v41;
    *(_DWORD *)&v58[48] = *(_DWORD *)(a2 + 64);
    *(_DWORD *)&v58[52] = a3 - v41;
    goto LABEL_28;
  }
  v17 = *(unsigned int *)(a2 + 64);
  if ( (unsigned int)v17 < 0x20
    || (v18 = *(unsigned int *)(a2 + 60), v19 = v18 + a2, *(_BYTE *)(v18 + a2) != 2)
    || *(_BYTE *)(v19 + 1) != 1
    || *(_WORD *)(v19 + 2) < 0x20u )
  {
LABEL_80:
    v12 = -1073741811;
LABEL_82:
    v25 = P;
    goto LABEL_40;
  }
  v53 = *(_DWORD *)(v19 + 4);
  v55 = *(_QWORD *)(v19 + 16);
  v52 = *(_DWORD *)(v19 + 24);
  if ( (v16 & 0x2000000) == 0 )
  {
    if ( *(_DWORD *)(v57 + 16) == 66086 && a3 - (unsigned int)v18 < 0x43C )
    {
      v25 = P;
      if ( a3 >= 0x38 )
      {
        v38 = v18 + 1084;
        goto LABEL_89;
      }
      goto LABEL_88;
    }
    memmove((void *)(v18 + a2), (const void *)(v19 + 32), v17 - 32);
    if ( (*(_DWORD *)(v15 + 24) & 0x4000000) == 0 )
    {
      memset(v58, 0, sizeof(v58));
      v21 = &ndisIntReqWmi;
      *(_DWORD *)&v58[88] |= 8u;
      v40 = *(unsigned int *)(a2 + 60);
      *(_DWORD *)&v58[8] = v53;
      *(_QWORD *)&v58[104] = &ndisIntReqWmi;
      *(_DWORD *)v58 = 15466902;
      *(_DWORD *)&v58[4] = 12;
      *(_DWORD *)&v58[32] = *(_DWORD *)(v15 + 16);
      *(_DWORD *)&v58[56] = *(_DWORD *)(a2 + 56);
      *(_QWORD *)&v58[40] = a2 + v40;
      *(_DWORD *)&v58[48] = *(_DWORD *)(a2 + 64) - 32;
      *(_DWORD *)&v58[52] = a3 - v40;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(a2 + 56) == 1 )
    {
      v39 = *(unsigned int *)(a2 + 60);
      if ( a3 - (unsigned int)v39 >= 0x10 )
      {
        v54 = 16;
        memset(v58, 0, sizeof(v58));
        *(_DWORD *)&v58[88] |= 8u;
        v21 = &ndisIntReqWmi;
        *(_QWORD *)&v58[104] = &ndisIntReqWmi;
        *(_DWORD *)v58 = 15466902;
        *(_DWORD *)&v58[32] = *(_DWORD *)(v15 + 16);
        *(_DWORD *)&v58[8] = v53;
        *(_QWORD *)&v58[40] = a2 + v39;
        v22 = *(_DWORD *)(a2 + 64) - 32;
        *(_DWORD *)&v58[4] = 1;
        goto LABEL_24;
      }
      v25 = P;
      if ( a3 >= 0x38 )
      {
        *(_DWORD *)(a2 + 44) |= 0x20u;
        v38 = v39 + 16;
        goto LABEL_90;
      }
      goto LABEL_88;
    }
    goto LABEL_80;
  }
  v20 = *(_DWORD *)(v57 + 16);
  if ( ((v20 + 67042805) & 0xFFFFFFFD) == 0 )
  {
    if ( a3 - (unsigned int)v18 >= 0x10C )
    {
LABEL_23:
      memset(v58, 0, sizeof(v58));
      *(_DWORD *)&v58[88] |= 8u;
      v21 = &ndisIntReqWmi;
      *(_QWORD *)&v58[104] = &ndisIntReqWmi;
      *(_DWORD *)v58 = 15466902;
      *(_DWORD *)&v58[32] = *(_DWORD *)(v57 + 16);
      *(_DWORD *)&v58[4] = 2;
      *(_DWORD *)&v58[8] = *(_DWORD *)(v19 + 4);
      v22 = a3 - v18;
      *(_QWORD *)&v58[40] = v18 + a2;
LABEL_24:
      *(_DWORD *)&v58[48] = v22;
LABEL_25:
      *(_QWORD *)&v58[16] = v55;
      if ( !v55 )
        v21 = *(void **)&v58[24];
      *(_QWORD *)&v58[24] = v21;
      *(_DWORD *)&v58[12] = v52;
LABEL_28:
      v23 = *(_DWORD *)(v15 + 16) + 50265846;
      if ( v23 <= 5 && (v24 = 43, _bittest(&v24, v23)) )
      {
        SetMiniport = ndisOidPMAddRemove((NDIS_HANDLE)a1, 0LL, (struct _NDIS_OID_REQUEST *)v58);
        v25 = P;
      }
      else
      {
        v25 = P;
        SetMiniport = ndisQuerySetMiniport((void *)a1, P, (struct _NDIS_OID_REQUEST *)v58, 0LL, 0LL);
      }
      v28 = SetMiniport;
      if ( ((SetMiniport + 1073676268) & 0xFFFFFFFD) != 0 )
      {
        if ( SetMiniport )
        {
          if ( (unsigned __int8)byte_1C0098759 >= 2u )
            WPP_SF_q(0x3Fu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
          if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
            McTemplateK0jqxqqq(
              v27,
              &ExecuteMethodFailed,
              (const GUID *)(a1 + 4032),
              a1 + 4032,
              *(_DWORD *)(a1 + 4080),
              *(_QWORD *)(a1 + 4048),
              v28,
              78,
              *(_DWORD *)(a2 + 56));
          if ( (*(_DWORD *)(v15 + 24) & 0x200) != 0 )
          {
            if ( (v28 & 0xC0010000) == 0xC0010000 )
              v28 = (unsigned __int16)v28 | 0xC0230000;
          }
          else if ( v28 != 259 && v28 != -2147483643 )
          {
            v42 = -1073741823;
            if ( v28 != -1073741823 && v28 != -1073741670 && v28 != -1073741637 )
            {
              if ( v28 == -1073676267 )
                v42 = -1073741811;
              v12 = v42;
              goto LABEL_40;
            }
          }
          v12 = v28;
        }
        else
        {
          if ( *(_DWORD *)&v58[4] != 12 )
          {
            if ( *(_DWORD *)&v58[4] == 1 )
            {
              v45 = *(_DWORD *)(v15 + 16);
              if ( v45 == -50265846 || v45 == -50265843 )
              {
                v30 = 196;
              }
              else
              {
                v46 = (_QWORD *)(a2 + *(unsigned int *)(a2 + 60));
                *v46 = 0LL;
                v46[1] = 0LL;
                *(_DWORD *)v46 = 1048837;
                *((_BYTE *)v46 + 8) = v58[232];
                v30 = v54;
              }
            }
            else
            {
              v29 = *(_DWORD *)(v15 + 16);
              if ( ((v29 + 67042805) & 0xFFFFFFFD) != 0 )
              {
                if ( (unsigned int)(v29 + 67042802) <= 1 )
                {
                  v47 = (__m128i *)(a2 + *(unsigned int *)(a2 + 60));
                  v48 = *v47;
                  v49 = v47[1].m128i_i32[0];
                  v47[1].m128i_i32[3] = v49;
                  v60 = v49;
                  v47->m128i_i32[0] = _mm_cvtsi128_si32(v48);
                  v47->m128i_i16[1] = 32;
                  v50 = _mm_cvtsi128_si32(_mm_srli_si128(v48, 8));
                  v59 = v48;
                  v47->m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v48, 4));
                  v47->m128i_i32[2] = v50 & 3;
                  v47->m128i_i32[3] = (v50 >> 2) & 3;
                  v47[1].m128i_i32[0] = (v50 >> 4) & 3;
                  v47[1].m128i_i32[1] = (unsigned __int8)v50 >> 6;
                  v47[1].m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v48, 12));
                  v31 = *(_DWORD *)(a2 + 60) + 32;
                  *(_DWORD *)(a2 + 64) = 32;
                  goto LABEL_39;
                }
                v30 = *(_DWORD *)&v58[52];
              }
              else
              {
                ndisWmiXlateNdisOffloadToWmiOffload(a2 + *(unsigned int *)(a2 + 60));
                v30 = 268;
              }
            }
LABEL_38:
            v31 = v30 + *(_DWORD *)(a2 + 60);
            *(_DWORD *)(a2 + 64) = v30;
LABEL_39:
            *(_DWORD *)a2 = v31;
            v12 = 0;
            *a4 = v31;
            goto LABEL_40;
          }
          v43 = *(_DWORD *)(v15 + 16);
          if ( v43 == 66086 )
          {
            ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams(a2 + *(unsigned int *)(a2 + 60));
            v30 = 1084;
            goto LABEL_38;
          }
          if ( v43 != 66085 )
          {
            v30 = *(_DWORD *)&v58[60];
            goto LABEL_38;
          }
          v44 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
                  (void *)(a2 + *(unsigned int *)(a2 + 60)),
                  *(unsigned int *)&v58[60]);
          v12 = v44;
          if ( v44 == -1073676268 )
          {
            if ( a3 >= 0x38 )
            {
              *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 60) + 32;
              *(_DWORD *)(a2 + 44) |= 0x20u;
              goto LABEL_91;
            }
            goto LABEL_88;
          }
          if ( !v44 )
          {
            v30 = 0;
            goto LABEL_38;
          }
          if ( (v44 & 0xC0010000) == 0xC0010000 )
            v12 = (unsigned __int16)v44 | 0xC0230000;
        }
      }
      else
      {
        v33 = *(_DWORD *)&v58[68];
        if ( *(_DWORD *)&v58[4] != 12 )
          v33 = *(_DWORD *)&v58[56];
        v34 = *(_DWORD *)(a2 + 60) + v33;
        if ( a3 < 0x38 )
          goto LABEL_88;
        *(_DWORD *)a2 = 56;
        *(_DWORD *)(a2 + 44) |= 0x20u;
        *(_DWORD *)(a2 + 48) = v34 + 32;
        v12 = 0;
        *a4 = 56;
      }
LABEL_49:
      if ( v12 == 259 )
        goto LABEL_42;
      goto LABEL_40;
    }
    v25 = P;
    if ( a3 >= 0x38 )
    {
      v38 = v18 + 268;
      goto LABEL_89;
    }
LABEL_88:
    v12 = -1073741789;
    *a4 = 4;
    goto LABEL_40;
  }
  if ( (unsigned int)(v20 + 67042802) > 1 || a3 - (unsigned int)v18 >= 0x20 )
    goto LABEL_23;
  v25 = P;
  if ( a3 < 0x38 )
    goto LABEL_88;
  v38 = v18 + 32;
LABEL_89:
  *(_DWORD *)(a2 + 44) |= 0x20u;
LABEL_90:
  *(_DWORD *)(a2 + 48) = v38;
LABEL_91:
  *(_DWORD *)a2 = 56;
  v12 = 0;
  *a4 = 56;
LABEL_40:
  if ( v25 )
    ndisDereferenceVcPtr(v25);
LABEL_42:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_qD(0x40u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1, v12);
  return (unsigned int)v12;
}
