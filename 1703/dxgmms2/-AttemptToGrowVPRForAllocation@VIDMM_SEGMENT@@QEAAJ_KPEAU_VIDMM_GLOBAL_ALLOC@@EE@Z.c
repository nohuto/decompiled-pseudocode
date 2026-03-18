/*
 * XREFs of ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A1154
 * Callers:
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A3448 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C004BFC8 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(
        VIDMM_SEGMENT *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4,
        char a5)
{
  __int64 v5; // r13
  char v6; // r15
  unsigned __int64 v7; // rbp
  unsigned __int64 v10; // rdi
  char v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 result; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  _QWORD v18[9]; // [rsp+60h] [rbp-48h] BYREF
  union _LARGE_INTEGER v19; // [rsp+B8h] [rbp+10h] BYREF
  char v20; // [rsp+C0h] [rbp+18h] BYREF
  char v21; // [rsp+C8h] [rbp+20h]

  v21 = a4;
  v5 = *((unsigned int *)a3 + 8);
  v6 = a4;
  v7 = *((_QWORD *)a3 + 2);
  v10 = a2 & ~(v5 - 1);
  if ( v10 < v7 || v10 - v7 <= *((_QWORD *)this + 51) )
    return 3221225495LL;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
  v11 = a5;
  if ( !*((_QWORD *)this + 57) )
  {
    v12 = *((_QWORD *)this + 61);
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 55);
      v14 = v13 - v12;
      result = VIDMM_LINEAR_POOL::Allocate(
                 *((VIDMM_LINEAR_POOL **)this + 22),
                 v12,
                 1,
                 0,
                 v13 - v12,
                 v13,
                 v21,
                 a5,
                 0LL,
                 &v19,
                 (void **)this + 60);
      if ( (int)result < 0 )
        return result;
      v10 = v14 & ~(v5 - 1);
      v6 = v21;
    }
  }
  v16 = (v10 - v7) & ~((v5 - 1) | *((_QWORD *)this + 53));
  result = VIDMM_LINEAR_POOL::Allocate(
             *((VIDMM_LINEAR_POOL **)this + 22),
             v7,
             v5,
             0,
             v16,
             v10,
             v6,
             v11,
             a3,
             (union _LARGE_INTEGER *)a3 + 27,
             (void **)a3 + 26);
  if ( (int)result < 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2192LL)
                  + 48LL * *((unsigned int *)this + 101)
                  + 16) & 4) != 0 )
  {
    v17 = *((_QWORD *)this + 22);
    v18[1] = *((_QWORD *)this + 56);
    LOBYTE(v19.LowPart) = 0;
    v18[0] = v16;
    result = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
               v17,
               v16,
               v10,
               0,
               (__int64)VIDMM_SEGMENT::ReserveOutsideRangeIfDisplayableCB,
               (__int64)this,
               (__int64)v18,
               (__int64)&v20,
               (__int64)&v19);
    if ( (int)result >= 0 )
      return VIDMM_LINEAR_POOL::Allocate(
               *((VIDMM_LINEAR_POOL **)this + 22),
               v7,
               v5,
               0,
               v16,
               v10,
               v6,
               v11,
               a3,
               (union _LARGE_INTEGER *)a3 + 27,
               (void **)a3 + 26);
  }
  return result;
}
