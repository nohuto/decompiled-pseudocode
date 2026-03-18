/*
 * XREFs of DxgkCopyPathsModality @ 0x1C01C2A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Copy@CCD_TOPOLOGY@@QEAAJPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01F6E10 (-Copy@CCD_TOPOLOGY@@QEAAJPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DxgkCopyPathsModality(__int64 a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v3; // ebx
  struct D3DKMT_GETPATHSMODALITY *v4[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  __int64 v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  bool v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  int v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+74h] [rbp-Ch]

  if ( !a1 && a2 )
    return 3221225485LL;
  v9 = a1;
  LODWORD(v4[0]) = 0;
  memset(&v4[1], 0, 24);
  v10 = a1 == 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v11 = 0;
  v12 = 1;
  v13 = 0LL;
  v3 = CCD_TOPOLOGY::Copy((CCD_TOPOLOGY *)v4, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v4);
  return v3;
}
