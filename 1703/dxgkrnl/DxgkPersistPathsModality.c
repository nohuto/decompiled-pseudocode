/*
 * XREFs of DxgkPersistPathsModality @ 0x1C00A5C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkPersistPathsModality(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-60h] BYREF
  __int64 v5; // [rsp+28h] [rbp-58h]
  __int64 v6; // [rsp+30h] [rbp-50h]
  __int64 v7; // [rsp+38h] [rbp-48h]
  __int16 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  bool v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  int v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+74h] [rbp-Ch]

  v12 = a2;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v13 = a2 == 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v14 = 0;
  v15 = 1;
  v16 = 0LL;
  v2 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)&v4, a1);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v4);
  return v2;
}
