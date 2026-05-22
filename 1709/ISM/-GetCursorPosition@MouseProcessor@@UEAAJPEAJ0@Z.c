/*
 * XREFs of ?GetCursorPosition@MouseProcessor@@UEAAJPEAJ0@Z @ 0x18006CCE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::GetCursorPosition(MouseProcessor *this, int *a2, int *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx
  struct tagPOINT Point; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    Point.x = 0;
    Point.y = 0;
    GetCursorPos(&Point);
    *a2 = Point.x;
    *a3 = Point.y;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 32LL))(*((_QWORD *)this + 7), a2);
    v3 = v6;
    if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 877, v6);
  }
  return v3;
}
