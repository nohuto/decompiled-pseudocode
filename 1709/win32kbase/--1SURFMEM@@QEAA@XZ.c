/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C00418C0
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001B254 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C003C550 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C006D050 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C008DCF4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     EngFreeUserMem @ 0x1C001EFC0 (EngFreeUserMem.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00205D0 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C004240C (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00EF9BC (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  unsigned int *v1; // rsi
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int16 v8; // cx
  PVOID v9; // rsi
  void *v10; // rbx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int *v15; // rdi
  unsigned __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  GdiHandleManager *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // r9
  _DWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // r10
  unsigned int v31; // edx
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  __int64 v34; // r10
  __int64 ThreadWin32Thread; // r14
  PVOID v36; // rbx
  __int64 CurrentProcess; // rax
  _QWORD *v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  int *v42; // [rsp+30h] [rbp-39h] BYREF
  int v43; // [rsp+38h] [rbp-31h]
  PVOID Object[2]; // [rsp+48h] [rbp-21h]
  __int128 v45; // [rsp+58h] [rbp-11h]
  _OWORD v46[5]; // [rsp+70h] [rbp+7h] BYREF
  PEPROCESS Process; // [rsp+D0h] [rbp+67h] BYREF
  struct OBJECT *v48; // [rsp+D8h] [rbp+6Fh] BYREF
  HSEMAPHORE v49; // [rsp+E0h] [rbp+77h] BYREF

  v1 = *(unsigned int **)this;
  if ( !*(_QWORD *)this )
    return;
  v3 = *((_BYTE *)this + 8);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 8) != 0 && *((_QWORD *)v1 + 16) )
    {
      v48 = (struct OBJECT *)*((_QWORD *)v1 + 16);
      XEPALOBJ::vUnrefPalette(&v48);
    }
    HmgRemoveObject(**(_QWORD **)this, *((_DWORD *)this + 3) != 0, 1, 1, 5, 0LL);
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    v7 = *(_QWORD *)this;
    v8 = *(_WORD *)(*(_QWORD *)this + 102LL);
    v9 = *(PVOID *)(*(_QWORD *)this + 72LL);
    v10 = *(void **)(*(_QWORD *)this + 256LL);
    v11 = *(_OWORD *)(*(_QWORD *)this + 296LL);
    v46[0] = *(_OWORD *)(*(_QWORD *)this + 280LL);
    v12 = *(_OWORD *)(v7 + 312);
    v46[1] = v11;
    v13 = *(_OWORD *)(v7 + 536);
    v46[2] = v12;
    v14 = *(_OWORD *)(v7 + 520);
    v45 = v13;
    *(_OWORD *)Object = v14;
    if ( (v8 & 8) != 0 )
    {
      if ( (*(_DWORD *)(v7 + 112) & 0x40000) != 0 && v9 )
      {
        if ( (v8 & 0x80u) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v4, v5, v6);
          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
          {
            v36 = Object[1];
            if ( DWORD2(v45) )
              v36 = v9;
            CurrentProcess = PsGetCurrentProcess();
            MmUnmapViewOfSection(CurrentProcess, v36);
            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process) >= 0 )
            {
              if ( DWORD2(v45) )
                v9 = Object[1];
              MmUnmapViewOfSection(Process, v9);
              ObfDereferenceObject(Process);
            }
          }
          if ( !Object[0] )
            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
          ObfDereferenceObject(Object[0]);
        }
        else
        {
          EngFreeUserMem(v9);
        }
      }
    }
    else if ( (v8 & 0x800) != 0 )
    {
      v49 = ghsemMapRot;
      EngAcquireSemaphore(ghsemMapRot);
      v38 = *(_QWORD **)(*(_QWORD *)this + 272LL);
      if ( v38 )
      {
        PsGetCurrentProcessWin32Process();
        v39 = *(_QWORD *)this + 456LL;
        if ( *(_QWORD *)v39 != v39 )
        {
          v40 = *(_QWORD *)v39;
          if ( *(_QWORD *)(*(_QWORD *)v39 + 8LL) != v39 || (v41 = *(_QWORD **)(*(_QWORD *)this + 464LL), *v41 != v39) )
            __fastfail(3u);
          *v41 = v40;
          *(_QWORD *)(v40 + 8) = v41;
        }
        if ( v9 && v10 )
          MmUnmapViewOfSection(*v38, v9);
      }
      W32PIDLOCK::vCleanUp((REGION **)v46);
      if ( v10 )
        ObfDereferenceObject(v10);
      SEMOBJ::vUnlock((SEMOBJ *)&v49);
    }
    else if ( (v8 & 0x10) != 0 )
    {
      vFreeKernelSection(v9);
    }
    SURFACE::Free(*(PSLIST_ENTRY *)this);
    return;
  }
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v42, (struct OBJECT *)v1, 0, 0, 1);
  if ( !v43 )
    return;
  v15 = v42;
  if ( *((_BYTE *)v42 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v16 = (unsigned __int16)*v1 | ((unsigned __int64)*v1 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v16 | ((unsigned int)v16 >> 8) & 0xFF0000);
  }
  v17 = *((_BYTE *)v15 + 14);
  if ( v17 == 5 )
  {
    v18 = *((_QWORD *)v1 + 77);
    v19 = 0LL;
LABEL_19:
    TrackObjectReferenceDecrement(v19, v18);
    goto LABEL_20;
  }
  if ( v17 == 16 )
  {
    v18 = *((_QWORD *)v1 + 19);
    v19 = 2LL;
    goto LABEL_19;
  }
LABEL_20:
  --v1[2];
  v20 = *v15;
  v21 = gpHandleManager;
  v22 = GdiHandleManager::DecodeIndex(gpHandleManager, v20 & 0xFFFFFF);
  v23 = *((_QWORD *)v21 + 2);
  v24 = v22;
  v25 = *(_DWORD *)(v23 + 2056);
  if ( v22 >= v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    goto LABEL_43;
  if ( v22 >= v25 )
    v26 = ((v22 - v25) >> 16) + 1;
  else
    v26 = 0;
  v27 = *(_QWORD *)(v23 + 8LL * v26 + 8);
  if ( v26 )
    v24 = ((1 - v26) << 16) - v25 + v22;
  if ( (unsigned int)v24 >= *(_DWORD *)(v27 + 20) )
LABEL_43:
    v28 = 0LL;
  else
    v28 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
  v29 = GdiHandleManager::DecodeIndex(v21, (unsigned __int16)*v28 | (*v28 >> 8) & 0xFF0000);
  v30 = *((_QWORD *)v21 + 2);
  v31 = v29;
  v32 = *(_DWORD *)(v30 + 2056);
  if ( v29 < v32 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
  {
    if ( v29 >= v32 )
      v33 = ((v29 - v32) >> 16) + 1;
    else
      v33 = 0;
    v34 = *(_QWORD *)(v30 + 8LL * v33 + 8);
    if ( v33 )
      v31 = ((1 - v33) << 16) - v32 + v29;
    *(_DWORD *)(*(_QWORD *)v34 + 24LL * v31 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v31 >> 8)) + 16LL * (unsigned __int8)v31,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
}
