/*
 * XREFs of ?GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z @ 0x180084F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::GetSizeConstraints(
        CApplicationViewBase *this,
        struct IImmersiveMonitor *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  struct IImmersiveMonitor *v6; // r10
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  struct IImmersiveMonitor *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF
  char v16; // [rsp+70h] [rbp+18h] BYREF
  struct IImmersiveMonitor *v17; // [rsp+78h] [rbp+20h] BYREF

  v6 = a2;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v17 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = v17;
  }
  if ( !v6 )
  {
    v8 = (*(__int64 (__fastcall **)(CApplicationViewBase *, struct IImmersiveMonitor **))(*(_QWORD *)this + 56LL))(
           this,
           &v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 144LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_16;
    }
    v6 = v17;
  }
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *, char *))(*(_QWORD *)v6 + 112LL))(
         v6,
         &v15,
         &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 149LL;
    goto LABEL_13;
  }
  v11 = (*(__int64 (__fastcall **)(CApplicationViewBase *, _QWORD, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)this + 264LL))(
          this,
          v15,
          a3,
          a4);
  v9 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v11);
LABEL_16:
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v9;
}
