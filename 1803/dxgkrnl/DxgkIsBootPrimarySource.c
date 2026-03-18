/*
 * XREFs of DxgkIsBootPrimarySource @ 0x1C00DEEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00149D8 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00161A0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C0213DD0 (-DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z.c)
 */

char __fastcall DxgkIsBootPrimarySource(ADAPTER_DISPLAY **a1, unsigned int a2)
{
  __int64 v2; // rsi
  char v4; // bl
  int v5; // edx
  int IsSourcePresentedOnClientVidPnUsedByFirmware; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  unsigned int v11[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v14[64]; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int8 v15; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+18h] BYREF
  char v17; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  v15 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12) >= 0 )
  {
    v5 = *((_DWORD *)a1 + 75);
    if ( (v5 & 1) != 0 || DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)a1) )
    {
      if ( (v5 & 0x8000) != 0 )
      {
        IsSourcePresentedOnClientVidPnUsedByFirmware = DmmIsSourcePresentedOnClientVidPnUsedByFirmware(a1, v2, &v15);
        v9 = IsSourcePresentedOnClientVidPnUsedByFirmware;
        if ( IsSourcePresentedOnClientVidPnUsedByFirmware >= 0 )
        {
          v4 = v15;
        }
        else
        {
          v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
          v10[3] = a1;
          v10[4] = v2;
          v10[5] = v9;
          WdLogEvent5_WdError(v10);
        }
      }
      else
      {
        ADAPTER_DISPLAY::GetPrimaryPath(a1[307], &v16, v11, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v17);
        v4 = (_DWORD)v2 == v16;
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return v4;
}
