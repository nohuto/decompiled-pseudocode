/*
 * XREFs of ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1C01869F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddNotifyGdiRendering(struct DXGPROCESS *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // r8d
  struct _EX_RUNDOWN_REF *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int v12; // ebx
  ULONG_PTR Count; // rcx
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, a1);
  v4 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 < *((_DWORD *)a1 + 60)
    && (v5 = *((_QWORD *)a1 + 28),
        v6 = *(_DWORD *)(v5 + 16 * v4 + 8),
        (((unsigned int)v2 >> 25) & 0x60) == (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60))
    && (v6 & 0x2000) == 0
    && (v6 & 0x1F) != 0
    && (*(_BYTE *)(v5 + 16LL * (unsigned int)v4 + 8) & 0x1F) == 5 )
  {
    v7 = *(struct _EX_RUNDOWN_REF **)(v5 + 16LL * (unsigned int)v4);
  }
  else
  {
    v7 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v16, v7);
  if ( v16 )
  {
    Count = v16[6].Count;
    if ( Count )
      *(_DWORD *)(Count + 4) &= ~0x400u;
    v12 = 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = v2;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v12;
}
