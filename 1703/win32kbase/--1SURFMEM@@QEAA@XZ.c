/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C0043070
 * Callers:
 *     GreCreateBitmap @ 0x1C0042610 (GreCreateBitmap.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005A440 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0077B90 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00881A4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002CD48 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C007C408 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     EngFreeUserMem @ 0x1C007DCC0 (EngFreeUserMem.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00EBA3C (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  __int64 v1; // rax
  char v3; // cl
  __int64 v4; // rax
  __int16 v5; // cx
  void *v6; // rsi
  void *v7; // rbx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 ThreadWin32Thread; // r14
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  PVOID Object[2]; // [rsp+30h] [rbp-29h]
  _OWORD v20[5]; // [rsp+58h] [rbp-1h] BYREF
  PEPROCESS Process; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+6Fh] BYREF
  HSEMAPHORE v23; // [rsp+D0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *((_BYTE *)this + 8);
    if ( (v3 & 1) != 0 )
    {
      DEC_SHARE_REF_CNT((int *)v1);
    }
    else
    {
      if ( (v3 & 8) != 0 && *(_QWORD *)(v1 + 128) )
      {
        v22 = *(_QWORD *)(v1 + 128);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v22);
      }
      HmgRemoveObjectImpl(**(struct HOBJ__ ***)this, *((_DWORD *)this + 3) != 0, 1, 1u, 5, 0LL);
      if ( *((_DWORD *)this + 3) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      v4 = *(_QWORD *)this;
      v5 = *(_WORD *)(*(_QWORD *)this + 102LL);
      v6 = *(void **)(*(_QWORD *)this + 72LL);
      v7 = *(void **)(*(_QWORD *)this + 256LL);
      v8 = *(_OWORD *)(*(_QWORD *)this + 296LL);
      v20[0] = *(_OWORD *)(*(_QWORD *)this + 280LL);
      v9 = *(_OWORD *)(v4 + 312);
      v20[1] = v8;
      v20[2] = v9;
      *(_OWORD *)Object = *(_OWORD *)(v4 + 520);
      if ( (v5 & 8) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 112) & 0x40000) != 0 && v6 )
        {
          if ( (v5 & 0x80u) == 0 )
          {
            EngFreeUserMem(v6);
          }
          else
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
        }
      }
      else if ( (v5 & 0x800) != 0 )
      {
        v23 = ghsemMapRot;
        EngAcquireSemaphore(ghsemMapRot);
        v15 = *(_QWORD **)(*(_QWORD *)this + 272LL);
        if ( v15 )
        {
          PsGetCurrentProcessWin32Process(v13, v12, v14);
          v16 = *(_QWORD *)this + 456LL;
          if ( *(_QWORD *)v16 != v16 )
          {
            v17 = *(_QWORD *)v16;
            v18 = *(_QWORD **)(*(_QWORD *)this + 464LL);
            if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v18 != v16 )
              __fastfail(3u);
            *v18 = v17;
            *(_QWORD *)(v17 + 8) = v18;
          }
          if ( v6 && v7 )
            MmUnmapViewOfSection(*v15);
        }
        W32PIDLOCK::vCleanUp((REGION **)v20);
        if ( v7 )
          ObfDereferenceObject(v7);
        SEMOBJ::vUnlock((PERESOURCE *)&v23);
      }
      else if ( (v5 & 0x10) != 0 )
      {
        vFreeKernelSection(v6);
      }
      SURFACE::Free(*(struct SURFACE **)this);
    }
  }
}
