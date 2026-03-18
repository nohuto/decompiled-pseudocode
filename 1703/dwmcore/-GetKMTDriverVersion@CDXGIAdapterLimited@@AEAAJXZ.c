/*
 * XREFs of ?GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5540
 * Callers:
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5828 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::GetKMTDriverVersion(CDXGIAdapterLimited *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  int *v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v11 = 0;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v3 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 254;
    goto LABEL_13;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 256;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v7);
    goto LABEL_5;
  }
  v8 = (unsigned int)v13 | 0xD00000000LL;
  v9 = &v11;
  LODWORD(v10) = 4;
  v5 = D3DKMTQueryAdapterInfo(&v8);
  if ( v5 < 0 )
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5 | 0x10000000, 0x107u);
  }
  else
  {
    *((_DWORD *)this + 86) = v11;
  }
LABEL_5:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  ReleaseInterfaceNoNULL<CD2DPencil>(v12);
  if ( v4 == -805305674 )
    return (unsigned int)-2003304291;
  return v4;
}
