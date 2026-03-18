/*
 * XREFs of ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x18002A414
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004E814 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D920 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::AddTargets(
        __int64 a1,
        CResourceTable *a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  CResourceTable *v9; // r8
  unsigned int v11; // r14d
  __int64 *v12; // rdi
  unsigned int v13; // ebp
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v15; // rsi
  __int64 (__fastcall *v16)(struct CResource *, __int64); // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-48h]
  struct CResource *v27; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v9 = a2;
  v11 = 0;
  v12 = (__int64 *)(a1 + (a6 != 0 ? 112LL : 72LL));
  if ( a3 )
  {
    v13 = a6;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v9, *a4);
      v15 = ResourceWithoutType;
      if ( !ResourceWithoutType )
        break;
      v16 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( !((char *)v16 == (char *)CSpriteVisual::IsOfType
           ? CSpriteVisual::IsOfType(v15, 151LL)
           : (unsigned __int8)v16(v15, 151LL)) )
        break;
      v18 = *((unsigned int *)v12 + 6);
      v19 = 0LL;
      v20 = *v12;
      v27 = v15;
      if ( (_DWORD)v18 )
      {
        while ( v15 != *(struct CResource **)(v20 + 8 * v19) )
        {
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= (unsigned int)v18 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        v21 = v18 + 1;
        if ( (int)v18 + 1 >= (unsigned int)v18 )
          v13 = v18 + 1;
        v6 = v21 < (unsigned int)v18 ? 0x80070216 : 0;
        if ( v21 < (unsigned int)v18 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
        }
        else if ( v13 > *((_DWORD *)v12 + 5) )
        {
          v23 = DynArrayImpl<0>::AddMultipleAndSet(v12, 8LL, 1LL, &v27);
          v6 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC0u);
        }
        else
        {
          *(_QWORD *)(v20 + 8 * v18) = v27;
          *((_DWORD *)v12 + 6) = v13;
        }
        if ( (v6 & 0x80000000) != 0 )
        {
          v25 = 142;
          goto LABEL_28;
        }
        v22 = CVisual::AddLight(v27, a1, a6);
        v6 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x8Fu);
          return v6;
        }
      }
      ++v11;
      ++a4;
      if ( v11 >= a3 )
        return v6;
      v9 = a2;
    }
    v6 = -2003303421;
    v25 = 136;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v25);
  }
  return v6;
}
