/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@@Z @ 0x18018D7AC
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x1801668B0 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x180192D90 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(
        CInteractionProcessor *this,
        struct IManipulationResource *a2)
{
  unsigned int v2; // ebx
  struct IManipulationResource *v3; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  *((_BYTE *)this + 425) &= ~1u;
  v2 = 0;
  *((_QWORD *)this + 50) = 0LL;
  v3 = a2;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 52) = 0LL;
  *((_BYTE *)this + 424) = 0;
  *(_QWORD *)((char *)this + 428) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  if ( a2 )
  {
    v5 = *(_QWORD *)a2;
    v6 = 3LL;
    if ( *((_DWORD *)this + 219) != 1 )
      v6 = 0LL;
    (*(void (__fastcall **)(struct IManipulationResource *, __int64))(v5 + 32))(v3, v6);
  }
  *((_BYTE *)this + 148) &= 0xF1u;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 308) &= 0xF1u;
  *((_DWORD *)this + 76) = 0;
  *(_QWORD *)((char *)this + 860) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 217) = 0;
  *((_WORD *)this + 428) = 0;
  if ( !*(_QWORD *)this )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD, struct IManipulationResource *, struct IManipulationResource *))(**(_QWORD **)this
                                                                                                 + 32LL))(
    *(_QWORD *)this,
    a2,
    v3);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this, 0LL);
  if ( (*((_BYTE *)this + 872) & 8) == 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 120LL))(*(_QWORD *)this);
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 72LL))(*((_QWORD *)this + 20), 0LL);
    if ( (*((_BYTE *)this + 872) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 120LL))(*((_QWORD *)this + 20));
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v2;
}
