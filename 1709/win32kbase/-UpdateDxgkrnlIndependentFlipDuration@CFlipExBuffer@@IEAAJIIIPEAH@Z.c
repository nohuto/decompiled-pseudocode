/*
 * XREFs of ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIIPEAH@Z @ 0x1C0153308
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIIPEAH@Z @ 0x1C0153150 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIIPEAH@Z.c)
 * Callees:
 *     GreDxgkSetIndependentFlipMode @ 0x1C00F3680 (GreDxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(
        CFlipExBuffer *this,
        int a2,
        int a3,
        int a4,
        int *a5)
{
  __int64 result; // rax
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 1);
  result = GreDxgkSetIndependentFlipMode(
             *((_QWORD *)this + 60),
             (__int64)&v8,
             *((_QWORD *)this + 2),
             1u,
             a2,
             a3,
             a4,
             (__int64)a5,
             (__int64)this + 472);
  if ( (int)result >= 0 )
    *((_DWORD *)this + 124) = a3;
  return result;
}
