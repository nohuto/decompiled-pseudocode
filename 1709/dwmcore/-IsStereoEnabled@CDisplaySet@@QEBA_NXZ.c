/*
 * XREFs of ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x18009898C
 * Callers:
 *     ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x1800108FC (-IsStereoEnabled@CDisplayManager@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDisplaySet::IsStereoEnabled(CDisplaySet *this)
{
  return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 48LL)) != 0;
}
