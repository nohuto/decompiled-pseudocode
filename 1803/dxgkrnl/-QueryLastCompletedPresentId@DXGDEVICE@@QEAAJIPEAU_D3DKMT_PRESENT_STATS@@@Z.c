/*
 * XREFs of ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C018B9A0
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C0097064 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C0156464 (-QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
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
  v5 = (ADAPTER_DISPLAY **)*((_QWORD *)this + 211);
  if ( v5 == *(ADAPTER_DISPLAY ***)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 520) + 8LL) + 488LL))(*((_QWORD *)this + 77));
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)v5, 0LL);
  LastCompletedPresentId = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9);
  if ( LastCompletedPresentId >= 0 )
    LastCompletedPresentId = ADAPTER_DISPLAY::QueryLastCompletedPresentId(v5[307], a2, a3);
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  COREACCESS::~COREACCESS((COREACCESS *)v10);
  return (unsigned int)LastCompletedPresentId;
}
