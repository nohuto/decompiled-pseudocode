/*
 * XREFs of DxgkPinDirectFlipResources @ 0x1C00FF160
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00089FC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C00FF64C (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C00FF688 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C00FFEB4 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 */

__int64 __fastcall DxgkPinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // cf
  SIZE_T v21; // rax
  char *v22; // rax
  struct DXGRESOURCEREFERENCE *v23; // rdi
  struct DXGRESOURCEREFERENCE *v24; // r13
  __int64 v25; // rax
  __int64 i; // rdi
  unsigned int *v27; // rdx
  __int64 v28; // r12
  struct DXGRESOURCE **v29; // r13
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGRESOURCE *v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  bool v44; // [rsp+30h] [rbp-138h]
  _BYTE v45[8]; // [rsp+38h] [rbp-130h] BYREF
  int v46; // [rsp+40h] [rbp-128h]
  struct DXGRESOURCEREFERENCE *v47; // [rsp+48h] [rbp-120h]
  _QWORD v48[2]; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-108h]
  struct DXGDEVICE *v50; // [rsp+68h] [rbp-100h] BYREF
  __int64 v51; // [rsp+70h] [rbp-F8h]
  struct DXGPROCESS *v52; // [rsp+78h] [rbp-F0h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int v54[4]; // [rsp+88h] [rbp-E0h]
  _BYTE v55[96]; // [rsp+A0h] [rbp-C8h] BYREF
  struct DXGRESOURCEREFERENCE *v56; // [rsp+100h] [rbp-68h] BYREF
  char v57; // [rsp+108h] [rbp-60h] BYREF
  int v58; // [rsp+128h] [rbp-40h]

  v3 = (_OWORD *)a1;
  v46 = 2079;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2079);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v52 = Current;
  if ( Current )
  {
    v44 = *((_BYTE *)Current + 306) == 0;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v54 = *v3;
    v7 = v54[0];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v45, v54[0], (struct _KTHREAD **)Current, &v50);
    v15 = v50;
    if ( !v50 )
    {
      v16 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v16 + 24) = v7;
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
      goto LABEL_15;
    }
    v51 = *(_QWORD *)&v54[2];
    if ( !*(_QWORD *)&v54[2] || (v17 = v54[1]) == 0 )
    {
      v43 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v43 + 24) = v7;
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v43 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v43);
      goto LABEL_15;
    }
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v56);
    if ( (unsigned int)v17 <= 4 )
    {
      v56 = (struct DXGRESOURCEREFERENCE *)&v57;
    }
    else
    {
      v18 = -1LL;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v17 < 8 )
      {
LABEL_29:
        v24 = v56;
        v47 = v56;
        if ( !v56 )
        {
          v25 = WdLogNewEntry5_WdLowResource(v18);
          *(_QWORD *)(v25 + 24) = v17;
          LODWORD(v7) = -1073741801;
          *(_QWORD *)(v25 + 32) = -1073741801LL;
          WdLogEvent5_WdLowResource(v25);
          PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v56);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v45);
          goto LABEL_6;
        }
        for ( i = 0LL; (unsigned int)i < (unsigned int)v17; i = (unsigned int)(i + 1) )
        {
          v27 = (unsigned int *)(v51 + 4 * i);
          if ( v27 + 1 < v27 || (unsigned __int64)(v27 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v49 = *v27;
          v28 = v49;
          v29 = (struct DXGRESOURCE **)((char *)v24 + 8 * i);
          ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                                  (__int64)v52,
                                                  (DXGRESOURCEREFERENCE *)&v53,
                                                  v49);
          DXGRESOURCEREFERENCE::MoveAssign(v29, ResourceSafe);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v53);
          v33 = *v29;
          if ( !*v29 || (*((_DWORD *)v33 + 1) & 1) == 0 || !*((_QWORD *)v33 + 7) )
            goto LABEL_45;
          v31 = *(_QWORD *)(*((_QWORD *)v33 + 1) + 16LL);
          v34 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
          if ( *(_QWORD *)(v31 + 16) != v34 )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
            v35[3] = v15;
            v35[4] = *v29;
            LODWORD(v7) = -1073741811;
            v35[5] = -1073741811LL;
            WdLogEvent5_WdError(v35);
            goto LABEL_46;
          }
          v32 = 0LL;
          v24 = v47;
          if ( (_DWORD)i )
          {
            while ( *((struct DXGRESOURCE **)v47 + v32) != v33 )
            {
              v32 = (unsigned int)(v32 + 1);
              if ( (unsigned int)v32 >= (unsigned int)i )
                goto LABEL_44;
            }
LABEL_45:
            v36 = WdLogNewEntry5_WdWarning(v32, v31, v33);
            *(_QWORD *)(v36 + 24) = v28;
            LODWORD(v7) = -1073741811;
            *(_QWORD *)(v36 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v36);
            goto LABEL_46;
          }
LABEL_44:
          ;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v15);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v15, 2, v37, 0);
        v38 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55);
        v7 = v38;
        if ( v38 >= 0 )
        {
          LODWORD(v7) = DXGDEVICE::PinDirectFlipResources(v15, v17, v24, v44);
        }
        else
        {
          v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
          *(_QWORD *)(v42 + 24) = v15;
          *(_QWORD *)(v42 + 32) = v7;
          WdLogEvent5_WdWarning(v42);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
        if ( v48[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
LABEL_46:
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v56);
LABEL_15:
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v45);
        v10 = (qword_1C005F010 & 2) == 0;
        goto LABEL_7;
      }
      v19 = 8LL * (unsigned int)v17;
      if ( !is_mul_ok((unsigned int)v17, 8uLL) )
        v19 = -1LL;
      v20 = __CFADD__(v19, 8LL);
      v21 = v19 + 8;
      if ( v20 )
        v21 = -1LL;
      v22 = (char *)operator new[](v21, 0x4B677844u, PagedPool);
      if ( v22 )
      {
        *(_QWORD *)v22 = v17;
        v23 = (struct DXGRESOURCEREFERENCE *)(v22 + 8);
        `vector constructor iterator'(
          v22 + 8,
          8LL,
          (unsigned int)v17,
          (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
        v56 = v23;
      }
      else
      {
        v56 = 0LL;
      }
    }
    v58 = v17;
    goto LABEL_29;
  }
  v6 = WdLogNewEntry5_WdError(v5);
  LODWORD(v7) = -1073741811;
  *(_QWORD *)(v6 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v6);
LABEL_6:
  v9 = qword_1C005F010;
  v10 = (qword_1C005F010 & 2) == 0;
LABEL_7:
  if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v8, 2079);
  return (unsigned int)v7;
}
