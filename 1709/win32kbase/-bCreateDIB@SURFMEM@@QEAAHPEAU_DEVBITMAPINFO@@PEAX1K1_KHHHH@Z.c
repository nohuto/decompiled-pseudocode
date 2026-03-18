/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001B254 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C003C550 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C006D050 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C008DCF4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     Win32CreateSection @ 0x1C0006A80 (Win32CreateSection.c)
 *     EngAllocUserMemEx @ 0x1C001EEB8 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C001EFC0 (EngFreeUserMem.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001FE64 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00204F4 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00205D0 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C004240C (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C0042494 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0053E50 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C006EEF8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C006EF24 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C009677C (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00EF744 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00EF7F0 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00EF9BC (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        volatile signed __int32 *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v13; // ecx
  int v14; // r13d
  int v15; // r15d
  unsigned int v16; // edi
  unsigned int v17; // r14d
  __int64 v18; // r12
  int v19; // eax
  int v20; // edi
  unsigned __int16 v21; // dx
  PVOID v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r15d
  int v26; // eax
  int v27; // eax
  int v28; // eax
  PVOID v29; // rax
  __int64 result; // rax
  void *v31; // rax
  volatile signed __int32 *BugCheckParameter4; // r15
  struct SURFACE *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rbx
  struct _EPROCESS *v39; // rax
  PVOID v40; // rcx
  HPALETTE v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  signed __int32 v58; // ecx
  __int64 v59; // rax
  bool v60; // r9
  int v61; // eax
  unsigned __int64 CurrentProcess; // rax
  __int128 v63; // xmm0
  __int64 v64; // rax
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  PVOID Object; // [rsp+50h] [rbp-71h] BYREF
  int v68; // [rsp+58h] [rbp-69h]
  void *v69; // [rsp+60h] [rbp-61h] BYREF
  __int64 v70; // [rsp+68h] [rbp-59h] BYREF
  int v71; // [rsp+70h] [rbp-51h]
  int v72; // [rsp+74h] [rbp-4Dh]
  PEPROCESS Process; // [rsp+78h] [rbp-49h] BYREF
  struct OBJECT *v74; // [rsp+80h] [rbp-41h] BYREF
  _OWORD v75[7]; // [rsp+88h] [rbp-39h] BYREF
  char v76; // [rsp+110h] [rbp+4Fh]
  volatile signed __int32 *v77; // [rsp+118h] [rbp+57h] BYREF
  PVOID pv; // [rsp+120h] [rbp+5Fh] BYREF
  void *v79; // [rsp+128h] [rbp+67h]

  v79 = a4;
  pv = a3;
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 8;
  v13 = *((_DWORD *)a2 + 1);
  LOWORD(v14) = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1;
  if ( v13 > 0x7FFFFFFF )
    return 0LL;
  v18 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v18 > 0x7FFFFFFF )
    return 0LL;
  v19 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v16 = ((v13 + 31) >> 3) & 0x1FFFFFFC;
    goto LABEL_21;
  }
  switch ( v19 )
  {
    case 2:
      v16 = ((v13 + 7) >> 1) & 0x7FFFFFFC;
      break;
    case 3:
      v20 = v13 + 3;
LABEL_18:
      v16 = v20 & 0xFFFFFFFC;
      break;
    case 4:
      if ( v13 + 1 >= 0x7FFFFFFF )
        return 0LL;
      v20 = 2 * v13 + 2;
      goto LABEL_18;
    case 5:
      if ( v13 >= 0x55555554 )
        return 0LL;
      v20 = 3 * (v13 + 1);
      goto LABEL_18;
    case 6:
      if ( v13 >= 0x3FFFFFFF )
        return 0LL;
      v16 = 4 * v13;
      break;
    default:
      if ( (unsigned int)(v19 - 7) > 3 )
        return 0LL;
      v15 = 1;
      break;
  }
LABEL_21:
  Object = 0LL;
  LODWORD(v77) = SURFACE::tSize;
  memset(v75, 0, 0x30uLL);
  v68 = 0;
  v69 = 0LL;
  v76 = 0;
  if ( !pv )
  {
    if ( v15 )
      v23 = *((unsigned int *)a2 + 3);
    else
      v23 = v16 * v18;
    v24 = v23 + (unsigned int)v77;
    if ( v24 < v23 )
      return 0LL;
    v25 = v23 + (_DWORD)v77;
    if ( (unsigned __int64)v24 > 0x7FFFFFFF )
      return 0LL;
    v26 = *((_DWORD *)a2 + 6);
    if ( (v26 & 0x40000) != 0 && v24 > 4096 )
      *((_DWORD *)a2 + 6) = v26 | 8;
    v27 = *((_DWORD *)a2 + 6);
    if ( (v27 & 8) != 0 )
    {
      if ( (v27 & 0x80u) == 0 )
        v28 = EngAllocUserMemEx((int)v24, v23, &pv);
      else
        v28 = AllocateSharedSection(v24, v23, &Object, &v69, &pv);
      if ( v28 < 0 )
        return 0LL;
      v22 = pv;
      v29 = Object;
LABEL_47:
      if ( !v22 && !v29 )
        goto LABEL_49;
LABEL_59:
      BugCheckParameter4 = 0LL;
      goto LABEL_60;
    }
    if ( (v27 & 0x810) == 0 )
      goto LABEL_49;
    if ( (v27 & 0x800) != 0 )
    {
      W32PIDLOCK::vInit((W32PIDLOCK *)v75);
      result = 0LL;
      if ( !*((_QWORD *)&v75[2] + 1) )
        return result;
      Object = 0LL;
      v72 = 0;
      v71 = v25 - (_DWORD)v77;
      Win32CreateSection(&Object, 6LL);
      v29 = Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((REGION **)v75);
        return 0LL;
      }
    }
    else
    {
      AllocateKernelSection(v24, v23, &pv);
      v29 = Object;
    }
    v22 = pv;
    if ( !pv && !v29 )
    {
LABEL_49:
      v76 = 1;
      v31 = PALLOCMEM2((unsigned int)(v25 - (_DWORD)v77), 1835167815LL, ((*((_DWORD *)a2 + 6) >> 1) & 1) == 0);
      BugCheckParameter4 = 0LL;
      pv = v31;
      if ( !v31 )
        return 0LL;
LABEL_60:
      v33 = SURFACE::Allocate((unsigned __int64)v22, v21);
      *(_QWORD *)this = v33;
      if ( !v33 )
      {
        v17 = 0;
        goto LABEL_62;
      }
      v77 = *(volatile signed __int32 **)((char *)a2 + 4);
      *((_QWORD *)v33 + 7) = v77;
      *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 232LL) = 0LL;
      v41 = (HPALETTE)*((_QWORD *)a2 + 2);
      if ( v41 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v70, v41);
        v42 = v70;
        if ( v70 )
        {
          v43 = *(_QWORD *)this;
          v70 = 0LL;
          *(_QWORD *)(v43 + 128) = v42;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
        }
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v70);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      }
      *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
      v44 = *(_QWORD *)this;
      pv = 0LL;
      *(_BYTE *)(v44 + 624) = v76;
      *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
      *(_WORD *)(*(_QWORD *)this + 102LL) = v14 | *((_WORD *)a2 + 12) & 0x89;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      BugCheckParameter4 = a6;
      v77 = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 184LL) = CurrentProcessId & 0xFFFFFFFC;
      *(_QWORD *)(*(_QWORD *)this + 192LL) = v79;
      *(_DWORD *)(*(_QWORD *)this + 208LL) = a5;
      *(_QWORD *)(*(_QWORD *)this + 200LL) = BugCheckParameter4;
      *(_QWORD *)(*(_QWORD *)this + 216LL) = a7;
      *(_DWORD *)(*(_QWORD *)this + 224LL) = a10;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
      *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), 0LL, v46, v47);
      if ( ThreadWin32Thread )
        *(_QWORD *)(ThreadWin32Thread + 304) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 272LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 584LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 592LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 120LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 496LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 488LL) = 0LL;
      v51 = (_QWORD *)(*(_QWORD *)this + 240LL);
      v51[1] = v51;
      *v51 = v51;
      *(_DWORD *)(*(_QWORD *)this + 328LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 332LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
      v52 = (_QWORD *)(*(_QWORD *)this + 456LL);
      v52[1] = v52;
      *v52 = v52;
      *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
      if ( v68 )
        *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
      if ( BugCheckParameter4 )
      {
        BugCheckParameter4 = 0LL;
        if ( !a10 )
          *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
      }
      v53 = *(_QWORD *)this;
      if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
      {
        *(_WORD *)(v53 + 102) &= ~0x800u;
        *(_DWORD *)(*(_QWORD *)this + 88LL) = (_DWORD)BugCheckParameter4;
        *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
        if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
        {
          *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
LABEL_91:
          if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
          {
            *(_QWORD *)(*(_QWORD *)this + 520LL) = Object;
            *(_QWORD *)(*(_QWORD *)this + 528LL) = v69;
            v55 = *(_QWORD *)this;
            *(_QWORD *)(v55 + 536) = (char *)v69
                                   + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                   - *(_QWORD *)(*(_QWORD *)this + 72LL);
            *(_DWORD *)(*(_QWORD *)this + 544LL) = 1;
            v56 = W32GetThreadWin32Thread(KeGetCurrentThread(), v55, v49, v50);
            if ( v56 && (v57 = *(_QWORD *)(v56 + 72)) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)this + 548LL) = *(_DWORD *)(v57 + 8);
              *(_DWORD *)(*(_QWORD *)this + 552LL) = 1;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)this + 548LL) = (_DWORD)BugCheckParameter4;
              *(_DWORD *)(*(_QWORD *)this + 552LL) = (_DWORD)BugCheckParameter4;
            }
          }
          v58 = _InterlockedExchangeAdd((volatile signed __int32 *)&_ulGlobalSurfaceUnique, 1u);
          v59 = *(_QWORD *)this;
          v77 = BugCheckParameter4;
          v60 = a8 != (_DWORD)BugCheckParameter4;
          *(_DWORD *)(v59 + 92) = v58 + 1;
          if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v77, *(struct OBJECT **)this, 1, v60, 5u) )
          {
            v61 = a11;
            *((_DWORD *)this + 3) = a11;
            if ( v61 )
              _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
            *(_QWORD *)(*(_QWORD *)this + 32LL) = **(_QWORD **)this;
            CurrentProcess = PsGetCurrentProcess();
            SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess);
          }
          else
          {
            if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
            {
              v74 = *(struct OBJECT **)(*(_QWORD *)this + 128LL);
              XEPALOBJ::vUnrefPalette(&v74);
              *(_QWORD *)(*(_QWORD *)this + 128LL) = BugCheckParameter4;
            }
            SURFACE::Free(*(PSLIST_ENTRY *)this);
            *(_QWORD *)this = BugCheckParameter4;
            v17 = (unsigned int)BugCheckParameter4;
          }
          if ( v77 )
            _InterlockedDecrement(v77 + 3);
          if ( v17 )
          {
            if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0
              && *((volatile signed __int32 **)&v75[2] + 1) != BugCheckParameter4 )
            {
              v63 = v75[0];
              *(_QWORD *)(*(_QWORD *)this + 256LL) = Object;
              v64 = *(_QWORD *)this;
              v65 = v75[1];
              *(_OWORD *)(v64 + 280) = v63;
              v66 = v75[2];
              *(_OWORD *)(v64 + 296) = v65;
              *(_OWORD *)(v64 + 312) = v66;
              *(_QWORD *)(*(_QWORD *)this + 72LL) = BugCheckParameter4;
              *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
              *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
            }
            return v17;
          }
LABEL_62:
          if ( !pv && Object == BugCheckParameter4 )
            return v17;
          v37 = *((_DWORD *)a2 + 6);
          if ( (v37 & 8) != 0 )
          {
            if ( (v37 & 0x80u) == 0 )
            {
              EngFreeUserMem(pv);
            }
            else
            {
              v38 = W32GetThreadWin32Thread(KeGetCurrentThread(), v34, v35, v36);
              if ( *(volatile signed __int32 **)(v38 + 72) != BugCheckParameter4 )
              {
                v39 = (struct _EPROCESS *)PsGetCurrentProcess();
                vUnmapKernelSectionForUserMapping(v39, pv);
                if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(v38 + 72) + 8LL), &Process) >= 0 )
                {
                  vUnmapKernelSectionForUserMapping(Process, v69);
                  ObfDereferenceObject(Process);
                }
                v40 = Object;
                if ( !Object )
                  KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
LABEL_114:
                ObfDereferenceObject(v40);
              }
            }
          }
          else
          {
            if ( (v14 & 0x800) == 0 )
            {
              if ( (v14 & 0x10) != 0 )
              {
                vFreeKernelSection(pv);
              }
              else if ( v76 != (_BYTE)BugCheckParameter4 && pv )
              {
                Win32FreePool((__int64)pv);
              }
              return v17;
            }
            W32PIDLOCK::vCleanUp((REGION **)v75);
            if ( v68 == (_DWORD)BugCheckParameter4 )
            {
              v40 = Object;
              if ( !Object )
                KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
              goto LABEL_114;
            }
          }
          return v17;
        }
      }
      else
      {
        *(_DWORD *)(v53 + 64) = *((_DWORD *)a2 + 2) * v16;
        v54 = *(_QWORD *)this;
        if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
        {
          *(_DWORD *)(v54 + 88) = -v16;
          *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                              + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                              - v16;
          goto LABEL_91;
        }
        *(_DWORD *)(v54 + 88) = v16;
      }
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
      goto LABEL_91;
    }
    v14 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
    goto LABEL_47;
  }
  if ( a9 )
  {
    v22 = v15 ? (PVOID)*((unsigned int *)a2 + 3) : (PVOID)(v16 * v18);
    if ( (unsigned __int64)v22 > 0x7FFFFFFF )
      return 0LL;
  }
  if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
    goto LABEL_59;
  W32PIDLOCK::vInit((W32PIDLOCK *)v75);
  BugCheckParameter4 = 0LL;
  if ( *((_QWORD *)&v75[2] + 1) )
  {
    LOWORD(v14) = 2048;
    v68 = 1;
    goto LABEL_60;
  }
  return 0LL;
}
