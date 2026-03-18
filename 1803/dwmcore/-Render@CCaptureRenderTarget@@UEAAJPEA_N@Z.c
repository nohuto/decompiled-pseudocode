/*
 * XREFs of ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180156620
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x180155D54 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x1801564CC (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180156994 (-TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Render(CCaptureRenderTarget *this, bool *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int Buffer; // eax
  int v9; // eax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  v5 = *((_QWORD *)this + 52);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, &v11);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x18Cu);
      return v2;
    }
    if ( !v11 )
      CCaptureRenderTarget::ReleaseFlipResources((CCaptureRenderTarget *)((char *)this - 64));
  }
  if ( *((_QWORD *)this + 42)
    && *((_QWORD *)this + 55)
    && ((*((_QWORD *)this + 60) - *((_QWORD *)this + 59)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
    && *((_QWORD *)this + 52)
    && *((_BYTE *)this + 360) )
  {
    v7 = CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)((char *)this - 64), (unsigned __int64)a2);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x19Cu);
    }
    else
    {
      Buffer = CCaptureRenderTarget::TryTargetNextBuffer((CCaptureRenderTarget *)((char *)this - 64));
      v2 = Buffer;
      if ( Buffer < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Buffer, 0x19Fu);
      }
      else if ( *((_QWORD *)this + 49) )
      {
        v9 = COffScreenRenderTarget::Render(this, a2);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1A4u);
        else
          *a2 = 1;
      }
    }
  }
  return v2;
}
