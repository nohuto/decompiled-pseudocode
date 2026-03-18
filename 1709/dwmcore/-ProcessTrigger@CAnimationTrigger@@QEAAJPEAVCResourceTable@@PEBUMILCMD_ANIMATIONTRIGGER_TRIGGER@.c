/*
 * XREFs of ?ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@@@Z @ 0x180158350
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B9A98 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimationTrigger::ProcessTrigger(
        CAnimationTrigger *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONTRIGGER_TRIGGER *a3)
{
  __int64 v3; // rsi
  int v4; // edi
  __int64 v6; // rbp
  _QWORD *v7; // rcx
  signed int v8; // eax

  v3 = *((_QWORD *)a3 + 1);
  v4 = 0;
  if ( !v3 )
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)this + 20) )
    {
LABEL_8:
      *((_QWORD *)this + 11) = v3;
      return (unsigned int)v4;
    }
    v7 = *(_QWORD **)(*((_QWORD *)this + 7) + 8 * v6);
    if ( v7[15] )
    {
      v7[17] = v3;
      v7[26] = v3;
      v8 = CBaseAnimation::RegisterAnimateResource(*(CComposition ***)(*((_QWORD *)this + 7) + 8 * v6));
      v4 = v8;
      if ( v8 < 0 )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( v4 < 0 )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x21u);
  return (unsigned int)v4;
}
