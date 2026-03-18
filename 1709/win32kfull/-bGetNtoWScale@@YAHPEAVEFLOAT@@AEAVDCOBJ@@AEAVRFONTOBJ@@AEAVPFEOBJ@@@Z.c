/*
 * XREFs of ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C01303D4
 * Callers:
 *     GreGetKerningPairs @ 0x1C01301D8 (GreGetKerningPairs.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C003BB48 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoWScale(struct EFLOAT *a1, struct DCOBJ *a2, float **a3, struct PFEOBJ *a4)
{
  unsigned int v4; // edi
  float *v6; // rax
  float v9; // xmm1_4
  float v10; // xmm3_4
  float x; // xmm0_4
  int v12; // r9d
  float v14; // [rsp+28h] [rbp-79h] BYREF
  float v15; // [rsp+2Ch] [rbp-75h]
  float v16; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v17[4]; // [rsp+34h] [rbp-6Dh] BYREF
  char *v18; // [rsp+38h] [rbp-69h] BYREF
  int v19; // [rsp+44h] [rbp-5Dh]
  struct MATRIX *v20; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+54h] [rbp-4Dh]
  _QWORD v22[2]; // [rsp+58h] [rbp-49h] BYREF
  struct MATRIX *v23; // [rsp+68h] [rbp-39h] BYREF
  _DWORD v24[3]; // [rsp+78h] [rbp-29h] BYREF
  float v25; // [rsp+84h] [rbp-1Dh]
  char v26; // [rsp+A0h] [rbp-1h] BYREF

  v18 = &v26;
  v4 = 0;
  v19 = 0;
  v20 = (struct MATRIX *)v24;
  v6 = *a3;
  v21 = 0;
  v9 = v6[33] * 16.0;
  v10 = v6[34] * 16.0;
  v25 = v6[32] * 16.0;
  *(float *)v24 = v25;
  *(float *)&v24[1] = v9;
  *(float *)&v24[2] = v10;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v20);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v20, 8u);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v23, a2, 1026);
  if ( v23 )
  {
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v18, v20, v23, 0) )
    {
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v18, 8u);
      v22[0] = *(_QWORD *)(*(_QWORD *)a4 + 32LL);
      IFIOBJ::pptlBaseline((IFIOBJ *)v22);
      x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v22)->x;
      v15 = (float)v12;
      v14 = x;
      EFLOAT::eqLength(&v16, v17, &v14);
      v14 = v14 / v16;
      v15 = v15 / v16;
      if ( (*((_DWORD *)v18 + 8) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)&v18, (struct VECTORFL *)&v14, (struct VECTORFL *)&v14, 1uLL) )
      {
        EFLOAT::eqLength(a1, v17, &v14);
        v4 = 1;
        *(float *)a1 = *(float *)a1 * 16.0;
      }
    }
  }
  return v4;
}
