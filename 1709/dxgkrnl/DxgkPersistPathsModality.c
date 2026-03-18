/*
 * XREFs of DxgkPersistPathsModality @ 0x1C00E1780
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DF48C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkPersistPathsModality(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebx
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

  v9 = a2;
  LODWORD(v4[0]) = 0;
  memset(&v4[1], 0, 24);
  v10 = a2 == 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v11 = 0;
  v12 = 1;
  v13 = 0LL;
  v2 = CCD_TOPOLOGY::Persist(v4, a1);
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v4);
  return v2;
}
