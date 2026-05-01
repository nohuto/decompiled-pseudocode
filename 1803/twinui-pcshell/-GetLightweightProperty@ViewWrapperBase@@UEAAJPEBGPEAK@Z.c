/*
 * XREFs of ?GetLightweightProperty@ViewWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1801E5970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x1801E2150 (-GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z.c)
 */

__int64 __fastcall ViewWrapperBase::GetLightweightProperty(
        ViewWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  RTL_SRWLOCK *v4; // rbp
  int Property; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 296LL);
  AcquireSRWLockShared(v4);
  Property = LightweightPropertySet::GetProperty((ViewWrapperBase *)((char *)this + 104), a2, a3);
  v8 = Property;
  if ( Property < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x444,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)Property);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v8;
}
