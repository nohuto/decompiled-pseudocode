/*
 * XREFs of ?SetReferenceProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0003850
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetReferenceProperty(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  int v9; // r8d
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rdx

  v5 = 0;
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1
        && (!a4
         || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              97LL)) )
      {
        v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
        if ( a4 == v10 )
          return v5;
        if ( v10 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
        *((_QWORD *)this + 9) = a4;
        goto LABEL_10;
      }
    }
    else if ( !a4
           || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                31LL) )
    {
      v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
      if ( a4 == v12 )
        return v5;
      if ( v12 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
      *((_QWORD *)this + 8) = a4;
LABEL_10:
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          31LL) )
  {
    return (unsigned int)-1073741811;
  }
  v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( a4 != v13 )
  {
    if ( v13 )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
    *((_QWORD *)this + 7) = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *a5 = 1;
  }
  return v5;
}
