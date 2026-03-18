/*
 * XREFs of ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072D30
 * Callers:
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058BD8 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007884C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_SEGMENT::TrackAndValidatePagesOnLock(
        unsigned __int64 this,
        struct _VIDMM_MDL *a2,
        __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC *a4)
{
  _DWORD *v4; // rax
  VIDMM_SEGMENT *v5; // r8
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  unsigned int v11; // eax
  __int64 v12; // rax

  v4 = (_DWORD *)*((_QWORD *)a2 + 1);
  v5 = (VIDMM_SEGMENT *)this;
  v6 = 0LL;
  v7 = v4 + 12;
  v8 = (((v4[8] + v4[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v4[10] + 4095) >> 12;
  if ( !v8 )
    return 1;
  while ( 1 )
  {
    v9 = *((_QWORD *)v5 + 31);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 16LL * *((unsigned int *)v5 + 61)) = *(_QWORD *)&v7[2 * v6];
      *(_QWORD *)(*((_QWORD *)v5 + 31) + 16LL * (unsigned int)(*((_DWORD *)v5 + 61))++ + 8) = a4;
      v11 = *((_DWORD *)v5 + 61);
      this = v11;
      if ( v11 >= *((_DWORD *)v5 + 60) )
        this = 0LL;
      *((_DWORD *)v5 + 61) = this;
    }
    if ( *(_QWORD *)&v7[2 * v6] << 12 > *((_QWORD *)v5 + 15) )
      break;
    if ( ++v6 >= v8 )
      return 1;
  }
  v12 = WdLogNewEntry5_WdAssertion(this, v9);
  *(_QWORD *)(v12 + 24) = v6;
  *(_QWORD *)(v12 + 32) = *(_QWORD *)&v7[2 * v6];
  WdLogEvent5_WdAssertion(v12);
  return 0;
}
