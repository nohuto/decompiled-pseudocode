/*
 * XREFs of ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C01EB590
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmAdapterPowerChange(PERESOURCE *a1, char a2)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  PERESOURCE v7; // rax
  _QWORD *Address; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    if ( !a1 )
    {
      v3 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v3 + 24) &= (unsigned __int64)a1;
      WdLogEvent5_WdError(v3);
      return 3223191554LL;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = a1[288];
    if ( v7 )
    {
      Address = v7->Address;
      if ( !Address )
      {
        v9 = WdLogNewEntry5_WdError(v5);
        *(_QWORD *)(v9 + 24) = a1;
        WdLogEvent5_WdError(v9);
        return 3223192373LL;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, (__int64)v7->Address);
      _InterlockedIncrement((volatile signed __int32 *)(Address[10] + 72LL));
      v10 = Address[10];
      v11 = *(_QWORD *)(v10 + 24);
      if ( v11 != v10 + 24 )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v11 - 8);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v10, i) )
        {
          *((_BYTE *)i + 388) = 0;
        }
      }
      if ( v10 )
      {
        v13 = (void (__fastcall ***)(_QWORD, __int64))(v10 + 64);
        v14 = _InterlockedDecrement((volatile signed __int32 *)(v10 + 72));
        if ( v14 )
        {
          if ( v14 < 0 )
          {
            v15 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v15 + 24) = v14;
            WdLogEvent5_WdError(v15);
          }
        }
        else if ( v13 )
        {
          (**v13)(v13, 1LL);
        }
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40));
    }
  }
  return 0LL;
}
