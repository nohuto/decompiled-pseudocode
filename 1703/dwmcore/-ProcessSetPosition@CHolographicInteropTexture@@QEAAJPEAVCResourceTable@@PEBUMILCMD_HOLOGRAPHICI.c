/*
 * XREFs of ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x18013005C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801A41CC (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
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

  v3 = *((_DWORD *)this + 31);
  v4 = (RTL_SRWLOCK *)((char *)this + 280);
  v5 = *((_DWORD *)this + 32);
  AcquireSRWLockExclusive((PSRWLOCK)this + 35);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 5);
  **((_DWORD **)this + 26) = 0;
  *((_BYTE *)this + 112) = 1;
  ReleaseSRWLockExclusive(v4);
  if ( *(_QWORD *)((char *)this + 124) != __PAIR64__(v5, v3) )
    CHolographicInteropTexture::ReleaseResources(this);
  CMILMatrix::operator=((__int64)this + 140);
  CMILMatrix::Translate(v8, (float)-*((_DWORD *)this + 33), (float)-*((_DWORD *)this + 34));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 560LL));
  return 0LL;
}
