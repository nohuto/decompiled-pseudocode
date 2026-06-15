/*
 * XREFs of ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005DF1C
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x14005DBB0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140018648 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x1400190D0 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140019140 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x1400452C8 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 */

__int64 __fastcall CSparseIndexMapRT::SetMapSize(CSparseIndexMapRT *this, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  void *v5; // rcx
  void *v6; // rax
  void *v7; // rax
  void *v8; // rdx

  v2 = 0;
  v3 = a2;
  if ( a2 <= *((_DWORD *)this + 4) )
    goto LABEL_11;
  if ( *((_QWORD *)this + 3) )
    *((_QWORD *)this + 3) = 0LL;
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
  v6 = (void *)AERTCreateZoneHeap(4 * v3);
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
  {
    v7 = (void *)AERTZoneAllocate(4 * v3, v6);
    *((_QWORD *)this + 3) = v7;
    if ( !v7 )
    {
      v2 = -2147024882;
      AERTDestroyZoneHeap(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      return v2;
    }
    AERTLockZoneHeap(v7, v8);
    *((_DWORD *)this + 4) = v3;
LABEL_11:
    *(_DWORD *)this = v3;
    return v2;
  }
  return (unsigned int)-2147024882;
}
