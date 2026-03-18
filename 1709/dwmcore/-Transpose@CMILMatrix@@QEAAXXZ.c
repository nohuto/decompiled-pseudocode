/*
 * XREFs of ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18011C2C8
 * Callers:
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x1800B7834 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 * Callees:
 *     ?transpose@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBU4123@@Z @ 0x180190F38 (-transpose@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBU4123@@Z.c)
 */

void __fastcall CMILMatrix::Transpose(CMILMatrix *this)
{
  _OWORD *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // xmm1
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  v1 = (_OWORD *)Windows::Foundation::Numerics::transpose(v4, this);
  *(_OWORD *)v2 = *v1;
  *(_OWORD *)(v2 + 16) = v1[1];
  *(_OWORD *)(v2 + 32) = v1[2];
  v3 = v1[3];
  *(_BYTE *)(v2 + 64) &= 3u;
  *(_BYTE *)(v2 + 65) = 0;
  *(_OWORD *)(v2 + 48) = v3;
}
