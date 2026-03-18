/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C00F20D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095C5C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v6; // rax
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // r14
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  HANDLE v15; // r12
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int Resource; // r14d
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v24; // rax
  unsigned int v25; // esi
  __int64 v26; // r8
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  bool v33; // zf
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  struct DXGDEVICE *v38; // [rsp+30h] [rbp-B8h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+48h] [rbp-A0h]
  __int64 v41; // [rsp+58h] [rbp-90h]
  _BYTE v42[136]; // [rsp+60h] [rbp-88h] BYREF
  struct DXGDEVICE *v43; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+100h] [rbp+18h] BYREF
  PVOID Object; // [rsp+108h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2073);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v6 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)Handle = *v6;
    v40 = v6[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, (unsigned int)Handle[0], Current, &v38);
    v8 = v38;
    if ( v38 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v44, v38);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v8, 0, v9, 0);
      v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
      v14 = v10;
      if ( v10 < 0 )
      {
        v30 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v30 + 24) = v8;
        *(_QWORD *)(v30 + 32) = v14;
        WdLogEvent5_WdWarning(v30);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
        v32 = v44;
        if ( v44 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v44 + 104));
          KeLeaveCriticalRegion();
        }
        if ( v43 )
        {
          v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v32 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
        }
        v33 = (qword_1C005F010 & 2) == 0;
LABEL_39:
        if ( !v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v32, &EventProfilerExit, v31, 2073);
        return (unsigned int)v14;
      }
      v15 = Handle[1];
      v16 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
      v14 = v16;
      if ( v16 != -1073741788 )
      {
        if ( v16 >= 0 )
        {
          Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
                       (__int64)v8,
                       Handle,
                       v19,
                       (__int64)Object);
          ObfDereferenceObject(Object);
          if ( Resource < 0 )
          {
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
            v37 = v44;
            if ( v44 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v44 + 104));
              KeLeaveCriticalRegion();
            }
            if ( v43 )
            {
              v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v37 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
            }
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v37, &EventProfilerExit, v36, 2073);
            return (unsigned int)Resource;
          }
          else
          {
            if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)a1 = *(_OWORD *)Handle;
            *(_OWORD *)(a1 + 16) = v40;
            *(_QWORD *)(a1 + 32) = v41;
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
            v22 = v44;
            if ( v44 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v44 + 104));
              KeLeaveCriticalRegion();
            }
            if ( v43 )
            {
              v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v22 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
            }
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v22, &EventProfilerExit, v21, 2073);
            return 0LL;
          }
        }
        v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v35[3] = v8;
        v35[4] = v15;
        v35[5] = v14;
        WdLogEvent5_WdWarning(v35);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
        v32 = v44;
        if ( v44 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v44 + 104));
          KeLeaveCriticalRegion();
        }
        if ( v43 )
        {
          v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v32 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
        }
        v33 = (qword_1C005F010 & 2) == 0;
        goto LABEL_39;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v34[3] = v8;
      v34[4] = v15;
      v25 = -1073741788;
      v34[5] = -1073741788LL;
      WdLogEvent5_WdWarning(v34);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
      if ( v44 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v44 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
      v27 = qword_1C005F010;
      v28 = (qword_1C005F010 & 2) == 0;
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v29 + 24) = LODWORD(Handle[0]);
      v25 = -1073741811;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v29);
      if ( v43 )
      {
        v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v27 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
      }
      v28 = (qword_1C005F010 & 2) == 0;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v4);
    v25 = -1073741811;
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    v27 = qword_1C005F010;
    v28 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v26, 2073);
  return v25;
}
