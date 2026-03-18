/*
 * XREFs of ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1801BEBB8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801BED2C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessSetPosition(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION *a3)
{
  unsigned int v3; // esi
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // r14d
  CMILMatrix *v8; // rcx

  v3 = *((_DWORD *)this + 33);
  v4 = (RTL_SRWLOCK *)((char *)this + 288);
  v5 = *((_DWORD *)this + 34);
  AcquireSRWLockExclusive((PSRWLOCK)this + 36);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 35) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 5);
  **((_DWORD **)this + 27) = 0;
  *((_BYTE *)this + 120) = 1;
  ReleaseSRWLockExclusive(v4);
  if ( *(_QWORD *)((char *)this + 132) != __PAIR64__(v5, v3) )
    CHolographicInteropTexture::ReleaseResources(this);
  CMILMatrix::operator=((__int64)this + 148);
  CMILMatrix::Translate(v8, (float)-*((_DWORD *)this + 35), (float)-*((_DWORD *)this + 36));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 528LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
    0LL,
    0x8000LL);
  return 0LL;
}
