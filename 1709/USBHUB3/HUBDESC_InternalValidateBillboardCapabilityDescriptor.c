/*
 * XREFs of HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C0030540
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0031750 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00222E8 (WPP_RECORDER_SF_DDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002CC90 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall HUBDESC_InternalValidateBillboardCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v9; // r12d
  unsigned int v10; // ebp
  __int64 v11; // r14
  __int64 v12; // r8
  unsigned __int8 result; // al
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v19;
    v19 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72) - v9;
  if ( v10 < 0x30 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 237LL);
    *v5 = 1;
    v11 = a5;
    result = WPP_RECORDER_SF_DDD(
               a5,
               2u,
               v12,
               0x9Bu,
               (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
               v10,
               v9,
               48);
    goto LABEL_24;
  }
  v14 = a1[4];
  v15 = *a1;
  v11 = a5;
  if ( v15 != 4 * v14 + 44 )
  {
    v16 = 4 * v14 + 44;
    *a3 = v16;
    WPP_RECORDER_SF_DDD(
      v11,
      2u,
      (__int64)a3,
      0x9Cu,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      v9,
      v15,
      v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 236LL);
    if ( ((*a1 - 40) & 0xFB) != 0 )
    {
      if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
        *v5 = 2;
    }
    else
    {
      *a1 = *(_BYTE *)a3;
    }
  }
  if ( *a3 <= v10 )
  {
    result = a1[4];
    if ( result )
    {
      if ( result <= 0x80u )
      {
        if ( a1[5] <= result )
          goto LABEL_24;
        *v5 = 1;
        LODWORD(v18) = a1[5];
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0xA0u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v18);
        v17 = 241LL;
      }
      else
      {
        *v5 = 1;
        LODWORD(v18) = a1[4];
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0x9Fu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v18);
        v17 = 239LL;
      }
    }
    else
    {
      *v5 = 1;
      WPP_RECORDER_SF_(v11, 2u, 5u, 0x9Eu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
      v17 = 238LL;
    }
  }
  else
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v5 = 2;
    LODWORD(v18) = v9;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0x9Du, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids, v18);
    v17 = 237LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v17);
LABEL_24:
  if ( *v5 )
    return WPP_RECORDER_SF_(v11, 2u, 5u, 0xA4u, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
  return result;
}
