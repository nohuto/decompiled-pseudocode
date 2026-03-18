/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x18001DB74
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000CE8C (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  unsigned int v2; // ebx
  COcclusionContext *v3; // r9
  const struct CMILMatrix *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r10
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  int v11; // eax
  __int128 v12; // xmm1
  __int64 v14; // r9
  __int64 v15; // r9
  _OWORD v16[4]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+70h] [rbp-18h]

  v2 = 0;
  v3 = this;
  if ( !a2 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
  {
    CMILMatrix::operator=((char *)v3 + 732);
    CMILMatrix::operator=(v14 + 800);
    *(_BYTE *)(v15 + 728) = 0;
  }
  else
  {
    v17 = 0;
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v16, v4) )
    {
      *(_OWORD *)(v5 + 732) = *(_OWORD *)v6;
      *(_OWORD *)(v5 + 748) = *(_OWORD *)(v6 + 16);
      *(_OWORD *)(v5 + 764) = *(_OWORD *)(v6 + 32);
      v7 = v16[0];
      *(_OWORD *)(v5 + 780) = *(_OWORD *)(v6 + 48);
      v8 = *(_DWORD *)(v6 + 64);
      v9 = v16[1];
      *(_OWORD *)(v5 + 800) = v7;
      *(_DWORD *)(v5 + 796) = v8;
      v10 = v16[2];
      v11 = v17;
      *(_OWORD *)(v5 + 816) = v9;
      *(_BYTE *)(v5 + 728) = 1;
      v12 = v16[3];
      *(_OWORD *)(v5 + 832) = v10;
      *(_OWORD *)(v5 + 848) = v12;
      *(_DWORD *)(v5 + 864) = v11;
    }
    else
    {
      v2 = -2003304441;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x8Fu);
    }
  }
  return v2;
}
