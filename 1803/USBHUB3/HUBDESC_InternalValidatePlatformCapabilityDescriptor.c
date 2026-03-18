/*
 * XREFs of HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C00311A4
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0032910 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0022DEC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002D770 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002DC08 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidatePlatformCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  int v9; // ebp
  char v10; // si
  __int64 v11; // r15
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  unsigned __int16 v19; // r9
  unsigned int v20; // r12d
  __int64 v21; // rax
  _DWORD *v22; // r13
  unsigned int v23; // ecx
  unsigned __int8 *v24; // rdx
  __int64 v25; // rcx
  ULONG *v26; // r13
  ULONG v27; // r15d
  __int64 v28; // rdi
  bool v29; // zf
  unsigned __int8 v30; // cl
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-98h]
  __int64 v33; // [rsp+28h] [rbp-90h]
  unsigned __int8 *v34; // [rsp+50h] [rbp-68h]
  __int64 v35; // [rsp+58h] [rbp-60h]
  __int64 v36; // [rsp+60h] [rbp-58h]
  int v37; // [rsp+C0h] [rbp+8h]
  int v38; // [rsp+C8h] [rbp+10h] BYREF
  ULONG v39; // [rsp+D8h] [rbp+20h]

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v38 = 0;
    v5 = &v38;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = 1;
  v11 = a5;
  v12 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 < 0x14u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 251LL);
    if ( v12 < 0x14 )
    {
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v11, 2u, v14, 0x8Du, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v9, *a1, 20);
      goto LABEL_14;
    }
    *v5 = 2;
    *a3 = 20;
    WPP_RECORDER_SF_DDDD(v11, v13, v14, 0x8Cu, v32);
  }
  if ( *a3 > v12 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v5 = 2;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0x8Eu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v9);
    v15 = 253LL;
    goto LABEL_12;
  }
  v17 = a1[3];
  if ( v17 )
  {
    if ( *(_BYTE *)(a2 + 15) )
    {
      *v5 = 2;
      v17 = a1[3];
    }
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0x8Fu, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 195LL);
  }
  if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(a1 + 12) == *(_QWORD *)GUID_NULL.Data4 )
  {
    *v5 = 1;
    WPP_RECORDER_SF_(v11, 2u, 5u, 0x90u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    v15 = 196LL;
LABEL_12:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
    && *(_QWORD *)(a1 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) )
    {
      *v5 = 1;
      WPP_RECORDER_SF_(v11, 2u, 5u, 0x91u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
      v15 = 197LL;
      goto LABEL_12;
    }
    v18 = *a1;
    if ( *a1 < 0x1Cu )
    {
      v19 = 146;
LABEL_30:
      *v5 = 1;
      LODWORD(v33) = *a1;
      WPP_RECORDER_SF_d(v11, 2u, 5u, v19, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v33);
      v15 = 198LL;
      goto LABEL_12;
    }
    if ( ((v18 - 4) & 7) != 0 )
    {
      v19 = 147;
      goto LABEL_30;
    }
    v39 = 0;
    v20 = (((unsigned __int64)v18 - 28) >> 3) + 1;
    if ( (unsigned int)(((unsigned __int64)v18 - 28) >> 3) == -1 )
      goto LABEL_48;
    v21 = v20;
    v22 = a1 + 20;
    v23 = 1;
    v37 = 1;
    v36 = v20;
    do
    {
      if ( v23 < v20 )
      {
        v24 = &a1[8 * v23 + 20];
        v34 = v24;
        v25 = v20 - v23;
        v35 = v25;
        do
        {
          if ( *(_DWORD *)v24 == *v22 )
          {
            *v5 = 1;
            *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = 0LL;
            LODWORD(v33) = *v22;
            WPP_RECORDER_SF_d(v11, 2u, 5u, 0x94u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v33);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 199LL);
            v24 = v34;
            v25 = v35;
          }
          v24 += 8;
          --v25;
          v34 = v24;
          v35 = v25;
        }
        while ( v25 );
        v23 = v37;
        v21 = v36;
      }
      ++v23;
      v22 += 2;
      --v21;
      v37 = v23;
      v36 = v21;
    }
    while ( v21 );
    v26 = (ULONG *)(a1 + 20);
    v27 = v39;
    v28 = v20;
    do
    {
      if ( *v26 > v27 && RtlIsNtDdiVersionAvailable(*v26) )
      {
        v27 = *v26;
        *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = v26;
      }
      v26 += 2;
      --v28;
    }
    while ( v28 );
    v29 = v27 == 0;
    v11 = a5;
    if ( v29 )
    {
LABEL_48:
      WPP_RECORDER_SF_(v11, 2u, 5u, 0x95u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 200LL);
    }
  }
  else if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
         && *(_QWORD *)(a1 + 12) == *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
  {
    if ( *a1 < 0x1Au )
    {
      *v5 = 1;
      LODWORD(v33) = *a1;
      WPP_RECORDER_SF_d(v11, 2u, 5u, 0x96u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v33);
      v15 = 250LL;
      goto LABEL_12;
    }
    v30 = a1[20];
    if ( v30 == 1 )
    {
      if ( *a1 != 26 )
      {
        *v5 = 1;
        LODWORD(v33) = *a1;
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0x97u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v33);
        v15 = 247LL;
        goto LABEL_12;
      }
    }
    else if ( !v30 )
    {
      *v5 = 1;
      LODWORD(v33) = a1[20];
      WPP_RECORDER_SF_d(v11, 2u, 5u, 0x98u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v33);
      v15 = 249LL;
      goto LABEL_12;
    }
    v31 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v31 + 56) )
    {
      *v5 = 1;
      WPP_RECORDER_SF_(v11, 2u, 5u, 0x99u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
      v15 = 248LL;
      goto LABEL_12;
    }
    *(_QWORD *)(v31 + 56) = a1;
  }
LABEL_14:
  if ( *v5 )
  {
    v10 = 0;
    WPP_RECORDER_SF_(v11, 2u, 5u, 0x9Au, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  }
  return v10;
}
