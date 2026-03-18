/*
 * XREFs of ?Play@Sequence@Animations@Components@@QEAAXXZ @ 0x180090E84
 * Callers:
 *     ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x18001FCD8 (-Repeat@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x18002C724 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180090E08 (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?SortKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1800911A4 (-SortKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Sequence::Play(Components::Animations::Sequence *this)
{
  char v1; // al
  __int64 v3; // rsi
  __int64 v4; // rdi

  v1 = *((_BYTE *)this + 264);
  if ( (v1 & 1) != 0 )
  {
    *((_BYTE *)this + 264) = v1 | 2;
  }
  else
  {
    Components::Animations::Sequence::SortKeyFrames(this);
    Components::Animations::Sequence::ConfigureTimer((int **)this);
    v3 = *((int *)this + 2);
    v4 = 0LL;
    if ( v3 > 0 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + *(_QWORD *)this + 8) + 24LL))(*(_QWORD *)(v4 + *(_QWORD *)this + 8));
        v4 += 24LL;
        --v3;
      }
      while ( v3 );
    }
    *((_BYTE *)this + 264) |= 3u;
  }
}
