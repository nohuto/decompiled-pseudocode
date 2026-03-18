/*
 * XREFs of ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18004FD28
 * Callers:
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18004FD28 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N@Z @ 0x180053130 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x180053B1C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 * Callees:
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18004FD28 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800D0830 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxAccumulationContext::ProcessGdiUpdate(struct CWindowNode *a1, bool a2)
{
  unsigned int v3; // ebx
  CDxAccumulationContext *v4; // rcx
  unsigned int i; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v10; // eax
  int updated; // eax
  struct CWindowNode *v12; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v4 = (CDxAccumulationContext *)*((_QWORD *)a1 + 122);
  if ( v4 && (updated = CDxAccumulationContext::UpdateDxClipShape(v4, a2), v3 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xF9u);
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
      if ( (*(unsigned __int8 (__fastcall **)(struct CWindowNode *, __int64))(*(_QWORD *)v12 + 48LL))(v12, 34LL) )
      {
        v10 = CDxAccumulationContext::ProcessGdiUpdate(v12, a2);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x10Cu);
          return v3;
        }
      }
    }
  }
  return v3;
}
