/*
 * XREFs of ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x1800AD0A0
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000BCEC (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x1800C2DA0 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateLegacyCommandList(
        CD2DContext *this,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct ID2D1Bitmap **a4,
        unsigned __int64 a5,
        struct ID2D1Bitmap **a6,
        unsigned __int64 a7,
        struct ID2D1PrivateCompositorPrimitiveProperties **a8,
        unsigned __int64 a9,
        struct CD2DCommandList **a10)
{
  __int64 v11; // rcx
  struct CD2DCommandList *v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  struct ID2D1PrivateCompositorCommandList *v17; // [rsp+60h] [rbp-18h] BYREF
  struct CD2DCommandList *v18; // [rsp+80h] [rbp+8h] BYREF

  v17 = 0LL;
  v11 = *((_QWORD *)this + 23);
  v12 = 0LL;
  v18 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, _DWORD, struct ID2D1Bitmap **, _DWORD, struct ID2D1PrivateCompositorPrimitiveProperties **, _DWORD, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)v11 + 24LL))(
          v11,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          &v17);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x9ECu);
  }
  else
  {
    v15 = CD2DCommandList::Create(*((struct CD2DResourceManager **)this + 18), v17, &v18);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x9F0u);
      v12 = v18;
    }
    else
    {
      *a10 = v18;
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v17);
  if ( v12 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v12 + 16LL))(v12);
  return v14;
}
