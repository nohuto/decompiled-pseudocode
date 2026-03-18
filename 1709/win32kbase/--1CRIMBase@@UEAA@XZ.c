/*
 * XREFs of ??1CRIMBase@@UEAA@XZ @ 0x1C001AAD0
 * Callers:
 *     ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C000A850 (--_GCBaseInput@@UEAAPEAXI@Z.c)
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C00196A0 (--_GCHidInput@@UEAAPEAXI@Z.c)
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C0118F50 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00965A0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRIMBase::~CRIMBase(CRIMBase *this)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector destructor iterator'(
    (char *)this + 144,
    0x40uLL,
    0xCuLL,
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers);
}
