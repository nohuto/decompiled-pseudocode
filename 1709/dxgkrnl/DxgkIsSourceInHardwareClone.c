/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1C00F9490
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00B25D4 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // r14
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  int v9; // esi
  DXGADAPTER *v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v17; // rax
  __int64 LowPart; // rcx
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v21[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v22[40]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v23);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v7, 0LL);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
    v13 = v11;
    if ( v11 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v17[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v17[5] = v13;
    }
    else
    {
      v14 = DmmEnumClientVidPnPathTargetsFromSource(v10, v4, 1LL, (unsigned int *const)&v23);
      v13 = v14;
      if ( v14 >= 0 )
      {
        LOBYTE(v9) = (_DWORD)v23 != -1;
        *a3 = v9;
LABEL_5:
        DXGADAPTER::ReleaseReferenceNoTracking(v10);
        COREACCESS::~COREACCESS((COREACCESS *)v22);
        COREACCESS::~COREACCESS((COREACCESS *)v21);
        return (unsigned int)v13;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v17[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v17[5] = v4;
      v17[6] = v13;
    }
    v17[4] = LowPart;
    WdLogEvent5_WdError(v17);
    goto LABEL_5;
  }
  v19 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v19 + 24) = a1->HighPart;
  *(_QWORD *)(v19 + 32) = a1->LowPart;
  WdLogEvent5_WdError(v19);
  return 3221225485LL;
}
