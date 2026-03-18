/*
 * XREFs of ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180001BAC
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180001D34 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 * Callees:
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180001670 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInk::CreateResource(CInk *this, struct ID2DContext *a2, struct CD2DInk **a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(struct ID2DContext *, char *, char *, CD2DInk **); // rax
  struct ID2D1Ink *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int ID2D1InkAndInkStyle; // eax
  int v11; // eax
  struct CD2DInk *v12; // rax
  CD2DInk *v14; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1Ink *v15; // [rsp+68h] [rbp+38h] BYREF
  struct ID2D1InkStyle *v16; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(_QWORD *)a2;
  v14 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct ID2DContext *, char *, char *, CD2DInk **))(v3 + 192);
  v7 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v8 = v6(a2, (char *)this + 184, (char *)this + 196, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x139u);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v14, &v15, &v16);
    v9 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x13Bu);
      v7 = v15;
    }
    else
    {
      v7 = v15;
      v11 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, _QWORD))(*(_QWORD *)v15 + 48LL))(
              v15,
              *((_QWORD *)this + 19),
              *((unsigned int *)this + 44));
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x13Cu);
      }
      else
      {
        v12 = v14;
        v14 = 0LL;
        *a3 = v12;
      }
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(v7);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v16);
  if ( v14 )
    (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v14 + 16LL))(v14);
  return v9;
}
