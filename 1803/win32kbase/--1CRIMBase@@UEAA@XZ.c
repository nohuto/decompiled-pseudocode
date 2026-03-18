/*
 * XREFs of ??1CRIMBase@@UEAA@XZ @ 0x1C01219A8
 * Callers:
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C0121960 (--1CBaseInput@@UEAA@XZ.c)
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C0121A40 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00C0088 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRIMBase::~CRIMBase(CRIMBase *this)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector destructor iterator'(
    (char *)this + 144,
    64LL,
    14LL,
    (void (__fastcall *)(char *))CRIMBase::SensorDispatcherObject::~SensorDispatcherObject);
}
