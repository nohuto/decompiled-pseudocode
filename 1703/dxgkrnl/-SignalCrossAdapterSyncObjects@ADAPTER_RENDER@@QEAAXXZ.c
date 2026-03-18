/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01742CC
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0195AF4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0013CD0 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *i; // rbx
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v10, Global, v6, v7);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v10);
  for ( i = (__int64 *)*((_QWORD *)this + 24); i != (__int64 *)((char *)this + 192) && i; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 26) )
    {
      v9 = i[4];
      v11 = -1LL;
      v12 = v9;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 51)
                                                                                                + 8LL)
                                                                                    + 544LL))(
        0LL,
        0LL,
        1LL,
        &v12,
        0,
        &v11);
    }
  }
  if ( v10[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v10);
}
