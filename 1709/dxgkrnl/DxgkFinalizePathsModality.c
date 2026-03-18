/*
 * XREFs of DxgkFinalizePathsModality @ 0x1C00F99B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DF374 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1)
{
  unsigned int v1; // ebx
  struct D3DKMT_GETPATHSMODALITY *v3[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v4; // [rsp+40h] [rbp-40h]
  __int64 v5; // [rsp+48h] [rbp-38h]
  __int64 v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  char v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  int v11; // [rsp+70h] [rbp-10h]
  __int64 v12; // [rsp+74h] [rbp-Ch]

  if ( !a1 )
    return 3221225485LL;
  v8 = a1;
  memset(&v3[1], 0, 24);
  v5 = 0LL;
  v6 = 0LL;
  LODWORD(v3[0]) = 0;
  v4 = 0;
  v7 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 1;
  v12 = 0LL;
  v1 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)v3);
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v3);
  return v1;
}
