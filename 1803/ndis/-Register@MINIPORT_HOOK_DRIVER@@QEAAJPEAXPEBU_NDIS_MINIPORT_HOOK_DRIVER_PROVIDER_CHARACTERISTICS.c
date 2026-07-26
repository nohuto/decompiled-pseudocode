/*
 * XREFs of ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x1C00FE380
 * Callers:
 *     ?ndisMpHookNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C00CB020 (-ndisMpHookNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 * Callees:
 *     ?FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ @ 0x1C00B5D04 (-FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE20 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall MINIPORT_HOOK_DRIVER::Register(
        MINIPORT_HOOK_DRIVER *this,
        void *a2,
        const struct _NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS *a3)
{
  NTSTATUS v6; // edi
  void *v7; // rdx
  void *v8; // rcx
  _OWORD *v9; // rax
  KLockHolder v11; // [rsp+30h] [rbp-28h] BYREF
  void *ProviderDispatch; // [rsp+60h] [rbp+8h] BYREF

  v11.m_State = Unlocked;
  v11.m_Lock = (KPushLockBase *)&g_MiniportHookDriversLock;
  v11.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v11);
  if ( *(_BYTE *)this )
  {
    v6 = -1073741768;
  }
  else
  {
    *(_BYTE *)this = 1;
    *((_QWORD *)this + 2) = a2;
    KLockHolder::ReleaseExclusive(&v11);
    v7 = (void *)*(int *)a3;
    v8 = (void *)*((_QWORD *)this + 2);
    ProviderDispatch = 0LL;
    v6 = NmrClientAttachProvider(v8, v7, &off_1C0080D80, (PVOID *)this + 3, (const void **)&ProviderDispatch);
    if ( v6 >= 0 )
    {
      v9 = ProviderDispatch;
      *((_OWORD *)this + 2) = *(_OWORD *)ProviderDispatch;
      *((_OWORD *)this + 3) = v9[1];
      *((_QWORD *)this + 8) = *((_QWORD *)v9 + 4);
      MINIPORT_HOOK_DRIVER::FillDefaultHandlers(this);
      v6 = 0;
    }
    else
    {
      KLockHolder::AcquireExclusive(&v11);
      *(_BYTE *)this = 0;
    }
  }
  KLockHolder::~KLockHolder(&v11);
  return (unsigned int)v6;
}
