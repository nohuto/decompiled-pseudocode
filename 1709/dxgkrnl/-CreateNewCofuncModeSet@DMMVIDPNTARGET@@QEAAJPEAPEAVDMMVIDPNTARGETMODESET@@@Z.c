/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004D78
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00D4890 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C00052C0 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::CreateNewCofuncModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET **a2)
{
  unsigned int v2; // ebx
  char *v5; // r14
  DMMVIDPNTARGETMODESET *v6; // rax
  DMMVIDPNTARGETMODESET *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  v5 = (char *)this + 112;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    v14 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v14 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v14 + 32) = *(_QWORD *)v5;
    WdLogEvent5_WdError(v14);
    return 3223192400LL;
  }
  else
  {
    v18 = 0LL;
    v6 = (DMMVIDPNTARGETMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
    if ( v6 )
      v7 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v6, this);
    else
      v7 = 0LL;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v18, v7);
    v9 = v18;
    if ( v18 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v18 + 24))(v18 + 24) )
      {
        v18 = 0LL;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((char *)this + 112, v9);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 96LL));
        v11 = *(_QWORD *)v5;
        *a2 = *(struct DMMVIDPNTARGETMODESET **)v5;
        if ( *(_DWORD *)(v11 + 96) != 2 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v17);
        }
      }
      else
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v16[3] = v9;
        v16[4] = *((unsigned int *)this + 6);
        v16[5] = *(int *)(v9 + 40);
        WdLogEvent5_WdDmmEvent(v16);
        v2 = *(_DWORD *)(v9 + 40);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v15 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v15);
      v2 = -1073741801;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v18, 0LL);
    return v2;
  }
}
