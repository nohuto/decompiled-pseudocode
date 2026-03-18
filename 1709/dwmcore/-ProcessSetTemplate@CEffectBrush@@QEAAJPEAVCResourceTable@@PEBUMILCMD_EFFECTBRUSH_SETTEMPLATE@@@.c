/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18008308C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180082B00 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180082BC4 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  struct CResource *Resource; // rax
  struct CResource *v6; // rdi
  int v7; // eax
  DWORD v8; // ebx
  unsigned int v9; // r12d
  int v10; // ebp
  unsigned int v11; // r15d
  __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int EffectInstance; // eax
  DWORD v17; // r9d
  signed int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  Resource = (struct CResource *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 22LL);
  v6 = Resource;
  if ( *((_QWORD *)this + 11) )
  {
    if ( Resource )
    {
      v8 = -2003303422;
      v19 = 231;
      v17 = -2003303422;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, v19);
      return v8;
    }
LABEL_25:
    CEffectBrush::ReleaseResources(this);
    goto LABEL_14;
  }
  if ( !Resource )
    goto LABEL_25;
  v7 = CResource::RegisterNotifier(this, Resource);
  v8 = v7;
  if ( v7 < 0 )
  {
    v19 = 236;
    v17 = v7;
    goto LABEL_20;
  }
  *((_QWORD *)this + 11) = v6;
  v9 = *((_DWORD *)a3 + 3);
  v10 = 0;
  if ( v9 )
  {
    v11 = v20;
    while ( 1 )
    {
      v12 = *((unsigned int *)this + 34);
      v20 = 0LL;
      v13 = v12 + 1;
      v14 = v12 + 1;
      if ( (int)v12 + 1 < (unsigned int)v12 )
        v14 = v11;
      v8 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
      v11 = v14;
      if ( v13 < (unsigned int)v12 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB5u);
      }
      else if ( v14 > *((_DWORD *)this + 33) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 112, 8u, 1, &v20);
        v8 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v12) = v20;
        *((_DWORD *)this + 34) = v14;
      }
      if ( (v8 & 0x80000000) != 0 )
        break;
      if ( ++v10 >= v9 )
        goto LABEL_13;
    }
    v19 = 243;
    v17 = v8;
    goto LABEL_20;
  }
LABEL_13:
  EffectInstance = CEffectBrush::TryCreateEffectInstance(this);
  v8 = EffectInstance;
  if ( EffectInstance < 0 )
  {
    v19 = 246;
    v17 = EffectInstance;
    goto LABEL_20;
  }
LABEL_14:
  v8 = 0;
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  return v8;
}
