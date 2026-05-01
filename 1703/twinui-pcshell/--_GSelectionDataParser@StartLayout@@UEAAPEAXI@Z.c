/*
 * XREFs of ??_GSelectionDataParser@StartLayout@@UEAAPEAXI@Z @ 0x180174C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1_bstr_t@@QEAA@XZ @ 0x18008A634 (--1_bstr_t@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

StartLayout::SelectionDataParser *__fastcall StartLayout::SelectionDataParser::`scalar deleting destructor'(
        StartLayout::SelectionDataParser *this,
        char a2)
{
  _bstr_t::~_bstr_t((StartLayout::SelectionDataParser *)((char *)this + 56));
  _bstr_t::~_bstr_t((StartLayout::SelectionDataParser *)((char *)this + 48));
  _bstr_t::~_bstr_t((StartLayout::SelectionDataParser *)((char *)this + 40));
  _bstr_t::~_bstr_t((StartLayout::SelectionDataParser *)((char *)this + 32));
  _bstr_t::~_bstr_t((StartLayout::SelectionDataParser *)((char *)this + 24));
  _bstr_t::~_bstr_t((StartLayout::SelectionDataParser *)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
