/*
 * XREFs of ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800B13B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022240 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004EF00 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x1800B1738 (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::AddTargets(
        unsigned __int64 a1,
        CResourceTable *a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  DWORD v6; // ebx
  CResourceTable *v9; // r8
  unsigned int v10; // r14d
  __int64 v11; // rdi
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  struct CResource *ResourceWithoutType; // rax
  __int64 v15; // rsi
  bool (__fastcall *v16)(__int64, int); // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v9 = a2;
  v10 = 0;
  v11 = a1 + (a6 != 0 ? 112LL : 72LL);
  if ( a3 )
  {
    v12 = a6;
    while ( 1 )
    {
      v13 = v12;
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v9, *a4);
      v15 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType )
        break;
      v16 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( !(v16 == CSpriteVisual::IsOfType ? CSpriteVisual::IsOfType(v15, 134) : v16(v15, 134)) )
        break;
      v26 = v15;
      if ( !(unsigned __int8)DynArray<CVisual *,0>::Contains(v11, &v26) )
      {
        v18 = *(unsigned int *)(v11 + 24);
        v19 = v18 + 1;
        v12 = v18 + 1;
        if ( (int)v18 + 1 < (unsigned int)v18 )
          v12 = v13;
        v6 = v19 < (unsigned int)v18 ? 0x80070216 : 0;
        if ( v19 < (unsigned int)v18 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
        }
        else if ( v12 > *(_DWORD *)(v11 + 20) )
        {
          v21 = DynArrayImpl<0>::AddMultipleAndSet(v11, 8u, 1, &v26);
          v6 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v11 + 8 * v18) = v26;
          *(_DWORD *)(v11 + 24) = v12;
        }
        if ( (v6 & 0x80000000) != 0 )
        {
          v23 = 130;
          goto LABEL_26;
        }
        v20 = CVisual::AddLight(v26, a1, a6);
        v6 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x83u);
          return v6;
        }
      }
      ++v10;
      ++a4;
      if ( v10 >= a3 )
        return v6;
      v9 = a2;
    }
    v6 = -2003303421;
    v23 = 124;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, v23);
  }
  return v6;
}
