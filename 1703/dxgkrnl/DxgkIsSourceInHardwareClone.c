/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1C00A8080
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // r14
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  DXGADAPTER *v11; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // rax
  __int64 LowPart; // rcx
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v24[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v25[40]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v26);
  v10 = 0;
  v11 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v7, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23);
    v15 = v12;
    if ( v12 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v20[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v20[5] = v15;
    }
    else
    {
      v16 = DmmEnumClientVidPnPathTargetsFromSource(v11, (unsigned int)v4, 1LL, &v26);
      v15 = v16;
      if ( v16 >= 0 )
      {
        LOBYTE(v10) = (_DWORD)v26 != -1;
        *a3 = v10;
LABEL_5:
        DXGADAPTER::ReleaseReference(v11);
        COREACCESS::~COREACCESS((COREACCESS *)v25);
        COREACCESS::~COREACCESS((COREACCESS *)v24);
        return (unsigned int)v15;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      v20[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v20[5] = v4;
      v20[6] = v15;
    }
    v20[4] = LowPart;
    WdLogEvent5_WdError(v20);
    goto LABEL_5;
  }
  v22 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v22 + 24) = a1->HighPart;
  *(_QWORD *)(v22 + 32) = a1->LowPart;
  WdLogEvent5_WdError(v22);
  return 3221225485LL;
}
