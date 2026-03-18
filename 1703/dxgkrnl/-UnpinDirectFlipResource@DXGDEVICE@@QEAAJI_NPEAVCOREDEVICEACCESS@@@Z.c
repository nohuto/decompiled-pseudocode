/*
 * XREFs of ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0189384
 * Callers:
 *     DxgkUnpinDirectFlipResources @ 0x1C018C3B0 (DxgkUnpinDirectFlipResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0188048 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0189164 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipResource(
        DXGDEVICE *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbp
  unsigned int v9; // r10d
  __int64 v10; // r8
  int v11; // edx
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // rdx
  DXGDEVICE *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _EX_RUNDOWN_REF *v17; // rbx
  _QWORD *v18; // rax
  struct DXGALLOCATION *i; // rbx
  unsigned int v20; // edi
  unsigned int v21; // edi
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGALLOCATION *v27[5]; // [rsp+30h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v28; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v28 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 168));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v9 < *(_DWORD *)(v4 + 208)
    && (v10 = *(_QWORD *)(v4 + 192),
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x30))
    && (v11 & 0x1000) == 0
    && (v11 & 0xF) != 0
    && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0xF) == 4 )
  {
    v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * v9);
  }
  else
  {
    v12 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v27, v12);
  ExReleasePushLockSharedEx(v4 + 168, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v28, v27);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v27);
  v17 = v28;
  if ( !v28 )
  {
LABEL_22:
    v25 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v25 + 24) = v8;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_23;
  }
  v13 = *(_QWORD *)(v28[1].Count + 16);
  v14 = *(DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL);
  if ( *(DXGDEVICE **)(v13 + 16) != v14 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v18[3] = this;
    v18[4] = v17;
    v18[5] = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_23:
    LODWORD(v23) = -1073741811;
    goto LABEL_25;
  }
  for ( i = (struct DXGALLOCATION *)v28[3].Count; ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    v27[0] = i;
    if ( !i )
      break;
    v20 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
    if ( (v20 & 0x2000) == 0 )
      goto LABEL_22;
    v21 = (v20 >> 6) & 0xF;
    if ( a3 && !*((_DWORD *)this + 453) )
    {
      v24 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      LODWORD(v23) = -1073741790;
      *(_QWORD *)(v24 + 24) = -1073741790LL;
LABEL_21:
      WdLogEvent5_WdWarning(v24);
      goto LABEL_25;
    }
    if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, i) )
    {
      v22 = DXGDEVICE::UnpinDirectFlipAllocation(v14, v21, v15, v27, a4);
      v23 = v22;
      if ( v22 < 0 )
      {
        v24 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        *(_QWORD *)(v24 + 24) = i;
        *(_QWORD *)(v24 + 32) = v23;
        goto LABEL_21;
      }
    }
  }
  LODWORD(v23) = 0;
LABEL_25:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v28);
  return (unsigned int)v23;
}
