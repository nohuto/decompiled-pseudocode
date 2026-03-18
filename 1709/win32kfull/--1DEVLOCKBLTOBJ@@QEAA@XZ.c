/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C
 * Callers:
 *     GrePlgBlt @ 0x1C0001CD0 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     GreGradientFill @ 0x1C00B54F8 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0105D00 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002238C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00224A4 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0022A2C (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00277E0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEA8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEE8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(HDC *this)
{
  HDC v2; // r8
  int v3; // edx
  _QWORD *v4; // r12
  _QWORD **v5; // rax
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  HDC v14; // rdx
  int v15; // eax
  HDC v16; // rdx
  HDC v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 v22; // rax
  DC *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rsi
  DC *v26; // rcx
  char v27; // bl
  HDC v28; // rcx
  __int64 v29; // rax
  DCVISRGNSHARELOCK *v30; // rcx
  HDC v31; // rcx
  __int64 v32; // rax
  HDC v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rdi
  __int64 v38; // rax
  DC *v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rsi
  DC *v42; // rcx
  char v43; // bl
  HDC v44; // rcx
  __int64 v45; // rax
  DCVISRGNSHARELOCK *v46; // rcx
  HDC v47; // rcx
  __int64 v48; // rax
  signed __int32 v49[8]; // [rsp+0h] [rbp-50h] BYREF
  int v50; // [rsp+20h] [rbp-30h]
  DC *v51[2]; // [rsp+30h] [rbp-20h] BYREF
  DC *v52[2]; // [rsp+40h] [rbp-10h] BYREF
  char v53; // [rsp+90h] [rbp+40h] BYREF
  char v54; // [rsp+98h] [rbp+48h] BYREF

  if ( ((_DWORD)this[9] & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap((DEVLOCKBLTOBJ *)this);
    v2 = this[10];
    if ( v2 )
    {
      v3 = *((_DWORD *)this + 18);
      if ( (v3 & 0x1000) != 0 && ((_DWORD)v2[9] & 0x4000) != 0 && *((_QWORD *)v2 + 61) && *((_DWORD *)v2 + 126) )
        GreUpdateSpriteDevLockEnd((struct XDCOBJ *)(this + 10), v3 & 0x400000);
    }
  }
  v4 = this + 5;
  if ( this[5] )
  {
    v5 = (_QWORD **)this[8];
    if ( *v5 )
      hbmSelectBitmap(**v5, this[7], 1LL);
    if ( *v4 )
      DEC_SHARE_REF_CNT(*v4);
    bDeleteSurface(*(_QWORD *)(*v4 + 32LL));
    *v4 = 0LL;
    this[8] = 0LL;
  }
  v6 = *((_DWORD *)this + 18);
  if ( (v6 & 0x1000) != 0 )
  {
    if ( (v6 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)this);
      _InterlockedOr(v49, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)this);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)this);
      _InterlockedOr(v49, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10, v11) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v13 = *ThreadWin32Thread;
        if ( v13 )
        {
          *(_QWORD *)(v13 + 320) = 0LL;
          *(_QWORD *)(v13 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v6 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x800000u;
  }
  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *this);
    GreReleaseSemaphoreInternal(*this);
  }
  v14 = this[1];
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v14);
    GreReleaseSemaphoreInternal(this[1]);
  }
  v15 = *((_DWORD *)this + 18);
  if ( (v15 & 8) != 0 )
    *((_DWORD *)this + 18) = v15 & 0xFFFFFFF7;
  v16 = this[2];
  if ( v16 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v16);
    GreReleaseSemaphoreInternal(this[2]);
  }
  if ( this[16] )
  {
    v17 = this[17];
    v51[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v51, v17);
    LOBYTE(v18) = 5;
    v19 = HmgShareLock(this[15], v18);
    LOBYTE(v20) = 5;
    v21 = (__int64 *)v19;
    v22 = HmgShareLock(this[16], v20);
    v23 = v51[0];
    v24 = v22;
    v25 = *v21;
    v26 = v51[0];
    *((_QWORD *)v51[0] + 64) = v22;
    DC::vInheritSurfaceDpiScale(v26);
    DEC_SHARE_REF_CNT(v21);
    DEC_SHARE_REF_CNT(v24);
    GreDereferenceObject(v25, 1LL);
    this[17] = 0LL;
    this[15] = 0LL;
    if ( this != (HDC *)-144LL )
      *((_DWORD *)v23 + 9) |= *((_DWORD *)this + 36);
    if ( (*((_DWORD *)v23 + 9) & 0x200) != 0 )
    {
      v27 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v27 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v53);
      v28 = this[16];
      LOBYTE(v50) = 5;
      v29 = HmgShareUnlockRemoveObject(v28, 0LL, 0LL, 0LL, v50);
      if ( v29 )
        SURFACE::bDeleteSurface(v29, 0LL, 1LL);
      *((_QWORD *)v23 + 65) = 0LL;
      DC::vClearRendering(v23);
      this[16] = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v30);
      if ( v27 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v31 = this[16];
      LOBYTE(v50) = 5;
      v32 = HmgShareUnlockRemoveObject(v31, 0LL, 0LL, 0LL, v50);
      if ( v32 )
        SURFACE::bDeleteSurface(v32, 0LL, 1LL);
      *((_QWORD *)v23 + 65) = 0LL;
      this[16] = 0LL;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v51);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  if ( this[20] )
  {
    v33 = this[21];
    v52[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v52, v33);
    LOBYTE(v34) = 5;
    v35 = HmgShareLock(this[19], v34);
    LOBYTE(v36) = 5;
    v37 = (__int64 *)v35;
    v38 = HmgShareLock(this[20], v36);
    v39 = v52[0];
    v40 = v38;
    v41 = *v37;
    v42 = v52[0];
    *((_QWORD *)v52[0] + 64) = v38;
    DC::vInheritSurfaceDpiScale(v42);
    DEC_SHARE_REF_CNT(v37);
    DEC_SHARE_REF_CNT(v40);
    GreDereferenceObject(v41, 1LL);
    this[21] = 0LL;
    this[19] = 0LL;
    if ( (*((_DWORD *)v39 + 9) & 0x200) != 0 )
    {
      v43 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v43 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v54);
      v44 = this[20];
      LOBYTE(v50) = 5;
      v45 = HmgShareUnlockRemoveObject(v44, 0LL, 0LL, 0LL, v50);
      if ( v45 )
        SURFACE::bDeleteSurface(v45, 0LL, 1LL);
      *((_QWORD *)v39 + 65) = 0LL;
      DC::vClearRendering(v39);
      this[20] = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v46);
      if ( v43 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v47 = this[20];
      LOBYTE(v50) = 5;
      v48 = HmgShareUnlockRemoveObject(v47, 0LL, 0LL, 0LL, v50);
      if ( v48 )
        SURFACE::bDeleteSurface(v48, 0LL, 1LL);
      *((_QWORD *)v39 + 65) = 0LL;
      this[20] = 0LL;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v52);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  SURFMEM::~SURFMEM((SURFMEM *)(this + 5));
}
