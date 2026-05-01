/*
 * XREFs of ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18000F3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::PrivateQueryService(
        CApplicationManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v4; // r10d
  char *v5; // rcx

  *a4 = 0LL;
  v4 = -2147467262;
  if ( *(_OWORD *)a2 == *(_OWORD *)&SID_ImmersiveApplicationListeners.Revision )
    goto LABEL_2;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ProcessLifetimeManagerControl.Revision
    && *(_QWORD *)a2->Data4 == *(_QWORD *)SID_ProcessLifetimeManagerControl.SubAuthority )
  {
    v5 = (char *)*((_QWORD *)this + 50);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v5)(v5, a3, a4);
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data4 )
  {
    v5 = (char *)*((_QWORD *)this + 46);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v5)(v5, a3, a4);
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveApplicationManagerPriv.Revision
    && *(_QWORD *)a2->Data4 == *(_QWORD *)SID_ImmersiveApplicationManagerPriv.SubAuthority )
  {
LABEL_2:
    v5 = (char *)this - 192;
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v5)(v5, a3, a4);
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data4 )
  {
    v5 = (char *)*((_QWORD *)this + 45);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v5)(v5, a3, a4);
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IImmersiveWindowManager.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)IID_IImmersiveWindowManager.Data4 )
  {
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 49) + 32LL))(
                           *((_QWORD *)this + 49),
                           0LL);
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4 )
  {
    v5 = (char *)*((_QWORD *)this + 53);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v5)(v5, a3, a4);
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data4 )
  {
    v5 = (char *)*((_QWORD *)this + 72);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v5)(v5, a3, a4);
  }
  return v4;
}
