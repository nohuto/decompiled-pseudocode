/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x180095918
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z @ 0x1800C5AB8 (-IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  unsigned int v3; // ebx
  const struct CResource *ResourceWithoutType; // rax
  struct CResource *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  struct CResource *v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( !*((_QWORD *)this + 10) )
    return v3;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  v7 = ResourceWithoutType;
  if ( ResourceWithoutType && !CEffectBrush::IsValidInputResource(ResourceWithoutType) )
  {
    v13 = 241;
LABEL_13:
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, v13);
    return v3;
  }
  v8 = *((unsigned int *)a3 + 2);
  if ( (unsigned int)v8 >= *((_DWORD *)this + 32) )
  {
    v13 = 246;
    goto LABEL_13;
  }
  v9 = *((_QWORD *)this + 13);
  v10 = (unsigned int)v8;
  v11 = *(struct CResource **)(v9 + 8 * v8);
  if ( v11 )
  {
    CResource::UnRegisterNotifierInternal(this, v11);
    *(_QWORD *)(v9 + 8 * v10) = 0LL;
  }
  if ( v7 )
  {
    *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * *((unsigned int *)a3 + 2)) = v7;
    CResource::RegisterNotifier(this, v7);
  }
  (*(void (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)this + 64LL))(this, 14LL);
  return v3;
}
