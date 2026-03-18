/*
 * XREFs of ?GetBounds@CPencil@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016FE20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DPencil@@@Z @ 0x18016FBD4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPE.c)
 */

__int64 __fastcall CPencil::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  struct CD2DPencil *v9; // rbx
  int v10; // eax
  struct CD2DPencil *v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF

  v13 = 0uLL;
  v6 = 0LL;
  v7 = CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>::FindOrCreateResourceNoRef(
         (struct IDeviceResourceNotify *)(a1 + 56),
         0LL,
         &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x16u);
  }
  else
  {
    v9 = v12;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v12 + 13) + 8LL))(*((_QWORD *)v12 + 13));
    v6 = *((_QWORD *)v9 + 13);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *))(*(_QWORD *)v6 + 104LL))(
            v6,
            a1 + 228,
            0LL,
            &v13);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x19u);
    else
      *a4 = v13;
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v6);
  return v8;
}
