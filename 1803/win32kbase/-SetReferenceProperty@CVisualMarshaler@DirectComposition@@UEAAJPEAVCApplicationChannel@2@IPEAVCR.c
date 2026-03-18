/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0018810
 * Callers:
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0001210 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000C890 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0010520 (-SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0153FD0 (-SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C000C9EC (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v9; // edi
  struct DirectComposition::CResourceMarshaler **v10; // r14
  unsigned int v11; // esi
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  char v14; // al
  int v15; // ecx
  char v16; // al
  int v17; // ecx
  char v18; // al
  int v19; // ecx
  char v20; // al
  int v21; // ecx
  char v22; // al
  int v23; // ecx
  char v24; // al
  char v25; // al
  int v26; // ecx

  v9 = 0;
  *a5 = 0;
  v10 = 0LL;
  v11 = 0;
  switch ( a3 )
  {
    case 3:
      if ( a4 )
      {
        v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                143LL);
        v15 = 0;
        if ( !v14 )
          v15 = -1073741811;
        v9 = v15;
      }
      v10 = this + 15;
      v11 = 256;
      break;
    case 4:
      goto LABEL_68;
    case 5:
      if ( a4 )
      {
        v20 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                50LL);
        v21 = 0;
        if ( !v20 )
          v21 = -1073741811;
        v9 = v21;
      }
      v10 = this + 17;
      v11 = 1024;
      break;
    case 6:
      if ( a4 )
      {
        v16 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                60LL);
        v17 = 0;
        if ( !v16 )
          v17 = -1073741811;
        v9 = v17;
      }
      v10 = this + 18;
      v11 = 4096;
      break;
    case 10:
      if ( a4 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                106LL)
          && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                37LL) )
        {
          v24 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  75LL);
          if ( !v24
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  160LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  81LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  59LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  134LL) )
          {
            v25 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                    a4,
                    103LL);
            v26 = 0;
            if ( !v25 )
              v26 = -1073741811;
            v9 = v26;
          }
        }
      }
      v10 = this + 19;
      if ( v9 < 0 )
        v10 = 0LL;
      v11 = ((v9 >> 31) & 0xFFFFF800) + 2048;
      break;
    case 23:
      if ( a4 )
      {
        v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                82LL);
        v19 = 0;
        if ( !v18 )
          v19 = -1073741811;
        v9 = v19;
      }
      v10 = this + 25;
      v11 = 0x80000;
      break;
    case 39:
LABEL_68:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              151LL)
        && (a3 == 4
         || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
               a4,
               154LL)) )
      {
        return (unsigned int)-1073741811;
      }
      v9 = DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, a3 == 39, a5);
      break;
    case 40:
      if ( a4 )
      {
        v22 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                14LL);
        v23 = 0;
        if ( !v22 )
          v23 = -1073741811;
        v9 = v23;
      }
      v10 = this + 26;
      v11 = 0x1000000;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  if ( v9 >= 0 && a3 != 39 && a3 != 4 )
  {
    v13 = *v10;
    if ( *v10 != a4 )
    {
      if ( v13 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
        *v10 = 0LL;
      }
      if ( a4 )
      {
        *v10 = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
      *((_DWORD *)this + 4) |= v11;
      *a5 = 1;
    }
  }
  return (unsigned int)v9;
}
