/*
 * XREFs of ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x18001FCD8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180090E08 (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Play@Sequence@Animations@Components@@QEAAXXZ @ 0x180090E84 (-Play@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800C57BC (-Update@Timer@Animations@Components@@QEAAXH_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Sequence::Repeat(Components::Animations::Sequence *this)
{
  Components::Animations::Timer *v1; // r14
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdi

  v1 = (Components::Animations::Sequence *)((char *)this + 208);
  v3 = *((_DWORD *)this + 52) - *((_DWORD *)this + 54);
  Components::Animations::Sequence::ConfigureTimer(this);
  Components::Animations::Sequence::Play(this);
  v4 = 0LL;
  if ( (*((_BYTE *)this + 264) & 2) != 0 )
  {
    if ( v3 <= 0 )
      v3 = 0;
    Components::Animations::Timer::Update(v1, v3, 1);
  }
  v5 = *((int *)this + 2);
  if ( v5 > 0 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + *(_QWORD *)this + 8) + 32LL))(*(_QWORD *)(v4
                                                                                                  + *(_QWORD *)this
                                                                                                  + 8));
      v4 += 24LL;
      --v5;
    }
    while ( v5 );
  }
}
