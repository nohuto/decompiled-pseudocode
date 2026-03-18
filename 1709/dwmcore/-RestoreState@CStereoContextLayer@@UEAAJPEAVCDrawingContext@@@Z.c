/*
 * XREFs of ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B390
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180042F3C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStereoContextLayer::RestoreState(CStereoContextLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  signed int v6; // eax
  signed int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  *((_BYTE *)a2 + 6829) = 0;
  *((_DWORD *)a2 + 1697) = 0;
  *((_DWORD *)a2 + 1696) = 0;
  *((_DWORD *)a2 + 1695) = 0;
  *((_DWORD *)a2 + 1694) = 0;
  if ( *((_BYTE *)this + 13) )
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 45))(
           *((_QWORD *)a2 + 45),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v9);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x58u);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, 0LL);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x5Au);
      }
      else
      {
        v7 = CDrawingContext::PopRenderTargetInternal(a2, 0);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x5Fu);
        else
          *((_BYTE *)this + 13) = 0;
      }
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v2;
}
