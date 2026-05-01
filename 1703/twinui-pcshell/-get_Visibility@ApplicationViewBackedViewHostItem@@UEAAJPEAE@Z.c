/*
 * XREFs of ?get_Visibility@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z @ 0x1800E5D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::get_Visibility(ApplicationViewBackedViewHostItem *this, bool *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v7 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x76,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
