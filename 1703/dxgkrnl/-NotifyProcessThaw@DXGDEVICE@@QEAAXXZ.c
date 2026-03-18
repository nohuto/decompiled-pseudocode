/*
 * XREFs of ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C00BFFF0
 * Callers:
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00D7020 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002D98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00069D0 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C000D5A0 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D648 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::NotifyProcessThaw(DXGDEVICE *this)
{
  DXGADAPTER *v2; // rcx
  bool v3; // si
  __int64 v4; // rbp
  bool v5; // r8
  int *i; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  DXGDEVICE *v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*((_BYTE *)v2 + 186) )
  {
    v14 = this;
    v15 = 0;
    if ( DXGADAPTER::IsDxgmms2(v2) )
    {
      v3 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v14) != 0;
    }
    else
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v14);
      v3 = 1;
    }
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4 + 120, 0LL);
    if ( *((_DWORD *)this + 102) == 1 )
    {
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v16, (DXGDEVICE *)((char *)this + 304), v5);
      for ( i = (int *)*((_QWORD *)this + 43); i != (int *)((char *)this + 344) && i; i = *(int **)i )
      {
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          (struct DXGCONTEXT *)i,
          1,
          i[84]);
        *((_BYTE *)i + 365) = 0;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
      if ( v3 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          LOBYTE(v12) = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v11 + 432) + 8LL) + 1096LL))(
            *((_QWORD *)this + 74),
            0LL,
            v12);
        }
      }
      else
      {
        v13 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
        *(_QWORD *)(v13 + 24) = this;
        WdLogEvent5_WdWarning(v13);
      }
    }
    ExReleasePushLockSharedEx(v4 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( v14 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v14);
  }
}
