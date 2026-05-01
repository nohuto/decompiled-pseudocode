/*
 * XREFs of ?GetLightweightProperty@ViewWrapperBase@@UEAAJPEBGPEAK@Z @ 0x18013F590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C328 (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 */

__int64 __fastcall ViewWrapperBase::GetLightweightProperty(
        RTL_SRWLOCK **this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  __int64 v6; // rbx
  PCWSTR StringRawBuffer; // rax
  unsigned int v8; // ebx
  _DWORD *Ptr; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[22], &SRWLock);
  *a3 = 0;
  v6 = 0LL;
  if ( this[15] )
  {
    while ( 1 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this[14][v6].Ptr + 1), 0LL);
      if ( CompareStringOrdinal(StringRawBuffer + 20, -1, a2, -1, 1) == 2 )
        break;
      if ( ++v6 >= (unsigned __int64)this[15] )
        goto LABEL_4;
    }
    Ptr = this[14][v6].Ptr;
    v8 = 0;
    *a3 = Ptr[4];
  }
  else
  {
LABEL_4:
    v8 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x440,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v8;
}
