/*
 * XREFs of ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1801A1E28
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowScene@@@Z @ 0x1801A1254 (-CreateShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowSce.c)
 *     ??$emplace_back@AEBQEAVCProjectedShadowCaster@@@?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@QEAAXAEBQEAVCProjectedShadowCaster@@@Z @ 0x1801A1C04 (--$emplace_back@AEBQEAVCProjectedShadowCaster@@@-$vector@PEAVCProjectedShadowCaster@@V-$allocato.c)
 *     ?RegisterNotifierForShadows@CProjectedShadowScene@@QEAAJPEAVCResource@@@Z @ 0x1801A22C0 (-RegisterNotifierForShadows@CProjectedShadowScene@@QEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS *a3,
        _DWORD *a4)
{
  unsigned int v5; // ebx
  CResourceTable *v7; // r8
  int v9; // ebp
  struct CResource *ResourceWithoutType; // rax
  struct CProjectedShadowCaster *v11; // rdi
  struct CProjectedShadowCaster **i; // rax
  int v13; // r12d
  __int64 v14; // r14
  struct CProjectedShadowCaster *v17; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  v7 = a2;
  v9 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, a4[v9]);
      v11 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              109LL) )
      {
        break;
      }
      v17 = v11;
      for ( i = (struct CProjectedShadowCaster **)*((_QWORD *)this + 7);
            i != *((struct CProjectedShadowCaster ***)this + 8) && *i != v11;
            ++i )
      {
        ;
      }
      if ( i == *((struct CProjectedShadowCaster ***)this + 8) )
      {
        std::vector<CProjectedShadowCaster *>::emplace_back<CProjectedShadowCaster * const &>(
          (__int64)this + 56,
          (__int64 *)&v17);
        v13 = 0;
        if ( (int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) > 0 )
        {
          v14 = 0LL;
          do
          {
            CProjectedShadowReceiver::CreateShadow(
              *(CProjectedShadowReceiver **)(v14 + *((_QWORD *)this + 11)),
              v11,
              this);
            v14 += 8LL;
            ++v13;
          }
          while ( v13 < (int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) );
        }
        CProjectedShadowScene::RegisterNotifierForShadows(this, v11);
      }
      if ( (unsigned int)++v9 >= *((_DWORD *)a3 + 2) )
        return v5;
      v7 = a2;
    }
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x2Du);
  }
  return v5;
}
