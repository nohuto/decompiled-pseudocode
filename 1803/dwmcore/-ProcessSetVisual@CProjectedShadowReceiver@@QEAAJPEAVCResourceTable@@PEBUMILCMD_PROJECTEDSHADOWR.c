/*
 * XREFs of ?ProcessSetVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWRECEIVER_SETVISUAL@@@Z @ 0x1801A17B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1801A1B8C (-SetProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetVisual(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWRECEIVER_SETVISUAL *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  struct CResource *Resource; // rdi
  int v8; // eax
  CVisual *v9; // rcx
  struct CResource *v10; // rax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x97u)) != 0LL )
  {
    if ( Resource != this[7] )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5Fu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
        v9 = this[7];
        if ( v9 )
          CVisual::SetProjectedShadowReceiver(v9, 0LL);
        if ( Resource )
          CVisual::SetProjectedShadowReceiver(Resource, (struct CProjectedShadowReceiver *)this);
        v10 = *this;
        this[7] = Resource;
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v10 + 8))(this, 0LL, 0LL);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x59u);
  }
  return v4;
}
