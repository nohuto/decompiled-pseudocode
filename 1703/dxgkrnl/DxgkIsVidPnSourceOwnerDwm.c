/*
 * XREFs of DxgkIsVidPnSourceOwnerDwm @ 0x1C0197590
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000ADD0 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

bool __fastcall DxgkIsVidPnSourceOwnerDwm(DXGADAPTER ***a1, unsigned int a2)
{
  bool IsVidPnSourceOwnerDwm; // bl
  _BYTE v6[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v6, (struct DXGADAPTER *const)a1, 0LL);
  IsVidPnSourceOwnerDwm = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v6) >= 0 )
    IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(a1[285], a2);
  COREACCESS::~COREACCESS((COREACCESS *)v8);
  COREACCESS::~COREACCESS((COREACCESS *)v7);
  return IsVidPnSourceOwnerDwm;
}
