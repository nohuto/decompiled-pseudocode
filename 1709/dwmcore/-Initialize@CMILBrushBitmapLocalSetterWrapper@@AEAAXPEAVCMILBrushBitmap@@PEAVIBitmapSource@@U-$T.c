/*
 * XREFs of ?Initialize@CMILBrushBitmapLocalSetterWrapper@@AEAAXPEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x1800BF680
 * Callers:
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x1800BF79C (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@U-$TMILFlagsE.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x1801B71E4 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmapLocalSetterWrapper::Initialize(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  int v7; // eax
  bool v9; // zf
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 result; // rax
  int v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+48h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp-18h]

  *a1 = a2;
  v7 = *(_DWORD *)(a2 + 112);
  v9 = v7 == -1;
  v10 = v7 + 1;
  if ( v9 )
    v10 = 1;
  *(_DWORD *)(a2 + 112) = v10;
  *(_QWORD *)(*a1 + 192) = a3;
  *(_DWORD *)(*a1 + 200) = 0;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, &v18);
  v12 = *a1;
  *(_QWORD *)(v12 + 32) = v18;
  *(_DWORD *)(v12 + 40) = v19;
  v13 = *a1;
  *(_OWORD *)(v13 + 120) = *(_OWORD *)a7;
  *(_OWORD *)(v13 + 136) = *(_OWORD *)(a7 + 16);
  *(_OWORD *)(v13 + 152) = *(_OWORD *)(a7 + 32);
  *(_OWORD *)(v13 + 168) = *(_OWORD *)(a7 + 48);
  *(_DWORD *)(v13 + 184) = *(_DWORD *)(a7 + 64);
  *(_DWORD *)(*a1 + 116) = 1;
  v14 = *a1;
  if ( a5 )
  {
    *(_OWORD *)(v14 + 220) = *(_OWORD *)a5;
    *(_OWORD *)(v14 + 236) = *(_OWORD *)(a5 + 16);
    v15 = *(_DWORD *)(a5 + 32);
  }
  else
  {
    LOBYTE(v17) = 0;
    v15 = v17;
    *(_OWORD *)(v14 + 220) = _xmm;
    *(_OWORD *)(v14 + 236) = 0LL;
  }
  *(_DWORD *)(v14 + 252) = v15;
  result = *a1;
  *(_DWORD *)(*a1 + 256) = a4;
  return result;
}
