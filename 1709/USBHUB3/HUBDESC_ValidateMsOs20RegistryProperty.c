/*
 * XREFs of HUBDESC_ValidateMsOs20RegistryProperty @ 0x1C00339E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20RegistryProperty(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r10
  unsigned __int16 v10; // cx

  v3 = *a3;
  v6 = 1;
  if ( *a3 < 0xDu )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x144u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      v3);
    v7 = 169LL;
LABEL_15:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, 0x14Au, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
    return 0;
  }
  v8 = a3[3];
  if ( v3 < (unsigned __int64)(v8 + 11) )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x145u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      (unsigned __int16)v8);
    v7 = 170LL;
    goto LABEL_15;
  }
  if ( !(_WORD)v8 || (v8 & 1) != 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x146u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      (unsigned __int16)v8);
    v7 = 171LL;
    goto LABEL_15;
  }
  v9 = *(unsigned __int16 *)((char *)a3 + v8 + 8);
  if ( v3 < (unsigned __int64)(v9 + v8 + 10) )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x147u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      (unsigned __int16)v9);
    v7 = 172LL;
    goto LABEL_15;
  }
  if ( !(_WORD)v9 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x148u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      0);
    v7 = 173LL;
    goto LABEL_15;
  }
  v10 = a3[2];
  if ( (unsigned __int16)(v10 - 1) > 6u )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x149u,
      (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids,
      v10);
    v7 = 174LL;
    goto LABEL_15;
  }
  *(_DWORD *)a2 |= 0x40u;
  return v6;
}
