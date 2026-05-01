/*
 * XREFs of ?Uninitialize@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E6F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::Uninitialize(ApplicationViewBackedViewHostItem *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 8))(
         *((_QWORD *)this + 8),
         &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
         &v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 517LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_7;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 40LL))(
         v8,
         ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 16) >> 64));
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 518LL;
    goto LABEL_5;
  }
  v3 = 0;
LABEL_7:
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v3;
}
