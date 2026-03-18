/*
 * XREFs of ?SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z @ 0x1C00067EC (-CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetReferenceProperty(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // r15d
  struct DirectComposition::CResourceMarshaler **v9; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // edi
  __int64 v12; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 7 )
    v5 = 32;
  v9 = 0LL;
  if ( a3 == 7 )
    v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 56);
  v10 = a3 != 7 ? 0xC000000D : 0;
  v11 = v10;
  if ( v9 )
  {
    if ( !a4 )
      goto LABEL_10;
    v12 = 0LL;
    if ( a3 == 7 )
      v12 = 14LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           v12) )
    {
LABEL_10:
      v11 = v10;
      if ( *v9 != a4 )
      {
        if ( DirectComposition::CBrushMarshaler::CheckForCycle(this, a4) )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          DirectComposition::CApplicationChannel::ReleaseResource(a2, *v9);
          *v9 = a4;
          if ( a4 )
            DirectComposition::CResourceMarshaler::AddRef(a4);
          *((_DWORD *)this + 4) |= v5;
          *a5 = 1;
        }
      }
    }
  }
  return v11;
}
