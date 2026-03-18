/*
 * XREFs of HUBDESC_InternalValidateEndpointDescriptor @ 0x1C002E5D0
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0030954 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0022DEC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002D770 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002DC08 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002DC30 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x1C002E398 (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateEndpointDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rsi
  int v9; // ebp
  __int64 v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // r8
  char v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // al
  int v19; // ecx
  unsigned __int16 v20; // r14
  int v21; // edx
  int v22; // edx
  int v23; // edx
  __int64 v24; // rdx
  unsigned __int8 v25; // r9
  int v26; // eax
  unsigned __int16 v27; // r9
  unsigned __int16 v28; // ax
  unsigned __int8 v29; // r9
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  unsigned __int16 v33; // r9
  int v34; // eax
  unsigned __int16 v35; // r9
  unsigned __int16 v36; // r9
  int v37; // r9d
  __int64 v38; // rcx
  unsigned __int16 v39; // r9
  unsigned __int16 v40; // r10
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  unsigned __int16 v44; // r9
  unsigned __int8 v45; // r9
  int v46; // eax
  unsigned __int16 v47; // r9
  unsigned __int8 v48; // r9
  unsigned __int8 v49; // r9
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  unsigned __int16 v53; // r9
  int v54; // eax
  unsigned __int16 v55; // r9
  unsigned __int16 v56; // r9
  int v57; // r9d
  __int64 v58; // rcx
  unsigned __int16 v59; // r9
  unsigned __int16 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  ULONG v63; // r14d
  int v64; // eax
  int v66; // [rsp+20h] [rbp-68h]
  __int64 v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+30h] [rbp-58h]
  unsigned __int8 v69; // [rsp+90h] [rbp+8h]
  int v70; // [rsp+98h] [rbp+10h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v70;
    v70 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  *a3 = *a1;
  HUBDESC_InternalValidateLastEndpoint(a2, v5, v10);
  v13 = 1;
  if ( *v5 != 1 )
  {
    if ( *a1 < 7u )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 81LL);
      if ( v11 >= 7 )
        *a3 = 7;
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( *a3 < (unsigned int)v15 )
      {
        *v5 = 1;
        WPP_RECORDER_SF_DDD(
          v10,
          2u,
          v15,
          0x1Du,
          (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
          *a1,
          v9,
          v15);
        goto LABEL_194;
      }
      WPP_RECORDER_SF_DDDD(v10, v14, v15, 0x1Eu, v66);
    }
    if ( *a1 > 7u )
    {
      WPP_RECORDER_SF_DDD(v10, 3u, v12, 0x1Fu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, *a1, v9, 7);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 80LL);
    }
    if ( *a3 > v11 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v67) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x20u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67);
      v16 = 83LL;
LABEL_22:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v16);
      goto LABEL_194;
    }
    v69 = a1[2];
    if ( (*(_DWORD *)(a2 + 256) & 1) == 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v67) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x21u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67);
      v16 = 85LL;
      goto LABEL_22;
    }
    if ( (a1[2] & 0xF) == 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        *v5 = 2;
      LODWORD(v67) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x22u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 86LL);
    }
    if ( (a1[2] & 0x70) != 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      {
        *v5 = 2;
        v17 = a1[2];
      }
      LODWORD(v68) = v17;
      LODWORD(v67) = v9;
      WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x23u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 84LL);
    }
    v18 = a1[3];
    if ( (v18 & 0xC0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v5 = 2;
        v18 = a1[3];
      }
      LODWORD(v68) = v9;
      LODWORD(v67) = v18;
      WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x24u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 82LL);
    }
    v19 = a1[3];
    v20 = *((_WORD *)a1 + 2);
    if ( (a1[3] & 3) == 0 )
    {
      if ( (v19 & 0xFFFFFFFC) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
        {
          *v5 = 2;
          LOBYTE(v19) = a1[3];
        }
        LODWORD(v68) = v9;
        LODWORD(v67) = (unsigned __int8)v19;
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x25u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 67LL);
      }
      v50 = *(_DWORD *)(a2 + 4);
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 )
          {
            if ( v52 != 1 || *((_WORD *)a1 + 2) == 512 )
              goto LABEL_187;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            {
              *v5 = 2;
              v53 = *((_WORD *)a1 + 2);
            }
            v54 = v53;
            v55 = 41;
          }
          else
          {
            if ( *((_WORD *)a1 + 2) == 64 )
              goto LABEL_187;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            {
              *v5 = 2;
              v56 = *((_WORD *)a1 + 2);
            }
            v54 = v56;
            v55 = 40;
          }
        }
        else
        {
          v57 = *((unsigned __int16 *)a1 + 2);
          if ( (unsigned __int16)(v57 - 8) <= 0x38u )
          {
            v58 = 0x100000001000101LL;
            if ( _bittest64(&v58, (unsigned int)(v57 - 8)) )
              goto LABEL_187;
          }
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v59 = *((_WORD *)a1 + 2);
          }
          if ( !v59 )
          {
            *v5 = 2;
            v59 = *((_WORD *)a1 + 2);
          }
          v54 = v59;
          v55 = 39;
        }
      }
      else
      {
        if ( *((_WORD *)a1 + 2) == 8 )
          goto LABEL_187;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v5 = 2;
          v60 = *((_WORD *)a1 + 2);
        }
        if ( v60 > 8u || !v60 )
        {
          *v5 = 2;
          v60 = *((_WORD *)a1 + 2);
        }
        v54 = v60;
        v55 = 38;
      }
      LODWORD(v68) = v9;
      LODWORD(v67) = v54;
      WPP_RECORDER_SF_dD(v10, 2u, 5u, v55, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
      v24 = 68LL;
      goto LABEL_186;
    }
    if ( (a1[3] & 3) == 1 )
    {
      if ( !*(_BYTE *)(a2 + 81) && v20 )
      {
        LODWORD(v68) = v20;
        LODWORD(v67) = v9;
        WPP_RECORDER_SF_dD(v10, 3u, 5u, 0x3Bu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 233LL);
      }
      v41 = *(_DWORD *)(a2 + 4);
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( !v43 )
          {
            if ( (v20 & 0x7FFu) > 0x400 )
            {
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              LODWORD(v68) = v9;
              LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x3Fu,
                (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
                v67,
                v68);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( v20 >= 0x2000u )
            {
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              LODWORD(v68) = v9;
              LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x40u,
                (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
                v67,
                v68);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( (v20 & 0x1800) == 0x1800 )
            {
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              LODWORD(v68) = v9;
              LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x41u,
                (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
                v67,
                v68);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
              goto LABEL_187;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            {
              *v5 = 2;
              v48 = a1[6];
            }
            LODWORD(v68) = v9;
            LODWORD(v67) = v48;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x42u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
            v24 = 112LL;
            goto LABEL_186;
          }
          if ( v43 != 1 )
            goto LABEL_187;
          if ( *((_WORD *)a1 + 2) > 0x400u )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            {
              *v5 = 2;
              v44 = *((_WORD *)a1 + 2);
            }
            LODWORD(v68) = v9;
            LODWORD(v67) = v44;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x43u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
            goto LABEL_187;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v45 = a1[6];
          }
          v46 = v45;
          v47 = 68;
        }
        else
        {
          if ( *((_WORD *)a1 + 2) > 0x3FFu )
          {
            *v5 = 2;
            LODWORD(v68) = v9;
            LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x3Du, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
            goto LABEL_187;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v49 = a1[6];
          }
          v46 = v49;
          v47 = 62;
        }
        LODWORD(v68) = v9;
        LODWORD(v67) = v46;
        WPP_RECORDER_SF_dD(v10, 2u, 5u, v47, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
        v24 = 112LL;
      }
      else
      {
        *v5 = 2;
        LODWORD(v67) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x3Cu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67);
        v24 = 111LL;
      }
LABEL_186:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v24);
      goto LABEL_187;
    }
    if ( (a1[3] & 3) != 2 )
    {
      if ( (a1[3] & 3) == 3 )
      {
        v21 = *(_DWORD *)(a2 + 4);
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 || v20 <= 0x400u )
                goto LABEL_187;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              {
                *v5 = 2;
                v20 = *((_WORD *)a1 + 2);
              }
              LODWORD(v68) = v9;
              LODWORD(v67) = v20;
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x35u,
                (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
                v67,
                v68);
              v24 = 110LL;
            }
            else
            {
              if ( (v19 & 0xFFFFFFFC) != 0 )
              {
                if ( *(_BYTE *)(a2 + 15) )
                {
                  *v5 = 2;
                  LOBYTE(v19) = a1[3];
                }
                LODWORD(v68) = v9;
                LODWORD(v67) = (unsigned __int8)v19;
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x31u,
                  (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
                  v67,
                  v68);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
              }
              if ( (v20 & 0x7FFu) > 0x400 )
              {
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v68) = v9;
                LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x32u,
                  (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
                  v67,
                  v68);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
              }
              if ( v20 >= 0x2000u )
              {
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v68) = v9;
                LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x33u,
                  (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
                  v67,
                  v68);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
              }
              if ( (v20 & 0x1800) != 0x1800 )
                goto LABEL_187;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              LODWORD(v68) = v9;
              LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x34u,
                (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
                v67,
                v68);
              v24 = 110LL;
            }
            goto LABEL_186;
          }
          if ( (v19 & 0xFFFFFFFC) != 0 )
          {
            if ( *(_BYTE *)(a2 + 15) )
            {
              *v5 = 2;
              LOBYTE(v19) = a1[3];
            }
            LODWORD(v68) = v9;
            LODWORD(v67) = (unsigned __int8)v19;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Eu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
          }
          if ( *((_WORD *)a1 + 2) > 0x40u )
          {
            *v5 = 2;
            LODWORD(v68) = v9;
            LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Fu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
          }
          if ( a1[6] )
            goto LABEL_187;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v25 = a1[6];
          }
          v26 = v25;
          v27 = 48;
        }
        else
        {
          if ( (v19 & 0xFFFFFFFC) != 0 )
          {
            if ( *(_BYTE *)(a2 + 15) )
            {
              *v5 = 2;
              LOBYTE(v19) = a1[3];
            }
            LODWORD(v68) = v9;
            LODWORD(v67) = (unsigned __int8)v19;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Au, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
          }
          v28 = *((_WORD *)a1 + 2);
          if ( v28 > 8u )
          {
            *v5 = 2;
            LODWORD(v68) = v9;
            LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Bu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            v28 = *((_WORD *)a1 + 2);
          }
          if ( !v28 )
          {
            *v5 = 2;
            LODWORD(v68) = v9;
            LODWORD(v67) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Cu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
          }
          if ( a1[6] )
            goto LABEL_187;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v29 = a1[6];
          }
          v26 = v29;
          v27 = 45;
        }
        LODWORD(v68) = v9;
        LODWORD(v67) = v26;
        WPP_RECORDER_SF_dD(v10, 2u, 5u, v27, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
        v24 = 109LL;
        goto LABEL_186;
      }
LABEL_187:
      if ( _bittest64(*(const signed __int64 **)(a2 + 144), v69) )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
          *v5 = 2;
        v63 = (unsigned __int8)v62;
        WPP_RECORDER_SF_DDDD(v10, v61, v62, 0x45u, v66);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 102LL);
      }
      else
      {
        v63 = v69;
      }
      RtlSetBit((PRTL_BITMAP)(a2 + 136), v63);
      v64 = *(_DWORD *)(a2 + 256);
      ++*(_BYTE *)(a2 + 185);
      *(_QWORD *)(a2 + 192) = a1;
      *(_DWORD *)(a2 + 256) = v64 & 0xFFFFFFEB | 4;
      goto LABEL_194;
    }
    if ( (v19 & 0xFFFFFFFC) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v5 = 2;
        LOBYTE(v19) = a1[3];
      }
      LODWORD(v68) = v9;
      LODWORD(v67) = (unsigned __int8)v19;
      WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x36u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 31LL);
    }
    v30 = *(_DWORD *)(a2 + 4);
    if ( !v30 )
    {
      *v5 = 2;
      LODWORD(v67) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x37u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67);
      v24 = 30LL;
      goto LABEL_186;
    }
    v31 = v30 - 1;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 != 1 || *((_WORD *)a1 + 2) == 1024 )
          goto LABEL_187;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v5 = 2;
          v33 = *((_WORD *)a1 + 2);
        }
        v34 = v33;
        v35 = 58;
      }
      else
      {
        if ( *((_WORD *)a1 + 2) == 512 )
          goto LABEL_187;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v5 = 2;
          v36 = *((_WORD *)a1 + 2);
        }
        v34 = v36;
        v35 = 57;
      }
    }
    else
    {
      v37 = *((unsigned __int16 *)a1 + 2);
      if ( (unsigned __int16)(v37 - 8) <= 0x38u )
      {
        v38 = 0x100000001000101LL;
        if ( _bittest64(&v38, (unsigned int)(v37 - 8)) )
          goto LABEL_187;
      }
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      {
        *v5 = 2;
        v39 = *((_WORD *)a1 + 2);
      }
      if ( !v39 )
      {
        *v5 = 2;
        v39 = *((_WORD *)a1 + 2);
      }
      v34 = v39;
      v35 = v40;
    }
    LODWORD(v68) = v9;
    LODWORD(v67) = v34;
    WPP_RECORDER_SF_dD(v10, 2u, 5u, v35, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v67, v68);
    v24 = 32LL;
    goto LABEL_186;
  }
LABEL_194:
  if ( *v5 )
  {
    v13 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x46u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  }
  return v13;
}
