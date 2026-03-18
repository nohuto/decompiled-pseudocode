/*
 * XREFs of ?Create@CHolographicExclusivePresentData@@SAJPEAX00IIPEAPEAUIHolographicExclusivePresentData@@@Z @ 0x180200504
 * Callers:
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1801FA238 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEX.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicExclusivePresentData::Create(
        void *a1,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct IHolographicExclusivePresentData **a6)
{
  unsigned int v7; // edi
  struct IHolographicExclusivePresentData *v11; // rax
  struct IHolographicExclusivePresentData *v12; // rbx

  v7 = 0;
  v11 = (struct IHolographicExclusivePresentData *)operator new(0x38uLL);
  v12 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = 0;
    *(_QWORD *)v11 = &CHolographicExclusivePresentData::`vftable'{for `IHolographicExclusivePresentData'};
    *((_QWORD *)v11 + 1) = &CHolographicExclusivePresentData::`vftable'{for `CMILCOMBase'};
    *((_DWORD *)v11 + 6) = a5;
    *((_DWORD *)v11 + 7) = a4;
    *((_QWORD *)v11 + 4) = a3;
    *((_QWORD *)v11 + 5) = a1;
    *((_QWORD *)v11 + 6) = a2;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    (*(void (__fastcall **)(struct IHolographicExclusivePresentData *))(*(_QWORD *)v12 + 8LL))(v12);
    *a6 = v12;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x15u);
  }
  return v7;
}
