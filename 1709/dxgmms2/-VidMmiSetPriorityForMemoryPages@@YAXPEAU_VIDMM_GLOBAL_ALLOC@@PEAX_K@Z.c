/*
 * XREFs of ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0072A58
 * Callers:
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FE8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B880 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00B0F70 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiSetPriorityForMemoryPages(struct _VIDMM_GLOBAL_ALLOC *a1, void *a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // ecx
  _QWORD *v10; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v11[1] = a3;
  v11[0] = a2;
  v12 = 4;
  if ( a1 && *(_WORD *)(*((_QWORD *)a1 + 63) + 4LL) == 3 )
  {
    v9 = *((_DWORD *)a1 + 108) - 1;
    if ( v9 )
    {
      if ( v9 == 2 )
        v12 = 5;
    }
    else
    {
      v12 = 3;
    }
  }
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
         -1LL,
         1LL,
         1LL,
         v11,
         &v12,
         4);
  v8 = v6;
  if ( v6 < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v7);
    v10[3] = a1;
    v10[4] = a2;
    v10[5] = a3;
    v10[6] = v8;
    WdLogEvent5_WdWarning(v10);
  }
}
