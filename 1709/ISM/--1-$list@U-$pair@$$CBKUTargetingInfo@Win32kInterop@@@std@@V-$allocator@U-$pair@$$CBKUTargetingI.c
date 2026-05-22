/*
 * XREFs of ??1?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA@XZ @ 0x180011B64
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$16 @ 0x1800CCBFE (_Win32kInterop--Win32kInterop_--_1_--dtor$16.c)
 * Callees:
 *     ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x1800102C4 (--1TargetingInfo@Win32kInterop@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::~list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>(
        void **a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      Win32kInterop::TargetingInfo::~TargetingInfo((Win32kInterop::TargetingInfo *)(v2 + 3));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  operator delete(*a1);
}
