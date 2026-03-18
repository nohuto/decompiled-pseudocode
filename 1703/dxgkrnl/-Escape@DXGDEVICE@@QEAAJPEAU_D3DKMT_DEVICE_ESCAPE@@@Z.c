/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C01878E0
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(DXGDEVICE *this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 Type; // rcx
  __int64 v10; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  D3DKMT_HANDLE hPrimaryAllocation; // esi
  __int64 v16; // rcx
  struct DXGPROCESS *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // r8
  int v20; // edx
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rdx
  ULONG_PTR Count; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _BYTE v31[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v32; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v8 + 24) = 4899LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Type = (unsigned int)a2->Type;
  if ( (_DWORD)Type )
  {
    if ( (_DWORD)Type == 1 )
      return 3221225659LL;
    v10 = WdLogNewEntry5_WdWarning(Type, v3, v5, v6);
    *(_QWORD *)(v10 + 24) = a2->Type;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)-1073741811;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(Type);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, Current, v13, v14);
    hPrimaryAllocation = a2->VidPnFromAllocation.hPrimaryAllocation;
    v17 = DXGPROCESS::GetCurrent(v16);
    v18 = (hPrimaryAllocation >> 6) & 0xFFFFFF;
    if ( v18 < *((_DWORD *)v17 + 52)
      && (v19 = *((_QWORD *)v17 + 24),
          v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
          ((hPrimaryAllocation >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
      && (v20 & 0x1000) == 0
      && (v20 & 0xF) != 0
      && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 5 )
    {
      v21 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * v18);
    }
    else
    {
      v21 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v32, v21);
    if ( !v32 || (Count = v32[6].Count, v26 = *(_DWORD *)(Count + 4), (v26 & 0x2003) == 0) )
    {
      v27 = WdLogNewEntry5_WdWarning(Count, v22, v24, v25);
      *(_QWORD *)(v27 + 24) = a2->VidPnFromAllocation.hPrimaryAllocation;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32, v28, v29, v30);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
      return 3221225485LL;
    }
    a2->VidPnFromAllocation.VidPnSourceId = (v26 >> 6) & 0xF;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32, v22, v24, v25);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  }
  return v7;
}
