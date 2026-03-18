/*
 * XREFs of ?Render@CCoRenderContent@@UEAAJXZ @ 0x18017D210
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderContent::Render(CCoRenderContent *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  signed int v3; // eax
  unsigned int v4; // ebx

  v1 = *((_QWORD *)this + 1);
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 5) + 536LL) + 24LL);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x51u);
  return v4;
}
