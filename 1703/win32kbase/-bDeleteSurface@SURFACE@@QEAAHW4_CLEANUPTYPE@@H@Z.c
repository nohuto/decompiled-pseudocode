/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009FA3C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0027850 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002CD48 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037B10 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0037B40 (GreAcquireSemaphoreSharedInternal.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0037D78 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0037DE0 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0037E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00385F0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007BC60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C007BD40 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C007C408 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     EngFreeUserMem @ 0x1C007DCC0 (EngFreeUserMem.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00EBA3C (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  void *v7; // r14
  __int64 v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rbx
  int *v12; // rcx
  __int16 v13; // r15
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int ObjectOwner; // eax
  int v19; // eax
  int v20; // ecx
  __int64 v21; // r12
  void (__fastcall *v22)(__int64); // rax
  __int64 v23; // rcx
  HANDLE v24; // rbx
  HANDLE v25; // rbx
  __int64 ThreadWin32Thread; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 CurrentProcess; // rax
  __int64 v32; // rax
  int v33; // ecx
  _QWORD *v34; // r8
  __int64 *v35; // rax
  __int64 *v36; // rdx
  __int64 **v37; // rcx
  ULONG_PTR v38; // rbx
  int v39; // r15d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rbx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h]
  PEPROCESS Process; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SecureHandle; // [rsp+78h] [rbp-88h]
  HANDLE v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  PVOID v56; // [rsp+90h] [rbp-70h]
  struct HOBJ__ *v57; // [rsp+98h] [rbp-68h]
  PERESOURCE v58; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  HSEMAPHORE v61; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  int *v63; // [rsp+C8h] [rbp-38h]
  int *v64; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v66; // [rsp+E8h] [rbp-18h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  _OWORD v68[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v69[128]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v70; // [rsp+1C0h] [rbp+C0h]
  unsigned int v71; // [rsp+1D8h] [rbp+D8h] BYREF

  v6 = 1;
  if ( (SURFACE *)a1 == SURFACE::pdibDefault || !a1 )
    return v6;
  v7 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  SecureHandle = 0LL;
  v48 = 0;
  if ( !*(_WORD *)(a1 + 100) )
  {
    v8 = *(_QWORD *)(a1 + 72);
    v54 = *(HANDLE *)(a1 + 200);
    v55 = *(_QWORD *)(a1 + 192);
    v48 = *(_DWORD *)(a1 + 224);
    v7 = (void *)(v8 - (unsigned __int16)*(_DWORD *)(a1 + 208));
    SecureHandle = *(HANDLE *)(a1 + 232);
  }
  v9 = *(_OWORD *)(a1 + 280);
  v10 = *(_OWORD *)(a1 + 296);
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(int **)(a1 + 128);
  v13 = *(_WORD *)(a1 + 102);
  v59 = *(_QWORD *)(a1 + 24);
  v62 = *(_QWORD *)(a1 + 136);
  BaseAddress = *(PVOID *)(a1 + 72);
  v56 = *(PVOID *)(a1 + 256);
  v14 = *(_DWORD *)(a1 + 328);
  v52 = v11;
  v63 = v12;
  LODWORD(Process) = v14;
  v68[0] = v9;
  v15 = *(_OWORD *)(a1 + 312);
  v68[1] = v10;
  v16 = *(_OWORD *)(a1 + 536);
  v68[2] = v15;
  v17 = *(_OWORD *)(a1 + 520);
  v66 = v16;
  *(_OWORD *)Object = v17;
  v67 = *(_QWORD *)(a1 + 552);
  if ( v11
    && (*(_DWORD *)(a1 + 112) & 0x400000) != 0
    && (*(_DWORD *)(v11 + 32) & 1) != 0
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) )
  {
    v49 = 1;
    GreAcquireSemaphoreSharedInternal((__int64)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange");
  }
  else
  {
    v49 = 0;
  }
  v58 = 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v69);
  if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v11 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v58, (struct PDEVOBJ *)&v52);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v69, (struct PDEVOBJ *)&v52);
  }
  else
  {
    DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v69);
  }
  v57 = *(struct HOBJ__ **)a1;
  ObjectOwner = GreGetObjectOwner((unsigned int)v57, 5);
  v71 = 0;
  v51 = ObjectOwner;
  v70 = *(_WORD *)(a1 + 12);
  if ( a3
    || HmgRemoveObjectImpl(v57, 0, 1, a2 == 2, 5, &v71)
    || (unsigned int)(a2 - 1) <= 1 && HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 0, a2 == 2, 5, &v71)
    || a2 == 3 && HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2, 5, &v71) )
  {
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v11 = v52;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported() >= 0 )
      vAccNotifyDeleteSurfaceWrap(a1);
    v20 = *(_DWORD *)(a1 + 112);
    if ( (v20 & 0x400000) == 0 || (v21 = v59) == 0 || !v11 )
    {
LABEL_52:
      v24 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *(_DWORD *)(a1 + 184) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v24);
        goto LABEL_94;
      }
      if ( v48 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_94;
      }
      v25 = v54;
      if ( v54 )
      {
        if ( *(_DWORD *)(a1 + 184) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v25);
          if ( BaseAddress )
          {
            if ( v55 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            }
          }
        }
        goto LABEL_94;
      }
      if ( (v13 & 8) == 0 )
      {
        if ( (v13 & 0x800) != 0 )
        {
          v61 = ghsemMapRot;
          EngAcquireSemaphore(ghsemMapRot);
          v34 = *(_QWORD **)(a1 + 272);
          if ( v34 )
          {
            v35 = (__int64 *)(a1 + 456);
            if ( (__int64 *)*v35 != v35 )
            {
              v36 = (__int64 *)*v35;
              v37 = *(__int64 ***)(a1 + 464);
              if ( *(__int64 **)(*v35 + 8) != v35 || *v37 != v35 )
                __fastfail(3u);
              *v37 = v36;
              v36[1] = (__int64)v37;
            }
            if ( BaseAddress && v56 )
              MmUnmapViewOfSection(*v34);
          }
          W32PIDLOCK::vCleanUp((REGION **)v68);
          if ( v56 )
            ObfDereferenceObject(v56);
          SEMOBJ::vUnlock((PERESOURCE *)&v61);
        }
        else if ( (v13 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_94;
      }
      if ( (v13 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_94:
        v38 = v71;
        v39 = v51;
        *(_QWORD *)(a1 + 424) = v57;
        *(_DWORD *)(a1 + 432) = v38;
        *(_WORD *)(a1 + 436) = v70;
        *(_WORD *)(a1 + 438) = *(_WORD *)(a1 + 14);
        *(_DWORD *)(a1 + 448) = v39;
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(a1 + 456), 0LL);
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
        {
          BugCheckParameter4 = v38;
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL);
        }
        SURFACE::Free((struct SURFACE *)a1);
        v44 = v62;
        if ( v62 && (int)IsGreDeleteWndSupported(v41, v40, v42, v43, BugCheckParameter4) >= 0 )
          GreDeleteWnd(v44);
        if ( v63 )
        {
          v64 = v63;
          XEPALOBJ::vUnrefPalette(&v64);
        }
        goto LABEL_101;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      CurrentProcess = PsGetCurrentProcess(v28, v27, v29, v30);
      MmUnmapViewOfSection(CurrentProcess);
      if ( ThreadWin32Thread && (v32 = *(_QWORD *)(ThreadWin32Thread + 72)) != 0 )
      {
        v33 = *(_DWORD *)(v32 + 8);
      }
      else
      {
        if ( !(_DWORD)v67 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported() >= 0 )
            UMPDEngFreeUserMem(BaseAddress);
          goto LABEL_75;
        }
        v33 = HIDWORD(v66);
      }
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v33, &Process) >= 0 )
      {
        MmUnmapViewOfSection(Process);
        ObfDereferenceObject(Process);
      }
LABEL_75:
      if ( !Object[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(Object[0]);
      goto LABEL_94;
    }
    if ( (*(_DWORD *)(a1 + 116) & 9) != 0 )
    {
      v22 = *(void (__fastcall **)(__int64))(v11 + 2680);
      if ( v22 )
      {
        v23 = a1 + 24;
LABEL_51:
        v22(v23);
        goto LABEL_52;
      }
      v22 = *(void (__fastcall **)(__int64))(v11 + 3464);
      if ( !v22 )
        goto LABEL_52;
    }
    else
    {
      v22 = *(void (__fastcall **)(__int64))(v11 + 2792);
      if ( !v22 )
        goto LABEL_52;
      if ( (v20 & 0x40000) != 0 )
      {
        if ( !a2 && (int)IsUMPDDrvDeleteDeviceBitmapSupported() >= 0 )
          UMPDDrvDeleteDeviceBitmap(*(_QWORD *)(v11 + 1816), v21);
        goto LABEL_52;
      }
    }
    v23 = v59;
    goto LABEL_51;
  }
  if ( v71 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
    {
      EngSetLastError(0xAAu);
LABEL_26:
      v6 = 0;
      goto LABEL_101;
    }
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 160)
      && ((*(_DWORD *)a1 & 0x800000) == 0 || (*(_WORD *)(a1 + 102) & 0x200) == 0)
      && (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
    {
      goto LABEL_26;
    }
    v19 = *(_DWORD *)(a1 + 112);
    if ( (v19 & 0x800) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 328) )
      {
        *(_DWORD *)(a1 + 328) = 1;
        _InterlockedAdd(&glRenderEndDelete, 1u);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 112) = v19 | 0x1000000;
    }
  }
  DEC_SHARE_REF_CNT((int *)a1);
LABEL_101:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v69);
  NEEDGRELOCK::vUnlock(&v58);
  if ( v49 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return v6;
}
