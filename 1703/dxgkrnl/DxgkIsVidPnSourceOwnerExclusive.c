/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1C00A6220
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(DXGADAPTER ***a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int VidPnSourceOwnerType; // eax
  char v12; // bl
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v18[40]; // [rsp+48h] [rbp-30h] BYREF

  v5 = a2;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 5826LL;
    WdLogEvent5_WdAssertion(v14);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16) < 0 )
  {
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  if ( !a1[285] )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v15 + 24) = 5836LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *a3 = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[285], v5);
  v12 = 1;
  if ( VidPnSourceOwnerType != 2 )
  {
    if ( VidPnSourceOwnerType == 3 )
    {
      *a3 = 1;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  return v12;
}
