/*
 * XREFs of NtGdiEngGradientFill @ 0x1C028DF30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     EngGradientFill @ 0x1C00B6FF0 (EngGradientFill.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00B9358 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00BA400 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00BA55C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00BA5C0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C00BA5EC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C028D070 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 */

__int64 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        __int64 a4,
        ULONG nVertex,
        void *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v13; // rsi
  int v15; // ebx
  unsigned int v16; // r14d
  bool v17; // cc
  __int64 v18; // rbx
  struct _TRIVERTEX *v19; // r12
  __int64 v20; // rdx
  void *pMesh; // r15
  const void *v22; // r10
  size_t v23; // r8
  ULONG64 v24; // rcx
  void *v25; // rdx
  SURFOBJ *v26; // rbx
  CLIPOBJ *DDIOBJ; // rbx
  XLATEOBJ *v28; // rax
  SURFOBJ *v29; // r14
  unsigned int v30; // ebx
  ULONG nMesh; // [rsp+30h] [rbp-F8h]
  SURFOBJ *pso; // [rsp+58h] [rbp-D0h] BYREF
  int v33; // [rsp+60h] [rbp-C8h]
  SURFOBJ *psoDest; // [rsp+68h] [rbp-C0h]
  size_t Size; // [rsp+70h] [rbp-B8h]
  POINTL *pptlDitherOrg; // [rsp+78h] [rbp-B0h] BYREF
  RECTL *prclExtents; // [rsp+80h] [rbp-A8h] BYREF
  void *Src; // [rsp+88h] [rbp-A0h]
  struct _CLIPOBJ *v39; // [rsp+90h] [rbp-98h]
  __int64 v40; // [rsp+98h] [rbp-90h]
  __int64 v41; // [rsp+A0h] [rbp-88h]
  struct _TRIVERTEX *v42; // [rsp+A8h] [rbp-80h]
  void *v43; // [rsp+B0h] [rbp-78h]
  struct UMPDOBJ *v44; // [rsp+B8h] [rbp-70h]
  struct _CLIPOBJ *v45; // [rsp+C0h] [rbp-68h]
  __int64 v46; // [rsp+C8h] [rbp-60h]
  struct _POINTL v47; // [rsp+D0h] [rbp-58h] BYREF
  struct _RECTL v48; // [rsp+D8h] [rbp-50h] BYREF

  v41 = a4;
  v40 = a3;
  v39 = a2;
  v45 = a2;
  v46 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v44 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  if ( ulMode <= 1 )
  {
    v15 = 8;
    v16 = a7;
    v17 = a7 <= 0x4E2000;
  }
  else
  {
    if ( ulMode != 2 )
    {
LABEL_9:
      if ( v33 )
        EngUnlockSurface(pso);
      --*((_DWORD *)v13 + 108);
      return 0LL;
    }
    v15 = 12;
    v16 = a7;
    v17 = a7 <= 0x341555;
  }
  if ( !v17 )
    goto LABEL_9;
  if ( v16 && nVertex )
  {
    v18 = v16 * v15;
    if ( nVertex > 0x271000 )
      goto LABEL_9;
    LODWORD(Size) = 16 * nVertex;
    v19 = (struct _TRIVERTEX *)PALLOCMEM2(16 * nVertex, 1886221639LL, 0);
    v42 = v19;
    pMesh = PALLOCMEM2((unsigned int)v18, 1886221639LL, 0);
    v43 = pMesh;
    psoDest = pso;
    if ( !pso || !v41 || !Src || !v19 || !pMesh || !prclExtents || !pptlDitherOrg )
      goto LABEL_30;
    CaptureRECTL(&prclExtents, &v48);
    CapturePOINTL(&pptlDitherOrg, &v47);
    v23 = (unsigned int)Size;
    v24 = (ULONG64)v22 + (unsigned int)Size;
    if ( v24 < (unsigned __int64)v22 || v24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v19, v22, v23);
    v25 = Src;
    if ( (char *)Src + v18 < Src || (unsigned __int64)Src + v18 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(pMesh, v25, (unsigned int)v18);
    v26 = psoDest;
    if ( (unsigned int)bValidVertexMeshData(v19, (char *)pMesh, nVertex, v16, ulMode) )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v39, &v26->sizlBitmap);
      v28 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v13, v40);
      nMesh = v16;
      v29 = psoDest;
      v30 = EngGradientFill(psoDest, DDIOBJ, v28, v19, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    }
    else
    {
LABEL_30:
      v29 = psoDest;
      v30 = 0;
    }
    if ( v19 )
      Win32FreePool(v19, v20);
    if ( pMesh )
      Win32FreePool(pMesh, v20);
    if ( v33 )
      EngUnlockSurface(v29);
    if ( v13 )
      --*((_DWORD *)v13 + 108);
    return v30;
  }
  else
  {
    if ( v33 )
      EngUnlockSurface(pso);
    --*((_DWORD *)v13 + 108);
    return 1LL;
  }
}
