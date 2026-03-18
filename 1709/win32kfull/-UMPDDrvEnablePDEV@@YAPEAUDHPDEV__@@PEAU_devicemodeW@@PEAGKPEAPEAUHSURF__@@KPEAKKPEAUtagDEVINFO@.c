/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0113460
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C00B9460 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00FDBCC (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0100C10 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

struct DHPDEV__ *__fastcall UMPDDrvEnablePDEV(
        struct _devicemodeW *a1,
        struct DHPDEV__ *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  __int64 v12; // r13
  __int64 v14; // r9
  UMPDOBJ *v15; // rbx
  struct DHPDEV__ *v16; // rsi
  unsigned int v17; // edi
  char *v18; // rax
  __int64 v19; // r9
  char *KernelPtr; // rax
  unsigned int v21; // edi
  char *v22; // rax
  void *v23; // rdi
  char *v24; // rax
  char *v26; // r13
  PVOID v27; // r15
  PVOID v28; // r12
  PVOID v29; // rdi
  size_t v30; // r8
  size_t v31; // rax
  void *v32; // rdx
  size_t v33; // rax
  void *v34; // rdx
  size_t v35; // [rsp+20h] [rbp-158h]
  UMPDOBJ *v36; // [rsp+38h] [rbp-140h] BYREF
  size_t Size; // [rsp+40h] [rbp-138h]
  PVOID pv; // [rsp+48h] [rbp-130h]
  PVOID v39; // [rsp+50h] [rbp-128h]
  struct DHPDEV__ *v40; // [rsp+58h] [rbp-120h] BYREF
  void *v41; // [rsp+60h] [rbp-118h]
  void *Src; // [rsp+68h] [rbp-110h]
  void *v43; // [rsp+70h] [rbp-108h]
  unsigned int *v44; // [rsp+78h] [rbp-100h]
  _QWORD v45[22]; // [rsp+80h] [rbp-F8h] BYREF

  v12 = a3;
  v40 = a2;
  LODWORD(Size) = a5;
  v44 = a6;
  v41 = a8;
  pv = a9;
  v39 = a10;
  Src = a11;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v36);
  memset(v45, 0, sizeof(v45));
  v15 = v36;
  v16 = 0LL;
  if ( v36 )
  {
    v45[0] = 176LL;
    v45[2] = *(_QWORD *)v36;
    v45[3] = *((_QWORD *)pv + 227);
    v45[4] = a1;
    v45[5] = v40;
    LODWORD(v45[6]) = v12;
    v45[7] = a4;
    LODWORD(v45[8]) = a5;
    LODWORD(v45[10]) = a7;
    v45[12] = pv;
    v45[13] = v39;
    v45[14] = Src;
    LODWORD(v45[15]) = *((_DWORD *)v36 + 109);
    if ( LODWORD(v45[15]) )
      HIDWORD(v45[15]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    else
      v45[15] = 0LL;
    v17 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
    if ( (!a4
       || (unsigned int)v12 > 0x1FFFFFFF
       || (v45[7] = UMPDOBJ::_AllocUserMem(v15, (unsigned int)(8 * v12), 1LL, v14)) != 0LL)
      && (!a6 || (v45[9] = UMPDOBJ::_AllocUserMem(v15, (unsigned int)Size, 1LL, v14)) != 0LL)
      && (!v41 || (v45[11] = UMPDOBJ::_AllocUserMem(v15, a7, 1LL, v14)) != 0LL) )
    {
      v18 = (char *)UMPDOBJ::_AllocUserMem(v15, 196608LL, 1LL, v14);
      if ( v18 )
      {
        v45[17] = v18;
        v45[18] = v18 + 0x10000;
        v45[19] = v18 + 0x20000;
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v45[4], v17, v19) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkStringW(v15, (unsigned __int16 **)&v45[5]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkStringW(v15, (unsigned __int16 **)&v45[13]) )
            {
              LODWORD(v35) = 8;
              if ( (unsigned int)UMPDOBJ::Thunk(v15, v45, 176LL, &v40, v35) != -1 )
              {
                if ( a4 )
                {
                  KernelPtr = UMPDOBJ::GetKernelPtr(v15, (char *)v45[7]);
                  memmove(a4, KernelPtr, 8 * v12);
                }
                if ( a6 )
                {
                  v21 = Size;
                  v22 = UMPDOBJ::GetKernelPtr(v15, (char *)v45[9]);
                  memmove(a6, v22, v21);
                  if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
                  {
                    SETFLAG(1, (volatile unsigned int *)pv + 8, 0x400000);
                    LODWORD(v45[20]) = *((_QWORD *)a6 + 35) != 0LL;
                    HIDWORD(v45[20]) = *((_QWORD *)a6 + 36) != 0LL;
                    LODWORD(v45[21]) = *((_QWORD *)a6 + 37) != 0LL;
                    *((_QWORD *)a6 + 35) = 0LL;
                    *((_QWORD *)a6 + 36) = 0LL;
                    *((_QWORD *)a6 + 37) = 0LL;
                    v26 = UMPDOBJ::GetKernelPtr(v15, (char *)v45[17]);
                    Src = UMPDOBJ::GetKernelPtr(v15, (char *)v45[18]);
                    v43 = UMPDOBJ::GetKernelPtr(v15, (char *)v45[19]);
                    v27 = 0LL;
                    pv = 0LL;
                    v28 = 0LL;
                    Size = 0LL;
                    v29 = 0LL;
                    v39 = 0LL;
                    if ( LODWORD(v45[20]) )
                    {
                      v27 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      pv = v27;
                    }
                    if ( HIDWORD(v45[20]) )
                    {
                      v28 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      Size = (size_t)v28;
                    }
                    if ( LODWORD(v45[21]) )
                    {
                      v29 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      v39 = v29;
                    }
                    if ( v27 )
                    {
                      v30 = a6[68] * a6[69];
                      if ( &v26[v30] < v26 || (unsigned __int64)&v26[v30] > MmUserProbeAddress )
                        *(_BYTE *)MmUserProbeAddress = 0;
                      memmove(v27, v26, v30);
                      if ( v28 )
                      {
                        v31 = a6[68] * a6[69];
                        v32 = Src;
                        if ( (char *)Src + v31 < Src || (unsigned __int64)Src + v31 > MmUserProbeAddress )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v28, v32, v31);
                      }
                      if ( v29 )
                      {
                        v33 = a6[68] * a6[69];
                        v34 = v43;
                        if ( (char *)v43 + v33 < v43 || (unsigned __int64)v43 + v33 > MmUserProbeAddress )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v29, v34, v33);
                      }
                      *((_QWORD *)a6 + 35) = v27;
                      *((_QWORD *)a6 + 36) = v28;
                      *((_QWORD *)a6 + 37) = v29;
                    }
                    else
                    {
                      a6[59] = 17;
                    }
                  }
                }
                v23 = v41;
                if ( v41 )
                {
                  v24 = UMPDOBJ::GetKernelPtr(v15, (char *)v45[11]);
                  if ( !*((_QWORD *)v24 + 37) )
                  {
                    if ( v40 )
                      UMPDDrvDisablePDEV(v40);
                    goto LABEL_26;
                  }
                  memmove(v23, v24, a7);
                }
                v16 = v40;
LABEL_26:
                XUMPDOBJ::~XUMPDOBJ(&v36);
                return v16;
              }
            }
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v36);
  return 0LL;
}
