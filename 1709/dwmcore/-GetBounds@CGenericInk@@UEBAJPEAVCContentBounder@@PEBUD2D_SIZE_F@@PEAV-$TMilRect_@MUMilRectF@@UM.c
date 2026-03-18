/*
 * XREFs of ?GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180166E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180166BBC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 */

__int64 __fastcall CGenericInk::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int v4; // ebx
  signed int v6; // eax
  signed int v7; // eax
  CMILCOMBase *v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(_DWORD *)(a1 + 192) )
  {
    v9 = 0LL;
    v10 = 0uLL;
    v6 = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
           (struct IDeviceResourceNotify *)(a1 + 72),
           0LL,
           &v9);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB9u);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v9 + 13) + 32LL))(*((_QWORD *)v9 + 13), &v10);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xBAu);
      else
        *a4 = v10;
    }
  }
  else
  {
    v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    *a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  return v4;
}
