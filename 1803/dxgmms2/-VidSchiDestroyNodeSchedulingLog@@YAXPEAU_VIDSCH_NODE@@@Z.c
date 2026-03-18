/*
 * XREFs of ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00309F8
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C009E970 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C00354F4 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 */

void __fastcall VidSchiDestroyNodeSchedulingLog(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rsi
  int i; // eax
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // edx
  void *v7; // rcx
  _DWORD v8[14]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  for ( i = *((_DWORD *)a1 + 1556); i; i = *((_DWORD *)a1 + 1556) )
    KeWaitForSingleObject((char *)a1 + 6232, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)a1 + 770) )
  {
    memset(v8, 0, 0x28uLL);
    v4 = *((unsigned __int16 *)a1 + 2);
    v5 = *(_QWORD *)(v1 + 8);
    v8[1] = *(unsigned __int16 *)(*(_QWORD *)(v1 + 8 * v4 + 440) + 6LL);
    v8[0] = *(unsigned __int16 *)(*(_QWORD *)(v1 + 8 * v4 + 440) + 8LL);
    ((void (__fastcall *)(__int64, _DWORD *))DxgCoreInterface[20])(v5, v8);
    v7 = (void *)*((_QWORD *)a1 + 770);
    if ( v7 )
      VIDMM_SCH_LOG::`scalar deleting destructor'(v7, v6);
    *((_QWORD *)a1 + 770) = 0LL;
  }
}
