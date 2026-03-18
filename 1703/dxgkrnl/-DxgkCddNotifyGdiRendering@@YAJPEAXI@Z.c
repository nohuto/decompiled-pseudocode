/*
 * XREFs of ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1C0182790
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddNotifyGdiRendering(struct DXGPROCESS *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // r8d
  __int64 v7; // r9
  int v8; // edx
  struct _EX_RUNDOWN_REF *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int v15; // ebx
  ULONG_PTR Count; // rcx
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, a1, a3, a4);
  v6 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)a1 + 52)
    && (v7 = *((_QWORD *)a1 + 24),
        v8 = *(_DWORD *)(v7 + 16LL * v6 + 8),
        (((unsigned int)v4 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x30))
    && (v8 & 0x1000) == 0
    && (v8 & 0xF) != 0
    && (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0xF) == 5 )
  {
    v9 = *(struct _EX_RUNDOWN_REF **)(v7 + 16LL * v6);
  }
  else
  {
    v9 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19, v9);
  if ( v19 )
  {
    Count = v19[6].Count;
    if ( Count )
      *(_DWORD *)(Count + 4) &= ~0x400u;
    v15 = 0;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = v4;
    v15 = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19, v10, v12, v13);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v15;
}
