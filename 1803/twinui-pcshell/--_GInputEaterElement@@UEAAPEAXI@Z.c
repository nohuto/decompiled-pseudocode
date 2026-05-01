/*
 * XREFs of ??_GInputEaterElement@@UEAAPEAXI@Z @ 0x1802A3C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x18027D714 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

InputEaterElement *__fastcall InputEaterElement::`scalar deleting destructor'(InputEaterElement *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 27);
  if ( v4 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 53) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
