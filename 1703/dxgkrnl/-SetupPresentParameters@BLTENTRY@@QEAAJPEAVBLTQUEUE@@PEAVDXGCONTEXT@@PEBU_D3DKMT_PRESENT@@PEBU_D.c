/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01B641C
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B51E8 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C01B473C (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5F44 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
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
  unsigned int v12; // ecx
  D3DKMT_HANDLE v13; // edi
  __int64 v14; // r8
  unsigned int v15; // edx
  struct DXGALLOCATION *v16; // rdi
  struct DXGDEVICE *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct DXGALLOCATION *v20; // rcx
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  void *v25; // rcx
  struct DXGDEVICE *v26; // rdi
  const struct tagRECT *v27; // r15
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rbx
  PVOID Object; // [rsp+50h] [rbp-D8h] BYREF
  PVOID v34; // [rsp+58h] [rbp-D0h] BYREF
  struct COREDEVICEACCESS *v35; // [rsp+60h] [rbp-C8h]
  struct DXGCONTEXT *v36; // [rsp+68h] [rbp-C0h]
  BLTENTRY *v37; // [rsp+70h] [rbp-B8h]
  __int128 *v38; // [rsp+78h] [rbp-B0h]
  unsigned int v39[20]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-58h] BYREF

  v37 = (BLTENTRY *)this;
  v36 = (struct DXGCONTEXT *)a3;
  v35 = a6;
  this[3] = a2;
  this[5] = 0LL;
  this[6] = 0LL;
  if ( (a4->Flags.Value & 4) != 0 )
    hSource = a4->hSource;
  else
    hSource = a4->hDestination;
  v11 = *((_QWORD *)a3[2] + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 168));
  v12 = (hSource >> 6) & 0xFFFFFF;
  v13 = hSource >> 30;
  if ( v12 < *(_DWORD *)(v11 + 208)
    && (v14 = *(_QWORD *)(v11 + 192), v15 = *(_DWORD *)(v14 + 16LL * v12 + 8), v13 == ((v15 >> 4) & 3))
    && (v15 & 0x1000) == 0
    && (v15 & 0xF) != 0
    && (*(_BYTE *)(v14 + 16LL * v12 + 8) & 0xF) == 5 )
  {
    v16 = *(struct DXGALLOCATION **)(v14 + 16LL * v12);
  }
  else
  {
    v16 = 0LL;
  }
  ExReleasePushLockSharedEx(v11 + 168, 0LL);
  KeLeaveCriticalRegion();
  this[4] = v16;
  if ( !v16 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v19[3] = a3;
    v20 = (struct DXGALLOCATION *)a4->hSource;
LABEL_13:
    v19[4] = v20;
    v19[5] = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  if ( !a7 )
  {
    v17 = a3[2];
    v22 = *(_QWORD *)(*((_QWORD *)v16 + 1) + 16LL);
    if ( *(_QWORD *)(v22 + 16) != *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v22, v17);
      v19[3] = a3[2];
LABEL_18:
      v20 = this[4];
      goto LABEL_13;
    }
  }
  v23 = *(unsigned int *)(*((_QWORD *)v16 + 6) + 4LL);
  if ( (v23 & 4) == 0 && !a7 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v23, v17);
    v19[3] = a3;
    goto LABEL_18;
  }
  this[65] = 0LL;
  if ( a7 || *((_BYTE *)a3 + 369) )
  {
    *((_DWORD *)this + 130) = 1;
  }
  else
  {
    memset(v39, 0, sizeof(v39));
    DxgkpGetDodPrimaryInfo(a3[2], v16, (struct _D3DKMT_KMDOD_ESCAPE *)v39);
    if ( !v39[8] )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v19[3] = 93LL;
      goto LABEL_14;
    }
    v26 = a3[7];
    v27 = 0LL;
    if ( *(_DWORD *)v26 != -791674878 || (v25 = (void *)*((_QWORD *)v26 + 2)) == 0LL || !*((_QWORD *)v26 + 3) )
    {
      v30 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v30 + 24) = 107LL;
      WdLogEvent5_WdError(v30);
      return 3221225485LL;
    }
    v28 = ObReferenceObjectByHandle(v25, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    this[5] = (struct DXGALLOCATION *)Object;
    if ( v28 < 0 )
      return 3221225485LL;
    v29 = ObReferenceObjectByHandle(*((HANDLE *)v26 + 3), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v34, 0LL);
    this[6] = (struct DXGALLOCATION *)v34;
    if ( v29 < 0 )
      return 3221225485LL;
    if ( *((struct DXGDEVICE **)v26 + 4) == (struct DXGDEVICE *)((char *)v26 + 32)
      && *((_DWORD *)v26 + 10) >= 0x80000000 )
    {
      v40 = *(_OWORD *)((char *)v26 + 44);
      v27 = (const struct tagRECT *)&v40;
      v38 = &v40;
    }
    result = PRESENTDODARG::SetPresentDodArg(
               (PRESENTDODARG *)(this + 9),
               (struct DXGCONTEXT *)a3,
               this[4],
               v39[8],
               v39[10],
               v27,
               a4,
               a5,
               v35);
    if ( (int)result < 0 )
    {
      this[4] = 0LL;
      return result;
    }
  }
  *((_DWORD *)this + 16) = a4->Flags.0;
  *((_DWORD *)this + 14) = a4->FlipInterval;
  *((_DWORD *)this + 15) = a4->PresentCount;
  v31 = this + 66;
  memset(this + 66, 0, 0x20uLL);
  *((LARGE_INTEGER *)this + 67) = KeQueryPerformanceCounter(0LL);
  v32 = MEMORY[0xFFFFF78000000320];
  *v31 = v32 * KeQueryTimeIncrement();
  return 0LL;
}
