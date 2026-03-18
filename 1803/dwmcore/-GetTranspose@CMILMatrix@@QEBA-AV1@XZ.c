/*
 * XREFs of ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x1801C6EF4
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801AE6E0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?transpose@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBU4123@@Z @ 0x1801C7C00 (-transpose@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBU4123@@Z.c)
 */

__int64 __fastcall CMILMatrix::GetTranspose(__int64 a1)
{
  _OWORD *v1; // rax
  __int64 v2; // r8
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 result; // rax
  _BYTE v7[72]; // [rsp+20h] [rbp-48h] BYREF

  v1 = (_OWORD *)Windows::Foundation::Numerics::transpose(v7, a1);
  *(_DWORD *)(v2 + 64) = 0;
  v3 = v1[1];
  *(_OWORD *)v2 = *v1;
  v4 = v1[2];
  *(_OWORD *)(v2 + 16) = v3;
  v5 = v1[3];
  result = v2;
  *(_OWORD *)(v2 + 32) = v4;
  *(_OWORD *)(v2 + 48) = v5;
  return result;
}
