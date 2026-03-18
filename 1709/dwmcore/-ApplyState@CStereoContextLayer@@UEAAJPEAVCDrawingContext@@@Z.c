/*
 * XREFs of ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B270
 * Callers:
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18013E324 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180042D8C (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStereoContextLayer::ApplyState(CStereoContextLayer *this, struct CDrawingContext *a2)
{
  char v2; // al
  unsigned int v3; // ebx
  struct IRenderTarget *v6; // r14
  signed int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 12);
  v3 = 0;
  v11 = 0LL;
  *((_BYTE *)a2 + 6829) = v2;
  *((_DWORD *)a2 + 1697) = 0;
  *((_DWORD *)a2 + 1696) = 0;
  *((_DWORD *)a2 + 1695) = 0;
  *((_DWORD *)a2 + 1694) = 0;
  if ( *((_DWORD *)this + 2) != *((_DWORD *)a2 + 101) )
  {
    v6 = (struct IRenderTarget *)*((_QWORD *)a2 + 45);
    v7 = (**(__int64 (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))v6)(
           v6,
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v11);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x2Au);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *((unsigned int *)this + 2));
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x2Cu);
      }
      else
      {
        (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v6 + 168LL))(v6);
        v9 = CDrawingContext::PushRenderTarget(a2, v6);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x36u);
        else
          *((_BYTE *)this + 13) = 1;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v3;
}
