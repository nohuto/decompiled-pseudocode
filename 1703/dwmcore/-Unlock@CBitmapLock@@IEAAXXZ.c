/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18007E7BC
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18007EAC4 (--1CBitmapLock@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x1800560C0 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ??$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z @ 0x18007E5AC (--$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  CBitmap *v2; // rcx
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(CBitmap *, enum WICBitmapLockFlags); // rax
  __int64 v5; // rcx

  v2 = (CBitmap *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    v3 = *((unsigned int *)this + 32);
    v4 = *(__int64 (__fastcall **)(CBitmap *, enum WICBitmapLockFlags))(*(_QWORD *)v2 + 24LL);
    if ( v4 == CBitmap::UnlockState )
      CBitmap::UnlockState(v2, (enum WICBitmapLockFlags)v3);
    else
      v4(v2, (enum WICBitmapLockFlags)v3);
    v5 = *((_QWORD *)this + 17);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *((_QWORD *)this + 17) = 0LL;
    }
    ReleaseInterface<IUnknown>((CDxHandleYUVBitmapRealization **)this + 10);
    if ( *((_BYTE *)this + 73) )
    {
      WPF::ProcessHeapImpl::Free(*((void **)this + 14));
      *((_QWORD *)this + 14) = 0LL;
      *((_DWORD *)this + 30) = 0;
    }
  }
  *((_BYTE *)this + 72) = 0;
}
