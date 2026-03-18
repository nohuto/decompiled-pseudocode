/*
 * XREFs of ?ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@@@Z @ 0x18001CEA8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C2004 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimationTrigger::ProcessTrigger(
        CAnimationTrigger *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONTRIGGER_TRIGGER *a3)
{
  __int64 v3; // rsi
  int v4; // edi
  __int64 v6; // rbp
  _QWORD *v8; // rcx
  int v9; // eax

  v3 = *((_QWORD *)a3 + 1);
  v4 = 0;
  if ( !v3 )
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)this + 20) )
    {
LABEL_5:
      *((_QWORD *)this + 11) = v3;
      return (unsigned int)v4;
    }
    v8 = *(_QWORD **)(*((_QWORD *)this + 7) + 8 * v6);
    if ( v8[15] )
    {
      v8[17] = v3;
      v8[26] = v3;
      v9 = CBaseAnimation::RegisterAnimateResource(*(CBaseAnimation **)(*((_QWORD *)this + 7) + 8 * v6));
      v4 = v9;
      if ( v9 < 0 )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( v4 < 0 )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x21u);
  return (unsigned int)v4;
}
