/*
 * XREFs of ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18001656C
 * Callers:
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180010CFC (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800116DC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015324 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180028110 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028680 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180019884 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CProcess::GetActiveRenderStreamCount(CProcess *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r9d
  int v4; // r11d
  CProcess *v5; // r10
  __int64 i; // r8
  __int64 v7; // rax

  v2 = *((int *)this + 82);
  v3 = 0;
  v4 = 0;
  v5 = this;
  if ( v2 > 0 )
  {
    for ( i = 0LL; i < v2; ++i )
    {
      if ( i < 0 || v4 >= *((_DWORD *)v5 + 82) )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        JUMPOUT(0x1800165C2LL);
      }
      ++v4;
      LODWORD(this) = a2;
      v7 = *(_QWORD *)(*((_QWORD *)v5 + 40) + 8 * i);
      v3 += *(_DWORD *)(v7 + 4LL * a2);
    }
  }
  return v3;
}
