/*
 * XREFs of ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C021350C
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01F24BC (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0044C10 (-IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORM.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216824 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInitializeAdapter(DXGADAPTER *this)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v10; // rbx
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v29; // ecx
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  struct DMMVIDPN *v31; // [rsp+38h] [rbp-38h] BYREF
  __int64 v32; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+48h] [rbp-28h] BYREF
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v34[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-18h]

  v1 = 0LL;
  if ( !this )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)this + 307);
  if ( v6 )
  {
    v7 = *(__int64 **)(v6 + 88);
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v8 + 24) = this;
      WdLogEvent5_WdError(v8);
      return 3223192373LL;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, *(_QWORD *)(v6 + 88));
    v10 = 0LL;
    v11 = (*((_DWORD *)this + 75) & 0x8000) == 0;
    v30 = 0LL;
    *(_QWORD *)&v34[0].0 = 0LL;
    v35 = 0;
    if ( !v11 )
    {
      v31 = 0LL;
      v12 = VIDPN_MGR::RecommendFunctionalVidPn((VIDPN_MGR *)v7, DXGK_RFVR_FIRMWARE, v34, 0xCu, &v31);
      v14 = v12;
      if ( v12 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v16 + 24) = this;
        *(_QWORD *)(v16 + 32) = v14;
        WdLogEvent5_WdError(v16);
      }
      else
      {
        auto_rc<DMMVIDPN>::reset(&v30, (__int64)v31);
        v10 = v30;
      }
      if ( v10 )
      {
        if ( v10 == -96 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v17);
        }
        if ( *(_QWORD *)(v10 + 136) == 1LL )
        {
          v19 = 0LL;
          v20 = *(_QWORD *)(v10 + 120);
          if ( v20 != v10 + 120 )
            v19 = v20 - 8;
          v21 = *(_QWORD *)(v19 + 96);
          if ( !v21 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v19);
            WdLogEvent5_WdAssertion(v22);
          }
          v23 = *(_QWORD *)(v21 + 104);
          if ( v23 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v23 + 96));
            v24 = *(_QWORD *)(v21 + 104);
            v10 = v30;
          }
          else
          {
            v24 = 0LL;
          }
          v25 = *(_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v24 + 144);
          v32 = v24;
          if ( !v25 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v19);
            WdLogEvent5_WdAssertion(v26);
          }
          if ( DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
                 (DMMVIDPNTARGETMODE *)v25,
                 v34[1],
                 (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE)v34[0].Value) )
          {
            do
              *(_BYTE *)(*(_QWORD *)(v21 + 96) + v1++ + 407) = 1;
            while ( v1 < 2 );
            v29.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v34[0];
            v25[33].0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v34[1];
            v25[34].0 = v29.0;
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
            auto_rc<DMMVIDPN>::reset(v7 + 35, v30);
            DxgkLogCodePointPacket(0x59u, *(_DWORD *)(v21 + 24), v35, 1u, *(_QWORD *)((char *)this + 268));
          }
          else
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdAssertion(v27);
            v28[3] = v34[1].Value;
            v28[4] = (int)v34[0].Value;
            v28[5] = this;
            WdLogEvent5_WdAssertion(v28);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v32, 0LL);
        }
        else
        {
          v18 = WdLogNewEntry5_WdAssertion(v15);
          *(_QWORD *)(v18 + 24) = *(_QWORD *)(v10 + 136);
          *(_QWORD *)(v18 + 32) = this;
          WdLogEvent5_WdAssertion(v18);
        }
      }
    }
    auto_rc<DMMVIDPN>::reset(&v30, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
  }
  return 0LL;
}
