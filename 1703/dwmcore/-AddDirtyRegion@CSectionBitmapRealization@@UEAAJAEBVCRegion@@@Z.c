/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1801B48D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180073DA8 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::AddDirtyRegion(CSectionBitmapRealization *this, const struct CRegion *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v3; // ebx
  int v5; // eax
  int appended; // eax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  void *v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+50h] [rbp-B0h]
  int v13; // [rsp+54h] [rbp-ACh]
  unsigned int v14; // [rsp+58h] [rbp-A8h]
  _BYTE v15[256]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 57);
  v3 = 0;
  v11[0] = v15;
  v10 = 0LL;
  v14 = 0;
  v11[1] = v15;
  v12 = 16;
  v13 = 16;
  if ( v2 )
  {
    v5 = (**v2)(v2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v10);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x7Eu);
    }
    else
    {
      v14 = 0;
      appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(a2, (__int64)v11);
      v3 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x80u);
      }
      else
      {
        v7 = 0;
        if ( v14 )
        {
          while ( 1 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 40LL))(v10, (char *)v11[0] + 16 * v7);
            v3 = v8;
            if ( v8 < 0 )
              break;
            if ( ++v7 >= v14 )
              goto LABEL_11;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x84u);
        }
      }
    }
  }
LABEL_11:
  ReleaseInterfaceNoNULL<CD2DPencil>(v10);
  DynArrayImpl<1>::~DynArrayImpl<1>(v11);
  return v3;
}
