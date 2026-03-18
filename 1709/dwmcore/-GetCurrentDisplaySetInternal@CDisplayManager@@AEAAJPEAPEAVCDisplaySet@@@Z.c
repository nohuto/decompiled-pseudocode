/*
 * XREFs of ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180010D80
 * Callers:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x180010AF4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C0360 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::GetCurrentDisplaySetInternal(CDisplayManager *this, struct CDisplaySet **a2)
{
  int v3; // edi
  char v4; // bp
  CD3DModuleLoaderInternal *v5; // rcx
  CDXGIEnumeration *v6; // rbx
  struct CDXGIEnumeration *v7; // rbx
  unsigned int (__fastcall *v8)(CMILRefCountBase *__hidden); // rax
  int v10; // eax
  CDisplayManager *v11; // [rsp+50h] [rbp+8h] BYREF
  CDisplaySet *v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = this;
  *a2 = 0LL;
  EnterCriticalSection(&g_DisplayManager);
  v3 = 0;
  v4 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v6 = qword_18026EEB0;
  if ( qword_18026EEB0
    && (!(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18026EEB0 + 2) + 104LL))(*((_QWORD *)qword_18026EEB0
                                                                                               + 2))
     || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v6 + 14)
     || qword_18026EEB0 != v6) )
  {
    ReleaseInterface<CRemoteApplicationWindow>(&qword_18026EEB0);
    v4 = 1;
  }
  if ( !qword_18026EEB0 )
  {
    LODWORD(v11) = CD3DModuleLoaderInternal::CreateD3DObjects(v5, &qword_18026EEB0);
    TranslateDXGIorD3DErrorInContext((unsigned int)v11, 4LL, &v11);
    v3 = (int)v11;
    if ( (int)v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202590, 1u, (int)v11, 0x128u);
  }
  if ( v4 && qword_18026EEC0 )
    CSurfaceManager::ResetTokenThread(qword_18026EEC0);
  v7 = qword_18026EEB0;
  if ( qword_18026EEB0 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18026EEB0)(qword_18026EEB0);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xEAu);
  }
  else
  {
    if ( qword_18026EEA8 )
    {
LABEL_11:
      _InterlockedIncrement((volatile signed __int32 *)qword_18026EEA8);
      *a2 = qword_18026EEA8;
      goto LABEL_12;
    }
    v12 = 0LL;
    LeaveCriticalSection(&g_DisplayManager);
    v10 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v7, &v12, 0LL);
    v3 = v10;
    if ( v10 >= 0 )
    {
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_18026EEA8 )
      {
        if ( v12 )
          CDisplaySet::Release(v12);
      }
      else
      {
        qword_18026EEA8 = v12;
        if ( v12 )
          _InterlockedIncrement((volatile signed __int32 *)v12);
      }
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xF8u);
    EnterCriticalSection(&g_DisplayManager);
  }
LABEL_12:
  if ( v7 )
  {
    v8 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v7 + 8LL);
    if ( v8 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v7);
    else
      v8(v7);
  }
  LeaveCriticalSection(&g_DisplayManager);
  return (unsigned int)v3;
}
