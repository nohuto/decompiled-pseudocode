/*
 * XREFs of ?RuntimeClassInitialize@FrameFactory@@QEAAJPEAUIPrivilegedPresentationOperations@@@Z @ 0x180064234
 * Callers:
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@@012@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x180019A10 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FrameFactory::RuntimeClassInitialize(
        FrameFactory *this,
        struct IPrivilegedPresentationOperations *a2)
{
  __int64 v4; // rcx
  LPVOID *ppv; // rdi
  LPVOID v6; // rcx
  HRESULT Instance; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((struct IPrivilegedPresentationOperations **)this + 7) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IPrivilegedPresentationOperations *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  ppv = (LPVOID *)((char *)this + 64);
  v6 = *ppv;
  if ( *ppv )
  {
    *ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Instance = CoCreateInstance(
               &GUID_ddc05a5a_351a_4e06_8eaf_54ec1bc2dcea,
               0LL,
               1u,
               &GUID_d6defab3_dbb9_4413_8af9_554586fdff94,
               ppv);
  v8 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)Instance);
  return v8;
}
