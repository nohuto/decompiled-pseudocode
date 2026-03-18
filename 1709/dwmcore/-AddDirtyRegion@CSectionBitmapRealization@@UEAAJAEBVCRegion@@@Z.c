/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800880B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18002B020 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180088D38 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::AddDirtyRegion(CSectionBitmapRealization *this, const struct CRegion *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  signed int v5; // eax
  unsigned int v6; // ebx
  signed int appended; // eax
  unsigned int v8; // edi
  signed int v9; // eax
  signed int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  void *v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+54h] [rbp-ACh]
  unsigned int v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[256]; // [rsp+60h] [rbp-A0h] BYREF

  v12 = 0LL;
  v16 = 0;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 36);
  v13[0] = v17;
  v13[1] = v17;
  v14 = 16;
  v15 = 16;
  if ( !v3 )
    goto LABEL_7;
  v5 = (**v3)(v3, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x9Au);
    goto LABEL_8;
  }
  v16 = 0;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(a2, v13);
  v6 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x9Cu);
    goto LABEL_8;
  }
  v8 = 0;
  if ( v16 )
  {
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 40LL))(v12, (char *)v13[0] + 16 * v8);
      v6 = v9;
      if ( v9 < 0 )
        break;
      if ( ++v8 >= v16 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xA0u);
  }
  else
  {
LABEL_7:
    v10 = CBitmapRealization::AddDirtyRegion(this, a2);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xA5u);
  }
LABEL_8:
  ReleaseInterfaceNoNULL<CManipulationManager>(v12);
  DynArrayImpl<1>::~DynArrayImpl<1>(v13);
  return v6;
}
