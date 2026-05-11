/*
 * XREFs of PropertySetFeatureValue @ 0x1C001CA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0017B84 (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C001F0F8 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetFeatureValue(PIRP Irp, __int64 a2, __int64 a3)
{
  __int64 *FilterFromIrp; // rax
  __int64 v7; // r8
  int v8; // r10d
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v12; // [rsp+58h] [rbp+10h]

  FilterFromIrp = (__int64 *)KsGetFilterFromIrp(Irp);
  v8 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v8;
  v9 = FilterFromIrp[2];
  v10 = *(_QWORD *)(*FilterFromIrp + 72) + 152LL * *(unsigned int *)(a2 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 520LL) == 1 )
  {
    if ( *(_DWORD *)(a2 + 32) < *(_DWORD *)(v10 + 92) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v10 + 136))(v9, v10, a3);
      if ( v8 >= 0 )
        Irp->IoStatus.Information = v12;
    }
    return (unsigned int)v8;
  }
  if ( DeviceRequestPowerUp((PIRP *)v9, v10, v7, *FilterFromIrp) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
