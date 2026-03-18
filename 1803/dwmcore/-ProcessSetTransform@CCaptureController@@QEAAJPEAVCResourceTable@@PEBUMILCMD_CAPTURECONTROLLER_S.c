/*
 * XREFs of ?ProcessSetTransform@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETTRANSFORM@@@Z @ 0x180182F20
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x180156930 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 */

__int64 __fastcall CCaptureController::ProcessSetTransform(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURECONTROLLER_SETTRANSFORM *a3)
{
  unsigned int v5; // edx
  __int64 Resource; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  struct CResource ***v9; // rbx
  struct CResource ***v10; // rbp
  int v11; // eax

  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  v7 = 0;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0x8Fu)) != 0 )
  {
    v8 = *((_QWORD *)this + 14);
    if ( Resource != v8 )
    {
      *((_QWORD *)this + 14) = Resource;
      if ( Resource )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = (struct CResource ***)*((_QWORD *)this + 7);
      v10 = (struct CResource ***)*((_QWORD *)this + 8);
      while ( v9 != v10 )
      {
        v11 = CCaptureRenderTarget::SetTransform(*v9, *((struct CTransform3D **)this + 14));
        v7 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x6Au);
          return v7;
        }
        ++v9;
      }
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x5Fu);
  }
  return v7;
}
