/*
 * XREFs of ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C019DAD4
 * Callers:
 *     DxgkGetDeviceState @ 0x1C00B3B20 (DxgkGetDeviceState.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C0175E00 (-QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentId(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // rax
  ADAPTER_DISPLAY **v5; // rbx
  int LastCompletedPresentId; // edi
  _BYTE v9[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v11[40]; // [rsp+48h] [rbp-30h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (ADAPTER_DISPLAY **)*((_QWORD *)this + 209);
  if ( v5 == *(ADAPTER_DISPLAY ***)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 504) + 8LL) + 392LL))(*((_QWORD *)this + 75));
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)v5, 0LL);
  LastCompletedPresentId = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9);
  if ( LastCompletedPresentId >= 0 )
    LastCompletedPresentId = ADAPTER_DISPLAY::QueryLastCompletedPresentId(v5[288], a2, a3);
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  COREACCESS::~COREACCESS((COREACCESS *)v10);
  return (unsigned int)LastCompletedPresentId;
}
