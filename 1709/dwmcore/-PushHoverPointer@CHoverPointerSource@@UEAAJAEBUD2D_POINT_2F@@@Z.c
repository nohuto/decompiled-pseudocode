/*
 * XREFs of ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x1800746D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ @ 0x18007484C (-GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // [rsp+A0h] [rbp+48h]
  CHoverPointerSource *v12; // [rsp+A8h] [rbp+50h] BYREF

  v2 = 0;
  if ( *((float *)this + 16) != a2->x || *((float *)this + 17) != a2->y )
  {
    *((struct D2D_POINT_2F *)this + 8) = *a2;
    v10 = CInputManager::GetInputThreadMessageCallSendHost();
    v5 = v10;
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
          v2 = CoreUICallSend(v5, v8, 1LL, 5LL, 4, &unk_1801F0556, &v12);
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
