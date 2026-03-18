/*
 * XREFs of ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0010DB8
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000BF60 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C0145AB0 (--_GCChannel@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CChannel::~CChannel(DirectComposition::CChannel *this)
{
  bool v1; // zf
  struct _ERESOURCE *v3; // rcx

  v1 = (*((_BYTE *)this + 48) & 1) == 0;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  if ( !v1 )
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 5));
  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExDeleteResourceLite(v3);
    Win32FreePool(*((_QWORD *)this + 4));
  }
}
