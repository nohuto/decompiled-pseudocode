/*
 * XREFs of ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FFBBC
 * Callers:
 *     DxgkUnpinDirectFlipResources @ 0x1C00FF6D0 (DxgkUnpinDirectFlipResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01000C0 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0100168 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipResource(
        DXGDEVICE *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // rdx
  DXGDEVICE *v14; // rcx
  __int64 v15; // r8
  struct _EX_RUNDOWN_REF *v16; // rbx
  _QWORD *v17; // rax
  struct DXGALLOCATION *i; // rbx
  unsigned int v19; // edi
  unsigned int v20; // edi
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGALLOCATION *v26[5]; // [rsp+30h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v27 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 200));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *(_DWORD *)(v4 + 240)
    && (v10 = *(_QWORD *)(v4 + 224),
        v11 = *(_DWORD *)(v10 + 16 * v9 + 8),
        (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60))
    && (v11 & 0x2000) == 0
    && (v11 & 0x1F) != 0
    && (*(_BYTE *)(v10 + 16LL * (unsigned int)v9 + 8) & 0x1F) == 4 )
  {
    v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
  }
  else
  {
    v12 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v26, v12);
  ExReleasePushLockSharedEx(v4 + 200, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v27, v26);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v26);
  v16 = v27;
  if ( !v27 )
  {
LABEL_22:
    v24 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v24 + 24) = v8;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_23;
  }
  v13 = *(_QWORD *)(v27[1].Count + 16);
  v14 = *(DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL);
  if ( *(DXGDEVICE **)(v13 + 16) != v14 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v17[3] = this;
    v17[4] = v16;
    v17[5] = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_23:
    LODWORD(v22) = -1073741811;
    goto LABEL_25;
  }
  for ( i = (struct DXGALLOCATION *)v27[3].Count; ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    v26[0] = i;
    if ( !i )
      break;
    v19 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
    if ( (v19 & 0x2000) == 0 )
      goto LABEL_22;
    v20 = (v19 >> 6) & 0xF;
    if ( a3 && !*((_DWORD *)this + 421) )
    {
      v23 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      LODWORD(v22) = -1073741790;
      *(_QWORD *)(v23 + 24) = -1073741790LL;
LABEL_21:
      WdLogEvent5_WdWarning(v23);
      goto LABEL_25;
    }
    if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, i) )
    {
      v21 = DXGDEVICE::UnpinDirectFlipAllocation(v14, v20, v15, v26, a4);
      v22 = v21;
      if ( v21 < 0 )
      {
        v23 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v23 + 24) = i;
        *(_QWORD *)(v23 + 32) = v22;
        goto LABEL_21;
      }
    }
  }
  LODWORD(v22) = 0;
LABEL_25:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v27);
  return (unsigned int)v22;
}
