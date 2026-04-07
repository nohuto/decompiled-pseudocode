/*
 * XREFs of ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x180034A48
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x180034B7C (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180034DD0 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x180038FE8 (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::EnumerateDWMOutputs(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 i; // rdx
  int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  int updated; // eax
  int v9; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14[35]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  for ( i = 0LL; ; i = v3 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
           v2,
           i,
           0xFFFFFFFFLL,
           &v11);
    if ( v5 < 0 )
      break;
    v6 = v11;
    v13 = v11;
    memset_0(v14, 0, 0x110uLL);
    v7 = (**v6)(v6, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v12);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x99u);
      goto LABEL_9;
    }
    v14[0] = v12;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)&v13);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x9Cu);
      goto LABEL_9;
    }
    v9 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((char *)this + 352, &v13);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Eu);
      goto LABEL_9;
    }
    v2 = *((_QWORD *)this + 4);
    ++v3;
  }
  if ( v5 == -2005270526 )
    v5 = 0;
LABEL_9:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
  return (unsigned int)v5;
}
