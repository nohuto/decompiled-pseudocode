/*
 * XREFs of DxgkApplyCdsjToPathsModality @ 0x1C0101AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0101B68 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall DxgkApplyCdsjToPathsModality(__int64 *a1, struct _D3DKMT_AUGMENT_CDSJ *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  struct _D3DKMT_GETPATHSMODALITY *v8[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  bool v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  int v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+74h] [rbp-Ch]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *a1;
  LODWORD(v8[0]) = 0;
  memset(&v8[1], 0, 24);
  v14 = v5 == 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = v5;
  v15 = 0;
  v16 = 1;
  v17 = 0LL;
  CCD_BTL::Global(0LL, 0LL, a3, a4);
  v6 = CDS_JOURNAL::ApplyCdsjToPathModality((struct CCD_TOPOLOGY *)v8, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v8);
  return v6;
}
