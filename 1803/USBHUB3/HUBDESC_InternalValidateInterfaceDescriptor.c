/*
 * XREFs of HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C00300EC
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0030954 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0022DEC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002D770 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002DC08 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C002E4A4 (HUBDESC_InternalValidateLastInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateInterfaceDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  unsigned int v9; // eax
  int v10; // r15d
  char v11; // r13
  __int64 v12; // r12
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned __int8 v18; // bp
  bool v19; // si
  __int64 v20; // r8
  unsigned __int8 v21; // r13
  __int64 v22; // r8
  ULONG v23; // esi
  __int64 v24; // r8
  __int64 v25; // r8
  unsigned __int8 v26; // al
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  unsigned __int8 v32; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+98h] [rbp+10h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v33 = 0;
    v5 = &v33;
  }
  v9 = *a1;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = 1;
  v12 = a5;
  v13 = *(_DWORD *)(a2 + 72) - v10;
  *a3 = v9;
  if ( (unsigned __int8)v9 < 9u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 99LL);
    if ( v13 >= 9 )
      *a3 = 9;
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    if ( *a3 < (unsigned int)v15 )
    {
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v12, 2u, v15, 0x68u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, *a1, v10, v15);
      goto LABEL_60;
    }
    WPP_RECORDER_SF_DDDD(v12, v14, v15, 0x69u, v28);
  }
  if ( *a1 > 9u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    WPP_RECORDER_SF_DDD(v12, 2u, v16, 0x6Au, v16, *a1, v10, 9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 98LL);
  }
  if ( *a3 <= v13 )
  {
    v18 = a1[2];
    v32 = a1[3];
    if ( (*(_DWORD *)(a2 + 256) & 1) != 0 && v18 == *(_BYTE *)(a2 + 80) )
      v11 = 0;
    v19 = !(*(_BYTE *)(a2 + 256) & 1);
    HUBDESC_InternalValidateLastInterface(a2, v5, v12);
    if ( *v5 != 1 )
    {
      if ( v11 )
      {
        if ( _bittest64(*(const signed __int64 **)(a2 + 216), v18) )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          LODWORD(v30) = v18;
          LODWORD(v29) = v10;
          WPP_RECORDER_SF_dD(v12, 2u, 5u, 0x6Cu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v29, v30);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 103LL);
        }
        if ( !v19 && *(_BYTE *)(a2 + 80) > v18 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
          {
            *v5 = 2;
            LOBYTE(v20) = *(_BYTE *)(a2 + 80);
          }
          LODWORD(v31) = (unsigned __int8)v20;
          LODWORD(v30) = v18;
          LODWORD(v29) = v10;
          WPP_RECORDER_SF_DDD(
            v12,
            2u,
            v20,
            0x6Du,
            (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
            v29,
            v30,
            v31);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 106LL);
        }
        v21 = v32;
        if ( v32 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          v23 = v32;
          LODWORD(v31) = v32;
          LODWORD(v30) = v18;
          LODWORD(v29) = v10;
          WPP_RECORDER_SF_DDD(
            v12,
            2u,
            v22,
            0x6Eu,
            (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
            v29,
            v30,
            v31);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 104LL);
        }
        else
        {
          v23 = 0;
        }
        RtlClearAllBits((PRTL_BITMAP)(a2 + 88));
        RtlSetBit((PRTL_BITMAP)(a2 + 208), v18);
        *(_BYTE *)(a2 + 80) = v18;
        ++*(_WORD *)(a2 + 202);
      }
      else
      {
        v21 = v32;
        if ( _bittest64(*(const signed __int64 **)(a2 + 96), v32) )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          LODWORD(v31) = v18;
          LODWORD(v30) = v10;
          v23 = v32;
          LODWORD(v29) = v32;
          WPP_RECORDER_SF_DDD(
            v12,
            2u,
            v24,
            0x6Fu,
            (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
            v29,
            v30,
            v31);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 101LL);
        }
        else
        {
          v23 = v32;
        }
        if ( *(_BYTE *)(a2 + 81) >= v32 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
          {
            *v5 = 2;
            LOBYTE(v25) = *(_BYTE *)(a2 + 81);
          }
          LODWORD(v31) = (unsigned __int8)v25;
          LODWORD(v30) = v23;
          LODWORD(v29) = v10;
          WPP_RECORDER_SF_DDD(
            v12,
            2u,
            v25,
            0x70u,
            (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
            v29,
            v30,
            v31);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 105LL);
        }
      }
      RtlClearAllBits((PRTL_BITMAP)(a2 + 136));
      *(_BYTE *)(a2 + 185) = 0;
      v26 = a1[4];
      *(_DWORD *)(a2 + 256) &= ~2u;
      *(_BYTE *)(a2 + 184) = v26;
      RtlSetBit((PRTL_BITMAP)(a2 + 88), v23);
      *(_BYTE *)(a2 + 81) = v21;
    }
    v11 = 1;
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    LODWORD(v29) = v10;
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0x6Bu, v17, v29);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 100LL);
  }
LABEL_60:
  if ( *v5 )
  {
    v11 = 0;
    WPP_RECORDER_SF_(v12, 2u, 5u, 0x71u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  }
  return v11;
}
