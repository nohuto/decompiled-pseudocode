/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000825C
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00F4630 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C000864C (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::CreateNewCofuncModeSet(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETMODESET **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  char *v7; // r14
  DMMVIDPNTARGETMODESET *v8; // rax
  DMMVIDPNTARGETMODESET *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = (char *)this + 112;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    v19 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v19 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v19 + 32) = *(_QWORD *)v7;
    WdLogEvent5_WdError(v19);
    return 3223192400LL;
  }
  else
  {
    v23 = 0LL;
    v8 = (DMMVIDPNTARGETMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
    if ( v8 )
      v9 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v8, this);
    else
      v9 = 0LL;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v23, v9);
    v11 = v23;
    if ( v23 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v23 + 24))(v23 + 24) )
      {
        v23 = 0LL;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((char *)this + 112, v11);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 96LL));
        v16 = *(_QWORD *)v7;
        *a2 = *(struct DMMVIDPNTARGETMODESET **)v7;
        if ( *(_DWORD *)(v16 + 96) != 2 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
          WdLogEvent5_WdAssertion(v22);
        }
      }
      else
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v21[3] = v11;
        v21[4] = *((unsigned int *)this + 6);
        v21[5] = *(int *)(v11 + 40);
        WdLogEvent5_WdDmmEvent(v21);
        v4 = *(_DWORD *)(v11 + 40);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v20 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v20);
      v4 = -1073741801;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v23, 0LL);
    return v4;
  }
}
