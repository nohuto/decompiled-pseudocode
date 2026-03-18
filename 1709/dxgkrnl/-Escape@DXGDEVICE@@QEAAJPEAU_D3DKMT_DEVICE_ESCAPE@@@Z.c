/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C019D220
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(DXGDEVICE *this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 Type; // rcx
  __int64 v9; // rax
  struct DXGPROCESS *Current; // rax
  D3DKMT_HANDLE hPrimaryAllocation; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rdx
  ULONG_PTR Count; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rax
  _BYTE v27[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v28; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 4919LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Type = (unsigned int)a2->Type;
  if ( (_DWORD)Type )
  {
    if ( (_DWORD)Type == 1 )
      return 3221225659LL;
    v9 = WdLogNewEntry5_WdWarning(Type, v3, v5);
    *(_QWORD *)(v9 + 24) = a2->Type;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v9);
    return (unsigned int)-1073741811;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(Type, v3);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, Current);
    hPrimaryAllocation = a2->VidPnFromAllocation.hPrimaryAllocation;
    v15 = DXGPROCESS::GetCurrent(v14, v13);
    v16 = (hPrimaryAllocation >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)v15 + 60)
      && (v17 = *((_QWORD *)v15 + 28),
          v18 = v16,
          v19 = *(_DWORD *)(v17 + 16LL * v16 + 8),
          ((hPrimaryAllocation >> 25) & 0x60) == (v19 & 0x60))
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0
      && (v20 = 2 * v18, (*(_BYTE *)(v17 + 8 * v20 + 8) & 0x1F) == 5) )
    {
      v21 = *(struct _EX_RUNDOWN_REF **)(v17 + 8 * v20);
    }
    else
    {
      v21 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v21);
    if ( !v28
      || (Count = v28[6].Count, v25 = *(_DWORD *)(Count + 4), (v25 & 1) == 0) && (v25 & 2) == 0 && (v25 & 0x2000) == 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(Count, v22, v24);
      *(_QWORD *)(v26 + 24) = a2->VidPnFromAllocation.hPrimaryAllocation;
      *(_QWORD *)(v26 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
      return 3221225485LL;
    }
    a2->VidPnFromAllocation.VidPnSourceId = (v25 >> 6) & 0xF;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  }
  return v6;
}
