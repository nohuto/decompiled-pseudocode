/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C0078060
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C0077950 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0077B90 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     UserIsGDIScalingApplicable @ 0x1C0071560 (UserIsGDIScalingApplicable.c)
 *     HmgQueryAltLock @ 0x1C008C2B0 (HmgQueryAltLock.c)
 *     UserGetHwndDpi @ 0x1C0097D60 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C0098070 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00E8B34 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, int *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  int *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  void *v10; // rcx
  __m128 v11; // xmm0
  int v12; // eax
  __int16 v13; // [rsp+50h] [rbp+18h]

  result = HmgSafeNextObjt(0, 1);
  v4 = result;
  if ( result )
  {
    while ( 1 )
    {
      v5 = *(int **)(v4 + 512);
      if ( v5 )
      {
        v6 = *((_QWORD *)v5 + 61);
        if ( v6 )
          break;
      }
LABEL_18:
      result = HmgSafeNextObjt(*(_QWORD *)v4, 1);
      v4 = result;
      if ( !result )
        return result;
    }
    *(_QWORD *)(v4 + 512) = v6;
    if ( (unsigned int)DC::bDpiScaledSurface((DC *)v4) )
    {
      v9 = *(_QWORD *)(v6 + 596);
    }
    else
    {
      v10 = *(void **)(v4 + 480);
      if ( !v10
        || !(unsigned int)UserIsGDIScalingApplicable(v10, v7, v8)
        || !(unsigned int)UserGetHwndDpi(*(void **)(v4 + 480))
        || v13 == 96 )
      {
        v12 = *(_DWORD *)(v4 + 536);
        if ( (v12 & 1) != 0 )
        {
          *(_DWORD *)(v4 + 548) = 0;
          *(_DWORD *)(v4 + 552) = 0;
          *(_DWORD *)(v4 + 36) |= 0x10u;
          *(_QWORD *)(v4 + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          *(_DWORD *)(v4 + 536) = v12 & 0xFFFFFFF8 | 4;
        }
LABEL_14:
        *(_DWORD *)(v4 + 332) |= 0xFu;
        INC_SHARE_REF_CNT((struct _BASEOBJECT *)v6);
        if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v5) == 1 )
        {
          *((_QWORD *)v5 + 61) = 0LL;
          result = SURFACE::bDeleteSurface(v5, 0LL, 0LL);
          if ( v5 == a2 )
            return result;
        }
        else
        {
          DEC_SHARE_REF_CNT(v5);
        }
        goto LABEL_18;
      }
      v11 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v11.m128_f32[0] = v11.m128_f32[0] / 96.0;
      v9 = _mm_unpacklo_ps(v11, v11).m128_u64[0];
    }
    DC::vSetDpiScaling(v4, v9);
    goto LABEL_14;
  }
  return result;
}
