/*
 * XREFs of ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0012B08
 * Callers:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C0010268 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C0012874 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C01514D0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C0012C84 (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C0012CB0 (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0012CE0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003BFE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003D7B0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CRegion::Combine(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // edi
  int v8; // edx
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = a3;
  if ( v5 == 2 && *(_DWORD *)(a2 + 4) == 2 )
    goto LABEL_7;
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      if ( !v5 )
      {
        v4 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
        goto LABEL_6;
      }
      if ( v5 != 1 )
        return (unsigned int)-1073741595;
      if ( a3 == 1 )
        goto LABEL_34;
      if ( a3 == 2 )
        goto LABEL_7;
      if ( a3 <= 2 )
        return (unsigned int)-1073741811;
      if ( a3 > 4 )
      {
        if ( a3 != 5 )
          return (unsigned int)-1073741811;
LABEL_34:
        v4 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
        v6 = 5;
        goto LABEL_6;
      }
      return (unsigned int)-2147020579;
    }
    if ( a3 == 1 )
      goto LABEL_7;
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
        return (unsigned int)-2147020579;
      if ( a3 == 4 )
      {
        CRegion::SetEmpty((CRegion *)a1);
        goto LABEL_7;
      }
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
    }
    CRegion::SetFullRegion((CRegion *)a1);
    goto LABEL_7;
  }
  if ( a3 == 5 )
    CRegion::SetEmpty((CRegion *)a1);
LABEL_6:
  if ( (v4 & 0x80000000) != 0 )
    return v4;
LABEL_7:
  if ( *(_DWORD *)(a1 + 4) != 2 || *(_DWORD *)(a2 + 4) != 2 )
    return v4;
  v14 = *(_QWORD *)(a2 + 8);
  if ( !v14 || (unsigned int)(v6 - 1) > 4 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 8);
  v12 = 0;
  v13 = v9;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
  if ( v9 && v11 )
  {
    if ( (unsigned int)RGNOBJ::bMerge(
                         (RGNOBJ *)&v11,
                         (struct RGNOBJ *)&v13,
                         (struct RGNOBJ *)&v14,
                         *((_BYTE *)&gafjRgnOp + v6)) )
    {
      RGNOBJ::vSwap((RGNOBJ *)&v11, (struct RGNOBJ *)&v13);
      v4 = 0;
      *(_QWORD *)(a1 + 8) = v13;
    }
    else
    {
      v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741801;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
  return v4;
}
