/*
 * XREFs of ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0299508
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall XEPALOBJ::vCopy_cmykquad(XEPALOBJ *this, unsigned int *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  bool v6; // cc
  void *v7; // rcx
  signed __int32 v8; // ecx
  __int64 v9; // rdx

  v4 = *(_QWORD *)this;
  v6 = a4 <= *(_DWORD *)(*(_QWORD *)this + 28LL);
  v7 = *(void **)(*(_QWORD *)this + 120LL);
  if ( !v6 )
    a4 = *(_DWORD *)(v4 + 28);
  memmove(v7, a2, 4LL * a4);
  v8 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v8;
  v9 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( v9 != *(_QWORD *)this )
    *(_DWORD *)(v9 + 32) = v8;
}
