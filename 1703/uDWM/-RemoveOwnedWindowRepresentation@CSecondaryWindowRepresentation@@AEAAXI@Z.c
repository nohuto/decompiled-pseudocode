/*
 * XREFs of ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18007F6B0
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800364D4 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003A2A4 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18003ACA8 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(
        CSecondaryWindowRepresentation *this,
        unsigned int a2)
{
  unsigned int v3; // edi
  CBaseObject *v4; // rsi
  struct CVisual *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx

  v3 = a2;
  v4 = *(CBaseObject **)(*((_QWORD *)this + 16) + 8LL * a2);
  v5 = (struct CVisual *)*((_QWORD *)v4 + 6);
  if ( v5 )
  {
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 6) + 32LL), v5);
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 6) + 32LL), *((struct CVisual **)this + 7));
  }
  v6 = *((_DWORD *)this + 38);
  if ( v3 < v6 )
  {
    v7 = *((_QWORD *)this + 16);
    if ( v3 < v6 - 1 )
    {
      do
      {
        v8 = v3++;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * v3);
      }
      while ( v3 < *((_DWORD *)this + 38) - 1 );
    }
    --*((_DWORD *)this + 38);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  CBaseObject::Release(v4);
  if ( !*((_DWORD *)this + 38) )
  {
    v9 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *((_QWORD *)this + 6) = 0LL;
    }
    v10 = (CBaseObject *)*((_QWORD *)this + 7);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *((_QWORD *)this + 7) = 0LL;
    }
  }
}
