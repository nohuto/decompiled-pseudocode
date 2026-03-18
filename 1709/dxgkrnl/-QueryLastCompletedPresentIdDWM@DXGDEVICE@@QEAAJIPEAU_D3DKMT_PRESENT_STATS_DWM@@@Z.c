/*
 * XREFs of ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C016F0D0
 * Callers:
 *     DxgkGetDeviceState @ 0x1C00B3B20 (DxgkGetDeviceState.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C007E878 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
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
  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 209);
  v6 = a2;
  if ( v5 == *(struct DXGADAPTER **)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 504) + 8LL) + 400LL))(
             *((_QWORD *)this + 75),
             a2);
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, v5, 0LL);
  PresentStatsDWM = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10);
  if ( PresentStatsDWM >= 0 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)v5 + 288) + 264LL);
    if ( v9 )
      PresentStatsDWM = BLTQUEUE::QueryPresentStatsDWM((BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 2704 * v6), a3);
    else
      PresentStatsDWM = -1073741811;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  return (unsigned int)PresentStatsDWM;
}
