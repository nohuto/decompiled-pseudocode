/*
 * XREFs of ?CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ @ 0x1C00B1A08
 * Callers:
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A9DE4 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_LINEAR_POOL::CalculateCapacity(VIDMM_LINEAR_POOL *this)
{
  char *v1; // r9
  unsigned __int64 result; // rax
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r8

  v1 = (char *)this + 40;
  result = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 5);
  v4 = 0LL;
  while ( v3 != (_QWORD *)v1 )
  {
    v5 = v3 - 3;
    v3 = (_QWORD *)*v3;
    if ( *v5 )
      v4 = v5[1];
    else
      v4 += v5[1];
    if ( v4 > result )
      result = v4;
  }
  return result;
}
