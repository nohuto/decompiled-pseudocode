/*
 * XREFs of ??_GTaskbarLayoutParser@@UEAAPEAXI@Z @ 0x18008D170
 * Callers:
 *     <none>
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TaskbarLayoutParser *__fastcall TaskbarLayoutParser::`scalar deleting destructor'(TaskbarLayoutParser *this, char a2)
{
  void *v4; // rcx
  OLECHAR *v5; // rcx
  OLECHAR *v6; // rcx
  OLECHAR *v7; // rcx

  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  StartLayout::SelectionData::~SelectionData((TaskbarLayoutParser *)((char *)this + 40));
  v5 = (OLECHAR *)*((_QWORD *)this + 4);
  if ( v5 )
    SysFreeString(v5);
  v6 = (OLECHAR *)*((_QWORD *)this + 3);
  if ( v6 )
    SysFreeString(v6);
  v7 = (OLECHAR *)*((_QWORD *)this + 2);
  if ( v7 )
    SysFreeString(v7);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
