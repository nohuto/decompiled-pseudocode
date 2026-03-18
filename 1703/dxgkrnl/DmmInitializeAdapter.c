/*
 * XREFs of DmmInitializeAdapter @ 0x1C01223D4
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0112030 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?IsPickedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C0044BF0 (-IsPickedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFER.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01D3638 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInitializeAdapter(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  VIDPN_MGR *v10; // rsi
  __int64 v11; // rbx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  DMMVIDPNTARGETMODE *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rax
  __int64 v45; // [rsp+30h] [rbp-40h] BYREF
  struct DMMVIDPN *v46; // [rsp+38h] [rbp-38h] BYREF
  __int64 v47; // [rsp+40h] [rbp-30h] BYREF
  __int64 v48; // [rsp+48h] [rbp-28h] BYREF
  D3DDDI_COLOR_SPACE_TYPE v49[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v50; // [rsp+58h] [rbp-18h]

  if ( !this )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = *((_QWORD *)this + 285);
  if ( !v9 )
    return 0LL;
  v10 = *(VIDPN_MGR **)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v48, *(_QWORD *)(v9 + 88), v7, v8);
    v11 = 0LL;
    v12 = (*((_DWORD *)this + 75) & 0x8000) == 0;
    v45 = 0LL;
    *(_QWORD *)v49 = 0LL;
    v50 = 0;
    if ( !v12 )
    {
      v46 = 0LL;
      v20 = VIDPN_MGR::RecommendFunctionalVidPn(v10, DXGK_RFVR_FIRMWARE, v49, 0xCu, &v46);
      v23 = v20;
      if ( v20 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v28 + 24) = this;
        *(_QWORD *)(v28 + 32) = v23;
        WdLogEvent5_WdError(v28);
      }
      else
      {
        auto_rc<DMMVIDPN>::reset(&v45, (__int64)v46);
        v11 = v45;
      }
      if ( v11 )
      {
        v29 = v11 + 96;
        if ( !v29 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
          WdLogEvent5_WdAssertion(v30);
        }
        if ( *(_QWORD *)(v29 + 40) == 1LL )
        {
          v32 = v29 + 24;
          v33 = *(_QWORD *)(v29 + 24);
          if ( v33 == v32 )
            v34 = 0LL;
          else
            v34 = v33 - 8;
          v35 = *(_QWORD *)(v34 + 96);
          if ( !v35 )
          {
            v36 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
            WdLogEvent5_WdAssertion(v36);
          }
          v37 = *(_QWORD *)(v35 + 104);
          if ( v37 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v37 + 96));
            v37 = *(_QWORD *)(v35 + 104);
          }
          v38 = *(DMMVIDPNTARGETMODE **)(v37 + 144);
          v47 = v37;
          if ( !v38 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
            WdLogEvent5_WdAssertion(v39);
          }
          if ( DMMVIDPNTARGETMODE::IsPickedWireformatAndColorSpaceValid(
                 v38,
                 (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v49[1],
                 v49[0]) )
          {
            *(_BYTE *)(*(_QWORD *)(v35 + 96) + 408LL) = 1;
            DxgkLogCodePointPacket(0x59u, *(_DWORD *)(v35 + 24), v50, 1u, *(_QWORD *)((char *)this + 268));
          }
          else
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
            v44[3] = (unsigned int)v49[1];
            v44[4] = v49[0];
            v44[5] = this;
            WdLogEvent5_WdAssertion(v44);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v47, 0LL);
        }
        else
        {
          v31 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
          *(_QWORD *)(v31 + 24) = *(_QWORD *)(v29 + 40);
          *(_QWORD *)(v31 + 32) = this;
          WdLogEvent5_WdAssertion(v31);
        }
      }
    }
    auto_rc<DMMVIDPN>::reset(&v45, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48 + 40), v13, v14, v15);
    return 0LL;
  }
  v19 = WdLogNewEntry5_WdError(v6, v5);
  *(_QWORD *)(v19 + 24) = this;
  WdLogEvent5_WdError(v19);
  return 3223192373LL;
}
