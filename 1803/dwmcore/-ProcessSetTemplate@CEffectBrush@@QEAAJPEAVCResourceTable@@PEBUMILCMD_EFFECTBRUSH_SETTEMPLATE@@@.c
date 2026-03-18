/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x1800959D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18009560C (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800956D0 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  struct CResource *Resource; // rax
  struct CResource *v6; // rsi
  int v7; // eax
  int v8; // ebx
  int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // ebp
  __int64 v12; // rcx
  unsigned int v13; // eax
  int EffectInstance; // eax
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x18u);
  v6 = Resource;
  if ( *((_QWORD *)this + 10) )
  {
    if ( Resource )
    {
      v8 = -2003303422;
      v18 = 161;
      v16 = -2003303422;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v18);
      return (unsigned int)v8;
    }
LABEL_17:
    CEffectBrush::ReleaseResources(this);
    goto LABEL_14;
  }
  if ( !Resource )
    goto LABEL_17;
  v7 = CResource::RegisterNotifier(this, Resource);
  v8 = v7;
  if ( v7 < 0 )
  {
    v18 = 166;
    v16 = v7;
    goto LABEL_21;
  }
  v9 = 0;
  *((_QWORD *)this + 10) = v6;
  v10 = *((_DWORD *)a3 + 3);
  if ( v10 )
  {
    v11 = v19;
    while ( 1 )
    {
      v12 = *((unsigned int *)this + 32);
      v19 = 0LL;
      v13 = v12 + 1;
      if ( (int)v12 + 1 >= (unsigned int)v12 )
        v11 = v12 + 1;
      v8 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
      if ( v13 < (unsigned int)v12 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 31) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8u, 1, &v19);
        v8 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v12) = v19;
        *((_DWORD *)this + 32) = v11;
      }
      if ( v8 < 0 )
        break;
      if ( ++v9 >= v10 )
        goto LABEL_13;
    }
    v18 = 173;
    v16 = v8;
    goto LABEL_21;
  }
LABEL_13:
  EffectInstance = CEffectBrush::TryCreateEffectInstance(this);
  v8 = EffectInstance;
  if ( EffectInstance < 0 )
  {
    v18 = 176;
    v16 = EffectInstance;
    goto LABEL_21;
  }
LABEL_14:
  v8 = 0;
  (*(void (__fastcall **)(CEffectBrush *, _QWORD, CEffectBrush *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
  return (unsigned int)v8;
}
