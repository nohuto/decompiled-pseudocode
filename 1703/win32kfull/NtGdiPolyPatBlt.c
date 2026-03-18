/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C0092080
 * Callers:
 *     <none>
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0081748 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0092270 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0124ABC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013C668 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(__int64 a1, __int64 a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v7; // r13d
  unsigned int v8; // esi
  int v9; // r12d
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 i; // r10
  LONG v14; // r9d
  LONG v15; // r8d
  int v16; // ecx
  int v17; // r10d
  __int64 v18; // rax
  DC *v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+58h] [rbp-B0h]
  int v21; // [rsp+5Ch] [rbp-ACh]
  int v22; // [rsp+64h] [rbp-A4h]
  struct _RECTL v23; // [rsp+70h] [rbp-98h] BYREF
  struct _RECTL v24; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v25[24]; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v26; // [rsp+A8h] [rbp-60h]

  v5 = a4;
  v7 = a2;
  v8 = 1;
  v9 = 0;
  if ( !a4 )
    goto LABEL_22;
  if ( !a3 )
  {
    v8 = 0;
    goto LABEL_22;
  }
  v20 = 0;
  v21 = 0;
  LOBYTE(a2) = 1;
  v19 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v19 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v19) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
      v19 = 0LL;
      goto LABEL_37;
    }
    if ( (*((_DWORD *)v19 + 134) & 4) != 0 )
      DC::vMarkTransformDirty(v19);
  }
  if ( !v19 )
  {
LABEL_37:
    v8 = 0;
    EngSetLastError(6u);
    goto LABEL_22;
  }
  if ( (unsigned int)v5 > 0xAAAAAAA )
  {
    v8 = 0;
  }
  else if ( 24 * v5 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (char *)a3 + 24 * v5;
    if ( (unsigned __int64)v10 > W32UserProbeAddress || v10 < (char *)a3 )
      *W32UserProbeAddress = 0;
  }
  if ( v8 )
  {
    if ( ((gajRop3[(unsigned __int8)v7] | gajRop3[BYTE1(v7)]) & 0xB2) != 0 )
    {
      DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
        (DWMSCREENREADMODIFYWRITEASSIST *)v25,
        (struct XDCOBJ *)&v19);
      v11 = *v26;
      if ( *v26 )
      {
        if ( *(_DWORD *)(v11 + 508) && (*(_DWORD *)(v11 + 36) & 0x4000) != 0 )
        {
          for ( i = 0LL; ; i = (unsigned int)(v17 + 1) )
          {
            v22 = i;
            if ( (unsigned int)i >= (unsigned int)v5 )
              break;
            v14 = *((_DWORD *)a3 + 6 * i + 1);
            v15 = v14 + *((_DWORD *)a3 + 6 * i + 3);
            v16 = *((_DWORD *)a3 + 6 * i + 2);
            v23.left = *((_DWORD *)a3 + 6 * i);
            v23.top = v14;
            v23.right = v23.left + v16;
            v23.bottom = v15;
            ERECTL::vOrder((ERECTL *)&v23);
            if ( v17 )
              ERECTL::operator|=(&v24, &v23);
            else
              v24 = v23;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v24) )
            v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v25, &v24);
        }
      }
    }
    v8 = GrePolyPatBltInternal(
           (struct XDCOBJ *)&v19,
           v7,
           a3,
           v5,
           a5,
           *(_DWORD *)(*((_QWORD *)v19 + 10) + 40LL),
           *(_DWORD *)(*((_QWORD *)v19 + 10) + 32LL),
           *(_DWORD *)(*((_QWORD *)v19 + 10) + 44LL),
           *(_DWORD *)(*((_QWORD *)v19 + 10) + 36LL));
  }
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v19);
  _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
LABEL_22:
  if ( v9 )
  {
    v18 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v18);
  }
  return v8;
}
