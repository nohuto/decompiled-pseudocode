/*
 * XREFs of ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C024D064
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002869C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006E8C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bSpDwmUpdateDragRectShape(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5,
        unsigned int *a6,
        struct SFMLOGICALSURFACE **a7)
{
  unsigned int LogicalSurface; // ebx
  struct SFMLOGICALSURFACE *v10; // rsi
  struct _SURFOBJ *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v16; // rdx
  __m128i si128; // xmm0
  LONG cx; // eax
  __int64 v19; // rcx
  HDEV v21; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v23; // [rsp+78h] [rbp-9h] BYREF
  __m128i v24; // [rsp+88h] [rbp+7h] BYREF

  v21 = a1;
  LogicalSurface = bSpDwmCreateLogicalSurface(a1, a2, a3, a5, a7);
  if ( LogicalSurface )
  {
    v10 = *a7;
    v11 = (struct _SURFOBJ *)*((_QWORD *)*a7 + 24);
    v22[0] = 0LL;
    SURFREFVIEW::bMap((SURFREFVIEW *)v22, v11);
    if ( v22[0] )
    {
      *((_DWORD *)a2 + 50) |= 4u;
      if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v21, v12, v13, v14) )
      {
        v15 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))RedirStretchBlt;
      }
      else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 2) != 0 )
      {
        v15 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1 + 358);
      }
      else
      {
        v15 = EngStretchBlt;
      }
      v16 = *((_QWORD *)a1 + 138);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      **(_DWORD **)(v16 + 56) = -1;
      cx = a5->cx;
      v19 = *((_QWORD *)v10 + 24);
      v23.left = 0;
      v23.top = 0;
      v23.right = cx;
      v23.bottom = a5->cy;
      v24 = si128;
      LogicalSurface = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct tagRECT *, __m128i *, _QWORD, int))v15)(
                         v19,
                         v16,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         &v23,
                         &v24,
                         0LL,
                         1);
      if ( LogicalSurface )
        vSpUpdateDirtyRgn(a2, v10, 0LL, (struct _RECTL *)&v23, a6, 0);
    }
    else
    {
      LogicalSurface = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v22);
  }
  return LogicalSurface;
}
