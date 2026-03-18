/*
 * XREFs of DxgkPinDirectFlipResources @ 0x1C0110740
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C001A4C8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C009631C (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C010B640 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0110C34 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0110C70 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDEVICE *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // cf
  SIZE_T v23; // rax
  char *v24; // rax
  struct DXGRESOURCEREFERENCE *v25; // rbx
  struct DXGRESOURCEREFERENCE *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned int *v29; // rdx
  __int64 v30; // r15
  struct DXGRESOURCE **v31; // r13
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGRESOURCE *v35; // r8
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // [rsp+30h] [rbp-138h]
  int v47; // [rsp+38h] [rbp-130h] BYREF
  __int64 v48; // [rsp+40h] [rbp-128h]
  _BYTE v49[8]; // [rsp+48h] [rbp-120h] BYREF
  _QWORD v50[2]; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-108h]
  struct DXGDEVICE *v52; // [rsp+68h] [rbp-100h] BYREF
  struct DXGPROCESS *v53; // [rsp+70h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *v54; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v55; // [rsp+80h] [rbp-E8h]
  unsigned int v56[4]; // [rsp+88h] [rbp-E0h]
  _BYTE v57[96]; // [rsp+A0h] [rbp-C8h] BYREF
  struct DXGRESOURCEREFERENCE *v58; // [rsp+100h] [rbp-68h] BYREF
  char v59; // [rsp+108h] [rbp-60h] BYREF
  int v60; // [rsp+128h] [rbp-40h]

  v3 = (_OWORD *)a1;
  v48 = 0LL;
  v47 = 2079;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2079);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 2079);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v53 = Current;
  if ( Current )
  {
    v46 = *((_BYTE *)Current + 322) == 0;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v56 = *v3;
    v9 = v56[0];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v49, v56[0], (struct _KTHREAD **)Current, &v52);
    v16 = v52;
    if ( !v52 )
    {
      v17 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v17 + 24) = v9;
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v17);
LABEL_14:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v49);
      goto LABEL_6;
    }
    v18 = *(_QWORD *)&v56[2];
    v55 = *(_QWORD *)&v56[2];
    if ( !*(_QWORD *)&v56[2] || (v19 = v56[1]) == 0 )
    {
      v45 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v45 + 24) = v9;
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v45 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v45);
      goto LABEL_14;
    }
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v58);
    if ( (unsigned int)v19 <= 4 )
    {
      v58 = (struct DXGRESOURCEREFERENCE *)&v59;
    }
    else
    {
      v20 = -1LL;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 8 )
      {
LABEL_28:
        v26 = v58;
        if ( v58 )
        {
          v28 = 0LL;
          while ( (unsigned int)v28 < (unsigned int)v19 )
          {
            v29 = (unsigned int *)(v18 + 4 * v28);
            if ( v29 + 1 < v29 || (unsigned __int64)(v29 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            v51 = *v29;
            v30 = v51;
            v31 = (struct DXGRESOURCE **)((char *)v26 + 8 * v28);
            ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                                    (__int64)v53,
                                                    (DXGRESOURCEREFERENCE *)&v54,
                                                    v51);
            DXGRESOURCEREFERENCE::MoveAssign(v31, ResourceSafe);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54);
            v35 = *v31;
            if ( !*v31 || (*((_DWORD *)v35 + 1) & 1) == 0 || !*((_QWORD *)v35 + 7) )
              goto LABEL_45;
            v33 = *(_QWORD *)(*((_QWORD *)v35 + 1) + 16LL);
            v36 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
            if ( *(_QWORD *)(v33 + 16) != v36 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdError(v36);
              v37[3] = v16;
              v37[4] = *v31;
              LODWORD(v9) = -1073741811;
              v37[5] = -1073741811LL;
              WdLogEvent5_WdError(v37);
              goto LABEL_30;
            }
            v34 = 0LL;
            if ( (_DWORD)v28 )
            {
              while ( *((struct DXGRESOURCE **)v26 + v34) != v35 )
              {
                v34 = (unsigned int)(v34 + 1);
                if ( (unsigned int)v34 >= (unsigned int)v28 )
                  goto LABEL_44;
              }
LABEL_45:
              v38 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              *(_QWORD *)(v38 + 24) = v30;
              LODWORD(v9) = -1073741811;
              *(_QWORD *)(v38 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v38);
              goto LABEL_30;
            }
LABEL_44:
            v28 = (unsigned int)(v28 + 1);
            v18 = v55;
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50, v16);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v16, 2, v39, 0);
          v40 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57);
          v9 = v40;
          if ( v40 >= 0 )
          {
            LODWORD(v9) = DXGDEVICE::PinDirectFlipResources(v16, v19, v26, v46);
          }
          else
          {
            v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
            *(_QWORD *)(v44 + 24) = v16;
            *(_QWORD *)(v44 + 32) = v9;
            WdLogEvent5_WdWarning(v44);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
          if ( v50[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
        }
        else
        {
          v27 = WdLogNewEntry5_WdLowResource(v20);
          *(_QWORD *)(v27 + 24) = v19;
          LODWORD(v9) = -1073741801;
          *(_QWORD *)(v27 + 32) = -1073741801LL;
          WdLogEvent5_WdLowResource(v27);
        }
LABEL_30:
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v58);
        goto LABEL_14;
      }
      v21 = 8LL * (unsigned int)v19;
      if ( !is_mul_ok((unsigned int)v19, 8uLL) )
        v21 = -1LL;
      v22 = __CFADD__(v21, 8LL);
      v23 = v21 + 8;
      if ( v22 )
        v23 = -1LL;
      v24 = (char *)operator new[](v23, 0x4B677844u, PagedPool);
      if ( v24 )
      {
        *(_QWORD *)v24 = v19;
        v25 = (struct DXGRESOURCEREFERENCE *)(v24 + 8);
        `vector constructor iterator'(
          v24 + 8,
          8LL,
          (unsigned int)v19,
          (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
        v58 = v25;
      }
      else
      {
        v58 = 0LL;
      }
    }
    v60 = v19;
    goto LABEL_28;
  }
  v8 = WdLogNewEntry5_WdError(v7);
  LODWORD(v9) = -1073741811;
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v8);
LABEL_6:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v47);
  return (unsigned int)v9;
}
