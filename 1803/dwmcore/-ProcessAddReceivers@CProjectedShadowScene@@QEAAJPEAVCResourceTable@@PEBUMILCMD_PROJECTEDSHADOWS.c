/*
 * XREFs of ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1801A1F5C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateShadow@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowReceiver@@PEAVCProjectedShadowScene@@@Z @ 0x18019FAC4 (-CreateShadow@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowReceiver@@PEAVCProjectedShadowSce.c)
 *     ??$emplace_back@AEBQEAVCProjectedShadowCaster@@@?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@QEAAXAEBQEAVCProjectedShadowCaster@@@Z @ 0x1801A1C04 (--$emplace_back@AEBQEAVCProjectedShadowCaster@@@-$vector@PEAVCProjectedShadowCaster@@V-$allocato.c)
 *     ?RegisterNotifierForShadows@CProjectedShadowScene@@QEAAJPEAVCResource@@@Z @ 0x1801A22C0 (-RegisterNotifierForShadows@CProjectedShadowScene@@QEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS *a3,
        _DWORD *a4)
{
  __int64 v4; // rsi
  struct CResource *ResourceWithoutType; // rax
  struct CProjectedShadowReceiver *v10; // rbx
  struct CProjectedShadowReceiver **i; // rax
  int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // ebp
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v20; // [rsp+20h] [rbp-38h]
  struct CProjectedShadowReceiver *v21; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( !*((_DWORD *)a3 + 2) )
  {
LABEL_13:
    v14 = *((_QWORD *)this + 7);
    v15 = 0;
    if ( (int)((*((_QWORD *)this + 8) - v14) >> 3) <= 0 )
    {
LABEL_17:
      v17 = CProjectedShadowScene::RegisterNotifierForShadows(this, *((struct CResource **)this + 10));
      v18 = v17;
      if ( v17 >= 0 )
        return v18;
      v20 = 103;
    }
    else
    {
      v16 = 0LL;
      while ( 1 )
      {
        v17 = CProjectedShadowScene::RegisterNotifierForShadows(this, *(struct CResource **)(v16 + v14));
        v18 = v17;
        if ( v17 < 0 )
          break;
        v14 = *((_QWORD *)this + 7);
        ++v15;
        v16 += 8LL;
        if ( v15 >= (int)((*((_QWORD *)this + 8) - v14) >> 3) )
          goto LABEL_17;
      }
      v20 = 101;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v20);
    return v18;
  }
  while ( 1 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, a4[v4]);
    v10 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            110LL) )
    {
      break;
    }
    v21 = v10;
    for ( i = (struct CProjectedShadowReceiver **)*((_QWORD *)this + 11);
          i != *((struct CProjectedShadowReceiver ***)this + 12) && *i != v10;
          ++i )
    {
      ;
    }
    if ( i == *((struct CProjectedShadowReceiver ***)this + 12) )
    {
      std::vector<CProjectedShadowCaster *>::emplace_back<CProjectedShadowCaster * const &>(
        (__int64)this + 88,
        (__int64 *)&v21);
      v12 = 0;
      if ( (int)((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3) > 0 )
      {
        v13 = 0LL;
        do
        {
          CProjectedShadowCaster::CreateShadow(*(CProjectedShadowCaster **)(v13 + *((_QWORD *)this + 7)), v10, this);
          v13 += 8LL;
          ++v12;
        }
        while ( v12 < (int)((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3) );
      }
    }
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)a3 + 2) )
      goto LABEL_13;
  }
  v18 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x54u);
  return v18;
}
