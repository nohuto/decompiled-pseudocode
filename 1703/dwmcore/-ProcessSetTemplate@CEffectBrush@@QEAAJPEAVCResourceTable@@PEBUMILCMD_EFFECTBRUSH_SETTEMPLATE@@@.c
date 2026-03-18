/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x180010F68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180010C50 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180010D14 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  struct CResource *Resource; // rax
  struct CResource *v6; // rdi
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // r12d
  int v10; // ebp
  unsigned int v11; // r15d
  __int64 v12; // rcx
  unsigned int v13; // eax
  int EffectInstance; // eax
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  Resource = (struct CResource *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 124LL);
  v6 = Resource;
  if ( *((_QWORD *)this + 11) )
  {
    if ( Resource )
    {
      v8 = -2003303422;
      v18 = 231;
      v16 = -2003303422;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v18);
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
    v18 = 236;
    v16 = v7;
    goto LABEL_21;
  }
  *((_QWORD *)this + 11) = v6;
  v9 = *((_DWORD *)a3 + 3);
  v10 = 0;
  if ( v9 )
  {
    v11 = v19;
    while ( 1 )
    {
      v12 = *((unsigned int *)this + 34);
      v19 = 0LL;
      v13 = v12 + 1;
      if ( (int)v12 + 1 >= (unsigned int)v12 )
        v11 = v12 + 1;
      v8 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
      if ( v13 < (unsigned int)v12 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 33) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v19);
        v8 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v12) = v19;
        *((_DWORD *)this + 34) = v11;
      }
      if ( v8 < 0 )
        break;
      if ( ++v10 >= v9 )
        goto LABEL_13;
    }
    v18 = 243;
    v16 = v8;
    goto LABEL_21;
  }
LABEL_13:
  EffectInstance = CEffectBrush::TryCreateEffectInstance(this);
  v8 = EffectInstance;
  if ( EffectInstance < 0 )
  {
    v18 = 246;
    v16 = EffectInstance;
    goto LABEL_21;
  }
LABEL_14:
  v8 = 0;
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  return (unsigned int)v8;
}
