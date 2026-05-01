/*
 * XREFs of ?get_ReadyToPresent@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z @ 0x1800E6050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_ReadyToPresent(
        ApplicationViewBackedViewHostItem *this,
        bool *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v8 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
         *((_QWORD *)this + 10),
         &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) != 0;
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
  }
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
