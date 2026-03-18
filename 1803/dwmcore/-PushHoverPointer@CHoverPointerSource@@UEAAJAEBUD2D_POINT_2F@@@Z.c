/*
 * XREFs of ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x18000B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHoverPointerSource::PushHoverPointer(CHoverPointerSource *this, const struct D2D_POINT_2F *a2)
{
  int v2; // edi
  struct IMessageCallSendHost *v5; // rbx
  int ManipulationManager; // eax
  __int64 v7; // r14
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  struct CManipulationManager *v9; // [rsp+90h] [rbp+38h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+98h] [rbp+40h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+48h] BYREF
  CHoverPointerSource *v12; // [rsp+A8h] [rbp+50h] BYREF

  v2 = 0;
  if ( *((float *)this + 16) != a2->x || *((float *)this + 17) != a2->y )
  {
    *((struct D2D_POINT_2F *)this + 8) = *a2;
    if ( CMit::s_pMessageSession
      && !CMit::s_pMessageCallSendHost
      && (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
    {
      RaiseFailFastException(0LL, 0LL, 0);
    }
    v5 = CMit::s_pMessageCallSendHost;
    v10 = CMit::s_pMessageCallSendHost;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v10);
    if ( v5 )
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v9);
      ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v9);
      v2 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ManipulationManager, 0x4Cu);
      }
      else
      {
        v7 = *((_QWORD *)v9 + 44);
        v2 = v7 == 0 ? 0x80004005 : 0;
        if ( v7 )
        {
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
          v11 = *((_QWORD *)this + 8);
          v12 = this;
          v8[0] = v7;
          v2 = ((__int64 (__fastcall *)(struct IMessageCallSendHost *, _QWORD *, __int64, __int64, __int16, void *, CHoverPointerSource **, __int64 *))CoreUICallSend)(
                 v5,
                 v8,
                 1LL,
                 9LL,
                 4,
                 &unk_180239CCB,
                 &v12,
                 &v11);
          if ( v2 < 0 )
            (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 16LL))((char *)this + 8);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x4Du);
        }
      }
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v9);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  return (unsigned int)v2;
}
