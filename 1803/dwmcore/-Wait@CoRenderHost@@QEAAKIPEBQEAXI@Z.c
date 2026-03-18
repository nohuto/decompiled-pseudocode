/*
 * XREFs of ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x1801487E4
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoRenderHost::Wait(CoRenderHost *this, __int64 a2, void *const *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = a4;
  v4 = -1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *const *, __int64, unsigned int *))(**((_QWORD **)this + 3)
                                                                                          + 40LL))(
         *((_QWORD *)this + 3),
         a2,
         a3,
         0xFFFFFFFFLL,
         &v7);
  if ( v5 >= 0 )
    return v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x75u);
  return v4;
}
