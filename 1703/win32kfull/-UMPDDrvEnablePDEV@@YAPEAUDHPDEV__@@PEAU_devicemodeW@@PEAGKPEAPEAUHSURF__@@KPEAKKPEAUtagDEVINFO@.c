/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C010A860
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0097368 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00974C0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C0098284 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00F1EEC (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00F3100 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
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
  UMPDOBJ *v14; // rbx
  struct DHPDEV__ *v15; // rsi
  unsigned int v16; // edi
  char *v17; // rax
  char *KernelPtr; // rax
  unsigned int v19; // edi
  char *v20; // rax
  void *v21; // rdi
  char *v22; // rax
  char *v24; // r13
  PVOID v25; // r15
  PVOID v26; // r12
  PVOID v27; // rdi
  size_t v28; // r8
  size_t v29; // rax
  void *v30; // rdx
  size_t v31; // rax
  void *v32; // rdx
  size_t v33; // [rsp+20h] [rbp-168h]
  UMPDOBJ *v34; // [rsp+38h] [rbp-150h] BYREF
  size_t Size; // [rsp+40h] [rbp-148h]
  PVOID pv; // [rsp+48h] [rbp-140h]
  PVOID v37; // [rsp+50h] [rbp-138h]
  struct DHPDEV__ *v38; // [rsp+58h] [rbp-130h] BYREF
  void *v39; // [rsp+60h] [rbp-128h]
  void *Src; // [rsp+68h] [rbp-120h]
  void *v41; // [rsp+70h] [rbp-118h]
  unsigned int *v42; // [rsp+78h] [rbp-110h]
  PVOID v43; // [rsp+80h] [rbp-108h]
  _QWORD v44[22]; // [rsp+90h] [rbp-F8h] BYREF

  v12 = a3;
  v38 = a2;
  LODWORD(Size) = a5;
  v42 = a6;
  v39 = a8;
  pv = a9;
  v37 = a10;
  Src = a11;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
  memset(v44, 0, sizeof(v44));
  v14 = v34;
  v15 = 0LL;
  if ( v34 )
  {
    v44[0] = 176LL;
    v44[2] = *(_QWORD *)v34;
    v44[3] = *((_QWORD *)pv + 227);
    v44[4] = a1;
    v44[5] = v38;
    LODWORD(v44[6]) = v12;
    v44[7] = a4;
    LODWORD(v44[8]) = a5;
    LODWORD(v44[10]) = a7;
    v44[12] = pv;
    v44[13] = v37;
    v44[14] = Src;
    LODWORD(v44[15]) = *((_DWORD *)v34 + 109);
    if ( LODWORD(v44[15]) )
      HIDWORD(v44[15]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    else
      v44[15] = 0LL;
    v16 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
    if ( (!a4 || (unsigned int)v12 > 0x1FFFFFFF || (v44[7] = UMPDOBJ::_AllocUserMem(v14, 8 * (int)v12, 1)) != 0LL)
      && (!a6 || (v44[9] = UMPDOBJ::_AllocUserMem(v14, Size, 1)) != 0LL)
      && (!v39 || (v44[11] = UMPDOBJ::_AllocUserMem(v14, a7, 1)) != 0LL) )
    {
      v17 = (char *)UMPDOBJ::_AllocUserMem(v14, 0x30000u, 1);
      if ( v17 )
      {
        v44[17] = v17;
        v44[18] = v17 + 0x10000;
        v44[19] = v17 + 0x20000;
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v44[4], v16) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v44[5]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v44[13]) )
            {
              LODWORD(v33) = 8;
              if ( (unsigned int)UMPDOBJ::Thunk(v14, v44, 0xB0u, &v38, v33) != -1 )
              {
                if ( a4 )
                {
                  KernelPtr = UMPDOBJ::GetKernelPtr(v14, (char *)v44[7]);
                  memmove(a4, KernelPtr, 8 * v12);
                }
                if ( a6 )
                {
                  v19 = Size;
                  v20 = UMPDOBJ::GetKernelPtr(v14, (char *)v44[9]);
                  memmove(a6, v20, v19);
                  if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
                  {
                    v43 = pv;
                    SETFLAG(1, (volatile unsigned int *)pv + 8, 0x400000);
                    LODWORD(v44[20]) = *((_QWORD *)a6 + 35) != 0LL;
                    HIDWORD(v44[20]) = *((_QWORD *)a6 + 36) != 0LL;
                    LODWORD(v44[21]) = *((_QWORD *)a6 + 37) != 0LL;
                    *((_QWORD *)a6 + 35) = 0LL;
                    *((_QWORD *)a6 + 36) = 0LL;
                    *((_QWORD *)a6 + 37) = 0LL;
                    v24 = UMPDOBJ::GetKernelPtr(v14, (char *)v44[17]);
                    Src = UMPDOBJ::GetKernelPtr(v14, (char *)v44[18]);
                    v41 = UMPDOBJ::GetKernelPtr(v14, (char *)v44[19]);
                    v25 = 0LL;
                    pv = 0LL;
                    v26 = 0LL;
                    Size = 0LL;
                    v27 = 0LL;
                    v37 = 0LL;
                    if ( LODWORD(v44[20]) )
                    {
                      v25 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      pv = v25;
                    }
                    if ( HIDWORD(v44[20]) )
                    {
                      v26 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      Size = (size_t)v26;
                    }
                    if ( LODWORD(v44[21]) )
                    {
                      v27 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      v37 = v27;
                    }
                    if ( v25 )
                    {
                      v28 = a6[68] * a6[69];
                      if ( &v24[v28] < v24 || (unsigned __int64)&v24[v28] > W32UserProbeAddress )
                        *W32UserProbeAddress = 0;
                      memmove(v25, v24, v28);
                      if ( v26 )
                      {
                        v29 = a6[68] * a6[69];
                        v30 = Src;
                        if ( (char *)Src + v29 < Src || (unsigned __int64)Src + v29 > W32UserProbeAddress )
                          *W32UserProbeAddress = 0;
                        memmove(v26, v30, v29);
                      }
                      if ( v27 )
                      {
                        v31 = a6[68] * a6[69];
                        v32 = v41;
                        if ( (char *)v41 + v31 < v41 || (unsigned __int64)v41 + v31 > W32UserProbeAddress )
                          *W32UserProbeAddress = 0;
                        memmove(v27, v32, v31);
                      }
                      *((_QWORD *)a6 + 35) = v25;
                      *((_QWORD *)a6 + 36) = v26;
                      *((_QWORD *)a6 + 37) = v27;
                    }
                    else
                    {
                      a6[59] = 17;
                    }
                  }
                }
                v21 = v39;
                if ( v39 )
                {
                  v22 = UMPDOBJ::GetKernelPtr(v14, (char *)v44[11]);
                  if ( !*((_QWORD *)v22 + 37) )
                  {
                    if ( v38 )
                      UMPDDrvDisablePDEV(v38);
                    goto LABEL_26;
                  }
                  memmove(v21, v22, a7);
                }
                v15 = v38;
LABEL_26:
                XUMPDOBJ::~XUMPDOBJ(&v34);
                return v15;
              }
            }
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v34);
  return 0LL;
}
