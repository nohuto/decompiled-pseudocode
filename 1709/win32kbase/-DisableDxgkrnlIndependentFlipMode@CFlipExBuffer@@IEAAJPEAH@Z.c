/*
 * XREFs of ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C0152E54
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003A124 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIIPEAH@Z @ 0x1C0153150 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIIPEAH@Z.c)
 * Callees:
 *     GreDxgkSetIndependentFlipMode @ 0x1C00F3680 (GreDxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(CFlipExBuffer *this, int *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  unsigned int v6; // eax
  void *v7; // rcx
  unsigned int v8; // esi
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = *((_QWORD *)this + 2);
  v10 = 0;
  v11 = v2;
  v6 = GreDxgkSetIndependentFlipMode(
         *((_QWORD *)this + 60),
         (__int64)&v11,
         v4,
         0,
         *((_DWORD *)this + 122),
         *((_DWORD *)this + 124),
         *((_DWORD *)this + 123),
         (__int64)&v10,
         (__int64)this + 472);
  v7 = (void *)*((_QWORD *)this + 60);
  *((_DWORD *)this + 87) = 0;
  v8 = v6;
  ObCloseHandle(v7, 0);
  *((_QWORD *)this + 60) = 0LL;
  *((_BYTE *)this + 503) = 0;
  if ( a2 )
    *a2 = v10;
  return v8;
}
