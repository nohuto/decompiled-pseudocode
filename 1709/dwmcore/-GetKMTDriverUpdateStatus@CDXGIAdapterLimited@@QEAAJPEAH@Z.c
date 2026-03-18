/*
 * XREFs of ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800752D0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x1800984D0 (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::GetKMTDriverUpdateStatus(CDXGIAdapterLimited *this, int *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  int *v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v13 = 0LL;
  v12 = 0;
  v14 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v4 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 313;
    goto LABEL_13;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 315;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v8);
    goto LABEL_5;
  }
  v9 = (unsigned int)v14 | 0xB00000000LL;
  v10 = &v12;
  LODWORD(v11) = 4;
  v6 = D3DKMTQueryAdapterInfo(&v9);
  if ( v6 < 0 )
  {
    v5 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6 | 0x10000000, 0x142u);
  }
  else
  {
    *a2 = v12;
  }
LABEL_5:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  ReleaseInterfaceNoNULL<CManipulationManager>(v13);
  if ( v5 == -805305674 )
    return (unsigned int)-2003304291;
  return v5;
}
