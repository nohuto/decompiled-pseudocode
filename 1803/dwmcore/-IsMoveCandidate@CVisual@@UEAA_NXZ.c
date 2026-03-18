/*
 * XREFs of ?IsMoveCandidate@CVisual@@UEAA_NXZ @ 0x1800DA080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsMoveCandidate(CVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = 0;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 9);
    if ( (v4 & 2) != 0 )
      v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v5 = *((_QWORD *)this + 9) & 1LL;
    if ( !v5
      && ((*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 37LL)
       || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
            *((_QWORD *)this + 31),
            106LL)) )
    {
      return 1;
    }
  }
  return v2;
}
