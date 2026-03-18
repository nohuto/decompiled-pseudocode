/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C006BC10
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C006CC80 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C006D050 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     HmgQueryAltLock @ 0x1C006E540 (HmgQueryAltLock.c)
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C00A0480 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C00A2100 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00EDCC8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, struct OBJECT *a2)
{
  struct OBJECT *v2; // rbp
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  struct OBJECT *v6; // rdi
  __int64 v7; // rsi
  void *v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  __m128 v11; // xmm0
  __int16 v12; // [rsp+40h] [rbp+18h]

  v2 = a2;
  for ( i = 0LL; ; i = *(_QWORD *)v5 )
  {
    LOBYTE(a2) = 1;
    result = HmgSafeNextObjt(i, a2);
    v5 = result;
    if ( !result )
      break;
    v6 = *(struct OBJECT **)(result + 512);
    if ( !v6 )
      continue;
    v7 = *((_QWORD *)v6 + 61);
    if ( !v7 )
      continue;
    *(_QWORD *)(result + 512) = v7;
    if ( (*(_DWORD *)(v7 + 116) & 0x800) != 0 )
    {
      v10 = _mm_unpacklo_ps((__m128)*(unsigned int *)(v7 + 596), (__m128)*(unsigned int *)(v7 + 600)).m128_u64[0];
LABEL_17:
      DC::vSetDpiScaling(v5, v10);
      goto LABEL_10;
    }
    v8 = *(void **)(result + 480);
    if ( v8
      && (unsigned int)UserIsGDIScalingApplicable(v8)
      && (unsigned int)UserGetHwndDpi(*(void **)(v5 + 480))
      && v12 != 96 )
    {
      v11 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v11.m128_f32[0] = v11.m128_f32[0] / 96.0;
      v10 = _mm_unpacklo_ps(v11, v11).m128_u64[0];
      goto LABEL_17;
    }
    v9 = *(_DWORD *)(v5 + 536);
    if ( (v9 & 1) != 0 )
    {
      *(_DWORD *)(v5 + 540) = 0;
      *(_DWORD *)(v5 + 544) = 0;
      *(_DWORD *)(v5 + 548) = 0;
      *(_DWORD *)(v5 + 552) = 0;
      *(_DWORD *)(v5 + 36) |= 0x10u;
      *(_DWORD *)(v5 + 536) = v9 & 0xFFFFFFF8 | 4;
    }
LABEL_10:
    *(_DWORD *)(v5 + 332) |= 0xFu;
    HmgIncrementShareReferenceCount((struct OBJECT *)v7);
    if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v6) == 1 )
    {
      *((_QWORD *)v6 + 61) = 0LL;
      result = SURFACE::bDeleteSurface((__int64)v6, 0, 0);
      if ( v6 == v2 )
        return result;
    }
    else
    {
      HmgDecrementShareReferenceCountEx(v6, 0LL);
    }
  }
  return result;
}
