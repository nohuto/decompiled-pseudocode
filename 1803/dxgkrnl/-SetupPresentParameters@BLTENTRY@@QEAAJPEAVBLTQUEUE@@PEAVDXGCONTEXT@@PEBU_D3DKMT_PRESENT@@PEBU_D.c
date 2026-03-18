/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01D69C0
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5738 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C01D4BC4 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D64FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 */

__int64 __fastcall BLTENTRY::SetupPresentParameters(
        struct DXGALLOCATION **this,
        struct BLTQUEUE *a2,
        struct DXGDEVICE **a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned __int8 a7)
{
  D3DKMT_HANDLE hSource; // edi
  __int64 v11; // r15
  __int64 v12; // rax
  D3DKMT_HANDLE v13; // edi
  __int64 v14; // r8
  unsigned int v15; // ecx
  struct DXGALLOCATION *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  struct DXGALLOCATION *v19; // rcx
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rcx
  struct DXGDEVICE *v24; // rdi
  const struct tagRECT *v25; // r15
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  __int64 v28; // rax
  _QWORD *v29; // rdi
  __int64 v30; // rbx
  PVOID Object; // [rsp+50h] [rbp-D8h] BYREF
  PVOID v32; // [rsp+58h] [rbp-D0h] BYREF
  struct COREDEVICEACCESS *v33; // [rsp+60h] [rbp-C8h]
  struct DXGCONTEXT *v34; // [rsp+68h] [rbp-C0h]
  BLTENTRY *v35; // [rsp+70h] [rbp-B8h]
  __int128 *v36; // [rsp+78h] [rbp-B0h]
  unsigned int v37[20]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-58h] BYREF

  v35 = (BLTENTRY *)this;
  v34 = (struct DXGCONTEXT *)a3;
  v33 = a6;
  this[3] = a2;
  this[5] = 0LL;
  this[6] = 0LL;
  if ( (a4->Flags.Value & 4) != 0 )
    hSource = a4->hSource;
  else
    hSource = a4->hDestination;
  v11 = *((_QWORD *)a3[2] + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 208));
  v12 = (hSource >> 6) & 0xFFFFFF;
  v13 = hSource >> 30;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 248)
    && (v14 = *(_QWORD *)(v11 + 232), v15 = *(_DWORD *)(v14 + 16 * v12 + 8), v13 == ((v15 >> 5) & 3))
    && (v15 & 0x2000) == 0
    && (v15 & 0x1F) == 5 )
  {
    v16 = *(struct DXGALLOCATION **)(v14 + 16LL * (unsigned int)v12);
  }
  else
  {
    v16 = 0LL;
  }
  ExReleasePushLockSharedEx(v11 + 208, 0LL);
  KeLeaveCriticalRegion();
  this[4] = v16;
  if ( !v16 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v18[3] = a3;
    v19 = (struct DXGALLOCATION *)a4->hSource;
LABEL_12:
    v18[4] = v19;
    v18[5] = -1073741811LL;
LABEL_13:
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  if ( !a7 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)a3[2] + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 1) + 16LL) + 16LL) != v21 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v18[3] = a3[2];
LABEL_17:
      v19 = this[4];
      goto LABEL_12;
    }
  }
  v22 = *(unsigned int *)(*((_QWORD *)v16 + 6) + 4LL);
  if ( (v22 & 4) == 0 && !a7 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v18[3] = a3;
    goto LABEL_17;
  }
  this[65] = 0LL;
  if ( a7 || *((_BYTE *)a3 + 401) )
  {
    *((_DWORD *)this + 130) = 1;
  }
  else
  {
    memset(v37, 0, sizeof(v37));
    DxgkpGetDodPrimaryInfo(a3[2], v16, (struct _D3DKMT_KMDOD_ESCAPE *)v37);
    if ( !v37[8] )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v18[3] = 93LL;
      goto LABEL_13;
    }
    v24 = a3[7];
    v25 = 0LL;
    if ( *(_DWORD *)v24 != -791674878 || (v23 = (void *)*((_QWORD *)v24 + 2)) == 0LL || !*((_QWORD *)v24 + 3) )
    {
      v28 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v28 + 24) = 107LL;
      WdLogEvent5_WdError(v28);
      return 3221225485LL;
    }
    v26 = ObReferenceObjectByHandle(v23, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    this[5] = (struct DXGALLOCATION *)Object;
    if ( v26 < 0 )
      return 3221225485LL;
    v27 = ObReferenceObjectByHandle(*((HANDLE *)v24 + 3), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v32, 0LL);
    this[6] = (struct DXGALLOCATION *)v32;
    if ( v27 < 0 )
      return 3221225485LL;
    if ( *((struct DXGDEVICE **)v24 + 4) == (struct DXGDEVICE *)((char *)v24 + 32) && *((int *)v24 + 10) < 0 )
    {
      v38 = *(_OWORD *)((char *)v24 + 44);
      v25 = (const struct tagRECT *)&v38;
      v36 = &v38;
    }
    result = PRESENTDODARG::SetPresentDodArg(
               (PRESENTDODARG *)(this + 9),
               (struct DXGCONTEXT *)a3,
               *((_DWORD *)this[3] + 24),
               this[4],
               v37[8],
               v37[10],
               v25,
               a4,
               a5,
               v33);
    if ( (int)result < 0 )
    {
      this[4] = 0LL;
      return result;
    }
  }
  *((_DWORD *)this + 16) = a4->Flags.0;
  *((_DWORD *)this + 14) = a4->FlipInterval;
  *((_DWORD *)this + 15) = a4->PresentCount;
  v29 = this + 66;
  memset(this + 66, 0, 0x20uLL);
  *((LARGE_INTEGER *)this + 67) = KeQueryPerformanceCounter(0LL);
  v30 = MEMORY[0xFFFFF78000000320];
  *v29 = v30 * KeQueryTimeIncrement();
  return 0LL;
}
