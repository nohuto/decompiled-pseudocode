/*
 * XREFs of ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0295BAC
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void __fastcall XEPALOBJ::vCopy_cmykquad(XEPALOBJ *this, unsigned int *a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r8d
  void *v6; // rcx
  signed __int32 v7; // ecx
  __int64 v8; // rdx

  v5 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  v6 = *(void **)(*(_QWORD *)this + 120LL);
  if ( a4 > v5 )
    a4 = v5;
  memmove(v6, a2, 4LL * a4);
  v7 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v7;
  v8 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( v8 != *(_QWORD *)this )
    *(_DWORD *)(v8 + 32) = v7;
}
