/*
 * XREFs of ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x1800BFFD0
 * Callers:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1800C03BC (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::Close(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  PVOID Ptr; // rbx
  RTL_SRWLOCK *v4; // rax
  PVOID v5; // r14
  PVOID v6; // rdi
  bool v7; // zf
  DWORD LastError; // edi
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = this + 17;
  Ptr = 0LL;
  AcquireSRWLockExclusive(this + 17);
  v4 = this + 18;
  v5 = 0LL;
  v6 = 0LL;
  if ( &v9 != (char *)&this[18] )
  {
    Ptr = v4->Ptr;
    v4->Ptr = 0LL;
    v5 = Ptr;
    v6 = Ptr;
  }
  v7 = v1 == 0LL;
  if ( v1 )
  {
    ReleaseSRWLockExclusive(v1);
    v7 = v1 == 0LL;
  }
  if ( v7 )
    v6 = v5;
  if ( v6 )
  {
    LastError = GetLastError();
    CM_Unregister_Notification(Ptr);
    SetLastError(LastError);
  }
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
    (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)this,
    6u);
}
