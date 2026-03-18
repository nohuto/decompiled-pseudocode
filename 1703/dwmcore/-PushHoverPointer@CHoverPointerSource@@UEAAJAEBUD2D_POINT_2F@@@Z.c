/*
 * XREFs of ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x18017BED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ @ 0x180189B30 (-GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ.c)
 */

__int64 __fastcall CHoverPointerSource::PushHoverPointer(CHoverPointerSource *this, const struct D2D_POINT_2F *a2)
{
  int v2; // edi
  struct CManipulationManager *v4; // rbx
  int ManipulationManager; // eax
  __int64 v6; // r14
  struct CManipulationManager *v8; // [rsp+80h] [rbp+38h] BYREF
  __int64 v9; // [rsp+88h] [rbp+40h]
  CHoverPointerSource *v10; // [rsp+90h] [rbp+48h]
  __int64 v11; // [rsp+98h] [rbp+50h] BYREF

  v2 = 0;
  if ( *((float *)this + 16) != a2->x || *((float *)this + 17) != a2->y )
  {
    *((struct D2D_POINT_2F *)this + 8) = *a2;
    v8 = CInputManager::GetInputThreadMessageCallSendHost();
    v4 = v8;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v8);
    if ( v4 )
    {
      v8 = 0LL;
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v8);
      ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v8);
      v2 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x4Cu);
      }
      else
      {
        v6 = *((unsigned int *)v8 + 88);
        v2 = *((_DWORD *)v8 + 88) == 0 ? 0x80004005 : 0;
        if ( (_DWORD)v6 )
        {
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
          v9 = *((_QWORD *)this + 8);
          v10 = this;
          v11 = v6;
          v2 = CoreUICallSend(v4, &v11, 1LL, 5LL, 4, &unk_1801D5416);
          if ( v2 < 0 )
            (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 16LL))((char *)this + 8);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x4Du);
        }
      }
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v8);
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return (unsigned int)v2;
}
