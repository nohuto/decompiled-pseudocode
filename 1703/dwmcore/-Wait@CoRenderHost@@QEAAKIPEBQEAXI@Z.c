/*
 * XREFs of ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x18013B4D4
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180068B90 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013EBD4 (-WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoRenderHost::Wait(CoRenderHost *this, __int64 a2, void *const *a3)
{
  int v3; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *const *))(**((_QWORD **)this + 3) + 40LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  if ( v3 >= 0 )
    return v5;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x75u);
  return 0xFFFFFFFFLL;
}
