/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C00211F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0021570 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0021908 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00777EC (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(EXFORMOBJ *this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  __int64 v4; // rbx
  float *v7; // rdx
  float *v8; // r8
  float *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  float *v13; // r9
  float *v14; // r10
  float *v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r8

  v4 = *(_QWORD *)this;
  if ( (unsigned int)EFLOAT::bIsZero((struct MATRIX *)((char *)a2 + 4))
    && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v7 + 2))
    && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v8 + 1))
    && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v8 + 2)) )
  {
    *(float *)v4 = *v8 * *v7;
    *(float *)(v4 + 12) = v8[3] * v7[3];
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
  }
  else
  {
    *(float *)v4 = (float)(v8[2] * *v9) + (float)(*v8 * *v7);
    *(float *)(v4 + 4) = (float)(v8[3] * *v9) + (float)(v8[1] * *v7);
    *(float *)(v4 + 8) = (float)(v8[2] * v7[3]) + (float)(*v8 * v7[2]);
    *(float *)(v4 + 12) = (float)(v8[3] * v7[3]) + (float)(v8[1] * v7[2]);
  }
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v7 + 4)) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v10 + 20)) )
  {
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v12 + 16);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(v12 + 20);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(v12 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v12 + 28);
  }
  else
  {
    *(float *)(v4 + 16) = (float)((float)(*v14 * *(float *)(v10 + 20)) + *(float *)(v12 + 16))
                        + (float)(*(float *)v12 * *v15);
    *(float *)(v4 + 20) = (float)((float)(*(float *)(v12 + 12) * *(float *)(v10 + 20)) + *(float *)(v12 + 20))
                        + (float)(*v13 * *v15);
    if ( !(unsigned int)bFToL(v11, v4 + 24, 6LL) || !(unsigned int)bFToL(v16, v4 + 28, v17) )
      return 0LL;
  }
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(this, a4 & 0x38);
  return 1LL;
}
