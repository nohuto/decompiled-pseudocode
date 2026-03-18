/*
 * XREFs of ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C000C9EC
 * Callers:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0018810 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 * Callees:
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C000B768 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0016548 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformParent(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler *a3,
        char a4,
        bool *a5)
{
  bool *v5; // r12
  int v6; // ebp
  unsigned __int8 v11; // cl
  char v13; // r13
  struct DirectComposition::CResourceMarshaler *v14; // rcx
  struct DirectComposition::CResourceMarshaler *v15; // rdi
  int v16; // eax
  int v17; // eax
  struct DirectComposition::CResourceMarshaler *v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  if ( a3 != this[16] )
  {
    if ( !a3
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a3 + 120LL))(
           a3,
           154LL) )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[16]);
      this[16] = a3;
      if ( a3 )
        DirectComposition::CResourceMarshaler::AddRef(a3);
    }
    else
    {
      v18 = 0LL;
      v13 = 0;
      v14 = this[16];
      if ( !v14
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 120LL))(
              v14,
              155LL)
        || (v15 = this[16],
            DirectComposition::CResourceMarshaler::AddRef(v15),
            --*((_DWORD *)v15 + 5),
            *((_DWORD *)v15 + 5) != 1) )
      {
        v13 = 1;
        v17 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x9Bu, &v18);
        v15 = v18;
        v6 = v17;
        if ( v17 < 0 )
          goto LABEL_20;
      }
      v16 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(a2, v15, 0LL, a3);
      v6 = v16;
      if ( !v13 )
        goto LABEL_10;
      if ( v16 < 0 )
      {
LABEL_20:
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v15);
LABEL_10:
        if ( v6 < 0 )
          return (unsigned int)v6;
        goto LABEL_2;
      }
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[16]);
      this[16] = v15;
    }
    *((_DWORD *)this + 4) |= 0x200u;
    *v5 = 1;
    goto LABEL_10;
  }
LABEL_2:
  v11 = *((_BYTE *)this + 272);
  if ( v11 >> 7 != a4 )
  {
    if ( this[16] )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *v5 = 1;
      v11 = *((_BYTE *)this + 272);
    }
    *((_BYTE *)this + 272) = (a4 << 7) | v11 & 0x7F;
  }
  return (unsigned int)v6;
}
