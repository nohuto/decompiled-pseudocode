/*
 * XREFs of ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x180096874
 * Callers:
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x180096874 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180098B00 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18009C838 (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x180096874 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::ProcessGdiUpdate(struct CWindowNode *a1, bool a2)
{
  unsigned int v3; // ebx
  CDxAccumulationContext *v4; // rcx
  unsigned int i; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  signed int updated; // eax
  signed int v11; // eax
  struct CWindowNode *v12; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v4 = (CDxAccumulationContext *)*((_QWORD *)a1 + 125);
  if ( v4 && (updated = CDxAccumulationContext::UpdateDxClipShape(v4, a2), v3 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0xF9u);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v7 = *((_QWORD *)a1 + 9);
      v8 = (v7 & 2) != 0 ? *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)a1 + 9) & 1LL;
      if ( i >= v8 )
        break;
      v12 = (struct CWindowNode *)CPtrArrayBase::operator[]((char *)a1 + 72, i);
      if ( (*(unsigned __int8 (__fastcall **)(struct CWindowNode *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 139LL) )
      {
        v11 = CDxAccumulationContext::ProcessGdiUpdate(v12, a2);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x10Cu);
          return v3;
        }
      }
    }
  }
  return v3;
}
