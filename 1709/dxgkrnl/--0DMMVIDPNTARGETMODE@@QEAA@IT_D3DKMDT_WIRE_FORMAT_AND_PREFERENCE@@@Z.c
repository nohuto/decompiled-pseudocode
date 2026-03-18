/*
 * XREFs of ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C000B848
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D7120 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000B9D0 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 */

DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(
        DMMVIDPNTARGETMODE *this,
        __int64 a2,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a3)
{
  DMMVIDPNTARGETMODE *result; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, a2);
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 76) = -1LL;
  *(_QWORD *)((char *)this + 84) = -1LL;
  *(_QWORD *)((char *)this + 92) = -1LL;
  *((_QWORD *)this + 14) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 30) = 8;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173007;
  *(_QWORD *)this = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 33) = 0;
  result = this;
  *((union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)this + 32) = a3;
  *((_DWORD *)this + 34) = 4;
  return result;
}
