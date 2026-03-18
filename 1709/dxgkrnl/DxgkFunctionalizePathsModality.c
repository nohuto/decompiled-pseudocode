/*
 * XREFs of DxgkFunctionalizePathsModality @ 0x1C00E1860
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkFunctionalizePathsModality(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rax
  struct D3DKMT_GETPATHSMODALITY *v8[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  char v14; // [rsp+68h] [rbp-18h]
  BOOL v15; // [rsp+6Ch] [rbp-14h]
  int v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+74h] [rbp-Ch]

  v3 = a1;
  if ( !a2 )
    return 3221225485LL;
  if ( (a1 & 0xFFFD7FFF) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 224LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v13 = a2;
  memset(&v8[1], 0, 24);
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(v8[0]) = 0;
  v9 = 0;
  v12 = 0LL;
  v14 = 0;
  v16 = 1;
  v17 = 0LL;
  v15 = (v3 & 0x8000) != 0;
  v4 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v8, v3);
  v15 = 0;
  v5 = v4;
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v8);
  return v5;
}
