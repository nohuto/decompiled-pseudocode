/*
 * XREFs of DxgkPinDirectFlipResources @ 0x1C018B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00053F0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0185054 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0185090 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z @ 0x1C01850F4 (-AllocateElements@-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01883E4 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 */

__int64 __fastcall DxgkPinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGDEVICE *v17; // r14
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rcx
  const struct DXGRESOURCEREFERENCE *v22; // r13
  __int64 v23; // rax
  unsigned int i; // edi
  unsigned int *v25; // rdx
  __int64 v26; // r12
  struct DXGRESOURCE **v27; // r13
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGRESOURCE *v31; // r8
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  _BYTE v43[8]; // [rsp+30h] [rbp-128h] BYREF
  int v44; // [rsp+38h] [rbp-120h]
  bool v45[4]; // [rsp+3Ch] [rbp-11Ch]
  struct DXGRESOURCEREFERENCE *v46; // [rsp+40h] [rbp-118h]
  _QWORD v47[2]; // [rsp+48h] [rbp-110h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-100h]
  struct DXGDEVICE *v49; // [rsp+60h] [rbp-F8h] BYREF
  struct _KTHREAD **v50; // [rsp+68h] [rbp-F0h]
  struct _EX_RUNDOWN_REF *v51; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+78h] [rbp-E0h]
  unsigned int v53[4]; // [rsp+80h] [rbp-D8h]
  _BYTE v54[96]; // [rsp+90h] [rbp-C8h] BYREF
  struct DXGRESOURCEREFERENCE *v55[6]; // [rsp+F0h] [rbp-68h] BYREF

  v3 = (_OWORD *)a1;
  v44 = 2079;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2079);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v50 = Current;
  if ( Current )
  {
    *(_DWORD *)v45 = _guard_dispatch_icall_fptr() == 0;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v53 = *v3;
    v8 = v53[0];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43, v53[0], Current, &v49);
    v17 = v49;
    if ( v49 )
    {
      v19 = *(_QWORD *)&v53[2];
      v52 = *(_QWORD *)&v53[2];
      if ( *(_QWORD *)&v53[2] && (v20 = v53[1]) != 0 )
      {
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>((__int64)v55);
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::AllocateElements((__int64 *)v55, v20);
        v22 = v55[0];
        v46 = v55[0];
        if ( !v55[0] )
        {
          v23 = WdLogNewEntry5_WdLowResource(v21);
          *(_QWORD *)(v23 + 24) = v20;
          LODWORD(v8) = -1073741801;
          *(_QWORD *)(v23 + 32) = -1073741801LL;
          WdLogEvent5_WdLowResource(v23);
          PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((char **)v55);
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43);
          goto LABEL_6;
        }
        for ( i = 0; i < (unsigned int)v20; ++i )
        {
          v25 = (unsigned int *)(v19 + 4LL * i);
          if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v48 = *v25;
          v26 = v48;
          v27 = (struct DXGRESOURCE **)((char *)v22 + 8 * i);
          ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                                  (__int64)v50,
                                                  (DXGRESOURCEREFERENCE *)&v51,
                                                  v48);
          DXGRESOURCEREFERENCE::MoveAssign(v27, ResourceSafe);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v51);
          v31 = *v27;
          if ( !*v27 || (*((_DWORD *)v31 + 1) & 1) == 0 || !*((_QWORD *)v31 + 7) )
            goto LABEL_34;
          v32 = *(_QWORD *)(*((_QWORD *)v31 + 1) + 16LL);
          if ( *(_QWORD *)(v32 + 16) != *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdError(v32, v29);
            v33[3] = v17;
            v33[4] = *v27;
            LODWORD(v8) = -1073741811;
            v33[5] = -1073741811LL;
            WdLogEvent5_WdError(v33);
            goto LABEL_35;
          }
          v30 = 0LL;
          v22 = v46;
          if ( i )
          {
            while ( *((struct DXGRESOURCE **)v46 + (unsigned int)v30) != v31 )
            {
              v30 = (unsigned int)(v30 + 1);
              if ( (unsigned int)v30 >= i )
                goto LABEL_33;
            }
LABEL_34:
            v34 = WdLogNewEntry5_WdWarning(v30, v29, v31, 0LL);
            *(_QWORD *)(v34 + 24) = v26;
            LODWORD(v8) = -1073741811;
            *(_QWORD *)(v34 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v34);
            goto LABEL_35;
          }
LABEL_33:
          v19 = v52;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v17);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v17, 2LL, v35, 0);
        v36 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v54);
        v8 = v36;
        if ( v36 >= 0 )
        {
          LODWORD(v8) = DXGDEVICE::PinDirectFlipResources(v17, v20, v22, v45[0]);
        }
        else
        {
          v41 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
          *(_QWORD *)(v41 + 24) = v17;
          *(_QWORD *)(v41 + 32) = v8;
          WdLogEvent5_WdWarning(v41);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
        if ( v47[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
LABEL_35:
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((char **)v55);
      }
      else
      {
        v42 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        *(_QWORD *)(v42 + 24) = v8;
        LODWORD(v8) = -1073741811;
        *(_QWORD *)(v42 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v42);
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v18 + 24) = v8;
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v18);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43);
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
  v7 = WdLogNewEntry5_WdError(v5, v4);
  LODWORD(v8) = -1073741811;
  *(_QWORD *)(v7 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v7);
LABEL_6:
  v10 = qword_1C006E790;
  v11 = (qword_1C006E790 & 2) == 0;
LABEL_7:
  if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v9, 2079);
  return (unsigned int)v8;
}
