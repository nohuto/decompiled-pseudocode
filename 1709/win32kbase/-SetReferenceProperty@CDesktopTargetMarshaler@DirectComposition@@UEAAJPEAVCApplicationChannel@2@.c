/*
 * XREFs of ?SetReferenceProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C008EEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDesktopTargetMarshaler::SetReferenceProperty(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int v9; // r8d
  int v10; // r8d
  struct DirectComposition::CResourceMarshaler *v11; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  struct DirectComposition::CResourceMarshaler *v14; // rdx

  v5 = 0;
  v9 = a3 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 3
        && (!a4
         || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              116LL)) )
      {
        v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
        if ( v13 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
        *((_QWORD *)this + 9) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x400u;
        goto LABEL_10;
      }
    }
    else if ( !a4
           || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                40LL) )
    {
      v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
      if ( v11 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
      *((_QWORD *)this + 8) = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= 0x80u;
LABEL_10:
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          134LL) )
  {
    return (unsigned int)-1073741811;
  }
  v14 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v14 )
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
  *((_QWORD *)this + 7) = a4;
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  *((_DWORD *)this + 4) |= 0x40u;
  *a5 = 1;
  return v5;
}
