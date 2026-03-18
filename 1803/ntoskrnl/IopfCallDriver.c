/*
 * XREFs of IopfCallDriver @ 0x140167E74
 * Callers:
 *     IofCallDriverSpecifyReturn @ 0x140167E50 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x140238128 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140811AB4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140812280 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1408122EC (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140166B0C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopfCallDriver(__int64 a1, IRP *a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // r9

  if ( --a2->CurrentLocation <= 0 )
    KeBugCheckEx(0x35u, (ULONG_PTR)a2, 0LL, 0LL, 0LL);
  v2 = (__int64)&a2->Tail.Overlay.CurrentStackLocation[-1];
  a2->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)v2;
  v3 = *(_BYTE *)v2;
  *(_QWORD *)(v2 + 40) = a1;
  if ( v3 == 22 && (unsigned __int8)(*(_BYTE *)(v2 + 1) - 2) <= 1u )
    return IopPoHandleIrp(a2);
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 8LL * v3 + 112))(a1);
}
