/*
 * XREFs of ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18009C838
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x180096874 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetBounds(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETBOUNDS *a3)
{
  unsigned int v3; // esi
  int v4; // edx
  bool v5; // bp
  bool v6; // r15
  char v7; // r14
  int v9; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  CDxAccumulationContext *v15; // rcx
  int v16; // ecx
  int v17; // eax
  signed int v18; // eax
  int v19; // ecx
  int v20; // eax
  signed int updated; // eax

  v3 = 0;
  v4 = *((_DWORD *)this + 172) - *((_DWORD *)this + 170);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v9 = 0;
  if ( *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10) >= 0 )
    v9 = *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10);
  v11 = 0;
  if ( v4 >= 0 )
    v11 = v4;
  if ( v11 != v9 )
    goto LABEL_21;
  v12 = 0;
  if ( *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11) >= 0 )
    v12 = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  v13 = 0;
  if ( *((_DWORD *)this + 173) - *((_DWORD *)this + 171) >= 0 )
    v13 = *((_DWORD *)this + 173) - *((_DWORD *)this + 171);
  if ( v13 != v12 )
  {
LABEL_21:
    v7 = 1;
    v5 = *((_QWORD *)this + 98) != 0LL;
  }
  if ( *((_DWORD *)this + 170) - *((_DWORD *)this + 158) != *((_DWORD *)a3 + 10) - *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 171) - *((_DWORD *)this + 159) != *((_DWORD *)a3 + 11) - *((_DWORD *)a3 + 3) )
  {
    v5 = 1;
    v6 = 1;
    if ( *((_QWORD *)this + 105) )
      v7 = 1;
  }
  *(_OWORD *)((char *)this + 632) = *(_OWORD *)((char *)a3 + 8);
  *(_OWORD *)((char *)this + 664) = *(_OWORD *)((char *)a3 + 24);
  *(_OWORD *)((char *)this + 680) = *(_OWORD *)((char *)a3 + 40);
  if ( *((_DWORD *)this + 174) != *((_DWORD *)a3 + 14)
    || *((_DWORD *)this + 175) != *((_DWORD *)a3 + 15)
    || *((_DWORD *)this + 176) != *((_DWORD *)a3 + 16)
    || *((_DWORD *)this + 177) != *((_DWORD *)a3 + 17) )
  {
    if ( !*((_BYTE *)this + 1010) && *((_QWORD *)this + 74) )
    {
      v16 = 0;
      if ( *((_DWORD *)a3 + 16) - *((_DWORD *)a3 + 14) >= 0 )
        v16 = *((_DWORD *)a3 + 16) - *((_DWORD *)a3 + 14);
      v17 = 0;
      if ( *((_DWORD *)this + 176) - *((_DWORD *)this + 174) >= 0 )
        v17 = *((_DWORD *)this + 176) - *((_DWORD *)this + 174);
      if ( v17 != v16 )
        goto LABEL_35;
      v19 = 0;
      if ( *((_DWORD *)a3 + 17) - *((_DWORD *)a3 + 15) >= 0 )
        v19 = *((_DWORD *)a3 + 17) - *((_DWORD *)a3 + 15);
      v20 = 0;
      if ( *((_DWORD *)this + 177) - *((_DWORD *)this + 175) >= 0 )
        v20 = *((_DWORD *)this + 177) - *((_DWORD *)this + 175);
      if ( v20 != v19 )
LABEL_35:
        CVisual::PropagateFlags((__int64)this, 1u, 0);
    }
    *(_OWORD *)((char *)this + 696) = *(_OWORD *)((char *)a3 + 56);
  }
  if ( v7 )
  {
    *((_BYTE *)this + 1008) = 0;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  if ( v5 )
  {
    if ( *((_QWORD *)this + 98) )
    {
      v18 = CDxAccumulationContext::ProcessGdiUpdate(this, v6);
      v3 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x43Au);
    }
    else
    {
      v15 = (CDxAccumulationContext *)*((_QWORD *)this + 125);
      if ( v15 )
      {
        updated = CDxAccumulationContext::UpdateDxClipShape(v15, v6);
        v3 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x440u);
      }
    }
  }
  return v3;
}
