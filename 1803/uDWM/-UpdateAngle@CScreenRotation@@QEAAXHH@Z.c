/*
 * XREFs of ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x180099CB0
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180085114 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAXHH@Z @ 0x18008527C (-HandleScreenRotation@CWindowList@@QEAAXHH@Z.c)
 * Callees:
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180004F70 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18008291C (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180082AF0 (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CScreenRotation::UpdateAngle(CScreenRotation *this, int a2, int a3)
{
  int v4; // r9d
  int v6; // ebp
  int v7; // esi
  __m128i v8; // xmm0
  __int64 v9; // rax
  int v10; // ecx
  int v11; // edx
  _BYTE v12[20]; // [rsp+20h] [rbp-48h] BYREF
  float v13; // [rsp+34h] [rbp-34h]
  float v14; // [rsp+38h] [rbp-30h]
  struct tagPOINT v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  if ( *((_BYTE *)this + 330) )
  {
    v4 = (a3 - *((_DWORD *)this + 85)) % 360;
  }
  else
  {
    *((_BYTE *)this + 330) = 1;
    *((_DWORD *)this + 85) = a2 + a3;
  }
  if ( v4 == -270 )
  {
    v4 = 90;
  }
  else if ( v4 == 270 )
  {
    v4 = -90;
  }
  else if ( abs32(v4) == 360 )
  {
    v4 = 0;
  }
  *((_DWORD *)this + 83) = v4;
  v6 = (int)HIDWORD(*((_QWORD *)this + 15)) >> 1;
  v7 = (int)*((_QWORD *)this + 15) >> 1;
  CVisual::SetCenter(this, (double)v7, (double)v6);
  CVisual::SetRotation(this, (double)*((int *)this + 83));
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 83));
  v13 = 0.0;
  v14 = 0.0;
  v15 = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 39) + 940LL) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( abs32(*((_DWORD *)this + 83)) == 180 || !*((_DWORD *)this + 83) )
  {
    if ( !*((_BYTE *)this + 330) )
      *((_BYTE *)this + 329) = 1;
  }
  else
  {
    v15.x = v6 - v7;
    v9 = *((_QWORD *)this + 39);
    v15.y = v7 - v6;
    v10 = (int)HIDWORD(*(_QWORD *)(v9 + 128)) >> 1;
    v11 = (int)*(_QWORD *)(v9 + 128) >> 1;
    v13 = (float)(v10 - v11);
    v14 = (float)(v11 - v10);
  }
  CAnimatedTransitionVisual::Translate2D(
    *((CAnimatedTransitionVisual **)this + 39),
    (const struct TA_TRANSFORM_2D *)v12);
  CVisual::SetOffset((struct tagPOINT *)this, &v15);
  *((_DWORD *)this + 86) = a3;
}
