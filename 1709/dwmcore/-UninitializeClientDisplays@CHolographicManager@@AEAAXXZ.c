/*
 * XREFs of ?UninitializeClientDisplays@CHolographicManager@@AEAAXXZ @ 0x1801C1444
 * Callers:
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXXZ @ 0x1801C0E90 (-RemoveHolographicComposition@CHolographicManager@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801C0EE4 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 */

void __fastcall CHolographicManager::UninitializeClientDisplays(RTL_SRWLOCK *this)
{
  __int64 i; // rdi
  __int64 v3; // rsi
  void *v4; // rcx

  if ( this[4].Ptr )
  {
    for ( i = 0LL; (unsigned int)i < LODWORD(this[14].Ptr); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)this[11].Ptr + i);
      if ( (*(_BYTE *)(v3 + 76) & 8) != 0 )
      {
        v4 = *(void **)(v3 + 120);
        if ( v4 )
        {
          CloseHandle(v4);
          *(_QWORD *)(v3 + 120) = 0LL;
          *(_DWORD *)(v3 + 76) &= ~8u;
        }
        CHolographicManager::RemoveHolographicDisplay(this, *((struct CHolographicDisplay **)this[11].Ptr + i));
        LODWORD(i) = i - 1;
      }
    }
  }
}
