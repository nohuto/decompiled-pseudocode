/*
 * XREFs of HUBDESC_ValidateBOSDescriptorSet @ 0x1C0031EC4
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0023760 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002C900 (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C002CE98 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0031750 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C0031BAC (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char *a5,
        _WORD *a6,
        unsigned __int16 *a7,
        _BYTE *a8,
        int *a9,
        _DWORD *a10,
        __int64 a11)
{
  int v11; // r12d
  __int128 v12; // xmm1
  char *v13; // rbx
  __int128 v15; // xmm0
  __int64 v17; // xmm1_8
  __int64 v19; // r14
  bool v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r13
  unsigned __int8 *v24; // rdi
  bool v25; // al
  unsigned __int8 v26; // al
  char *v27; // r15
  _DWORD *v28; // rdi
  int v30; // [rsp+28h] [rbp-C9h]
  __int64 v31; // [rsp+30h] [rbp-C1h]
  __int64 v32; // [rsp+38h] [rbp-B9h]
  _OWORD v33[3]; // [rsp+58h] [rbp-99h] BYREF
  __int64 v34; // [rsp+88h] [rbp-69h]
  __int64 v35; // [rsp+90h] [rbp-61h]
  unsigned __int64 v36; // [rsp+98h] [rbp-59h]
  unsigned int v37; // [rsp+A0h] [rbp-51h]
  char *v38; // [rsp+A8h] [rbp-49h]
  __int64 v39; // [rsp+B0h] [rbp-41h]
  char v40; // [rsp+B8h] [rbp-39h] BYREF
  int v41; // [rsp+138h] [rbp+47h] BYREF

  v11 = 0;
  v12 = *(_OWORD *)(a4 + 16);
  v13 = &v40;
  v33[0] = *(_OWORD *)a4;
  v15 = *(_OWORD *)(a4 + 32);
  v36 = a1 + a3;
  v33[1] = v12;
  v17 = *(_QWORD *)(a4 + 48);
  if ( a5 )
    v13 = a5;
  v37 = a3;
  v35 = a1;
  v33[2] = v15;
  v34 = v17;
  v39 = a2;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  memset(v13, 0, 0x40uLL);
  v38 = v13;
  if ( a3 < 5 )
  {
    v19 = a11;
    WPP_RECORDER_SF_dD(a11, 2u, 5u, 0xE2u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, a3, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(a4 + 24))(*(_QWORD *)(a4 + 40), 23LL);
LABEL_9:
    v20 = 0;
LABEL_40:
    WPP_RECORDER_SF_(v19, 2u, 5u, 0xE8u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    return v20;
  }
  v19 = a11;
  v41 = 0;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a1, (__int64)v33, &a5, &v41, a11);
  if ( v41 == 1 )
    goto LABEL_9;
  v20 = v41 != 2;
  if ( a3 < *(unsigned __int16 *)(a1 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a4 + 24))(*(_QWORD *)(a4 + 40), 23LL);
    WPP_RECORDER_SF_ddd(v19, v21, v22, 0xE3u, v30);
    v20 = 0;
  }
  if ( a3 > *(unsigned __int16 *)(a1 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a4 + 32))(*(_QWORD *)(a4 + 40), 22LL);
    WPP_RECORDER_SF_dD(
      v19,
      2u,
      5u,
      0xE4u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      a3,
      *(unsigned __int16 *)(a1 + 2));
  }
  v23 = v36;
  v24 = (unsigned __int8 *)(a1 + (unsigned int)a5);
  if ( (unsigned __int64)v24 < v36 )
  {
    while ( 1 )
    {
      v41 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v24, (__int64)v33, (unsigned int *)&a5, &v41, v19);
      if ( v41 == 1 )
        break;
      v25 = v20;
      if ( v41 == 2 )
        v25 = 0;
      v41 = 0;
      v20 = v25;
      v26 = v24[1];
      if ( v26 == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(
          v24,
          (__int64)v33,
          (unsigned int *)&a5,
          &v41,
          a6,
          a7,
          a8,
          a9,
          v19);
        if ( v41 == 1 )
        {
          v20 = 0;
          goto LABEL_40;
        }
        v23 = v36;
        if ( v41 == 2 )
          v20 = 0;
      }
      else
      {
        LODWORD(v32) = v26;
        LODWORD(v31) = (_DWORD)v24 - a1;
        WPP_RECORDER_SF_dD(v19, 2u, 5u, 0xE5u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v31, v32);
        (*(void (__fastcall **)(_QWORD, __int64))(a4 + 32))(*(_QWORD *)(a4 + 40), 28LL);
      }
      ++v11;
      v24 += (unsigned int)a5;
      if ( (unsigned __int64)v24 >= v23 )
        goto LABEL_25;
    }
    v20 = 0;
    goto LABEL_40;
  }
LABEL_25:
  if ( *(unsigned __int8 *)(a1 + 4) != v11 )
  {
    LODWORD(v32) = *(unsigned __int8 *)(a1 + 4);
    LODWORD(v31) = v11;
    WPP_RECORDER_SF_dD(v19, 2u, 5u, 0xE6u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v31, v32);
    (*(void (__fastcall **)(_QWORD, __int64))(a4 + 24))(*(_QWORD *)(a4 + 40), 25LL);
    v20 = 0;
  }
  v27 = v38;
  v28 = a10;
  if ( *((_QWORD *)v38 + 1) )
  {
    if ( !a10 )
      goto LABEL_39;
    *a10 |= 0x800u;
  }
  else if ( DWORD1(v33[0]) == 3 )
  {
    WPP_RECORDER_SF_(v19, 2u, 5u, 0xE7u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a4 + 24))(*(_QWORD *)(a4 + 40), 26LL);
    v20 = 0;
  }
  if ( v28 )
  {
    if ( *((_QWORD *)v27 + 2) )
      *v28 |= 0x1000u;
    if ( v27[42] )
      *v28 |= 0x10000u;
  }
LABEL_39:
  if ( !v20 )
    goto LABEL_40;
  return v20;
}
