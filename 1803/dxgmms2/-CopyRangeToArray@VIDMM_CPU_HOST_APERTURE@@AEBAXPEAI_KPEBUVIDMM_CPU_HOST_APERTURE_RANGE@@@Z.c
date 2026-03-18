/*
 * XREFs of ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0001EB4
 * Callers:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0002068 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
        VIDMM_CPU_HOST_APERTURE *this,
        unsigned int *a2,
        __int64 a3,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a4)
{
  unsigned int v4; // edi
  unsigned int *v5; // rbp
  int v6; // r15d
  unsigned int *i; // rbx
  _QWORD *v10; // rax

  v4 = *(_DWORD *)a4;
  v5 = &a2[a3];
  v6 = *((_DWORD *)a4 + 1);
  for ( i = a2; ; ++i )
  {
    if ( i == v5 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v10[7] = 0LL;
      v10[3] = 270LL;
      v10[4] = 47LL;
      v10[5] = this;
      v10[6] = a4;
      WdLogEvent5_WdCriticalError(v10);
    }
    *i = v4;
    if ( v4 == v6 )
      break;
    v4 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v4);
  }
}
