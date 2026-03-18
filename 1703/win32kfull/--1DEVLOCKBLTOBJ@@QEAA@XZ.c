/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C00A9038 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F997C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C006D990 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA14 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA54 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C007316C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0073288 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0073524 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C0075304 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(HDC *this)
{
  _QWORD *v2; // r12
  int v3; // eax
  HDC v4; // rdx
  int v5; // eax
  HDC v6; // rdx
  HDC v7; // r8
  int v8; // edx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  _QWORD **v11; // rax
  HDC v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  HSURF *v16; // rdi
  __int64 v17; // rax
  DC *v18; // r15
  __int64 v19; // rbx
  HSURF v20; // rsi
  DC *v21; // rcx
  char v22; // bl
  HDC v23; // rcx
  __int64 v24; // rax
  DCVISRGNSHARELOCK *v25; // rcx
  HDC v26; // rcx
  __int64 v27; // rax
  HDC v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  HSURF *v32; // rdi
  __int64 v33; // rax
  DC *v34; // r15
  __int64 v35; // rbx
  HSURF v36; // rsi
  DC *v37; // rcx
  char v38; // bl
  HDC v39; // rcx
  __int64 v40; // rax
  DCVISRGNSHARELOCK *v41; // rcx
  HDC v42; // rcx
  __int64 v43; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-50h] BYREF
  int v45; // [rsp+20h] [rbp-30h]
  DC *v46[2]; // [rsp+30h] [rbp-20h] BYREF
  DC *v47[2]; // [rsp+40h] [rbp-10h] BYREF
  char v48; // [rsp+90h] [rbp+40h] BYREF
  char v49; // [rsp+98h] [rbp+48h] BYREF

  if ( ((_DWORD)this[9] & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap((DEVLOCKBLTOBJ *)this);
    v7 = this[10];
    if ( v7 )
    {
      v8 = *((_DWORD *)this + 18);
      if ( (v8 & 0x1000) != 0 && ((_DWORD)v7[9] & 0x4000) != 0 && *((_QWORD *)v7 + 61) && *((_DWORD *)v7 + 126) )
        GreUpdateSpriteDevLockEnd((struct XDCOBJ *)(this + 10), v8 & 0x400000);
    }
  }
  v2 = this + 5;
  if ( this[5] )
  {
    v11 = (_QWORD **)this[8];
    if ( *v11 )
      hbmSelectBitmap(**v11, this[7], 1LL);
    if ( *v2 )
      DEC_SHARE_REF_CNT(*v2);
    bDeleteSurface(*(_QWORD *)(*v2 + 32LL));
    *v2 = 0LL;
    this[8] = 0LL;
  }
  v3 = *((_DWORD *)this + 18);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)this);
      _InterlockedOr(v44, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)this);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)this);
      _InterlockedOr(v44, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v10 = *ThreadWin32Thread;
      if ( v10 )
      {
        *(_QWORD *)(v10 + 320) = 0LL;
        *(_QWORD *)(v10 + 312) = 0LL;
      }
    }
  }
  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *this);
    GreReleaseSemaphoreInternal(*this);
  }
  v4 = this[1];
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v4);
    GreReleaseSemaphoreInternal(this[1]);
  }
  v5 = *((_DWORD *)this + 18);
  if ( (v5 & 8) != 0 )
    *((_DWORD *)this + 18) = v5 & 0xFFFFFFF7;
  v6 = this[2];
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v6);
    GreReleaseSemaphoreInternal(this[2]);
  }
  if ( this[16] )
  {
    v12 = this[17];
    v46[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v46, v12);
    LOBYTE(v13) = 5;
    v14 = HmgShareLock(this[15], v13);
    LOBYTE(v15) = 5;
    v16 = (HSURF *)v14;
    v17 = HmgShareLock(this[16], v15);
    v18 = v46[0];
    v19 = v17;
    v20 = *v16;
    v21 = v46[0];
    *((_QWORD *)v46[0] + 64) = v17;
    DC::vInheritSurfaceDpiScale(v21);
    DEC_SHARE_REF_CNT(v16);
    DEC_SHARE_REF_CNT(v19);
    GreDereferenceObject(v20, 1u);
    this[17] = 0LL;
    this[15] = 0LL;
    if ( this != (HDC *)-144LL )
      *((_DWORD *)v18 + 9) |= *((_DWORD *)this + 36);
    if ( (*((_DWORD *)v18 + 9) & 0x200) != 0 )
    {
      v22 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v22 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v48);
      v23 = this[16];
      LOBYTE(v45) = 5;
      v24 = HmgShareUnlockRemoveObject(v23, 0LL, 0LL, 0LL, v45);
      if ( v24 )
        SURFACE::bDeleteSurface(v24, 0LL, 1LL);
      *((_QWORD *)v18 + 65) = 0LL;
      DC::vClearRendering(v18);
      this[16] = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v25);
      if ( v22 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v26 = this[16];
      LOBYTE(v45) = 5;
      v27 = HmgShareUnlockRemoveObject(v26, 0LL, 0LL, 0LL, v45);
      if ( v27 )
        SURFACE::bDeleteSurface(v27, 0LL, 1LL);
      *((_QWORD *)v18 + 65) = 0LL;
      this[16] = 0LL;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v46);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  if ( this[20] )
  {
    v28 = this[21];
    v47[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v47, v28);
    LOBYTE(v29) = 5;
    v30 = HmgShareLock(this[19], v29);
    LOBYTE(v31) = 5;
    v32 = (HSURF *)v30;
    v33 = HmgShareLock(this[20], v31);
    v34 = v47[0];
    v35 = v33;
    v36 = *v32;
    v37 = v47[0];
    *((_QWORD *)v47[0] + 64) = v33;
    DC::vInheritSurfaceDpiScale(v37);
    DEC_SHARE_REF_CNT(v32);
    DEC_SHARE_REF_CNT(v35);
    GreDereferenceObject(v36, 1u);
    this[21] = 0LL;
    this[19] = 0LL;
    if ( (*((_DWORD *)v34 + 9) & 0x200) != 0 )
    {
      v38 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v38 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v49);
      v39 = this[20];
      LOBYTE(v45) = 5;
      v40 = HmgShareUnlockRemoveObject(v39, 0LL, 0LL, 0LL, v45);
      if ( v40 )
        SURFACE::bDeleteSurface(v40, 0LL, 1LL);
      *((_QWORD *)v34 + 65) = 0LL;
      DC::vClearRendering(v34);
      this[20] = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v41);
      if ( v38 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v42 = this[20];
      LOBYTE(v45) = 5;
      v43 = HmgShareUnlockRemoveObject(v42, 0LL, 0LL, 0LL, v45);
      if ( v43 )
        SURFACE::bDeleteSurface(v43, 0LL, 1LL);
      *((_QWORD *)v34 + 65) = 0LL;
      this[20] = 0LL;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v47);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  SURFMEM::~SURFMEM((SURFMEM *)(this + 5));
}
