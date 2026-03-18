/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C002BDA0
 * Callers:
 *     ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0001010 (-SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0004CA0 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0028650 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_NPEA_N@Z @ 0x1C002C94C (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_N.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // edi
  struct DirectComposition::CResourceMarshaler **v6; // rsi
  int v7; // ebp
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

  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 3:
      if ( a4 )
      {
        v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                128LL);
        v15 = 0;
        if ( !v14 )
          v15 = -1073741811;
        v5 = v15;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 104);
      v7 = 256;
      goto LABEL_10;
    case 4:
      goto LABEL_8;
    case 5:
      if ( a4 )
      {
        v20 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                45LL);
        v21 = 0;
        if ( !v20 )
          v21 = -1073741811;
        v5 = v21;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 120);
      v7 = 1024;
      goto LABEL_10;
    case 6:
      if ( a4 )
      {
        v16 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                55LL);
        v17 = 0;
        if ( !v16 )
          v17 = -1073741811;
        v5 = v17;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 128);
      v7 = 4096;
      goto LABEL_10;
  }
  if ( a3 != 10 )
  {
    if ( a3 == 20 )
    {
      if ( a4 )
      {
        v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                76LL);
        v19 = 0;
        if ( !v18 )
          v19 = -1073741811;
        v5 = v19;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 176);
      v7 = 0x80000;
      goto LABEL_10;
    }
    if ( a3 != 36 )
    {
      if ( a3 != 37 )
        return (unsigned int)-1073741811;
      if ( a4 )
      {
        v22 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                14LL);
        v23 = 0;
        if ( !v22 )
          v23 = -1073741811;
        v5 = v23;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 184);
      v7 = 0x1000000;
LABEL_10:
      if ( v5 < 0 || ((a3 - 4) & 0xFFFFFFDF) == 0 )
        return (unsigned int)v5;
      goto LABEL_16;
    }
LABEL_8:
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            134LL) )
    {
      return (unsigned int)-1073741811;
    }
    v5 = DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, a3 == 36, a5);
    goto LABEL_10;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          98LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          35LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          69LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          140LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          75LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          54LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          121LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          95LL) )
  {
    return (unsigned int)-1073741811;
  }
  v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 136);
  v7 = 2048;
LABEL_16:
  v13 = *v6;
  if ( *v6 != a4 )
  {
    if ( v13 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
      *v6 = 0LL;
    }
    if ( a4 )
    {
      *v6 = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
    }
    *((_DWORD *)this + 4) |= v7;
    *a5 = 1;
  }
  return (unsigned int)v5;
}
