/*
 * XREFs of ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x1800B770C
 * Callers:
 *     ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x18007EB54 (-IsStereoEnabled@CDisplayManager@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDisplaySet::IsStereoEnabled(CDisplaySet *this)
{
  return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 48LL)) != 0;
}
