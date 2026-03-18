/*
 * XREFs of ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18001FE1C
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x18001FCFC (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18001FE80 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1801527B4 (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CSurfaceManager::ReleaseAdapterInfo(CSurfaceManager *this)
{
  unsigned int i; // edi
  void *v3; // rcx

  for ( i = 0; i < *((_DWORD *)this + 116); ++i )
  {
    v3 = *(void **)(*((_QWORD *)this + 55) + 16LL * i + 8);
    if ( v3 )
      CloseHandle(v3);
  }
  *((_DWORD *)this + 116) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 440, 16LL);
  *((_BYTE *)this + 504) = 0;
}
