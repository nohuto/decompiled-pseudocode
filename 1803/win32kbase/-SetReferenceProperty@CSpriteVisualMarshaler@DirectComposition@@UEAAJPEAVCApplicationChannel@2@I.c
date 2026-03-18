/*
 * XREFs of ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000C890
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0018810 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CSpriteVisualMarshaler::SetReferenceProperty(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // edi
  struct DirectComposition::CResourceMarshaler **v9; // r14
  unsigned int v10; // ebx
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v8 = 0;
  v9 = 0LL;
  *a5 = 0;
  v10 = 0;
  switch ( a3 )
  {
    case 0xAu:
      v8 = -1073741811;
      break;
    case 0x30u:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              14LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 280);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = ((v8 >> 31) & 0xE0000000) + 0x20000000;
      break;
    case 0x31u:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              34LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 288);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = ((v8 >> 31) & 0xC0000000) + 0x40000000;
      break;
    default:
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
  if ( v10 )
  {
    if ( v8 >= 0 )
    {
      v11 = *v9;
      if ( *v9 != a4 )
      {
        if ( v11 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
          *v9 = 0LL;
        }
        if ( a4 )
        {
          *v9 = a4;
          DirectComposition::CResourceMarshaler::AddRef(a4);
        }
        *((_DWORD *)this + 4) |= v10;
        *a5 = 1;
      }
    }
  }
  return (unsigned int)v8;
}
