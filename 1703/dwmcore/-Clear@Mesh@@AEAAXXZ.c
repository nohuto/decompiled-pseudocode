/*
 * XREFs of ?Clear@Mesh@@AEAAXXZ @ 0x18003CC5C
 * Callers:
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003FA50 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::Clear(Mesh *this)
{
  __int64 v1; // rax
  char v2; // al

  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 6) = 0;
  v1 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 56) = 0;
    *(_QWORD *)(v1 + 88) = 0LL;
    *(_QWORD *)(v1 + 96) = 0LL;
    *(_DWORD *)(v1 + 104) = 0;
    *(_DWORD *)(v1 + 128) = 0;
  }
  v2 = *((_BYTE *)this + 236);
  *((_BYTE *)this + 237) &= ~1u;
  *((_BYTE *)this + 236) = v2 & 4 | 1;
}
