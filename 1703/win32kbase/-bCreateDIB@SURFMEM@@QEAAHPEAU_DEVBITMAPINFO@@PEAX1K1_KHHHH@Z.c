/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800
 * Callers:
 *     GreCreateBitmap @ 0x1C0042610 (GreCreateBitmap.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005A440 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0077B90 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00881A4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C002CBB4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C002CC34 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002CD48 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C003F348 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     Win32CreateSection @ 0x1C0076290 (Win32CreateSection.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C007C408 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     EngAllocUserMemEx @ 0x1C007DBBC (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C007DCC0 (EngFreeUserMem.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00EB074 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00EB120 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00EBA3C (-vFreeKernelSection@@YAXPEAX@Z.c)
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
  unsigned int v13; // r14d
  int v14; // r13d
  unsigned int v15; // ecx
  int v16; // r15d
  unsigned int v17; // edi
  __int64 v18; // r12
  int v19; // eax
  int v20; // edi
  unsigned __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // eax
  int v24; // eax
  int v25; // eax
  PVOID v26; // rcx
  PVOID v27; // rax
  int v28; // r8d
  __int64 result; // rax
  int v30; // eax
  unsigned __int16 v31; // r15
  unsigned __int64 v32; // rcx
  struct SURFACE *v33; // rax
  volatile signed __int32 *BugCheckParameter4; // r15
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rax
  PVOID v38; // rcx
  __int64 v39; // rcx
  HPALETTE v40; // rdx
  unsigned int CurrentProcessId; // eax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  signed __int32 v49; // ecx
  __int64 v50; // rax
  char v51; // r9
  int v52; // eax
  __int64 CurrentProcess; // rax
  __int128 v54; // xmm0
  __int64 v55; // rax
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  PVOID Object; // [rsp+50h] [rbp-61h] BYREF
  int v59; // [rsp+58h] [rbp-59h]
  void *v60; // [rsp+60h] [rbp-51h] BYREF
  _DWORD v61[2]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v62; // [rsp+70h] [rbp-41h] BYREF
  __int64 v63; // [rsp+78h] [rbp-39h] BYREF
  _OWORD v64[7]; // [rsp+80h] [rbp-31h] BYREF
  volatile signed __int32 *v65; // [rsp+100h] [rbp+4Fh] BYREF
  PEPROCESS Process; // [rsp+108h] [rbp+57h] BYREF
  PVOID pv; // [rsp+110h] [rbp+5Fh] BYREF
  void *v68; // [rsp+118h] [rbp+67h]

  v68 = a4;
  pv = a3;
  *((_BYTE *)this + 8) = 8;
  *(_QWORD *)this = 0LL;
  v13 = 1;
  LOWORD(v14) = 0;
  v15 = *((_DWORD *)a2 + 1);
  v16 = 0;
  v17 = 0;
  if ( v15 > 0x7FFFFFFF )
    return 0LL;
  v18 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v18 > 0x7FFFFFFF )
    return 0LL;
  v19 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v17 = ((v15 + 31) >> 3) & 0x1FFFFFFC;
    goto LABEL_21;
  }
  switch ( v19 )
  {
    case 2:
      v17 = ((v15 + 7) >> 1) & 0x7FFFFFFC;
      break;
    case 3:
      v20 = v15 + 3;
LABEL_18:
      v17 = v20 & 0xFFFFFFFC;
      break;
    case 4:
      if ( v15 + 1 >= 0x7FFFFFFF )
        return 0LL;
      v20 = 2 * v15 + 2;
      goto LABEL_18;
    case 5:
      if ( v15 >= 0x55555554 )
        return 0LL;
      v20 = 3 * (v15 + 1);
      goto LABEL_18;
    case 6:
      if ( v15 >= 0x3FFFFFFF )
        return 0LL;
      v17 = 4 * v15;
      break;
    default:
      if ( (unsigned int)(v19 - 7) > 3 )
        return 0LL;
      v16 = 1;
      break;
  }
LABEL_21:
  LODWORD(Process) = SURFACE::tSize;
  LOWORD(v65) = 4;
  Object = 0LL;
  memset(v64, 0, 0x30uLL);
  v59 = 0;
  v60 = 0LL;
  if ( pv )
  {
    if ( !a9 || (!v16 ? (v32 = v17 * v18) : (v32 = *((unsigned int *)a2 + 3)), v32 <= 0x7FFFFFFF) )
    {
      if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
        goto LABEL_59;
      W32PIDLOCK::vInit((W32PIDLOCK *)v64);
      if ( *((_QWORD *)&v64[2] + 1) )
      {
        LOWORD(v14) = 2048;
        v59 = 1;
        goto LABEL_59;
      }
    }
    return 0LL;
  }
  if ( v16 )
    v21 = *((unsigned int *)a2 + 3);
  else
    v21 = v17 * v18;
  v22 = v21 + (unsigned int)Process;
  if ( v22 >= v21 && (unsigned __int64)v22 <= 0x7FFFFFFF )
  {
    v23 = *((_DWORD *)a2 + 6);
    if ( (v23 & 0x40000) != 0 && v22 > 4096 )
      *((_DWORD *)a2 + 6) = v23 | 8;
    v24 = *((_DWORD *)a2 + 6);
    if ( (v24 & 8) != 0 )
    {
      if ( (v24 & 0x80u) == 0 )
        v25 = EngAllocUserMemEx((int)v22, 0LL, &pv);
      else
        v25 = AllocateSharedSection(v22, 0, &Object, &v60, &pv);
      if ( v25 >= 0 )
      {
        v26 = pv;
        v27 = Object;
LABEL_47:
        if ( v26 || v27 )
          goto LABEL_59;
        goto LABEL_49;
      }
      return 0LL;
    }
    if ( (v24 & 0x810) != 0 )
    {
      if ( (v24 & 0x800) != 0 )
      {
        W32PIDLOCK::vInit((W32PIDLOCK *)v64);
        result = 0LL;
        if ( !*((_QWORD *)&v64[2] + 1) )
          return result;
        Object = 0LL;
        v61[1] = 0;
        v61[0] = v22 - (_DWORD)Process;
        Win32CreateSection((unsigned int)&Object, 6, v28, (unsigned int)v61);
        v27 = Object;
        if ( !Object )
        {
          W32PIDLOCK::vCleanUp((REGION **)v64);
          return 0LL;
        }
      }
      else
      {
        AllocateKernelSection(v22, 0, &pv);
        v27 = Object;
      }
      v26 = pv;
      if ( pv || v27 )
      {
        v14 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
        goto LABEL_47;
      }
    }
LABEL_49:
    v30 = *((_DWORD *)a2 + 6);
    LODWORD(Process) = v22;
    if ( (v30 & 2) == 0 )
    {
      v31 = 0;
      goto LABEL_60;
    }
LABEL_59:
    v31 = (unsigned __int16)v65;
LABEL_60:
    v33 = SURFACE::Allocate((unsigned int)Process, v31);
    *(_QWORD *)this = v33;
    if ( !v33 )
    {
      BugCheckParameter4 = 0LL;
      v13 = 0;
      goto LABEL_62;
    }
    if ( v31 )
      memset(v33, 0, SURFACE::tSize);
    v39 = *(_QWORD *)this;
    v65 = *(volatile signed __int32 **)((char *)a2 + 4);
    *(_QWORD *)(v39 + 56) = v65;
    *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 232LL) = 0LL;
    v40 = (HPALETTE)*((_QWORD *)a2 + 2);
    if ( v40 && (EPALOBJ::EPALOBJ((EPALOBJ *)&v62, v40), v62) )
      *(_QWORD *)(*(_QWORD *)this + 128LL) = v62;
    else
      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
    *(_WORD *)(*(_QWORD *)this + 102LL) = v14 | *((_WORD *)a2 + 12) & 0x89;
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    BugCheckParameter4 = a6;
    v65 = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 184LL) = CurrentProcessId & 0xFFFFFFFC;
    *(_QWORD *)(*(_QWORD *)this + 192LL) = v68;
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
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
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
    v43 = (_QWORD *)(*(_QWORD *)this + 240LL);
    v43[1] = v43;
    *v43 = v43;
    *(_DWORD *)(*(_QWORD *)this + 328LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 332LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
    v44 = (_QWORD *)(*(_QWORD *)this + 456LL);
    v44[1] = v44;
    *v44 = v44;
    *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
    if ( v59 )
      *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
    if ( BugCheckParameter4 )
    {
      BugCheckParameter4 = 0LL;
      if ( !a10 )
        *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
    }
    if ( pv || Object != BugCheckParameter4 )
      *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
    else
      *(_QWORD *)(*(_QWORD *)this + 72LL) = *(_QWORD *)this + SURFACE::tSize;
    v45 = *(_QWORD *)this;
    if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
    {
      *(_WORD *)(v45 + 102) &= ~0x800u;
      *(_DWORD *)(*(_QWORD *)this + 88LL) = (_DWORD)BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
      if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
      {
        *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
LABEL_95:
        if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
        {
          *(_QWORD *)(*(_QWORD *)this + 520LL) = Object;
          *(_QWORD *)(*(_QWORD *)this + 528LL) = v60;
          *(_QWORD *)(*(_QWORD *)this + 536LL) = (char *)v60
                                               + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                               - *(_QWORD *)(*(_QWORD *)this + 72LL);
          *(_DWORD *)(*(_QWORD *)this + 544LL) = 1;
          v47 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( v47 && (v48 = *(_QWORD *)(v47 + 72)) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)this + 548LL) = *(_DWORD *)(v48 + 8);
            *(_DWORD *)(*(_QWORD *)this + 552LL) = 1;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)this + 548LL) = (_DWORD)BugCheckParameter4;
            *(_DWORD *)(*(_QWORD *)this + 552LL) = (_DWORD)BugCheckParameter4;
          }
        }
        v49 = _InterlockedExchangeAdd((volatile signed __int32 *)&_ulGlobalSurfaceUnique, 1u);
        v50 = *(_QWORD *)this;
        v65 = BugCheckParameter4;
        v51 = a8 != (_DWORD)BugCheckParameter4;
        *(_DWORD *)(v50 + 92) = v49 + 1;
        if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v65, *(struct OBJECT **)this, 1, v51, 5u) )
        {
          v52 = a11;
          *((_DWORD *)this + 3) = a11;
          if ( v52 )
            _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
          *(_QWORD *)(*(_QWORD *)this + 32LL) = **(_QWORD **)this;
          CurrentProcess = PsGetCurrentProcess();
          SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess);
        }
        else
        {
          if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
          {
            v63 = *(_QWORD *)(*(_QWORD *)this + 128LL);
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v63);
            *(_QWORD *)(*(_QWORD *)this + 128LL) = BugCheckParameter4;
          }
          SURFACE::Free(*(struct SURFACE **)this);
          *(_QWORD *)this = BugCheckParameter4;
          v13 = (unsigned int)BugCheckParameter4;
        }
        if ( v65 )
          _InterlockedDecrement(v65 + 3);
        if ( v13 )
        {
          if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0
            && *((volatile signed __int32 **)&v64[2] + 1) != BugCheckParameter4 )
          {
            v54 = v64[0];
            *(_QWORD *)(*(_QWORD *)this + 256LL) = Object;
            v55 = *(_QWORD *)this;
            v56 = v64[1];
            *(_OWORD *)(v55 + 280) = v54;
            v57 = v64[2];
            *(_OWORD *)(v55 + 296) = v56;
            *(_OWORD *)(v55 + 312) = v57;
            *(_QWORD *)(*(_QWORD *)this + 72LL) = BugCheckParameter4;
            *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
            *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
          }
          return v13;
        }
LABEL_62:
        if ( !pv && Object == BugCheckParameter4 )
          return v13;
        v35 = *((_DWORD *)a2 + 6);
        if ( (v35 & 8) != 0 )
        {
          if ( (v35 & 0x80u) == 0 )
          {
            EngFreeUserMem(pv);
          }
          else
          {
            v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            if ( *(volatile signed __int32 **)(v36 + 72) != BugCheckParameter4 )
            {
              v37 = PsGetCurrentProcess();
              MmUnmapViewOfSection(v37);
              if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(v36 + 72) + 8LL), &Process) >= 0 )
              {
                MmUnmapViewOfSection(Process);
                ObfDereferenceObject(Process);
              }
              v38 = Object;
              if ( !Object )
                KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
LABEL_118:
              ObfDereferenceObject(v38);
            }
          }
        }
        else
        {
          if ( (v14 & 0x800) == 0 )
          {
            if ( (v14 & 0x10) != 0 )
              vFreeKernelSection(pv);
            return v13;
          }
          W32PIDLOCK::vCleanUp((REGION **)v64);
          if ( v59 == (_DWORD)BugCheckParameter4 )
          {
            v38 = Object;
            if ( !Object )
              KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
            goto LABEL_118;
          }
        }
        return v13;
      }
    }
    else
    {
      *(_DWORD *)(v45 + 64) = *((_DWORD *)a2 + 2) * v17;
      v46 = *(_QWORD *)this;
      if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
      {
        *(_DWORD *)(v46 + 88) = -v17;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                            + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                            - v17;
        goto LABEL_95;
      }
      *(_DWORD *)(v46 + 88) = v17;
    }
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    goto LABEL_95;
  }
  return 0LL;
}
