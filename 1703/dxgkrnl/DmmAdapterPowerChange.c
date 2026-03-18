/*
 * XREFs of DmmAdapterPowerChange @ 0x1C01D4908
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmAdapterPowerChange(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v19; // [rsp+40h] [rbp+18h] BYREF

  if ( (_BYTE)a2 == 1 )
  {
    if ( !a1 )
    {
      v3 = WdLogNewEntry5_WdError(0LL, a2);
      *(_QWORD *)(v3 + 24) &= a1;
      WdLogEvent5_WdError(v3);
      return 3223191554LL;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = *(_QWORD *)(a1 + 2280);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 88);
      if ( !v11 )
      {
        v12 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v12 + 24) = a1;
        WdLogEvent5_WdError(v12);
        return 3223192373LL;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, *(_QWORD *)(v10 + 88), v7, v8);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
      v16 = *(_QWORD **)(v11 + 80);
      v17 = (_QWORD *)v16[3];
      if ( v17 != v16 + 3 )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v17 - 1);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v16, i, v14, v15) )
        {
          *((_BYTE *)i + 388) = 0;
        }
      }
      if ( v16 )
        ReferenceCounted::Release((ReferenceCounted *)(v16 + 8), v13);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40), v13, v14, v15);
    }
  }
  return 0LL;
}
