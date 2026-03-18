/*
 * XREFs of ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18016CA44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A370 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@V?$CMapEqualHelper@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@@@@@QEAAHAEBV?$ComPtr@VCManipulation@@@WRL@Microsoft@@AEBV?$ComPtr@VCInteraction@@@34@@Z @ 0x18016ABC0 (-Add@-$CMap@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$ComPtr@VCInteraction@@@23@V-$CMapEqualH.c)
 *     ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18016B4E4 (-ClearActiveManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D09C (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180170AC8 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x18019265C (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetManipulations(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *a3,
        unsigned int *a4)
{
  CResourceTable *v6; // rbx
  char v8; // bp
  int v9; // r12d
  struct CResource *ResourceWithoutType; // rax
  unsigned int v11; // edx
  struct CResource *v12; // rsi
  struct CResource *v13; // r14
  int WeakReferenceBase; // eax
  unsigned int v15; // ebx
  struct CWeakReferenceBase *v16; // r14
  bool v17; // bl
  bool v18; // dl
  DWORD v19; // r9d
  unsigned int v21; // [rsp+20h] [rbp-48h]
  struct CWeakReferenceBase *v23; // [rsp+80h] [rbp+18h] BYREF
  struct CResource *v24; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  CInteractionTracker::ReleaseManipulations((CInteractionTracker *)this);
  v8 = 0;
  v9 = 0;
  if ( !*((_DWORD *)a3 + 2) )
  {
LABEL_29:
    if ( this[68] )
    {
      if ( !v8 )
      {
        CInteractionTracker::ClearActiveManipulation((CInteractionTracker *)this);
        if ( *((_DWORD *)this + 38) != 2 )
          CInteractionTracker::TransitionToInertia((CInteractionTracker *)this);
      }
    }
    return 0;
  }
  while ( 1 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, *a4);
    v11 = a4[1];
    v12 = ResourceWithoutType;
    if ( v11 )
      v13 = CResourceTable::GetResourceWithoutType(v6, v11);
    else
      v13 = 0LL;
    if ( !v12
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 85LL)
      || v13 && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v13 + 48LL))(v13, 76LL) )
    {
      v15 = -2003303421;
      v21 = 687;
      goto LABEL_27;
    }
    WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], v12, &v23);
    v15 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      v21 = 693;
      goto LABEL_25;
    }
    v16 = (struct CWeakReferenceBase *)(((unsigned __int64)v13 - 8) & -(__int64)(v13 != 0LL));
    WeakReferenceBase = CResource::RegisterNotifier((CResource *)this, v12);
    v15 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      v21 = 699;
      goto LABEL_25;
    }
    v23 = v16;
    Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v23);
    v24 = v12;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v24);
    v17 = (unsigned int)CMap<Microsoft::WRL::ComPtr<CManipulation>,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<Microsoft::WRL::ComPtr<CManipulation>,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          (__int64)(this + 65),
                          (__int64 *)&v24,
                          &v23) == 0;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v16 )
      (*(void (__fastcall **)(struct CWeakReferenceBase *))(*(_QWORD *)v16 + 8LL))(v16);
    if ( v17 )
      break;
    WeakReferenceBase = CManipulation::SetAutoReset_RenderThread(v12, v18);
    v15 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      v21 = 713;
LABEL_25:
      v19 = WeakReferenceBase;
      goto LABEL_28;
    }
    if ( this[68] == v12 )
      v8 = 1;
    if ( !*((_DWORD *)this + 38) )
      CChainingHelper::StartIdle((CChainingHelper *)((char *)this + 340), (const struct CInteractionTracker *)this);
    a4 += 2;
    if ( (unsigned int)++v9 >= *((_DWORD *)a3 + 2) )
      goto LABEL_29;
    v6 = a2;
  }
  CResource::UnRegisterNotifierInternal((CResource *)this, v12);
  v15 = -2147024882;
  v21 = 704;
LABEL_27:
  v19 = v15;
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, v21);
  return v15;
}
