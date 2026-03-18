/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C0031908
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0032910 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0022DEC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002D770 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_dDDDdDDD @ 0x1C002DA78 (WPP_RECORDER_SF_dDDDdDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002DC08 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v6; // r14
  int v9; // r12d
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int16 v15; // ax
  unsigned __int8 v16; // al
  unsigned __int16 v17; // ax
  unsigned int v18; // eax
  __int64 v19; // r13
  int v20; // r8d
  int v21; // r10d
  __int64 v22; // r9
  unsigned int v23; // r8d
  int v24; // r8d
  unsigned int v25; // r8d
  int v26; // r8d
  unsigned __int16 v27; // cx
  int v28; // r8d
  unsigned __int16 v29; // r9
  __int64 v30; // r8
  int v31; // ecx
  unsigned int v32; // eax
  int v33; // r8d
  int v34; // r10d
  unsigned int v35; // r8d
  int v36; // r10d
  __int64 result; // rax
  int v38; // [rsp+20h] [rbp-A8h]
  __int64 v39; // [rsp+28h] [rbp-A0h]
  __int64 v40; // [rsp+30h] [rbp-98h]
  __int64 v41; // [rsp+38h] [rbp-90h]
  unsigned int v42; // [rsp+70h] [rbp-58h]
  int v43; // [rsp+74h] [rbp-54h] BYREF
  __int64 v44; // [rsp+78h] [rbp-50h]
  char v45; // [rsp+D0h] [rbp+8h]
  int v46; // [rsp+D8h] [rbp+10h]
  int v48; // [rsp+E8h] [rbp+20h]

  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v43;
    v43 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 < 0x10u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 214LL, 0LL);
    if ( v10 < 0x10 )
    {
      *v6 = 1;
      WPP_RECORDER_SF_DDD(a5, 2u, v12, 0xA6u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v9, *a1, 16);
      goto LABEL_80;
    }
    *v6 = 2;
    *a3 = 16;
    WPP_RECORDER_SF_DDDD(a5, v11, v12, 0xA5u, v38);
  }
  v42 = *((_DWORD *)a1 + 1) & 0x1F;
  if ( *a1 != 4LL * v42 + 16 )
  {
    if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(
      a5,
      2u,
      0LL,
      0xA7u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      v9,
      *a1,
      4 * v42 + 16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 213LL);
  }
  if ( *a3 <= v10 )
  {
    v14 = *((_DWORD *)a1 + 1);
    if ( v14 >= 0x200 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v6 = 2;
        v14 = *((_DWORD *)a1 + 1);
      }
      LODWORD(v39) = v14;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xA9u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 215LL);
    }
    v15 = *((_WORD *)a1 + 4);
    if ( (v15 & 0xF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v6 = 2;
        v15 = *((_WORD *)a1 + 4);
      }
      LODWORD(v39) = v15;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xAAu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 216LL);
    }
    v16 = a1[3];
    if ( v16 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v6 = 2;
        v16 = a1[3];
      }
      LODWORD(v39) = v16;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xABu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 218LL);
    }
    v17 = *((_WORD *)a1 + 5);
    if ( v17 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v6 = 2;
        v17 = *((_WORD *)a1 + 5);
      }
      LODWORD(v39) = v17;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xACu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 219LL);
    }
    v18 = v42;
    LODWORD(v19) = 0;
    v48 = 0;
    v46 = 0;
    v45 = 0;
    do
    {
      v20 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
      if ( (v20 & 0x80u) != 0 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        LODWORD(v39) = v19;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xADu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
        v13 = 220LL;
        goto LABEL_79;
      }
      if ( (_DWORD)v19 == v18 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        LODWORD(v39) = v19 + 1;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xAEu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
        v13 = 222LL;
        goto LABEL_79;
      }
      v21 = *(_DWORD *)&a1[4 * (unsigned int)(v19 + 1) + 12];
      v22 = (unsigned int)(v19 + 1);
      v44 = v22;
      if ( (v21 & 0x80u) == 0 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          *v6 = 2;
        LODWORD(v39) = v19 + 1;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xAFu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
        v13 = 221LL;
        goto LABEL_79;
      }
      if ( (((unsigned __int8)v20 ^ (unsigned __int8)v21) & 0xF) != 0
        || (((unsigned __int8)v20 ^ (unsigned __int8)v21) & 0x40) != 0
        || (((unsigned __int16)v20 ^ (unsigned __int16)v21) & 0xC000) != 0 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        {
          *v6 = 2;
          v23 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
        }
        WPP_RECORDER_SF_dDDDdDDD(a5, v23 & 0xF, (v23 >> 6) & 1, 0xB0u, v38);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 223LL);
        v22 = v44;
      }
      v24 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
      if ( (v24 & 0x40) == 0
        && ((((unsigned __int8)*(_DWORD *)&a1[4 * v22 + 12] ^ (unsigned __int8)v24) & 0x30) != 0
         || *(_WORD *)&a1[4 * (unsigned int)v19 + 14] != *(_WORD *)&a1[4 * v22 + 14]) )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        {
          *v6 = 2;
          v25 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
        }
        WPP_RECORDER_SF_dDDDdDDD(a5, v25 & 0xF, (v25 >> 4) & 3, 0xB1u, v38);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 224LL);
      }
      v26 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
      v27 = *((_WORD *)a1 + 4);
      if ( (((unsigned __int8)v26 ^ (unsigned __int8)v27) & 0xF) == 0 )
      {
        v45 = 1;
        if ( (v26 & 0x40) == 0 && (v27 & 0xF00) != ((v27 >> 4) & 0xF00) )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
          {
            *v6 = 2;
            v29 = *((_WORD *)a1 + 4);
            v28 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
          }
          v30 = v28 & 0xF;
          LODWORD(v41) = v29 >> 12;
          LODWORD(v40) = HIBYTE(v29) & 0xF;
          LODWORD(v39) = v30;
          WPP_RECORDER_SF_DDD(
            a5,
            2u,
            v30,
            0xB2u,
            (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
            v39,
            v40,
            v41);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 225LL);
        }
      }
      v31 = v48;
      v32 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12] & 0xF;
      if ( _bittest(&v31, v32) )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        {
          *v6 = 2;
          v33 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
        }
        LODWORD(v40) = v33 & 0xF;
        LODWORD(v39) = v19;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xB3u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39, v40);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 226LL);
        v34 = v46;
      }
      else
      {
        v34 = v46 + 1;
        v48 |= 1 << v32;
        ++v46;
      }
      v18 = v42;
      v19 = (unsigned int)(v19 + 2);
    }
    while ( (unsigned int)v19 <= v42 );
    if ( ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1 != v34 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      {
        *v6 = 2;
        v35 = *((_DWORD *)a1 + 1);
      }
      LODWORD(v40) = ((v35 >> 5) & 0xF) + 1;
      LODWORD(v39) = v36;
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xB4u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39, v40);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 227LL);
    }
    if ( !v45 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
        *v6 = 2;
      LODWORD(v39) = *(_DWORD *)&a1[4 * v19 + 12] & 0xF;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB5u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
      v13 = 228LL;
      goto LABEL_79;
    }
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v6 = 2;
    LODWORD(v39) = v9;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xA8u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v39);
    v13 = 217LL;
LABEL_79:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v13);
  }
LABEL_80:
  result = 0LL;
  if ( *v6 )
    return WPP_RECORDER_SF_(a5, 2u, 5u, 0xB6u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  return result;
}
