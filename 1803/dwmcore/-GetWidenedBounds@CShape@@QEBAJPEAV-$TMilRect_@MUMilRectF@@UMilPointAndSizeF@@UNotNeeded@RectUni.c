/*
 * XREFs of ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18020A848
 * Callers:
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A4E1C (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006512C (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800651D4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetWidenedBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  float *v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-31h]
  __int64 v12; // [rsp+40h] [rbp-11h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-9h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, 0LL, &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 1045;
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, _QWORD, _DWORD, _OWORD *))(*(_QWORD *)v12 + 40LL))(
         v12,
         v13,
         a4,
         0LL,
         LODWORD(FLOAT_0_25),
         v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 1054;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v11);
    goto LABEL_10;
  }
  v13[1] = v13[0];
  *(_OWORD *)a2 = v13[0];
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
  {
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v9) )
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = 0;
    }
  }
  else
  {
    v8 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304438, 0x424u);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return v8;
}
