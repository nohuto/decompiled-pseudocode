/*
 * XREFs of ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C006E9E4
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0070738 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0070E04 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(
        VIDMM_RECYCLE_MULTIRANGE *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v5; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx

  v3 = (_QWORD *)*((_QWORD *)this + 8);
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  while ( 1 )
  {
    v7 = v3[4];
    if ( v7 >= a3 || v3[5] <= a2 )
    {
      v10 = *((_DWORD *)this + 54);
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v3[19] = 0LL;
        }
        else
        {
          v3[18] = 0LL;
        }
      }
      else
      {
        v3[17] = 0LL;
      }
    }
    if ( v7 == a2 )
      *((_QWORD *)this + 8) = v3;
    if ( v3[5] == a3 )
      *((_QWORD *)this + 9) = v3;
    if ( v3 == v5 )
      break;
    v8 = v3[15];
    v9 = v3[9];
    v3 = 0LL;
    if ( v8 != v9 + 72 )
      v3 = (_QWORD *)(v8 - 120);
  }
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = a3;
  *((_QWORD *)this + 6) = a2;
}
