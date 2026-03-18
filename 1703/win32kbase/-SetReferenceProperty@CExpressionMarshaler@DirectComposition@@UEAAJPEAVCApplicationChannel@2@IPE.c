/*
 * XREFs of ?SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0018230
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C001F440 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 9 )
  {
    if ( a4
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           100LL) )
    {
      v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
      if ( v11 == a4 )
        return v5;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
      *((_QWORD *)this + 13) = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
      *a5 = 1;
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 13 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  if ( !a4
    || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          100LL) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v9 != a4 )
  {
    if ( v9 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 17) = 0LL;
    }
    *((_QWORD *)this + 17) = a4;
    DirectComposition::CResourceMarshaler::AddRef(a4);
    *a5 = 1;
    *((_DWORD *)this + 42) = 1;
LABEL_9:
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  return v5;
}
