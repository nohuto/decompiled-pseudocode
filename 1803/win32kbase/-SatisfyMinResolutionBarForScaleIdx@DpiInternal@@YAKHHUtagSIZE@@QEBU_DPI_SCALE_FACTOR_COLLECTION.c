/*
 * XREFs of ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00D2340
 * Callers:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00CBACC (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 * Callees:
 *     ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C00CB9B4 (--PDpiInternal@@YA_NAEBUtagSIZE@@0@Z.c)
 */

__int64 __fastcall DpiInternal::SatisfyMinResolutionBarForScaleIdx(
        DpiInternal *this,
        int a2,
        __int64 a3,
        struct tagSIZE a4)
{
  int v4; // r10d
  struct tagSIZE v5; // r11
  int v7; // ebx
  int v8; // ecx
  int v9; // r9d
  unsigned int v10; // esi
  unsigned int v11; // ebx
  _DWORD *v12; // r10
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v16; // [rsp+40h] [rbp+18h]
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v4 = a3;
  v5 = a4;
  if ( (int)a3 >= SHIDWORD(a3) )
  {
    v7 = HIDWORD(a3);
  }
  else
  {
    v7 = a3;
    v4 = HIDWORD(a3);
  }
  v8 = a2 + (_DWORD)this;
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1;
    if ( v8 <= v9 )
      v9 = v8;
    if ( v9 > 0 )
    {
      v10 = 100 * v4;
      v11 = 100 * v7;
      v12 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 16LL) + 4LL * v9);
      do
      {
        LODWORD(v16) = v10 / *v12;
        HIDWORD(v16) = v11 / *v12;
        v17 = v16;
        if ( DpiInternal::operator>=(&v17, *(_DWORD **)&v5) )
          break;
        --v9;
        v12 = (_DWORD *)(v14 - 4);
      }
      while ( v13 - 1 > 0 );
    }
  }
  else
  {
    v9 = 0;
  }
  if ( !a2
    && v9 > 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 4LL * v9) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL)
                                                                               + 4LL * (v9 - 1)) )
  {
    --v9;
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&v5 + 16LL) + 4LL * v9);
}
