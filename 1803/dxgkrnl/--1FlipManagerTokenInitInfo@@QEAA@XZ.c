/*
 * XREFs of ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C004954C
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0049620 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0049820 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo(FlipManagerTokenInitInfo *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
