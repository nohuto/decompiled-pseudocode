/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C002E438
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002F7F4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C000A864 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00222E8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002C7F8 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002C900 (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002CC90 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002CCB8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5,
        _BYTE *a6)
{
  int *v6; // r14
  _BYTE *v10; // r13
  int v11; // r15d
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ecx
  char v18; // r13
  __int64 v19; // r8
  int v20; // edx
  unsigned int *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v35; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  int v39; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v40; // [rsp+A0h] [rbp+18h]

  v40 = a3;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v39;
    v39 = 0;
  }
  v10 = a6;
  if ( a6 )
    *a6 = 0;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 4) == 3;
  LODWORD(a6) = *(_DWORD *)(a2 + 72) - v11;
  v13 = *a1;
  *a3 = v13;
  if ( !v12 )
  {
    v14 = a5;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0x47u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v11);
    v15 = 40LL;
LABEL_102:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    goto LABEL_103;
  }
  v14 = a5;
  if ( (unsigned __int8)v13 < 6u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 43LL, a3, 0LL);
    if ( (unsigned int)a6 >= 6 )
      *a3 = 6;
    v17 = *a3;
    *v6 = 2;
    if ( v17 < 6 )
    {
      v18 = 1;
      *v6 = 1;
      WPP_RECORDER_SF_DDD(v14, 2u, v16, 0x48u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, *a1, v11, 6);
      goto LABEL_104;
    }
    WPP_RECORDER_SF_DDDD(v14, 6LL, v16, 0x49u, v35);
  }
  if ( *a1 > 6u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(v14, 2u, v19, 0x4Au, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, *a1, v11, 6);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 42LL);
  }
  v20 = *(_DWORD *)(a2 + 256);
  if ( (v20 & 4) == 0 )
  {
    LODWORD(v36) = v11;
    WPP_RECORDER_SF_d(v14, 2u, 5u, 0x4Bu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 41LL);
    *v6 = 2;
LABEL_105:
    v18 = 0;
    WPP_RECORDER_SF_(v14, 2u, 5u, 0x5Eu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    return v18;
  }
  v21 = v40;
  v22 = (unsigned int)a6;
  v23 = v20 & 0xFFFFFFEB | 0x10;
  *(_DWORD *)(a2 + 256) = v23;
  if ( *v21 > v22 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v6 = 2;
    LODWORD(v36) = v11;
    WPP_RECORDER_SF_d(v14, 2u, 5u, 0x4Cu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36);
    v15 = 44LL;
    goto LABEL_102;
  }
  v24 = *(_QWORD *)(a2 + 192);
  switch ( *(_BYTE *)(v24 + 3) & 3 )
  {
    case 0:
      if ( a1[2] )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        LODWORD(v37) = a1[2];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x4Du, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 38LL);
      }
      if ( a1[3] )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        LODWORD(v37) = a1[3];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x4Eu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 37LL);
      }
      if ( !*((_WORD *)a1 + 2) )
        goto LABEL_103;
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v6 = 2;
      LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
      LODWORD(v36) = v11;
      WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x4Fu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
      v15 = 39LL;
      goto LABEL_102;
    case 1:
      v29 = v23 & 0xFFFFFFDF;
      *(_DWORD *)(a2 + 256) = v29;
      v30 = v29 & 0xFFFFFFF7;
      *(_DWORD *)(a2 + 256) = v30 | (a1[3] >> 4) & 0xFFFFFF8;
      if ( a1[2] > 0xFu )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        LODWORD(v37) = a1[2];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x58u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 50LL);
      }
      if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        LODWORD(v38) = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL);
        LODWORD(v37) = a1[2];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_DDD(
          v14,
          2u,
          v31,
          0x59u,
          (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
          v36,
          v37,
          v38);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 51LL);
      }
      if ( (*(_DWORD *)(a2 + 256) & 8) == 0 && (a1[3] & 3) == 3 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        LODWORD(v37) = a1[3] & 3;
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_Dd(v14, v32, 5u, 0x5Au, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 52LL);
      }
      if ( (a1[3] & 0x7C) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        LODWORD(v37) = a1[3];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x5Bu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 49LL);
      }
      v18 = 1;
      if ( (*(_DWORD *)(a2 + 256) & 8) == 0 )
      {
        v33 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
        if ( *((unsigned __int16 *)a1 + 2) <= (unsigned int)v33 )
          break;
        WPP_RECORDER_SF_ddd(v14, v33, (__int64)a3, 0x5Cu, v35);
        v27 = 53LL;
        goto LABEL_44;
      }
      if ( *((_WORD *)a1 + 2) != 1 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_Dd(v14, v30, 5u, 0x5Du, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 204LL);
      }
      break;
    case 2:
      if ( a1[2] > 0xFu )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        LODWORD(v37) = a1[2];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x50u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 34LL);
      }
      if ( (a1[3] & 0x1F) != 0 && v10 )
        *v10 = 1;
      if ( (a1[3] & 0x1Fu) > 0x10 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        LODWORD(v37) = a1[3] & 0x1F;
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_Dd(v14, v28, 5u, 0x51u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 35LL);
      }
      if ( a1[3] >= 0x20u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        LODWORD(v37) = a1[3];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x52u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 33LL);
      }
      if ( !*((_WORD *)a1 + 2) )
        goto LABEL_103;
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v6 = 2;
      LODWORD(v37) = *((unsigned __int16 *)a1 + 2);
      LODWORD(v36) = v11;
      WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x53u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
      v15 = 36LL;
      goto LABEL_102;
    case 3:
      if ( a1[2] > 0xFu )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        LODWORD(v37) = a1[2];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x54u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 45LL);
      }
      if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        LODWORD(v38) = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL);
        LODWORD(v37) = a1[2];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_DDD(
          v14,
          2u,
          v25,
          0x55u,
          (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
          v36,
          v37,
          v38);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 46LL);
      }
      if ( a1[3] )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        LODWORD(v37) = a1[3];
        LODWORD(v36) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x56u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v36, v37);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 47LL);
      }
      v18 = 1;
      v26 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
      if ( *((unsigned __int16 *)a1 + 2) > (unsigned int)v26 )
      {
        WPP_RECORDER_SF_ddd(v14, v26, (__int64)a3, 0x57u, v35);
        v27 = 48LL;
LABEL_44:
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v27);
      }
      break;
    default:
LABEL_103:
      v18 = 1;
      break;
  }
LABEL_104:
  if ( *v6 )
    goto LABEL_105;
  return v18;
}
