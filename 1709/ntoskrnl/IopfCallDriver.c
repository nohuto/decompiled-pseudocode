/*
 * XREFs of IopfCallDriver @ 0x140131044
 * Callers:
 *     IofCallDriverSpecifyReturn @ 0x140131020 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x1401FB3F4 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1407A4AE8 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1407A52B0 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407A531C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopPoHandleIrp @ 0x14012A7AC (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
