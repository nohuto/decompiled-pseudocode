/*
 * XREFs of ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0121E9C
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0118E70 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0035840 (-IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORM.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01EED18 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInitializeAdapter(DXGADAPTER *this)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // r15
  __int64 v6; // rbx
  bool v7; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r14
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
    v9 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v10);
  }
  v4 = *((_QWORD *)this + 288);
  if ( !v4 )
    return 0LL;
  v5 = *(__int64 **)(v4 + 88);
  if ( v5 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33, *(_QWORD *)(v4 + 88));
    v6 = 0LL;
    v7 = (*((_DWORD *)this + 75) & 0x8000) == 0;
    v30 = 0LL;
    *(_QWORD *)&v34[0].0 = 0LL;
    v35 = 0;
    if ( !v7 )
    {
      v31 = 0LL;
      v12 = VIDPN_MGR::RecommendFunctionalVidPn((VIDPN_MGR *)v5, DXGK_RFVR_FIRMWARE, v34, 0xCu, &v31);
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
        v6 = v30;
      }
      if ( v6 )
      {
        if ( v6 == -96 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v17);
        }
        if ( *(_QWORD *)(v6 + 136) == 1LL )
        {
          v19 = *(_QWORD *)(v6 + 120);
          if ( v19 == v6 + 120 )
            v20 = 96LL;
          else
            v20 = v19 + 88;
          v21 = *(_QWORD *)v20;
          if ( !v21 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v15);
            WdLogEvent5_WdAssertion(v22);
          }
          v23 = *(_QWORD *)(v21 + 104);
          if ( v23 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v23 + 96));
            v24 = *(_QWORD *)(v21 + 104);
            v6 = v30;
          }
          else
          {
            v24 = 0LL;
          }
          v25 = *(_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v24 + 144);
          v32 = v24;
          if ( !v25 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v15);
            WdLogEvent5_WdAssertion(v26);
          }
          if ( DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
                 (DMMVIDPNTARGETMODE *)v25,
                 v34[1],
                 (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE)v34[0].Value) )
          {
            do
              *(_BYTE *)(*(_QWORD *)(v21 + 96) + v1++ + 408) = 1;
            while ( v1 < 2 );
            v29.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v34[0];
            v25[33].0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v34[1];
            v25[34].0 = v29.0;
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
            auto_rc<DMMVIDPN>::reset(v5 + 35, v30);
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
          *(_QWORD *)(v18 + 24) = *(_QWORD *)(v6 + 136);
          *(_QWORD *)(v18 + 32) = this;
          WdLogEvent5_WdAssertion(v18);
        }
      }
    }
    auto_rc<DMMVIDPN>::reset(&v30, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
    return 0LL;
  }
  v11 = WdLogNewEntry5_WdError(v3);
  *(_QWORD *)(v11 + 24) = this;
  WdLogEvent5_WdError(v11);
  return 3223192373LL;
}
