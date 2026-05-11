/*
 * XREFs of PropertySetDbLevel @ 0x1C0018A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0013798 (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C001AD48 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetDbLevel(PIRP Irp, __int64 a2, int *a3)
{
  __int64 v3; // r14
  int v5; // ebp
  __int64 *FilterFromIrp; // rax
  __int64 v9; // r8
  int v10; // r11d
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r10
  _DWORD *v15; // rdi
  int v16; // ebx
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(unsigned int *)(a2 + 32);
  v5 = *a3;
  FilterFromIrp = (__int64 *)KsGetFilterFromIrp(Irp);
  v10 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v10;
  v11 = *(unsigned int *)(a2 + 24);
  v12 = FilterFromIrp[2];
  v13 = *(_QWORD *)(*FilterFromIrp + 72) + 152 * v11;
  if ( *(_DWORD *)(*(_QWORD *)(v12 + 16) + 512LL) == 1 )
  {
    if ( (unsigned int)v3 < *(_DWORD *)(v13 + 92) )
    {
      v15 = (_DWORD *)(32 * v3 + *(_QWORD *)(v13 + 128));
      v16 = v15[7];
      if ( v5 <= v16 )
      {
        v16 = v5;
        if ( v5 < v15[6] )
          v16 = v15[6];
      }
      *a3 = v16;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, int *, _QWORD, int, unsigned int *))(v13 + 136))(
              v12,
              v13,
              a3,
              (unsigned int)v3,
              1,
              &v17);
      if ( v10 >= 0 )
      {
        v15[3] = v16;
        Irp->IoStatus.Information = v17;
      }
    }
    return (unsigned int)v10;
  }
  if ( DeviceRequestPowerUp((PIRP *)v12, *FilterFromIrp, v9, v11) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
