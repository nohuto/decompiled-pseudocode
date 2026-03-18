/*
 * XREFs of ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0008A64
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0008844 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00089E4 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 * Callees:
 *     ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C000B400 (--PDpiInternal@@YA_NAEBUtagSIZE@@0@Z.c)
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
  unsigned int v11; // esi
  unsigned int v12; // ebx
  _DWORD *v13; // r10
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // [rsp+40h] [rbp+18h]
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v4 = a3;
  v5 = a4;
  if ( (int)a3 < SHIDWORD(a3) )
  {
    v7 = a3;
    v4 = HIDWORD(a3);
  }
  else
  {
    v7 = HIDWORD(a3);
  }
  v8 = a2 + (_DWORD)this;
  if ( v8 < 0 )
  {
    v9 = 0;
  }
  else
  {
    v9 = *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1;
    if ( v8 <= v9 )
      v9 = v8;
    if ( v9 > 0 )
    {
      v11 = 100 * v4;
      v12 = 100 * v7;
      v13 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 16LL) + 4LL * v9);
      do
      {
        LODWORD(v16) = v11 / *v13;
        HIDWORD(v16) = v12 / *v13;
        v17 = v16;
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))DpiInternal::operator>=)(&v17, v5) )
          break;
        --v9;
        v13 = (_DWORD *)(v15 - 4);
      }
      while ( v14 - 1 > 0 );
    }
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
