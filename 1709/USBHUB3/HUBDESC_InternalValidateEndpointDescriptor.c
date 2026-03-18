/*
 * XREFs of HUBDESC_InternalValidateEndpointDescriptor @ 0x1C002D5E8
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002F7F4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00222E8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002C7F8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002CC90 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002CCB8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x1C002D3DC (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
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
  int v17; // edx
  unsigned __int16 v18; // bx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rdx
  unsigned __int16 v23; // r9
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  unsigned __int16 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int16 v30; // r10
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  unsigned __int16 v34; // r9
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned __int16 v38; // r9
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int16 v41; // r10
  __int64 v42; // r8
  char v43; // r9
  int v44; // eax
  int v46; // [rsp+20h] [rbp-68h]
  __int64 v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h]
  unsigned __int8 v49; // [rsp+90h] [rbp+8h]
  int v50; // [rsp+98h] [rbp+10h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v50;
    v50 = 0;
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
          (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
          *a1,
          v9,
          v15);
        goto LABEL_192;
      }
      WPP_RECORDER_SF_DDDD(v10, v14, v15, 0x1Eu, v46);
    }
    if ( *a1 > 7u )
    {
      WPP_RECORDER_SF_DDD(v10, 3u, v12, 0x1Fu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, *a1, v9, 7);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 80LL);
    }
    if ( *a3 > v11 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v47) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x20u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47);
      v16 = 83LL;
LABEL_22:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v16);
      goto LABEL_192;
    }
    v49 = a1[2];
    if ( (*(_DWORD *)(a2 + 256) & 1) == 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v47) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x21u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47);
      v16 = 85LL;
      goto LABEL_22;
    }
    if ( (a1[2] & 0xF) == 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        *v5 = 2;
      LODWORD(v47) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x22u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 86LL);
    }
    if ( (a1[2] & 0x70) != 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      LODWORD(v48) = a1[2];
      LODWORD(v47) = v9;
      WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x23u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 84LL);
    }
    if ( (a1[3] & 0xC0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      LODWORD(v48) = v9;
      LODWORD(v47) = a1[3];
      WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x24u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 82LL);
    }
    v17 = a1[3];
    v18 = *((_WORD *)a1 + 2);
    if ( (a1[3] & 3) == 0 )
    {
      if ( (v17 & 0xFFFFFFFC) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        LODWORD(v48) = v9;
        LODWORD(v47) = a1[3];
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x25u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 67LL);
      }
      v35 = *(_DWORD *)(a2 + 4);
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 1 || *((_WORD *)a1 + 2) == 512 )
              goto LABEL_186;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            v38 = 41;
          }
          else
          {
            if ( *((_WORD *)a1 + 2) == 64 )
              goto LABEL_186;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            v38 = 40;
          }
        }
        else
        {
          v39 = *((unsigned __int16 *)a1 + 2);
          LOWORD(v39) = v39 - 8;
          if ( (unsigned __int16)v39 <= 0x38u )
          {
            v40 = 0x100000001000101LL;
            if ( _bittest64(&v40, v39) )
              goto LABEL_186;
          }
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( *((_WORD *)a1 + 2) == v41 )
            *v5 = 2;
          v38 = 39;
        }
      }
      else
      {
        if ( *((_WORD *)a1 + 2) == 8 )
          goto LABEL_186;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( (unsigned __int16)(*((_WORD *)a1 + 2) - 1) > 7u )
          *v5 = 2;
        v38 = 38;
      }
      LODWORD(v48) = v9;
      LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
      WPP_RECORDER_SF_dD(v10, 2u, 5u, v38, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
      v22 = 68LL;
      goto LABEL_185;
    }
    if ( (a1[3] & 3) != 1 )
    {
      if ( (a1[3] & 3) != 2 )
      {
        if ( (a1[3] & 3) == 3 )
        {
          v19 = *(_DWORD *)(a2 + 4);
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 != 1 || v18 <= 0x400u )
                  goto LABEL_186;
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v48) = v9;
                LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x35u,
                  (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                  v47,
                  v48);
                v22 = 110LL;
              }
              else
              {
                if ( (v17 & 0xFFFFFFFC) != 0 )
                {
                  if ( *(_BYTE *)(a2 + 15) )
                    *v5 = 2;
                  LODWORD(v48) = v9;
                  LODWORD(v47) = a1[3];
                  WPP_RECORDER_SF_dD(
                    v10,
                    2u,
                    5u,
                    0x31u,
                    (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                    v47,
                    v48);
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
                }
                if ( (v18 & 0x7FFu) > 0x400 )
                {
                  if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                    *v5 = 2;
                  LODWORD(v48) = v9;
                  LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    v10,
                    2u,
                    5u,
                    0x32u,
                    (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                    v47,
                    v48);
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
                }
                if ( v18 >= 0x2000u )
                {
                  if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                    *v5 = 2;
                  LODWORD(v48) = v9;
                  LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    v10,
                    2u,
                    5u,
                    0x33u,
                    (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                    v47,
                    v48);
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
                }
                if ( (v18 & 0x1800) != 0x1800 )
                  goto LABEL_186;
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v48) = v9;
                LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x34u,
                  (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                  v47,
                  v48);
                v22 = 110LL;
              }
              goto LABEL_185;
            }
            if ( (v17 & 0xFFFFFFFC) != 0 )
            {
              if ( *(_BYTE *)(a2 + 15) )
                *v5 = 2;
              LODWORD(v48) = v9;
              LODWORD(v47) = a1[3];
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x2Eu,
                (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                v47,
                v48);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
            }
            if ( *((_WORD *)a1 + 2) > 0x40u )
            {
              *v5 = 2;
              LODWORD(v48) = v9;
              LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x2Fu,
                (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                v47,
                v48);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            }
            if ( a1[6] )
              goto LABEL_186;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            v23 = 48;
          }
          else
          {
            if ( (v17 & 0xFFFFFFFC) != 0 )
            {
              if ( *(_BYTE *)(a2 + 15) )
                *v5 = 2;
              LODWORD(v48) = v9;
              LODWORD(v47) = a1[3];
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x2Au,
                (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                v47,
                v48);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
            }
            if ( *((_WORD *)a1 + 2) > 8u )
            {
              *v5 = 2;
              LODWORD(v48) = v9;
              LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x2Bu,
                (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                v47,
                v48);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            }
            if ( !*((_WORD *)a1 + 2) )
            {
              *v5 = 2;
              LODWORD(v48) = v9;
              LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x2Cu,
                (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
                v47,
                v48);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            }
            if ( a1[6] )
              goto LABEL_186;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            v23 = 45;
          }
          LODWORD(v48) = v9;
          LODWORD(v47) = a1[6];
          WPP_RECORDER_SF_dD(v10, 2u, 5u, v23, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
          v22 = 109LL;
LABEL_185:
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v22);
        }
LABEL_186:
        if ( _bittest64(*(const signed __int64 **)(a2 + 144), v49) )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) != v43 )
            *v5 = 2;
          WPP_RECORDER_SF_DDDD(v10, v49, v42, 0x45u, v46);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 102LL);
        }
        RtlSetBit((PRTL_BITMAP)(a2 + 136), v49);
        v44 = *(_DWORD *)(a2 + 256);
        ++*(_BYTE *)(a2 + 185);
        *(_QWORD *)(a2 + 192) = a1;
        *(_DWORD *)(a2 + 256) = v44 & 0xFFFFFFEB | 4;
        goto LABEL_192;
      }
      if ( (v17 & 0xFFFFFFFC) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        LODWORD(v48) = v9;
        LODWORD(v47) = a1[3];
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x36u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 31LL);
      }
      v24 = *(_DWORD *)(a2 + 4);
      if ( !v24 )
      {
        *v5 = 2;
        LODWORD(v47) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x37u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47);
        v22 = 30LL;
        goto LABEL_185;
      }
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 != 1 || *((_WORD *)a1 + 2) == 1024 )
            goto LABEL_186;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          v27 = 58;
        }
        else
        {
          if ( *((_WORD *)a1 + 2) == 512 )
            goto LABEL_186;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          v27 = 57;
        }
      }
      else
      {
        v28 = *((unsigned __int16 *)a1 + 2);
        LOWORD(v28) = v28 - 8;
        if ( (unsigned __int16)v28 <= 0x38u )
        {
          v29 = 0x100000001000101LL;
          if ( _bittest64(&v29, v28) )
            goto LABEL_186;
        }
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( *((_WORD *)a1 + 2) == v30 )
          *v5 = 2;
      }
      LODWORD(v48) = v9;
      LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
      WPP_RECORDER_SF_dD(v10, 2u, 5u, v27, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
      v22 = 32LL;
      goto LABEL_185;
    }
    if ( !*(_BYTE *)(a2 + 81) && v18 )
    {
      LODWORD(v48) = v18;
      LODWORD(v47) = v9;
      WPP_RECORDER_SF_dD(v10, 3u, 5u, 0x3Bu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 233LL);
    }
    v31 = *(_DWORD *)(a2 + 4);
    if ( !v31 )
    {
      *v5 = 2;
      LODWORD(v47) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x3Cu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47);
      v22 = 111LL;
      goto LABEL_185;
    }
    v32 = v31 - 1;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( !v33 )
      {
        if ( (v18 & 0x7FFu) > 0x400 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          LODWORD(v48) = v9;
          LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
          WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x3Fu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
        }
        if ( v18 >= 0x2000u )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          LODWORD(v48) = v9;
          LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
          WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x40u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
        }
        if ( (v18 & 0x1800) == 0x1800 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          LODWORD(v48) = v9;
          LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
          WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x41u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
        }
        if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
          goto LABEL_186;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        LODWORD(v48) = v9;
        LODWORD(v47) = a1[6];
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x42u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
        goto LABEL_131;
      }
      if ( v33 != 1 )
        goto LABEL_186;
      if ( *((_WORD *)a1 + 2) > 0x400u )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        LODWORD(v48) = v9;
        LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x43u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
      }
      if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
        goto LABEL_186;
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      v34 = 68;
    }
    else
    {
      if ( *((_WORD *)a1 + 2) > 0x3FFu )
      {
        *v5 = 2;
        LODWORD(v48) = v9;
        LODWORD(v47) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x3Du, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
      }
      if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
        goto LABEL_186;
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      v34 = 62;
    }
    LODWORD(v48) = v9;
    LODWORD(v47) = a1[6];
    WPP_RECORDER_SF_dD(v10, 2u, 5u, v34, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v47, v48);
LABEL_131:
    v22 = 112LL;
    goto LABEL_185;
  }
LABEL_192:
  if ( *v5 )
  {
    v13 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x46u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
  }
  return v13;
}
