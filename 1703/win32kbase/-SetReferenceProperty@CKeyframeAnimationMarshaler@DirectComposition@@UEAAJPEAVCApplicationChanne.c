/*
 * XREFs of ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C001FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C001F440 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  DirectComposition::CResourceMarshaler *v10; // rcx
  __int64 v12; // r8

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 10:
      if ( !a4
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              100LL) )
      {
        return (unsigned int)-1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
      if ( v9 == a4 )
        return v5;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      v10 = a4;
      *((_QWORD *)this + 13) = a4;
      goto LABEL_9;
    case 23:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              93LL) )
      {
        return (unsigned int)-1073741811;
      }
      v12 = *((_QWORD *)this + 32);
      if ( a4 == (struct DirectComposition::CResourceMarshaler *)((v12 + 16) & -(__int64)(v12 != 0)) )
        return v5;
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        (struct DirectComposition::CResourceMarshaler *)((v12 + 16) & -(__int64)(v12 != 0)));
      *((_QWORD *)this + 32) = 0LL;
      if ( !a4 )
      {
LABEL_10:
        *a5 = 1;
LABEL_11:
        *((_DWORD *)this + 4) &= ~0x400u;
        return v5;
      }
      *((_QWORD *)this + 32) = (char *)a4 - 16;
      v10 = a4;
LABEL_9:
      DirectComposition::CResourceMarshaler::AddRef(v10);
      goto LABEL_10;
    case 24:
      if ( a4
        && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
             a4,
             100LL) )
      {
        if ( *((_QWORD *)this + 17) )
          return (unsigned int)-1073741790;
        *((_QWORD *)this + 17) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
        *a5 = 1;
        *((_DWORD *)this + 40) = 1;
        goto LABEL_11;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
