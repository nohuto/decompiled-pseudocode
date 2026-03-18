/*
 * XREFs of ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z @ 0x18012B990
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z @ 0x180160250 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x180172AE4 (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCompositionLight::ProcessAddTargets(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONLIGHT_ADDTARGETS *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int v11; // ebp
  struct CResource *ResourceWithoutType; // rax
  CVisual *v13; // rsi
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  CVisual *v21; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = a5;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, a4[v6]);
      v13 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              31LL) )
      {
        break;
      }
      v21 = v13;
      if ( !(unsigned __int8)DynArray<CVisual *,0>::Contains((char *)this + 72, &v21) )
      {
        v15 = *(unsigned int *)(v14 + 24);
        v16 = v15 + 1;
        if ( (int)v15 + 1 >= (unsigned int)v15 )
          v11 = v15 + 1;
        v5 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
        if ( v16 < (unsigned int)v15 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
        }
        else if ( v11 > *(_DWORD *)(v14 + 20) )
        {
          v17 = DynArrayImpl<0>::AddMultipleAndSet(v14, 8u, 1, &v21);
          v5 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v14 + 8 * v15) = v21;
          *(_DWORD *)(v14 + 24) = v11;
        }
        if ( (v5 & 0x80000000) != 0 )
        {
          v20 = 65;
          goto LABEL_21;
        }
        v18 = CVisual::AddLight(v21, this);
        v5 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x42u);
          return v5;
        }
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)a3 + 2) )
        return v5;
    }
    v5 = -2003303421;
    v20 = 59;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v20);
  }
  return v5;
}
