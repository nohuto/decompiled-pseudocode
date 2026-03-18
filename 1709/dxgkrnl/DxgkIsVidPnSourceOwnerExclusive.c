/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1C00F9040
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(DXGADAPTER ***a1, unsigned int a2, _BYTE *a3)
{
  __int64 v6; // rcx
  int VidPnSourceOwnerType; // eax
  char v8; // bl
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v14[40]; // [rsp+48h] [rbp-30h] BYREF

  if ( !a1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v10 + 24) = 6134LL;
    WdLogEvent5_WdAssertion(v10);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12) < 0 )
  {
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  if ( !a1[288] )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 6144LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *a3 = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[288], a2);
  v8 = 1;
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
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return v8;
}
