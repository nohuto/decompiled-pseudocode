/*
 * XREFs of OutputDuplPresent @ 0x1C01CA16C
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C01B80C0 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003A8C (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C002AA54 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C002AA6C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C002AB38 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00F071C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C01C8034 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01C8178 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct DXGPROCESS *a2)
{
  struct DXGADAPTER **v4; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGDEVICE **v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ULONG BroadcastContextCount; // edi
  __int64 v17; // rax
  unsigned int v18; // edi
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v20; // edi
  struct DXGCONTEXT **v21; // r10
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // r8d
  struct DXGCONTEXT *v25; // rcx
  __int64 v26; // rdx
  struct DXGCONTEXT *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  struct DXGADAPTER *v37; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-61h] BYREF
  struct DXGCONTEXT **v39; // [rsp+40h] [rbp-59h] BYREF
  char v40; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-31h]
  _BYTE v42[16]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v43[16]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v44[24]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v45[6]; // [rsp+A8h] [rbp+Fh] BYREF
  char v46; // [rsp+D8h] [rbp+3Fh]
  struct DXGCONTEXT *v47; // [rsp+100h] [rbp+67h] BYREF

  v37 = 0LL;
  if ( (a1->Flags.Value & 8) == 0
    || (v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v37),
        v5 = OutputDuplPreIndirectPresent(a1, a2, v4, &v38),
        v5 >= 0) )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43, a1->hContext, a2, &v47, 0);
    v9 = (struct DXGDEVICE **)v47;
    if ( !v47 )
    {
      v5 = -1073741811;
      v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8);
      v10[3] = -1073741811LL;
      v10[4] = PsGetCurrentProcess(v12, v11);
      v10[5] = a1->hContext;
      WdLogEvent5_WdWarning(v10);
LABEL_37:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
      goto LABEL_38;
    }
    if ( !v37 )
      DXGADAPTER_REFERENCE::Assign(&v37, *(struct DXGADAPTER **)(*((_QWORD *)v47 + 2) + 1672LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42, v9[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      v5 = -1073741811;
      *(_QWORD *)(v17 + 24) = v9;
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v17);
LABEL_36:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
      goto LABEL_37;
    }
    v39 = 0LL;
    v18 = BroadcastContextCount + 1;
    v41 = 0;
    if ( v18 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v40;
    }
    else
    {
      v14 = v18;
      v13 = 0xFFFFFFFFFFFFFFFFuLL % v18;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v18 < 8 )
        goto LABEL_34;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v18, 0x4B677844u);
    }
    v39 = PoolWithTag;
    v41 = v18;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v18);
      if ( v39 )
      {
        *v39 = (struct DXGCONTEXT *)v9;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v44, a2);
        v20 = 0;
        if ( a1->BroadcastContextCount )
        {
          v21 = v39;
          while ( 1 )
          {
            v22 = (a1->BroadcastContext[v20] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v22 < *((_DWORD *)a2 + 60)
              && (v23 = *((_QWORD *)a2 + 28),
                  v24 = *(_DWORD *)(v23 + 16 * v22 + 8),
                  ((a1->BroadcastContext[v20] >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60))
              && (v24 & 0x2000) == 0
              && (v24 & 0x1F) != 0
              && (*(_BYTE *)(v23 + 16LL * (unsigned int)v22 + 8) & 0x1F) == 7 )
            {
              v25 = *(struct DXGCONTEXT **)(v23 + 16LL * (unsigned int)v22);
            }
            else
            {
              v25 = 0LL;
            }
            v26 = v20 + 1;
            v21[v26] = v25;
            v21 = v39;
            v27 = v39[v26];
            if ( !v27 || *((struct DXGDEVICE **)v27 + 2) != v9[2] )
              break;
            ++v20;
            if ( (unsigned int)v26 >= a1->BroadcastContextCount )
              goto LABEL_27;
          }
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v27);
          v33 = v20;
          v5 = -1073741811;
          v32[3] = v9;
          v32[4] = a1->BroadcastContext[v33];
          v32[5] = v33;
          v32[6] = -1073741811LL;
          WdLogEvent5_WdError(v32);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
        }
        else
        {
LABEL_27:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v45,
            v39,
            v41);
          if ( v46 )
          {
            if ( v45[0] )
            {
              v34 = WdLogNewEntry5_WdWarning(v29, v28, v30);
              *(_QWORD *)(v34 + 24) = 2742LL;
              WdLogEvent5_WdWarning(v34);
              v5 = -1073741811;
            }
            else
            {
              v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
              *(_QWORD *)(v31 + 24) = 2737LL;
              WdLogEvent5_WdWarning(v31);
              v5 = -1073741801;
            }
          }
          else
          {
            v5 = OutputDuplPresentInternal(v37, (struct DXGCONTEXT *)v9, a1, v39);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v45);
        }
        goto LABEL_35;
      }
    }
LABEL_34:
    v35 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v35 + 24) = 2688LL;
    WdLogEvent5_WdWarning(v35);
    v5 = -1073741801;
LABEL_35:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v39);
    goto LABEL_36;
  }
LABEL_38:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE((DXGADAPTER_REFERENCE *)&v37);
  return (unsigned int)v5;
}
