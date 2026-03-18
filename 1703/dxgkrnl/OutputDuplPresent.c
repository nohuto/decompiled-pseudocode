/*
 * XREFs of OutputDuplPresent @ 0x1C01B03B0
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C01A1230 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C003A580 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C003A590 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C003A65C (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C008AC88 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C01AE4A0 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(
        struct _D3DKMT_OUTPUTDUPLPRESENT *a1,
        struct DXGPROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER **v6; // rax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGDEVICE **v12; // rbx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v20; // rax
  unsigned int v21; // edi
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v23; // edi
  struct DXGCONTEXT **v24; // r10
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // r8d
  __int64 v28; // rcx
  struct DXGCONTEXT *v29; // rcx
  __int64 v30; // rdx
  struct DXGCONTEXT *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  struct DXGADAPTER *v42; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-61h] BYREF
  struct DXGCONTEXT **v44; // [rsp+40h] [rbp-59h] BYREF
  char v45; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-31h]
  _BYTE v47[16]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v48[16]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v49[24]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v50[6]; // [rsp+A8h] [rbp+Fh] BYREF
  char v51; // [rsp+D8h] [rbp+3Fh]
  struct DXGCONTEXT *v52; // [rsp+100h] [rbp+67h] BYREF

  v42 = 0LL;
  if ( (a1->Flags.Value & 8) == 0
    || (v6 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v42, (__int64)a2, a3, a4),
        v7 = OutputDuplPreIndirectPresent(a1, a2, v6, &v43),
        v7 >= 0) )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v48, a1->hContext, a2, &v52, 0);
    v12 = (struct DXGDEVICE **)v52;
    if ( !v52 )
    {
      v7 = -1073741811;
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      v13[3] = -1073741811LL;
      v13[4] = PsGetCurrentProcess(v14);
      v13[5] = a1->hContext;
      WdLogEvent5_WdWarning(v13);
LABEL_37:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v48);
      goto LABEL_38;
    }
    if ( !v42 )
      DXGADAPTER_REFERENCE::Assign(&v42, *(struct DXGADAPTER **)(*((_QWORD *)v52 + 2) + 1800LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v12[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      v7 = -1073741811;
      *(_QWORD *)(v20 + 24) = v12;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
LABEL_36:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
      goto LABEL_37;
    }
    v44 = 0LL;
    v21 = BroadcastContextCount + 1;
    v46 = 0;
    if ( v21 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v45;
    }
    else
    {
      v16 = v21;
      v15 = 0xFFFFFFFFFFFFFFFFuLL % v21;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 8 )
        goto LABEL_34;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v21, 0x4B677844u);
    }
    v44 = PoolWithTag;
    v46 = v21;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v21);
      if ( v44 )
      {
        *v44 = (struct DXGCONTEXT *)v12;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v49, a2, v17, v18);
        v23 = 0;
        if ( a1->BroadcastContextCount )
        {
          v24 = v44;
          while ( 1 )
          {
            v25 = (a1->BroadcastContext[v23] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v25 < *((_DWORD *)a2 + 52)
              && (v26 = *((_QWORD *)a2 + 24),
                  v27 = *(_DWORD *)(v26 + 16LL * (unsigned int)v25 + 8),
                  ((a1->BroadcastContext[v23] >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * (unsigned int)v25 + 8) & 0x30))
              && (v27 & 0x1000) == 0
              && (v27 & 0xF) != 0
              && (v28 = 2 * v25, (*(_BYTE *)(v26 + 8 * v28 + 8) & 0xF) == 7) )
            {
              v29 = *(struct DXGCONTEXT **)(v26 + 8 * v28);
            }
            else
            {
              v29 = 0LL;
            }
            v30 = v23 + 1;
            v24[v30] = v29;
            v24 = v44;
            v31 = v44[v30];
            if ( !v31 || *((struct DXGDEVICE **)v31 + 2) != v12[2] )
              break;
            ++v23;
            if ( (unsigned int)v30 >= a1->BroadcastContextCount )
              goto LABEL_27;
          }
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
          v38 = v23;
          v7 = -1073741811;
          v37[3] = v12;
          v37[4] = a1->BroadcastContext[v38];
          v37[5] = v38;
          v37[6] = -1073741811LL;
          WdLogEvent5_WdError(v37);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
        }
        else
        {
LABEL_27:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v50,
            v44,
            v46);
          if ( v51 )
          {
            if ( v50[0] )
            {
              v39 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
              *(_QWORD *)(v39 + 24) = 2661LL;
              WdLogEvent5_WdWarning(v39);
              v7 = -1073741811;
            }
            else
            {
              v36 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
              *(_QWORD *)(v36 + 24) = 2656LL;
              WdLogEvent5_WdWarning(v36);
              v7 = -1073741801;
            }
          }
          else
          {
            v7 = OutputDuplPresentInternal(v42, (struct DXGCONTEXT *)v12, a1, v44);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v50);
        }
        goto LABEL_35;
      }
    }
LABEL_34:
    v40 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v40 + 24) = 2607LL;
    WdLogEvent5_WdWarning(v40);
    v7 = -1073741801;
LABEL_35:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v44);
    goto LABEL_36;
  }
LABEL_38:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE((DXGADAPTER_REFERENCE *)&v42);
  return (unsigned int)v7;
}
