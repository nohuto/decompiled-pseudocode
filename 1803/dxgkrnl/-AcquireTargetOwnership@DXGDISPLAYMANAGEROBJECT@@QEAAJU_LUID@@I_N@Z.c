/*
 * XREFs of ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_N@Z @ 0x1C01E38C4
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C01E4420 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C0038700 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z @ 0x1C0098734 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(
        struct DXGFASTMUTEX **this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  const struct DXGTARGETENTRY *v8; // rax
  __int64 v9; // rcx
  const struct DXGTARGETENTRY *v10; // rdi
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  LONG HighPart; // [rsp+5Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = a3;
  if ( this[4] )
  {
    v8 = (const struct DXGTARGETENTRY *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
    v10 = v8;
    if ( v8 )
    {
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      *(_QWORD *)v8 = &SetElement::`vftable';
      *((struct _LUID *)v8 + 3) = a2;
      *((_DWORD *)v8 + 8) = v4;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v12 = DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v10, (struct DXGDISPLAYMANAGEROBJECT *)this, 0LL, 1);
      if ( v12 >= 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, this[2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
        if ( !Set<DXGTARGETENTRY>::Add((__int64)(this + 5), (__int64)v10) )
          (**(void (__fastcall ***)(const struct DXGTARGETENTRY *, __int64))v10)(v10, 1LL);
        if ( v15[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
        return 0LL;
      }
      else
      {
        (**(void (__fastcall ***)(const struct DXGTARGETENTRY *, __int64))v10)(v10, 1LL);
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v14[4] = HighPart;
        v14[5] = a2.LowPart;
        v14[3] = v4;
        WdLogEvent5_WdError(v14);
        return (unsigned int)v12;
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v11 + 24) = 114LL;
      WdLogEvent5_WdLowResource(v11);
      return 3221225495LL;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = 107LL;
    WdLogEvent5_WdError(v6);
    return 2147483685LL;
  }
}
