/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C0096008
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C0147AB8 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001616C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi

  if ( *((_QWORD *)this + 295) )
  {
    for ( i = 0;
          i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
          *(_QWORD *)(v4 + *((_QWORD *)this + 295) + 120) = 0LL )
    {
      v3 = *((_QWORD *)this + 295);
      v4 = 352LL * i;
      if ( *(_QWORD *)(v4 + v3 + 56) )
      {
        ObfDereferenceObject(*(PVOID *)(v4 + v3 + 56));
        *(_QWORD *)(v4 + *((_QWORD *)this + 295) + 56) = 0LL;
        v3 = *((_QWORD *)this + 295);
      }
      operator delete[](*(void **)(v4 + v3 + 24));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 295) + 32));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 295) + 112));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 295) + 120));
      ++i;
      *(_QWORD *)(v4 + *((_QWORD *)this + 295) + 24) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 295) + 32) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 295) + 112) = 0LL;
    }
  }
}
