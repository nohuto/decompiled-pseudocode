/*
 * XREFs of ?SetReferenceProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0144270
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetReferenceProperty(
        DirectComposition::CInteractionMarshaler *this,
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
  if ( a3 != 10 )
  {
    if ( a3 == 15
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            109LL)) )
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 30);
      if ( v9 != a4 )
      {
        if ( v9 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
          *((_QWORD *)this + 30) = 0LL;
        }
        if ( a4 )
        {
          *((_QWORD *)this + 30) = a4;
          DirectComposition::CResourceMarshaler::AddRef(a4);
        }
        *((_DWORD *)this + 4) |= 0x2000u;
LABEL_20:
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
          108LL) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 29);
  if ( v10 != a4 )
  {
    if ( v10 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
      *((_QWORD *)this + 29) = 0LL;
    }
    if ( a4 )
    {
      *((_QWORD *)this + 29) = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
    }
    *((_DWORD *)this + 4) |= 0x400u;
    goto LABEL_20;
  }
  return v5;
}
