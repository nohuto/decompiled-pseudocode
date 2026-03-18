/*
 * XREFs of ?PerformQueuedSnapshots@CComposition@@QEAAJXZ @ 0x18005BC84
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?Render@CComposition@@IEAAJPEA_N@Z @ 0x1801316B4 (-Render@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x180165104 (-PerformDelayedSnapshot@CSnapshot@@QEAAJXZ.c)
 */

__int64 __fastcall CComposition::PerformQueuedSnapshots(CComposition *this)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  int v5; // eax

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 176) )
  {
    while ( 1 )
    {
      v5 = CSnapshot::PerformDelayedSnapshot(*(CSnapshot **)(*((_QWORD *)this + 85) + 8 * v2));
      v1 = v5;
      if ( v5 < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 176) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC7Au);
  }
LABEL_2:
  *((_DWORD *)this + 176) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 680, 8LL);
  return v1;
}
