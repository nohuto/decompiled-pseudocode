/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C001DB00
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0018388 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C001DD20 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C012CCF4 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0143518 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(__int64 a1, __int64 a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v7; // r13d
  unsigned int v8; // esi
  int v9; // r12d
  ULONG64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 i; // r10
  LONG v15; // r8d
  LONG v16; // r9d
  int v17; // ecx
  int v18; // r10d
  __int64 v19; // rax
  DC *v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+58h] [rbp-B0h]
  unsigned int v22; // [rsp+5Ch] [rbp-ACh]
  _DWORD v23[3]; // [rsp+64h] [rbp-A4h] BYREF
  struct _RECTL v24; // [rsp+70h] [rbp-98h] BYREF
  struct _RECTL v25; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v26[24]; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v27; // [rsp+A8h] [rbp-60h]

  v5 = a4;
  v7 = a2;
  v8 = 1;
  v9 = 0;
  if ( !a4 )
    goto LABEL_23;
  if ( !a3 )
  {
    v8 = 0;
    goto LABEL_23;
  }
  v21 = 0;
  v22 = 0;
  LOBYTE(a2) = 1;
  v20 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v20 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v20) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
      v20 = 0LL;
      goto LABEL_26;
    }
    if ( (*((_DWORD *)v20 + 134) & 4) != 0 )
      DC::vMarkTransformDirty(v20);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v20 )
  {
LABEL_26:
    v8 = 0;
    EngSetLastError(6u);
    goto LABEL_23;
  }
  if ( (unsigned int)v5 > 0xAAAAAAA )
  {
    v8 = 0;
  }
  else if ( 24 * v5 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (ULONG64)a3 + 24 * v5;
    if ( v10 > MmUserProbeAddress || v10 < (unsigned __int64)a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( v8 )
  {
    if ( ((gajRop3[(unsigned __int8)v7] | gajRop3[BYTE1(v7)]) & 0xB2) != 0 )
    {
      DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
        (DWMSCREENREADMODIFYWRITEASSIST *)v26,
        (struct XDCOBJ *)&v20);
      v11 = *v27;
      if ( *v27 )
      {
        if ( *(_DWORD *)(v11 + 508) && (*(_DWORD *)(v11 + 36) & 0x4000) != 0 )
        {
          for ( i = 0LL; ; i = (unsigned int)(v18 + 1) )
          {
            v23[1] = i;
            if ( (unsigned int)i >= (unsigned int)v5 )
              break;
            v15 = *((_DWORD *)a3 + 6 * i + 1);
            v16 = v15 + *((_DWORD *)a3 + 6 * i + 3);
            v17 = *((_DWORD *)a3 + 6 * i + 2);
            v24.left = *((_DWORD *)a3 + 6 * i);
            v24.top = v15;
            v24.right = v24.left + v17;
            v24.bottom = v16;
            ERECTL::vOrder((ERECTL *)&v24);
            if ( v18 )
              ERECTL::operator|=(&v25, &v24);
            else
              v25 = v24;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v25) )
            v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v26, &v25);
        }
      }
    }
    v8 = GrePolyPatBltInternal(
           (struct XDCOBJ *)&v20,
           v7,
           a3,
           v5,
           a5,
           *(_DWORD *)(*((_QWORD *)v20 + 10) + 40LL),
           *(_DWORD *)(*((_QWORD *)v20 + 10) + 32LL),
           *(_DWORD *)(*((_QWORD *)v20 + 10) + 44LL),
           *(_DWORD *)(*((_QWORD *)v20 + 10) + 36LL));
  }
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v20);
  v23[0] = 0;
  v12 = *(_QWORD *)v20;
  HmgDecrementExclusiveReferenceCountEx(v20, v22, v23);
  if ( v23[0] )
    bDeleteDCInternalEx(v12, 0LL);
LABEL_23:
  if ( v9 )
  {
    v19 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v19);
  }
  return v8;
}
