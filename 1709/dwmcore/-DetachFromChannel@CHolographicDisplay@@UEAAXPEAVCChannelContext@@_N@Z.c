/*
 * XREFs of ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801C0EE4 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 */

void __fastcall CHolographicDisplay::DetachFromChannel(CHolographicDisplay *this, struct CChannelContext *a2)
{
  CHolographicManager *v3; // rcx
  void *v4; // rcx

  *((_DWORD *)this + 19) = 0;
  v3 = (CHolographicManager *)*((_QWORD *)this + 8);
  if ( v3 && *((_BYTE *)this + 152) )
    CHolographicManager::RemoveHolographicDisplay(v3, this);
  v4 = (void *)*((_QWORD *)this + 15);
  if ( v4 )
    CloseHandle(v4);
}
