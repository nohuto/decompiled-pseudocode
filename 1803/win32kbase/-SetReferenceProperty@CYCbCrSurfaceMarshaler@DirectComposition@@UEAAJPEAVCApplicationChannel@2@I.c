/*
 * XREFs of ?SetReferenceProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C015D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetReferenceProperty(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 == 1
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            37LL)) )
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 6);
      if ( a4 != v9 )
      {
        if ( v9 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
          *((_QWORD *)this + 6) = 0LL;
        }
        if ( !a4 )
          goto LABEL_19;
        *((_QWORD *)this + 6) = a4;
LABEL_18:
        DirectComposition::CResourceMarshaler::AddRef(a4);
LABEL_19:
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          37LL) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 5);
  if ( a4 != v10 )
  {
    if ( v10 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
      *((_QWORD *)this + 5) = 0LL;
    }
    if ( !a4 )
      goto LABEL_19;
    *((_QWORD *)this + 5) = a4;
    goto LABEL_18;
  }
  return v5;
}
