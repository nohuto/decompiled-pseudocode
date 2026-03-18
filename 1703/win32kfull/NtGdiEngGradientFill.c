/*
 * XREFs of NtGdiEngGradientFill @ 0x1C0291820
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0098090 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00981EC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00984E4 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0098510 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     EngGradientFill @ 0x1C00AB7F0 (EngGradientFill.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C0290978 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
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
  struct UMPDOBJ *v13; // rsi
  __int64 result; // rax
  int v15; // ebx
  unsigned int v16; // r14d
  bool v17; // cc
  __int64 v18; // rbx
  struct _TRIVERTEX *v19; // r12
  void *pMesh; // r15
  char *v21; // r10
  size_t v22; // r8
  char *v23; // rcx
  void *v24; // rdx
  SURFOBJ *v25; // rbx
  CLIPOBJ *DDIOBJ; // rbx
  XLATEOBJ *v27; // rax
  SURFOBJ *v28; // r14
  unsigned int v29; // ebx
  ULONG nMesh; // [rsp+30h] [rbp-108h]
  SURFOBJ *pso; // [rsp+58h] [rbp-E0h] BYREF
  int v32; // [rsp+60h] [rbp-D8h]
  SURFOBJ *psoDest; // [rsp+68h] [rbp-D0h]
  size_t Size; // [rsp+70h] [rbp-C8h]
  POINTL *pptlDitherOrg; // [rsp+78h] [rbp-C0h] BYREF
  RECTL *prclExtents; // [rsp+80h] [rbp-B8h] BYREF
  void *Src; // [rsp+88h] [rbp-B0h]
  struct _CLIPOBJ *v38; // [rsp+90h] [rbp-A8h]
  __int64 v39; // [rsp+98h] [rbp-A0h]
  __int64 v40; // [rsp+A0h] [rbp-98h]
  struct _TRIVERTEX *v41; // [rsp+A8h] [rbp-90h]
  void *v42; // [rsp+B0h] [rbp-88h]
  struct UMPDOBJ *v43; // [rsp+B8h] [rbp-80h]
  struct _CLIPOBJ *v44; // [rsp+C0h] [rbp-78h]
  __int64 v45; // [rsp+C8h] [rbp-70h]
  struct UMPDOBJ *v46; // [rsp+D0h] [rbp-68h]
  struct _POINTL v47; // [rsp+D8h] [rbp-60h] BYREF
  struct _RECTL v48; // [rsp+E0h] [rbp-58h] BYREF

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v44 = a2;
  v45 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v43 = ThreadCurrentObj;
  v46 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v13 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, v13);
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
        if ( v32 )
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
      v41 = v19;
      pMesh = PALLOCMEM2((unsigned int)v18, 1886221639LL, 0);
      v42 = pMesh;
      psoDest = pso;
      if ( !pso || !v40 || !Src || !v19 || !pMesh || !prclExtents || !pptlDitherOrg )
        goto LABEL_30;
      CaptureRECTL(&prclExtents, &v48);
      CapturePOINTL(&pptlDitherOrg, &v47);
      v22 = (unsigned int)Size;
      v23 = &v21[(unsigned int)Size];
      if ( v23 < v21 || (unsigned __int64)v23 > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v19, v21, v22);
      v24 = Src;
      if ( (char *)Src + v18 < Src || (unsigned __int64)Src + v18 > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(pMesh, v24, (unsigned int)v18);
      v25 = psoDest;
      if ( (unsigned int)bValidVertexMeshData(v19, (char *)pMesh, nVertex, v16, ulMode) )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v38, &v25->sizlBitmap);
        v27 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v13, v39);
        nMesh = v16;
        v28 = psoDest;
        v29 = EngGradientFill(psoDest, DDIOBJ, v27, v19, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
      }
      else
      {
LABEL_30:
        v28 = psoDest;
        v29 = 0;
      }
      if ( v19 )
        Win32FreePool(v19);
      if ( pMesh )
        Win32FreePool(pMesh);
      if ( v32 )
        EngUnlockSurface(v28);
      --*((_DWORD *)v13 + 108);
      return v29;
    }
    else
    {
      if ( v32 )
        EngUnlockSurface(pso);
      --*((_DWORD *)v13 + 108);
      return 1LL;
    }
  }
  return result;
}
