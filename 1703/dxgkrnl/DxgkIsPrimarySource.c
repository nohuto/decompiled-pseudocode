/*
 * XREFs of DxgkIsPrimarySource @ 0x1C00A5F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006310 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C000B3BC (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 */

bool __fastcall DxgkIsPrimarySource(ADAPTER_DISPLAY **a1, int a2)
{
  bool v4; // bl
  _BYTE v6[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v7[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v8[64]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v9; // [rsp+90h] [rbp+8h] BYREF
  char v10; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+A8h] [rbp+20h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v6, (struct DXGADAPTER *const)a1, 0LL);
  v4 = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v6) >= 0
    && ((*((_BYTE *)a1 + 300) & 1) != 0 || DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)a1)) )
  {
    ADAPTER_DISPLAY::GetPrimaryPath(a1[285], &v9, &v11, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v10);
    v4 = a2 == v9;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v8);
  COREACCESS::~COREACCESS((COREACCESS *)v7);
  return v4;
}
