/*
 * XREFs of ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C00F2E80
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C0097064 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C01D62C8 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentIdDWM(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS_DWM *a3)
{
  __int64 v3; // rax
  struct DXGADAPTER *v5; // rdi
  __int64 v6; // rbp
  int PresentStatsDWM; // ebx
  __int64 v9; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-30h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 211);
  v6 = a2;
  if ( v5 == *(struct DXGADAPTER **)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 520) + 8LL) + 496LL))(
             *((_QWORD *)this + 77),
             a2);
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, v5, 0LL);
  PresentStatsDWM = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10);
  if ( PresentStatsDWM >= 0 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)v5 + 307) + 264LL);
    if ( v9 )
      PresentStatsDWM = BLTQUEUE::QueryPresentStatsDWM((BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 2704 * v6), a3);
    else
      PresentStatsDWM = -1073741811;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  return (unsigned int)PresentStatsDWM;
}
