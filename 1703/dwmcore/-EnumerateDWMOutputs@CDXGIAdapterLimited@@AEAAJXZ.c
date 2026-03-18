/*
 * XREFs of ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5700
 * Callers:
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B5828 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x1800B69A4 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x1800C9AA0 (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::EnumerateDWMOutputs(CDXGIAdapterLimited *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 i; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  int updated; // eax
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15[33]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  for ( i = 0LL; ; i = v3 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
           v2,
           i,
           0xFFFFFFFFLL,
           &v12);
    v6 = v5;
    if ( v5 < 0 )
      break;
    v8 = v12;
    v14 = (__int64)v12;
    memset_0(v15, 0, sizeof(v15));
    v9 = (**v8)(v8, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v13);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA9u);
      goto LABEL_5;
    }
    v15[0] = v13;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)&v14);
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xACu);
      goto LABEL_5;
    }
    v11 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((char *)this + 368, &v14);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xAEu);
      goto LABEL_5;
    }
    v2 = *((_QWORD *)this + 4);
    ++v3;
  }
  if ( v5 == -2005270526 )
    v6 = 0;
LABEL_5:
  ReleaseInterfaceNoNULL<CD2DPencil>(v13);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v12);
  return v6;
}
