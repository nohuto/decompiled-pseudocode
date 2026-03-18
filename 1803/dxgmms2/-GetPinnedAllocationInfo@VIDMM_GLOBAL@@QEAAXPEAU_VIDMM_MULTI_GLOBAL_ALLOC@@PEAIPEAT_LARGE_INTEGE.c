/*
 * XREFs of ?GetPinnedAllocationInfo@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@@Z @ 0x1C0079A98
 * Callers:
 *     VidMmGetPinnedAllocationInfo @ 0x1C0013BF0 (VidMmGetPinnedAllocationInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetPinnedAllocationInfo(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4)
{
  int v4; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v4 = 0;
  v8 = *(unsigned int *)(*((_QWORD *)a2 + 63) + 12LL);
  if ( !(_DWORD)v8 && (**((_DWORD **)a2 + 63) & 0x40000000) == 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, a3);
    v10[3] = 270LL;
    v10[4] = 10LL;
    v10[5] = a2;
    v10[6] = 0LL;
    v10[7] = 0LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  v9 = *((_QWORD *)a2 + 17);
  if ( (*(_DWORD *)(v9 + 80) & 0x1000) == 0 )
    v4 = *(_DWORD *)(v9 + 16) + 1;
  *a3 = v4;
  a4->QuadPart = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
}
