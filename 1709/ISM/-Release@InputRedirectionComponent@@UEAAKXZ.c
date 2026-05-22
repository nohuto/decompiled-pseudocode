/*
 * XREFs of ?Release@InputRedirectionComponent@@UEAAKXZ @ 0x180005BE0
 * Callers:
 *     ?Release@MagnifierTarget@@WBA@EAAKXZ @ 0x180007690 (-Release@MagnifierTarget@@WBA@EAAKXZ.c)
 *     ?Release@InputStateManager@@WBI@EAAKXZ @ 0x1800076F0 (-Release@InputStateManager@@WBI@EAAKXZ.c)
 *     ?Release@InputRedirectionComponent@@W7EAAKXZ @ 0x180007740 (-Release@InputRedirectionComponent@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionComponent::Release(InputRedirectionComponent *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 24);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 8) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 24);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
