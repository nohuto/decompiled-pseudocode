/*
 * XREFs of DxgkApplyCdsjToPathsModality @ 0x1C0100940
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01009D8 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall DxgkApplyCdsjToPathsModality(__int64 *a1, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  struct D3DKMT_GETPATHSMODALITY *v6[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  bool v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  int v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+74h] [rbp-Ch]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *a1;
  LODWORD(v6[0]) = 0;
  memset(&v6[1], 0, 24);
  v12 = v3 == 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = v3;
  v13 = 0;
  v14 = 1;
  v15 = 0LL;
  CCD_BTL::Global(0LL);
  v4 = CDS_JOURNAL::ApplyCdsjToPathModality((struct CCD_TOPOLOGY *)v6, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v6);
  return v4;
}
