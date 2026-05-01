/*
 * XREFs of ?GetViewPropertyAsUInt@ApplicationViewBackedViewHostItem@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800E6490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wcscmp_0 @ 0x1801976B2 (wcscmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::GetViewPropertyAsUInt(
        ApplicationViewBackedViewHostItem *this,
        HSTRING a2,
        unsigned int *a3)
{
  const wchar_t *StringRawBuffer; // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( wcscmp_0(StringRawBuffer, L"FrameworkViewType") )
    return 2147943568LL;
  v6 = *((_QWORD *)this + 9);
  v11 = 6;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 376LL))(v6, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x128,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  if ( v11 == 6 )
    return 2147943568LL;
  *a3 = v11;
  return 0LL;
}
