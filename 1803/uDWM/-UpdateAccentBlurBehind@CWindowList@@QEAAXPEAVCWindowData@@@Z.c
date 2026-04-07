/*
 * XREFs of ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180026D58
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180026D8C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800286E0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z @ 0x1800807C8 (-OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::UpdateAccentBlurBehind(CWindowList *this, struct CWindowData *a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  CAccent *v7; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 142); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 68) + 8 * i);
    v6 = *(_QWORD *)(v5 + 392);
    if ( v6 && *(_QWORD *)(v5 + 120) == *((_QWORD *)a2 + 15) )
    {
      v7 = *(CAccent **)(v6 + 264);
      if ( v7 )
        CAccent::OnBlurBehindUpdated(v7, a2);
    }
  }
}
