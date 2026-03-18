/*
 * XREFs of GreGetDxRgn @ 0x1C024FA88
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01E7930 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0017A18 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00E785C (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDxRgn(HWND a1, HDC a2, unsigned int a3, struct HOBJ__ **a4)
{
  unsigned int v4; // edi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r15d
  int v12; // r8d
  struct HOBJ__ *v13; // rax
  unsigned int v14; // ecx
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-38h] BYREF
  void *v21; // [rsp+40h] [rbp-30h] BYREF
  int v22; // [rsp+48h] [rbp-28h]
  _QWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-10h] BYREF

  v4 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v18, a1, 0LL);
    v9 = v18;
    if ( !v18 )
    {
LABEL_31:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15);
      return v4;
    }
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v20, (struct _EX_PUSH_LOCK *)(v18 + 120));
    if ( a3 < 0x20 )
      v10 = (*(_DWORD *)(v9 + 96) >> a3) & 1;
    else
      v10 = 1;
    if ( !v10 )
    {
      *a4 = 0LL;
      v4 = 1;
LABEL_30:
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
      DEC_SHARE_REF_CNT(v9);
      goto LABEL_31;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
    if ( !v21 )
    {
LABEL_27:
      if ( v22 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
      goto LABEL_30;
    }
    v11 = 0;
    v19 = *(_QWORD *)(v9 + 88);
    if ( v19 )
    {
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v19) )
        goto LABEL_25;
      if ( !a2 )
        goto LABEL_25;
      DCOBJA::DCOBJA((DCOBJA *)v24, a2, v12);
      if ( !v24[0] )
        goto LABEL_25;
      v18 = *(_QWORD *)(v24[0] + 1536LL);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v23);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v23);
      if ( v18
        && v23[0]
        && RGNOBJ::bMerge((RGNOBJ *)v23, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v21, BYTE1(gafjRgnOp)) )
      {
        RGNOBJ::vSwap((RGNOBJ *)v23, (struct RGNOBJ *)&v21);
        v11 = 1;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
      XDCOBJ::vAltUnlockFast((XDCOBJ *)v24);
    }
    else
    {
      v11 = 1;
    }
    if ( v11 )
    {
      v13 = RGNOBJ::hrgnAssociate(&v21);
      *a4 = v13;
      if ( v13 )
      {
        v14 = a3 - 32;
        if ( a3 < 0x20 )
          v14 = a3;
        if ( v14 < 0x20 )
          *(_DWORD *)(v9 + 96) &= ~(1 << v14);
        v4 = 1;
        goto LABEL_27;
      }
    }
LABEL_25:
    if ( v21 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
    goto LABEL_27;
  }
  return v4;
}
