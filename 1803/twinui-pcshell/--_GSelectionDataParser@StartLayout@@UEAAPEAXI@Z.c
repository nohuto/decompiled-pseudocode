/*
 * XREFs of ??_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z @ 0x1802FCCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180149858 (-_Free@_bstr_t@@AEAAXXZ.c)
 */

_bstr_t::Data_t **__fastcall StartLayout::SelectionDataParser::`scalar deleting destructor'(
        _bstr_t::Data_t **this,
        const struct std::nothrow_t *a2)
{
  char v3; // bl
  const struct std::nothrow_t *v4; // rdx
  const struct std::nothrow_t *v5; // rdx
  const struct std::nothrow_t *v6; // rdx
  const struct std::nothrow_t *v7; // rdx
  const struct std::nothrow_t *v8; // rdx

  v3 = (char)a2;
  _bstr_t::_Free(this + 7, a2);
  _bstr_t::_Free(this + 6, v4);
  _bstr_t::_Free(this + 5, v5);
  _bstr_t::_Free(this + 4, v6);
  _bstr_t::_Free(this + 3, v7);
  _bstr_t::_Free(this + 2, v8);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
