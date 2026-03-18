/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60
 * Callers:
 *     GreCreateBitmap @ 0x1C003D960 (GreCreateBitmap.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0041298 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0049C10 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0069C68 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EngFreeUserMem @ 0x1C003C200 (EngFreeUserMem.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003E480 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C003F690 (HmgRemoveObject.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C005BF4C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00C249C (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00DB844 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  __int64 v1; // rbx
  char v3; // al
  __int64 v4; // rax
  __int16 v5; // cx
  void *v6; // r14
  void *v7; // rbx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 v16; // rdi
  char v17; // al
  unsigned int v18; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v19; // rdx
  GdiHandleManager *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // r8
  _DWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r10
  unsigned int v30; // edx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // rdi
  __int64 ThreadWin32Thread; // r15
  __int64 CurrentProcess; // rax
  __int64 v37; // rcx
  _QWORD *v38; // r15
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // [rsp+30h] [rbp-39h] BYREF
  int v45; // [rsp+38h] [rbp-31h]
  PVOID Object[2]; // [rsp+48h] [rbp-21h]
  __int128 v47; // [rsp+58h] [rbp-11h]
  _OWORD v48[3]; // [rsp+70h] [rbp+7h] BYREF
  PEPROCESS Process; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v50; // [rsp+D8h] [rbp+6Fh] BYREF
  struct _ERESOURCE *v51; // [rsp+E0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *((_BYTE *)this + 8);
    if ( (v3 & 1) != 0 )
    {
      v15 = (unsigned __int16)*(_DWORD *)v1 | (*(_DWORD *)v1 >> 8) & 0xFF0000;
      v44 = 0LL;
      v45 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v44, v15, 0, 0, 1);
      if ( v45 )
      {
        v16 = v44;
        v17 = *(_BYTE *)(v44 + 14);
        if ( v17 == 5
          && (!gbGdiHmgrAltStacks
           || !gpentHmgrAltStacks
           || (v18 = (unsigned __int16)*(_DWORD *)v1 | (*(_DWORD *)v1 >> 8) & 0xFF0000,
               RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v18 | (v18 >> 8) & 0xFF0000),
               v17 = *(_BYTE *)(v16 + 14),
               v17 == 5)) )
        {
          v19 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 680);
          if ( v19 && qword_1C019F730 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
              qword_1C019F730,
              v19,
              0);
        }
        else if ( v17 == 16 )
        {
          TrackObjectReferenceDecrement(
            2u,
            *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 136));
        }
        --*(_DWORD *)(v1 + 8);
        v20 = gpHandleManager;
        v21 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v16 & 0xFFFFFF);
        v22 = *((_QWORD *)v20 + 2);
        v23 = v21;
        v24 = *(_DWORD *)(v22 + 2056);
        if ( v21 >= v24 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
          goto LABEL_52;
        v25 = ((v21 - v24) >> 16) + 1;
        if ( v21 < v24 )
          v25 = 0LL;
        v26 = *(_QWORD *)(v22 + 8 * v25 + 8);
        if ( (_DWORD)v25 )
          v23 = ((1 - (_DWORD)v25) << 16) - v24 + v21;
        if ( (unsigned int)v23 >= *(_DWORD *)(v26 + 20) )
LABEL_52:
          v27 = 0LL;
        else
          v27 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v23 >> 8)) + 16LL * (unsigned __int8)v23 + 8);
        v28 = GdiHandleManager::DecodeIndex(
                (GdiHandleEntryDirectory **)v20,
                (unsigned __int16)*v27 | (*v27 >> 8) & 0xFF0000u);
        v29 = *((_QWORD *)v20 + 2);
        v30 = v28;
        v31 = *(_DWORD *)(v29 + 2056);
        if ( v28 < v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
        {
          v32 = ((v28 - v31) >> 16) + 1;
          if ( v28 < v31 )
            v32 = 0LL;
          v33 = *(_QWORD *)(v29 + 8 * v32 + 8);
          if ( (_DWORD)v32 )
            v30 = ((1 - (_DWORD)v32) << 16) - v31 + v28;
          *(_DWORD *)(*(_QWORD *)v33 + 24LL * v30 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v30 >> 8)) + 16LL * (unsigned __int8)v30,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      if ( (v3 & 8) != 0 && *(_QWORD *)(v1 + 128) )
      {
        v50 = *(_QWORD *)(v1 + 128);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v50);
        v1 = *(_QWORD *)this;
      }
      HmgRemoveObject(*(_QWORD *)v1, *((_DWORD *)this + 3) != 0, 1, 1, 5, 0LL);
      if ( *((_DWORD *)this + 3) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      v4 = *(_QWORD *)this;
      v5 = *(_WORD *)(*(_QWORD *)this + 102LL);
      v6 = *(void **)(*(_QWORD *)this + 72LL);
      v7 = *(void **)(*(_QWORD *)this + 248LL);
      v8 = *(_OWORD *)(*(_QWORD *)this + 288LL);
      v48[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
      v9 = *(_OWORD *)(v4 + 304);
      v48[1] = v8;
      v10 = *(_OWORD *)(v4 + 600);
      v48[2] = v9;
      v11 = *(_OWORD *)(v4 + 584);
      v47 = v10;
      *(_OWORD *)Object = v11;
      if ( (v5 & 8) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 112) & 0x40000) != 0 && v6 )
        {
          if ( (v5 & 0x80u) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            if ( *(_QWORD *)(ThreadWin32Thread + 72) )
            {
              CurrentProcess = PsGetCurrentProcess();
              MmUnmapViewOfSection(CurrentProcess);
              if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process) >= 0 )
              {
                MmUnmapViewOfSection(Process);
                ObfDereferenceObject(Process);
              }
            }
            if ( !Object[0] )
              KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
            ObfDereferenceObject(Object[0]);
          }
          else
          {
            EngFreeUserMem(v6);
          }
        }
      }
      else if ( (v5 & 0x800) != 0 )
      {
        v51 = (struct _ERESOURCE *)ghsemMapRot;
        EngAcquireSemaphore(ghsemMapRot);
        v38 = *(_QWORD **)(*(_QWORD *)this + 264LL);
        if ( v38 )
        {
          PsGetCurrentProcessWin32Process(v37);
          v39 = (_QWORD *)(*(_QWORD *)this + 528LL);
          v40 = (_QWORD *)*v39;
          if ( (_QWORD *)*v39 != v39 )
          {
            if ( (_QWORD *)v40[1] != v39 || (v41 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v41 != v39) )
              __fastfail(3u);
            *v41 = v40;
            v40[1] = v41;
          }
          if ( v6 && v7 )
            MmUnmapViewOfSection(*v38);
        }
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v48);
        if ( v7 )
          ObfDereferenceObject(v7);
        SEMOBJ::vUnlock(&v51, v42, v43);
      }
      else if ( (v5 & 0x10) != 0 )
      {
        vFreeKernelSection(v6);
      }
      v12 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)this + 680LL) )
        ReleaseReferenceCountedObjectHandle(0LL);
      if ( *(_BYTE *)(v12 + 688) )
      {
        v34 = *(_QWORD *)(v12 + 72);
        if ( v34 )
        {
          if ( (int)IsWin32FreePoolImplSupported() >= 0 )
            Win32FreePoolImpl(v34);
          *(_QWORD *)(v12 + 72) = 0LL;
        }
      }
      v13 = (__int64)*gpTypeIsolation;
      if ( *gpTypeIsolation )
      {
        memset((void *)v12, 0, 0x2C0uLL);
        ++*(_DWORD *)(v13 + 60);
        v14 = v13 + 32;
        if ( ExQueryDepthSList((PSLIST_HEADER)v14) >= *(_WORD *)(v14 + 16) )
        {
          ++*(_DWORD *)(v14 + 32);
          (*(void (__fastcall **)(__int64, __int64))(v14 + 56))(v12, v14);
        }
        else
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v14, (PSLIST_ENTRY)v12);
        }
      }
    }
  }
}
