/*
 * XREFs of ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x180053B1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18004FD28 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ShouldHitTest@CWindowNode@@AEBA_NXZ @ 0x18004FEA0 (-ShouldHitTest@CWindowNode@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800D0830 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetBounds(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETBOUNDS *a3)
{
  int v3; // edx
  int v5; // ecx
  unsigned int v7; // esi
  bool v8; // bp
  int v9; // eax
  bool v10; // r15
  char v11; // r14
  int v12; // ecx
  int v13; // eax
  CDxAccumulationContext *v15; // rcx
  _DWORD *v16; // r8
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int updated; // eax

  v3 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
  v5 = 0;
  v7 = 0;
  if ( *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10) >= 0 )
    v5 = *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( v3 >= 0 )
    v9 = v3;
  if ( v9 != v5 )
    goto LABEL_21;
  v12 = 0;
  if ( *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11) >= 0 )
    v12 = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  v13 = 0;
  if ( *((_DWORD *)this + 166) - *((_DWORD *)this + 164) >= 0 )
    v13 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
  if ( v13 != v12 )
  {
LABEL_21:
    v11 = 1;
    v8 = *((_QWORD *)this + 95) != 0LL;
  }
  if ( *((_DWORD *)this + 163) - *((_DWORD *)this + 151) != *((_DWORD *)a3 + 10) - *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 164) - *((_DWORD *)this + 152) != *((_DWORD *)a3 + 11) - *((_DWORD *)a3 + 3) )
  {
    v8 = 1;
    v10 = 1;
    if ( *((_QWORD *)this + 102) )
      v11 = 1;
  }
  *(_OWORD *)((char *)this + 604) = *(_OWORD *)((char *)a3 + 8);
  *(_OWORD *)((char *)this + 636) = *(_OWORD *)((char *)a3 + 24);
  *(_OWORD *)((char *)this + 652) = *(_OWORD *)((char *)a3 + 40);
  if ( *((_DWORD *)this + 167) != *((_DWORD *)a3 + 14)
    || *((_DWORD *)this + 168) != *((_DWORD *)a3 + 15)
    || *((_DWORD *)this + 169) != *((_DWORD *)a3 + 16)
    || *((_DWORD *)this + 170) != *((_DWORD *)a3 + 17) )
  {
    if ( CWindowNode::ShouldHitTest(this) )
    {
      v17 = 0;
      if ( v16[16] - v16[14] >= 0 )
        v17 = v16[16] - v16[14];
      v18 = 0;
      if ( *((_DWORD *)this + 169) - *((_DWORD *)this + 167) >= 0 )
        v18 = *((_DWORD *)this + 169) - *((_DWORD *)this + 167);
      if ( v18 != v17 )
        goto LABEL_34;
      v20 = 0;
      if ( v16[17] - v16[15] >= 0 )
        v20 = v16[17] - v16[15];
      v21 = 0;
      if ( *((_DWORD *)this + 170) - *((_DWORD *)this + 168) >= 0 )
        v21 = *((_DWORD *)this + 170) - *((_DWORD *)this + 168);
      if ( v21 != v20 )
LABEL_34:
        CVisual::PropagateFlags(this, 1, 0, 0, 0, 0, 0, 0);
    }
    *(_OWORD *)((char *)this + 668) = *(_OWORD *)((char *)a3 + 56);
  }
  if ( v11 )
  {
    *((_BYTE *)this + 984) = 0;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
  }
  if ( v8 )
  {
    if ( *((_QWORD *)this + 95) )
    {
      v19 = CDxAccumulationContext::ProcessGdiUpdate(this, v10);
      v7 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x44Cu);
    }
    else
    {
      v15 = (CDxAccumulationContext *)*((_QWORD *)this + 122);
      if ( v15 )
      {
        updated = CDxAccumulationContext::UpdateDxClipShape(v15, v10);
        v7 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x452u);
      }
    }
  }
  return v7;
}
