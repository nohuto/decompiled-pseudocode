/*
 * XREFs of ?Stop@Sequence@Animations@Components@@QEAAXXZ @ 0x180090FF0
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Sequence::Stop(Components::Animations::Sequence *this)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *((int *)this + 2);
  if ( v1 > 0 )
  {
    v3 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + *(_QWORD *)this + 8) + 40LL))(*(_QWORD *)(v3
                                                                                                  + *(_QWORD *)this
                                                                                                  + 8));
      v3 += 24LL;
      --v1;
    }
    while ( v1 );
  }
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_WORD *)this + 114) = 0;
  *((_BYTE *)this + 264) &= 0xFCu;
}
