/*
 * XREFs of DxgkUnpinDirectFlipResources @ 0x1C00FF6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FFBBC (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkUnpinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  unsigned int v8; // r12d
  __int64 v9; // rcx
  DXGDEVICE *v10; // r15
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 i; // rsi
  unsigned int *v18; // rdx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct DXGDEVICE *v33; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v34[2]; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int v35[4]; // [rsp+48h] [rbp-B0h]
  struct DXGDEVICE *v36; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v37[152]; // [rsp+60h] [rbp-98h] BYREF
  bool v38; // [rsp+108h] [rbp+10h]

  v3 = (_OWORD *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2080);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v38 = *((_BYTE *)Current + 306) == 0;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v35 = *v3;
    v7 = *(_QWORD *)&v35[2];
    if ( *(_QWORD *)&v35[2] && (v8 = v35[1]) != 0 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, v35[0], (struct _KTHREAD **)Current, &v36);
      v10 = v36;
      if ( v36 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34, v36);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v10, 2, v11, 0);
        v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37);
        v16 = v12;
        if ( v12 >= 0 )
        {
          for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
          {
            v18 = (unsigned int *)(v7 + 4 * i);
            if ( v18 + 1 < v18 || (unsigned __int64)(v18 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            v19 = *v18;
            v20 = DXGDEVICE::UnpinDirectFlipResource(v10, v19, v38, (struct COREDEVICEACCESS *)v37);
            v16 = v20;
            if ( v20 < 0 )
            {
              v32 = WdLogNewEntry5_WdWarning(v22, v21, v23);
              *(_QWORD *)(v32 + 24) = v19;
              *(_QWORD *)(v32 + 32) = v16;
              WdLogEvent5_WdWarning(v32);
              break;
            }
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
          if ( v34[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
          if ( v33 )
          {
            v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
            if ( v24 == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
          }
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            goto LABEL_30;
          return (unsigned int)v16;
        }
        v31 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v31 + 24) = v10;
        *(_QWORD *)(v31 + 32) = v16;
        WdLogEvent5_WdWarning(v31);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
        if ( v34[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v30 + 24) = v35[0];
        LODWORD(v16) = -1073741811;
        *(_QWORD *)(v30 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v30);
      }
      if ( v33 )
      {
        v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v24 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, Current);
      *(_QWORD *)(v29 + 24) = v35[0];
      LODWORD(v16) = -1073741811;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
    }
    v28 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v6);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    v24 = qword_1C005F010;
    v28 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_30:
    McTemplateK0q(v24, &EventProfilerExit, v25, 2080);
  return (unsigned int)v16;
}
