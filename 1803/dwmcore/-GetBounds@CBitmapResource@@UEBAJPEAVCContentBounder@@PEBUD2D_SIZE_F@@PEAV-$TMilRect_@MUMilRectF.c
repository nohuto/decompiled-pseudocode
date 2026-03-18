/*
 * XREFs of ?GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B55C0
 * Callers:
 *     ?GetBounds@CBitmapResource@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DDD30 (-GetBounds@CBitmapResource@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // ecx
  float v9; // xmm1_4
  int v11[6]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v4 + 32LL))(v4, &v12, v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xAEu);
    }
    else
    {
      v8 = v12;
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      v9 = (float)v11[0];
      *(float *)(a4 + 8) = (float)v8;
      *(float *)(a4 + 12) = v9;
    }
  }
  else
  {
    v7 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292404, 0xB7u);
  }
  return v7;
}
