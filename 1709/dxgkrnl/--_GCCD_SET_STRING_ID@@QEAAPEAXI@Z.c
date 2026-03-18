/*
 * XREFs of ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C000BD74
 * Callers:
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C00D063C (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1CE0 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1CCD_SET_STRING_ID@@QEAA@XZ @ 0x1C00DADCC (--1CCD_SET_STRING_ID@@QEAA@XZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::`scalar deleting destructor'(CCD_SET_STRING_ID *this)
{
  CCD_SET_STRING_ID::~CCD_SET_STRING_ID(this);
  operator delete(this);
  return this;
}
