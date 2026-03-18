/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0
 * Callers:
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C001F458 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006BC10 (vDynamicConvertNewSurfaceDCs.c)
 * Callees:
 *     EngFreeUserMem @ 0x1C001EFC0 (EngFreeUserMem.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00205D0 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003C9F0 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C003CB30 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C003CC10 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C004240C (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0042CE0 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0042D00 (GreAcquireSemaphoreSharedInternal.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046D78 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0046DE0 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C004769C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     DEC_SHARE_REF_CNT @ 0x1C004D890 (DEC_SHARE_REF_CNT.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     GreGetObjectOwner @ 0x1C0073C80 (GreGetObjectOwner.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C009677C (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00A9BBC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00EF9BC (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  void *v7; // r14
  __int64 v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int16 v13; // r15
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int ObjectOwner; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // r12
  void (__fastcall *v25)(__int64); // rax
  __int64 v26; // rcx
  HANDLE v27; // rbx
  HANDLE v28; // rbx
  __int64 ThreadWin32Thread; // rax
  int v30; // r15d
  __int64 v31; // r14
  PVOID v32; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v34; // rax
  int v35; // ecx
  PVOID v36; // rdx
  struct _EPROCESS **v37; // r8
  __int64 *v38; // rax
  __int64 *v39; // rdx
  __int64 **v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // r15
  __int64 v44; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+5Ch] [rbp-A4h]
  PEPROCESS Process; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SecureHandle; // [rsp+78h] [rbp-88h]
  HANDLE v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  PVOID v55; // [rsp+90h] [rbp-70h]
  int v56[2]; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  HSEMAPHORE v60; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  __int64 v63; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v65; // [rsp+E8h] [rbp-18h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  _OWORD v67[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v68[128]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v69; // [rsp+1C0h] [rbp+C0h]
  unsigned int v70; // [rsp+1D8h] [rbp+D8h] BYREF

  v6 = 1;
  if ( (struct OBJECT *)a1 == SURFACE::pdibDefault || !a1 )
    return v6;
  v7 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  SecureHandle = 0LL;
  v47 = 0;
  if ( !*(_WORD *)(a1 + 100) )
  {
    v8 = *(_QWORD *)(a1 + 72);
    v53 = *(HANDLE *)(a1 + 200);
    v54 = *(_QWORD *)(a1 + 192);
    v47 = *(_DWORD *)(a1 + 224);
    v7 = (void *)(v8 - (unsigned __int16)*(_DWORD *)(a1 + 208));
    SecureHandle = *(HANDLE *)(a1 + 232);
  }
  v9 = *(_OWORD *)(a1 + 280);
  v10 = *(_OWORD *)(a1 + 296);
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(_QWORD *)(a1 + 128);
  v13 = *(_WORD *)(a1 + 102);
  v58 = *(_QWORD *)(a1 + 24);
  v61 = *(_QWORD *)(a1 + 136);
  BaseAddress = *(PVOID *)(a1 + 72);
  v55 = *(PVOID *)(a1 + 256);
  v14 = *(_DWORD *)(a1 + 328);
  v51 = v11;
  v62 = v12;
  LODWORD(Process) = v14;
  v67[0] = v9;
  v15 = *(_OWORD *)(a1 + 312);
  v67[1] = v10;
  v16 = *(_OWORD *)(a1 + 536);
  v67[2] = v15;
  v17 = *(_OWORD *)(a1 + 520);
  v65 = v16;
  *(_OWORD *)Object = v17;
  v66 = *(_QWORD *)(a1 + 552);
  if ( v11
    && (*(_DWORD *)(a1 + 112) & 0x400000) != 0
    && (*(_DWORD *)(v11 + 32) & 1) != 0
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) )
  {
    v48 = 1;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, 0LL);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  }
  else
  {
    v48 = 0;
  }
  v57 = 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v68);
  if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v11 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v57, (struct PDEVOBJ *)&v51);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v68, (struct PDEVOBJ *)&v51);
  }
  else
  {
    DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v68);
  }
  *(_QWORD *)v56 = *(_QWORD *)a1;
  ObjectOwner = GreGetObjectOwner(*(_QWORD *)v56, 5LL);
  v70 = 0;
  v50 = ObjectOwner;
  v69 = *(_WORD *)(a1 + 12);
  if ( a3
    || HmgRemoveObject(v56[0], 0, 1, a2 == 2, 5, &v70)
    || (unsigned int)(a2 - 1) <= 1 && HmgRemoveObject(*(_QWORD *)a1, 0, 0, a2 == 2, 5, &v70)
    || a2 == 3 && HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2u, 5, &v70) )
  {
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v11 = v51;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported() >= 0 )
      vAccNotifyDeleteSurfaceWrap(a1);
    v23 = *(_DWORD *)(a1 + 112);
    if ( (v23 & 0x400000) == 0 || (v24 = v58) == 0 || !v11 )
    {
LABEL_52:
      v27 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *(_DWORD *)(a1 + 184) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v27);
        goto LABEL_98;
      }
      if ( v47 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_98;
      }
      v28 = v53;
      if ( v53 )
      {
        if ( *(_DWORD *)(a1 + 184) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v28);
          if ( BaseAddress )
          {
            if ( v54 )
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
        goto LABEL_98;
      }
      if ( (v13 & 8) == 0 )
      {
        if ( (v13 & 0x800) != 0 )
        {
          v60 = ghsemMapRot;
          EngAcquireSemaphore(ghsemMapRot);
          v37 = *(struct _EPROCESS ***)(a1 + 272);
          if ( v37 )
          {
            v38 = (__int64 *)(a1 + 456);
            if ( (__int64 *)*v38 != v38 )
            {
              v39 = (__int64 *)*v38;
              if ( *(__int64 **)(*v38 + 8) != v38 || (v40 = *(__int64 ***)(a1 + 464), *v40 != v38) )
                __fastfail(3u);
              *v40 = v39;
              v39[1] = (__int64)v40;
            }
            if ( BaseAddress && v55 )
              vUnmapKernelSectionForUserMapping(*v37, BaseAddress);
          }
          W32PIDLOCK::vCleanUp((W32PIDLOCK *)v67);
          if ( v55 )
            ObfDereferenceObject(v55);
          SEMOBJ::vUnlock((SEMOBJ *)&v60);
        }
        else if ( (v13 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_98;
      }
      if ( (v13 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_98:
        v41 = *(_QWORD *)v56;
        v42 = v70;
        v43 = v50;
        *(_QWORD *)(a1 + 424) = *(_QWORD *)v56;
        *(_DWORD *)(a1 + 432) = v42;
        *(_WORD *)(a1 + 436) = v69;
        *(_WORD *)(a1 + 438) = *(_WORD *)(a1 + 14);
        *(_DWORD *)(a1 + 448) = v43;
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(a1 + 456), 0LL);
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v41, v42, v43, 0LL, 0LL, 0);
        SURFACE::Free((PSLIST_ENTRY)a1);
        v44 = v61;
        if ( v61 && (int)IsGreDeleteWndSupported() >= 0 )
          GreDeleteWnd(v44);
        if ( v62 )
        {
          v63 = v62;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v63);
        }
        goto LABEL_105;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v20, v21, v22);
      v30 = DWORD2(v65);
      v31 = ThreadWin32Thread;
      v32 = Object[1];
      if ( DWORD2(v65) )
        v32 = BaseAddress;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
      vUnmapKernelSectionForUserMapping(CurrentProcess, v32);
      if ( v31 && (v34 = *(_QWORD *)(v31 + 72)) != 0 )
      {
        v35 = *(_DWORD *)(v34 + 8);
      }
      else
      {
        if ( !(_DWORD)v66 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported() >= 0 )
            UMPDEngFreeUserMem(BaseAddress);
          goto LABEL_79;
        }
        v35 = HIDWORD(v65);
      }
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v35, &Process) >= 0 )
      {
        v36 = BaseAddress;
        if ( v30 )
          v36 = Object[1];
        vUnmapKernelSectionForUserMapping(Process, v36);
        ObfDereferenceObject(Process);
      }
LABEL_79:
      if ( !Object[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(Object[0]);
      goto LABEL_98;
    }
    if ( (*(_DWORD *)(a1 + 116) & 9) != 0 )
    {
      v25 = *(void (__fastcall **)(__int64))(v11 + 2680);
      if ( v25 )
      {
        v26 = a1 + 24;
LABEL_51:
        v25(v26);
        goto LABEL_52;
      }
      v25 = *(void (__fastcall **)(__int64))(v11 + 3464);
      if ( !v25 )
        goto LABEL_52;
    }
    else
    {
      v25 = *(void (__fastcall **)(__int64))(v11 + 2792);
      if ( !v25 )
        goto LABEL_52;
      if ( (v23 & 0x40000) != 0 )
      {
        if ( !a2 && (int)IsUMPDDrvDeleteDeviceBitmapSupported() >= 0 )
          UMPDDrvDeleteDeviceBitmap(*(_QWORD *)(v11 + 1816), v24);
        goto LABEL_52;
      }
    }
    v26 = v58;
    goto LABEL_51;
  }
  if ( v70 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
    {
      EngSetLastError(0xAAu);
LABEL_26:
      v6 = 0;
      goto LABEL_105;
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
  DEC_SHARE_REF_CNT((struct OBJECT *)a1);
LABEL_105:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v68);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v57);
  if ( v48 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return v6;
}
