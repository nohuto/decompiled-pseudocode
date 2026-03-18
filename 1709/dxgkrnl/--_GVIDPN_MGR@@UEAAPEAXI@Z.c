/*
 * XREFs of ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C0035350
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0034B6C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::`scalar deleting destructor'(VIDPN_MGR *this, char a2)
{
  VIDPN_MGR::~VIDPN_MGR(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
