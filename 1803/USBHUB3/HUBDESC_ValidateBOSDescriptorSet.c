/*
 * XREFs of HUBDESC_ValidateBOSDescriptorSet @ 0x1C0033088
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024260 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C0029D60 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002D878 (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C002DE14 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0032910 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C0032D6C (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int128 *a5,
        char *a6,
        _WORD *a7,
        unsigned __int16 *a8,
        _BYTE *a9,
        int *a10,
        _DWORD *a11,
        __int64 a12)
{
  __int64 v12; // rsi
  char *v13; // rbx
  int v14; // r12d
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // xmm1_8
  __int64 v20; // r14
  bool v21; // bl
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r13
  unsigned __int8 *v26; // rdi
  bool v27; // al
  unsigned __int8 v28; // al
  char *v29; // r15
  _DWORD *v30; // rdi
  int v32; // [rsp+20h] [rbp-C9h]
  __int64 v33; // [rsp+28h] [rbp-C1h]
  __int64 v34; // [rsp+30h] [rbp-B9h]
  _OWORD v35[3]; // [rsp+50h] [rbp-99h] BYREF
  __int64 v36; // [rsp+80h] [rbp-69h]
  __int64 v37; // [rsp+88h] [rbp-61h]
  unsigned __int64 v38; // [rsp+90h] [rbp-59h]
  unsigned int v39; // [rsp+98h] [rbp-51h]
  char *v40; // [rsp+A0h] [rbp-49h]
  __int64 v41; // [rsp+A8h] [rbp-41h]
  char v42; // [rsp+B0h] [rbp-39h] BYREF
  int v44; // [rsp+148h] [rbp+5Fh] BYREF

  v12 = (__int64)a5;
  v13 = &v42;
  v14 = 0;
  v38 = a2 + a4;
  v17 = *a5;
  v39 = a4;
  v18 = a5[1];
  if ( a6 )
    v13 = a6;
  v35[0] = v17;
  v35[1] = v18;
  v19 = *((_QWORD *)a5 + 6);
  v37 = a2;
  v36 = v19;
  v41 = a3;
  v35[2] = a5[2];
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  memset(v13, 0, 0x40uLL);
  v40 = v13;
  if ( a4 < 5 )
  {
    v20 = a12;
    WPP_RECORDER_SF_dD(a12, 2u, 5u, 0xE2u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, a4, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(v12 + 24))(*(_QWORD *)(v12 + 40), 23LL);
LABEL_9:
    v21 = 0;
    goto LABEL_40;
  }
  v20 = a12;
  v44 = 0;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a2, (__int64)v35, &a5, &v44, a12);
  if ( v44 == 1 )
    goto LABEL_9;
  v22 = *(unsigned __int16 *)(a2 + 2);
  v21 = v44 != 2;
  if ( a4 < v22 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v12 + 24))(*(_QWORD *)(v12 + 40), 23LL);
    WPP_RECORDER_SF_ddd(v20, v23, v24, 0xE3u, v32);
    LOWORD(v22) = *(_WORD *)(a2 + 2);
    v21 = 0;
  }
  if ( a4 > (unsigned __int16)v22 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v12 + 32))(*(_QWORD *)(v12 + 40), 22LL);
    WPP_RECORDER_SF_dD(
      v20,
      2u,
      5u,
      0xE4u,
      (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids,
      a4,
      *(unsigned __int16 *)(a2 + 2));
  }
  v25 = v38;
  v26 = (unsigned __int8 *)(a2 + (unsigned int)a5);
  if ( (unsigned __int64)v26 < v38 )
  {
    while ( 1 )
    {
      v44 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v26, (__int64)v35, (unsigned int *)&a5, &v44, v20);
      if ( v44 == 1 )
        break;
      v27 = v21;
      if ( v44 == 2 )
        v27 = 0;
      v44 = 0;
      v21 = v27;
      v28 = v26[1];
      if ( v28 == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(
          v26,
          (__int64)v35,
          (unsigned int *)&a5,
          &v44,
          a7,
          a8,
          a9,
          a10,
          v20);
        if ( v44 == 1 )
        {
          v21 = 0;
          goto LABEL_40;
        }
        v25 = v38;
        if ( v44 == 2 )
          v21 = 0;
      }
      else
      {
        LODWORD(v34) = v28;
        LODWORD(v33) = (_DWORD)v26 - a2;
        WPP_RECORDER_SF_dD(v20, 2u, 5u, 0xE5u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v33, v34);
        (*(void (__fastcall **)(_QWORD, __int64))(v12 + 32))(*(_QWORD *)(v12 + 40), 28LL);
      }
      ++v14;
      v26 += (unsigned int)a5;
      if ( (unsigned __int64)v26 >= v25 )
        goto LABEL_25;
    }
    v21 = 0;
    goto LABEL_40;
  }
LABEL_25:
  if ( *(unsigned __int8 *)(a2 + 4) != v14 )
  {
    LODWORD(v34) = *(unsigned __int8 *)(a2 + 4);
    LODWORD(v33) = v14;
    WPP_RECORDER_SF_dD(v20, 2u, 5u, 0xE6u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids, v33, v34);
    (*(void (__fastcall **)(_QWORD, __int64))(v12 + 24))(*(_QWORD *)(v12 + 40), 25LL);
    v21 = 0;
  }
  v29 = v40;
  v30 = a11;
  if ( *((_QWORD *)v40 + 1) )
  {
    if ( a11 )
      *a11 |= 0x800u;
  }
  else if ( DWORD1(v35[0]) == 3 )
  {
    WPP_RECORDER_SF_(v20, 2u, 5u, 0xE7u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(v12 + 24))(*(_QWORD *)(v12 + 40), 26LL);
    v21 = 0;
  }
  HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(a1);
  if ( v30 )
  {
    if ( *((_QWORD *)v29 + 2) )
      *v30 |= 0x1000u;
    if ( v29[42] )
      *v30 |= 0x10000u;
  }
  if ( !v21 )
LABEL_40:
    WPP_RECORDER_SF_(v20, 2u, 5u, 0xE8u, (__int64)&WPP_6a2c9542c6d8380783208b53af0e836a_Traceguids);
  return v21;
}
