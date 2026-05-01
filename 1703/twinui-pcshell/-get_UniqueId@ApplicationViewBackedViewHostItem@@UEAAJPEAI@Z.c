/*
 * XREFs of ?get_UniqueId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x1800E5BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_UniqueId(
        ApplicationViewBackedViewHostItem *this,
        unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  if ( *((_DWORD *)this + 26) )
    goto LABEL_11;
  v12 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
         *((_QWORD *)this + 10),
         &GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8,
         &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 48LL))(v12, &v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 93LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 26) = v11;
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
LABEL_11:
    *a2 = *((_DWORD *)this + 26);
    return 0LL;
  }
  v6 = 91LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v4);
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
