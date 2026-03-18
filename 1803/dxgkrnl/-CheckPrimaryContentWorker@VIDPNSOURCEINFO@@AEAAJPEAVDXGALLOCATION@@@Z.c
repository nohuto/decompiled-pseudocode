/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01EA670
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C01EA3E8 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0189EF4 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C018A0B0 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B040C (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C01EA524 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(
        VIDPNSOURCEINFO *this,
        struct DXGALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGCONTEXT *v9; // rcx
  struct DXGCONTEXT *i; // rax
  struct DXGCONTEXT *v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  char *v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  UINT Height; // eax
  int v24; // ecx
  int v25; // edx
  __int64 v26; // r12
  UINT v27; // eax
  unsigned int v28; // r13d
  signed int Width; // r11d
  unsigned int v30; // ecx
  unsigned int v31; // r12d
  unsigned int v32; // eax
  LONG v33; // r9d
  LONG v34; // r10d
  LONG v35; // ecx
  unsigned int v36; // r8d
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // ecx
  int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // r8d
  __int64 v45; // rax
  int v46; // ecx
  unsigned int v47; // ecx
  unsigned int *v48; // rbx
  struct tagRECT *v49; // [rsp+20h] [rbp-E0h]
  unsigned int v50; // [rsp+50h] [rbp-B0h]
  signed int v51; // [rsp+54h] [rbp-ACh]
  int v52; // [rsp+58h] [rbp-A8h]
  unsigned int v53[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v56; // [rsp+70h] [rbp-90h]
  struct DXGCONTEXT *v57; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v58; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v59; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v60; // [rsp+C0h] [rbp-40h]
  char v61[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-30h]
  char v63; // [rsp+D8h] [rbp-28h]
  PERESOURCE *v64; // [rsp+E0h] [rbp-20h] BYREF
  char v65[32]; // [rsp+E8h] [rbp-18h] BYREF
  char v66[56]; // [rsp+108h] [rbp+8h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v67; // [rsp+140h] [rbp+40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v69[32]; // [rsp+180h] [rbp+80h] BYREF

  v4 = *((_QWORD *)a2 + 1);
  v60 = a2;
  if ( !*(_DWORD *)(v4 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 5530LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (struct DXGCONTEXT *)(v4 + 360);
  for ( i = *(struct DXGCONTEXT **)(v4 + 360); ; i = *(struct DXGCONTEXT **)i )
  {
    v11 = 0LL;
    if ( i != v9 )
      v11 = i;
    if ( !v11 )
      break;
    if ( *((_BYTE *)v11 + 402) )
      goto LABEL_11;
  }
  v11 = 0LL;
LABEL_11:
  v57 = v11;
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = v4;
    WdLogEvent5_WdError(v12);
    return 3221225860LL;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v64, v4, 0, a4, 0);
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v11 + 408));
  v14 = *(_QWORD *)(v4 + 16);
  v63 = 0;
  v62 = *(_QWORD *)(v14 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
  v15 = 2LL;
  LODWORD(v16) = COREDEVICEACCESS::AcquireExclusive((__int64)&v64);
  if ( (int)v16 < 0 )
  {
    *((_QWORD *)v11 + 52) = 0LL;
    v17 = (char *)v11 + 408;
    goto LABEL_71;
  }
  v52 = 0;
  *(_QWORD *)v53 = 0LL;
  memset(&v59, 0, sizeof(v59));
  v59.hAllocation = *(HANDLE *)(*((_QWORD *)a2 + 6) + 16LL);
  v19 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v11 + 2) + 16LL), &v59, v18);
  v16 = v19;
  if ( v19 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v21 + 24) = v16;
    WdLogEvent5_WdError(v21);
LABEL_17:
    *((_DWORD *)this + 11) = 1;
    goto LABEL_64;
  }
  v22 = *((_DWORD *)this + 6);
  if ( (v22 & 0x20) != 0 )
  {
    v50 = 1;
  }
  else
  {
    Height = v59.Height;
    if ( v59.Width > v59.Height )
      Height = v59.Width;
    v50 = 2 * Height;
  }
  v24 = *((_DWORD *)this + 6);
  if ( v59.Format != D3DDDIFMT_A8R8G8B8
    && v59.Format != D3DDDIFMT_X8R8G8B8
    && v59.Format != D3DDDIFMT_A8B8G8R8
    && v59.Format != D3DDDIFMT_X8B8G8R8 )
  {
    v24 = v22 | 0x40;
    *((_DWORD *)this + 11) = 1;
    *((_DWORD *)this + 6) = v22 | 0x40;
  }
  v25 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v25 & 0xC000) != 0 )
  {
    *((_DWORD *)this + 6) = v24 | 0x80;
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 11) )
    goto LABEL_64;
  if ( (v24 & 0x1000) == 0 && (v25 & 0x2000) != 0 )
    *((_DWORD *)this + 6) = v24 | 0x2000;
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v4 + 40) + 56LL), &ApcState);
  v52 = 1;
  v67.Width = 512;
  v26 = 0LL;
  *(_QWORD *)&v67.Height = 512LL;
  do
  {
    LODWORD(v16) = DXGDEVICE::CreateStagingSurface2((DXGDEVICE *)v4, &v67, &v64, &v53[v26], 0LL);
    if ( (int)v16 < 0 )
      break;
    v26 = (unsigned int)(v26 + 1);
  }
  while ( (unsigned int)v26 < 2 );
  v27 = v59.Height;
  v28 = 0;
  Width = v59.Width;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  v51 = v27;
  v30 = (unsigned int)(Width + 511) >> 9;
  v31 = v30 * ((v27 + 511) >> 9);
  v56 = v30;
  v32 = v31 + 1;
  if ( v31 == -1 )
    goto LABEL_56;
  while ( 1 )
  {
    if ( v28 < v31 )
    {
      v33 = (v28 % v30) << 9;
      v34 = (v28 / v30) << 9;
      v58.left = v33;
      v58.top = v34;
      if ( v33 + 512 < Width )
        Width = v33 + 512;
      v35 = v51;
      v58.right = Width;
      if ( v34 + 512 < v51 )
        v35 = v34 + 512;
      v36 = v53[v28 & 1];
      v37 = 16LL * (v28 & 1);
      v58.bottom = v35;
      *(_DWORD *)&v69[v37 + 4] = 0;
      *(_DWORD *)&v69[v37] = 0;
      *(_DWORD *)&v69[v37 + 12] = v35 - v34;
      *(_DWORD *)&v69[v37 + 8] = Width - v33;
      v38 = DXGCONTEXT::Blt(
              v11,
              *((_DWORD *)v60 + 4),
              v36,
              0,
              &v57,
              &v58,
              1u,
              (struct tagRECT *)&v69[v37],
              (struct COREDEVICEACCESS *)&v64);
      v11 = v57;
      LODWORD(v16) = v38;
      if ( v38 < 0 )
        goto LABEL_56;
      Width = v59.Width;
      v51 = v59.Height;
      v32 = v31 + 1;
    }
    if ( !v28 )
      goto LABEL_51;
    v49 = (struct tagRECT *)&v69[16 * ((v28 - 1) & 1LL)];
    v39 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
            (VIDPNSOURCEINFO *)v49,
            (PERESOURCE *)v4,
            v53[(v28 - 1) & 1LL],
            v67.Pitch,
            v49,
            (struct COREDEVICEACCESS *)&v64,
            &v55,
            &v54);
    v16 = v39;
    if ( v39 < 0 )
      break;
    v41 = v54;
    if ( v54 == v55 )
    {
      *((_DWORD *)this + 6) &= 0xFFFFFFE7;
      goto LABEL_56;
    }
    v42 = *((_DWORD *)this + 13);
    *((_DWORD *)this + 12) += v55;
    v43 = v41 + v42;
    *((_DWORD *)this + 13) = v43;
    if ( v28 >= 2 )
    {
      v44 = v50;
      if ( v43 >= v50 )
      {
        *((_DWORD *)this + 6) &= 0xFFFFFFE7;
        goto LABEL_57;
      }
    }
    Width = v59.Width;
    v51 = v59.Height;
    v32 = v31 + 1;
LABEL_51:
    if ( ++v28 >= v32 )
      goto LABEL_56;
    v30 = v56;
  }
  v45 = WdLogNewEntry5_WdError(v40);
  *(_QWORD *)(v45 + 24) = v16;
  WdLogEvent5_WdError(v45);
LABEL_56:
  v44 = v50;
LABEL_57:
  v46 = *((_DWORD *)this + 6);
  if ( (int)v16 < 0 )
  {
    v47 = v46 & 0xFFFFFFE7 | 0x10;
    goto LABEL_62;
  }
  if ( (v46 & 0x18) != 0 && *((_DWORD *)this + 13) < v44 )
  {
    v47 = v46 & 0xFFFFFFE7 | 8;
LABEL_62:
    *((_DWORD *)this + 6) = v47;
  }
  v15 = 2LL;
LABEL_64:
  v48 = v53;
  do
  {
    if ( *v48 )
      DXGDEVICE::DestroyStagingSurface((DXGDEVICE *)v4, *v48, 0, &v64);
    ++v48;
    --v15;
  }
  while ( v15 );
  if ( v52 )
    KeUnstackDetachProcess(&ApcState);
  v17 = (char *)v11 + 408;
  *((_QWORD *)v11 + 52) = 0LL;
LABEL_71:
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( v63 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
  COREACCESS::~COREACCESS((COREACCESS *)v66);
  COREACCESS::~COREACCESS((COREACCESS *)v65);
  return (unsigned int)v16;
}
