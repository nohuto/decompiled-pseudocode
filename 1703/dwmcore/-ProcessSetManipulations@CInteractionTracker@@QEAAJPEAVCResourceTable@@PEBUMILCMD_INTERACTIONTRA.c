/*
 * XREFs of ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18012C7B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180167FF8 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?Add@?$CMap@PEAVCManipulation@@PEAVCInteraction@@V?$CMapEqualHelper@PEAVCManipulation@@PEAVCInteraction@@@@@@QEAAHAEBQEAVCManipulation@@AEBQEAVCInteraction@@@Z @ 0x18016BF80 (-Add@-$CMap@PEAVCManipulation@@PEAVCInteraction@@V-$CMapEqualHelper@PEAVCManipulation@@PEAVCInte.c)
 *     ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18016C770 (-ClearActiveManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D548 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180188978 (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetManipulations(
        struct _RTL_GENERIC_TABLE **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *a3,
        char *a4)
{
  CResourceTable *v6; // r14
  struct CResource *v8; // rbx
  char v9; // r15
  int v10; // r13d
  unsigned int *v11; // r12
  struct CResource *ResourceWithoutType; // rbp
  struct CResource *v13; // r14
  bool v14; // zf
  CManipulation *v15; // rbp
  struct CResource *v16; // rdx
  int WeakReferenceBase; // eax
  int v18; // edi
  struct CWeakReferenceBase *v19; // r14
  struct CResource *v20; // rdx
  struct CResource *v21; // rdx
  bool v22; // dl
  CManipulation *v23; // rbp
  struct CResource *v24; // rdx
  int v25; // r9d
  unsigned int v27; // [rsp+20h] [rbp-58h]
  struct CWeakReferenceBase *v28[9]; // [rsp+30h] [rbp-48h] BYREF
  CManipulation *v31; // [rsp+98h] [rbp+20h] BYREF

  v6 = a2;
  CInteractionTracker::ReleaseManipulations((CInteractionTracker *)this);
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = (unsigned int *)(a4 + 4);
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, *(v11 - 1));
      if ( *v11 )
        v13 = CResourceTable::GetResourceWithoutType(v6, *v11);
      else
        v13 = 0LL;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              108LL)
        || v13 && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v13 + 48LL))(v13, 107LL) )
      {
        v18 = -2003303421;
        v27 = 679;
        goto LABEL_43;
      }
      v14 = ResourceWithoutType == (struct CResource *)8;
      v15 = (struct CResource *)((char *)ResourceWithoutType - 8);
      v31 = v15;
      v16 = (CManipulation *)((char *)v15 + 8);
      if ( v14 )
        v16 = 0LL;
      WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], v16, v28);
      v18 = WeakReferenceBase;
      if ( WeakReferenceBase < 0 )
      {
        v27 = 685;
        goto LABEL_41;
      }
      if ( v13 )
      {
        v19 = (struct CResource *)((char *)v13 - 8);
        v28[0] = v19;
      }
      else
      {
        v19 = 0LL;
        v28[0] = 0LL;
      }
      v20 = (CManipulation *)((char *)v15 + 8);
      if ( !v15 )
        v20 = 0LL;
      WeakReferenceBase = CResource::RegisterNotifier((CResource *)this, v20);
      v18 = WeakReferenceBase;
      if ( WeakReferenceBase < 0 )
      {
        v27 = 691;
        goto LABEL_41;
      }
      v21 = (struct CWeakReferenceBase *)((char *)v19 + 8);
      if ( !v19 )
        v21 = 0LL;
      v18 = CResource::RegisterNotifier((CResource *)this, v21);
      if ( v18 < 0 )
        break;
      if ( !(unsigned int)CMap<CManipulation *,CInteraction *,CMapEqualHelper<CManipulation *,CInteraction *>>::Add(
                            this + 61,
                            &v31,
                            v28) )
      {
        v24 = (CManipulation *)((char *)v31 + 8);
        if ( !v31 )
          v24 = 0LL;
        CResource::UnRegisterNotifierInternal((CResource *)this, v24);
        if ( v28[0] )
          v8 = (struct CWeakReferenceBase *)((char *)v28[0] + 8);
        CResource::UnRegisterNotifierInternal((CResource *)this, v8);
        v18 = -2147024882;
        v27 = 705;
        goto LABEL_43;
      }
      v23 = v31;
      WeakReferenceBase = CManipulation::SetAutoReset_RenderThread(v31, v22);
      v18 = WeakReferenceBase;
      if ( WeakReferenceBase < 0 )
      {
        v27 = 714;
LABEL_41:
        v25 = WeakReferenceBase;
        goto LABEL_44;
      }
      if ( this[64] == (struct _RTL_GENERIC_TABLE *)v23 )
        v9 = 1;
      if ( !*((_DWORD *)this + 35) )
        CChainingHelper::StartIdle((CChainingHelper *)(this + 41), (const struct CInteractionTracker *)this);
      v11 += 2;
      if ( (unsigned int)++v10 >= *((_DWORD *)a3 + 2) )
        goto LABEL_45;
      v6 = a2;
    }
    if ( v15 )
      v8 = (CManipulation *)((char *)v15 + 8);
    CResource::UnRegisterNotifierInternal((CResource *)this, v8);
    v27 = 698;
LABEL_43:
    v25 = v18;
LABEL_44:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v27);
  }
  else
  {
LABEL_45:
    if ( this[64] )
    {
      if ( !v9 )
      {
        CInteractionTracker::ClearActiveManipulation((CInteractionTracker *)this);
        if ( *((_DWORD *)this + 35) != 2 )
          CInteractionTracker::TransitionToInertia((CInteractionTracker *)this);
      }
    }
    return 0;
  }
  return (unsigned int)v18;
}
