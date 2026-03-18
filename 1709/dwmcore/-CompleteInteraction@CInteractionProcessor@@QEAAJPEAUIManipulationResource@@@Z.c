/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@@Z @ 0x18019ADB0
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x1801692F0 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x1801A1980 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(
        CInteractionProcessor *this,
        struct IManipulationResource *a2)
{
  struct IManipulationResource *v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  signed int v6; // edi

  *((_BYTE *)this + 617) &= ~1u;
  *((_QWORD *)this + 74) = 0LL;
  v2 = a2;
  *((_DWORD *)this + 150) = 0;
  *((_QWORD *)this + 76) = 0LL;
  *((_BYTE *)this + 616) = 0;
  *(_QWORD *)((char *)this + 620) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)a2;
    v5 = 3LL;
    if ( *((_DWORD *)this + 267) != 1 )
      v5 = 0LL;
    (*(void (__fastcall **)(struct IManipulationResource *, __int64))(v4 + 32))(v2, v5);
  }
  *((_BYTE *)this + 148) &= 0xF1u;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 308) &= 0xF1u;
  *((_DWORD *)this + 76) = 0;
  *((_BYTE *)this + 468) &= 0xF1u;
  *((_DWORD *)this + 116) = 0;
  *(_QWORD *)((char *)this + 1052) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 265) = 0;
  *((_WORD *)this + 524) = 0;
  v6 = *(_QWORD *)this == 0LL ? 0x8007139F : 0;
  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD, struct IManipulationResource *, struct IManipulationResource *))(**(_QWORD **)this + 32LL))(
      *(_QWORD *)this,
      a2,
      v2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, 0LL);
    if ( (*((_BYTE *)this + 1064) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
    v6 = *((_QWORD *)this + 20) == 0LL ? 0x8007139F : 0;
  }
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct IManipulationResource *, struct IManipulationResource *))(**((_QWORD **)this + 20) + 32LL))(
      *((_QWORD *)this + 20),
      a2,
      v2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 80LL))(*((_QWORD *)this + 20), 0LL);
    if ( (*((_BYTE *)this + 1064) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 128LL))(*((_QWORD *)this + 20));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 32LL))(*((_QWORD *)this + 40));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 40) + 80LL))(*((_QWORD *)this + 40), 0LL);
    if ( (*((_BYTE *)this + 1064) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 128LL))(*((_QWORD *)this + 40));
  }
  return (unsigned int)v6;
}
