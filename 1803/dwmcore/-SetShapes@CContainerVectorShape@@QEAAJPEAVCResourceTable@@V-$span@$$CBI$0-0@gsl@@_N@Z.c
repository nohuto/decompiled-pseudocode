/*
 * XREFs of ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801883E0
 * Callers:
 *     ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x180188368 (-ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONTAINERVECTORSHAP.c)
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801A3A0C (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180051ACC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAX_K@Z @ 0x180188548 (-_Reallocate_exactly@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAX.c)
 *     ??$emplace_back@AEBQEAVCProjectedShadowCaster@@@?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@QEAAXAEBQEAVCProjectedShadowCaster@@@Z @ 0x1801A1C04 (--$emplace_back@AEBQEAVCProjectedShadowCaster@@@-$vector@PEAVCProjectedShadowCaster@@V-$allocato.c)
 */

__int64 __fastcall CContainerVectorShape::SetShapes(struct CResource ***this, CResourceTable *a2, _QWORD *a3, char a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbp
  struct CResource **v10; // r8
  __int64 v11; // rsi
  struct CResource *ResourceWithoutType; // r15
  int v13; // eax
  unsigned int v14; // ebx
  struct CResource *v16; // [rsp+30h] [rbp-28h] BYREF
  const void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a4 )
  {
    v7 = (__int64 *)(this + 11);
    CResource::UnRegisterNNotifiersInternal((CResource *)this, this[11], this[12] - this[11]);
    v8 = *v7;
    v7[1] = *v7;
    if ( *a3 > (unsigned __int64)((v7[2] - v8) >> 3) )
    {
      if ( *a3 > 0x1FFFFFFFFFFFFFFFuLL )
        ModuleFailFastForHRESULT(-2147483637, retaddr);
      std::vector<CVectorShape *>::_Reallocate_exactly(v7, *a3);
    }
  }
  v9 = 0LL;
  v10 = this[12];
  v11 = v10 - this[11];
  if ( *(_DWORD *)a3 )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *(_DWORD *)(a3[1] + 4 * v9));
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              149LL) )
        break;
      v16 = ResourceWithoutType;
      std::vector<CProjectedShadowCaster *>::emplace_back<CProjectedShadowCaster * const &>(this + 11, &v16);
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)a3 )
      {
        v10 = this[12];
        goto LABEL_10;
      }
    }
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x4Fu);
  }
  else
  {
LABEL_10:
    v13 = CResource::RegisterNNotifiersInternal(
            (CResource *)this,
            &this[11][(unsigned int)v11],
            (unsigned int)(v10 - this[11]) - (unsigned int)v11);
    v14 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x55u);
    else
      ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[8])(this, 0LL, 0LL);
  }
  return v14;
}
