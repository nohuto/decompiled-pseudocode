/*
 * XREFs of GreGetDxRgn @ 0x1C024E018
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01DB6E0 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E9CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C009CE98 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreGetDxRgn(HWND a1, HDC a2, unsigned int a3, struct HOBJ__ **a4)
{
  unsigned int v4; // edi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r15d
  struct HOBJ__ *v12; // rax
  unsigned int v13; // ecx
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-38h] BYREF
  void *v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  _QWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-10h] BYREF

  v4 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v16);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v17, a1, 0LL);
    v9 = v17;
    if ( !v17 )
    {
LABEL_32:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
      return v4;
    }
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v19, (struct _EX_PUSH_LOCK *)(v17 + 120));
    if ( a3 < 0x20 )
      v10 = (*(_DWORD *)(v9 + 96) >> a3) & 1;
    else
      v10 = 1;
    if ( !v10 )
    {
      *a4 = 0LL;
      v4 = 1;
LABEL_31:
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
      DEC_SHARE_REF_CNT(v9);
      goto LABEL_32;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
    if ( !v20 )
    {
LABEL_28:
      if ( v21 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
      goto LABEL_31;
    }
    v11 = 0;
    v18 = *(_QWORD *)(v9 + 88);
    if ( v18 )
    {
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v18) || !a2 )
        goto LABEL_26;
      MDCOBJA::MDCOBJA((MDCOBJA *)v23, a2);
      if ( v23[0] )
      {
        v17 = *(_QWORD *)(v23[0] + 1536LL);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v22);
        if ( v17
          && v22[0]
          && RGNOBJ::bMerge((RGNOBJ *)v22, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v20, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v22, (struct RGNOBJ *)&v20);
          v11 = 1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
      }
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v23);
    }
    else
    {
      v11 = 1;
    }
    if ( v11 )
    {
      v12 = RGNOBJ::hrgnAssociate(&v20);
      *a4 = v12;
      if ( v12 )
      {
        v13 = a3 - 32;
        if ( a3 < 0x20 )
          v13 = a3;
        if ( v13 < 0x20 )
          *(_DWORD *)(v9 + 96) &= ~(1 << v13);
        v4 = 1;
        goto LABEL_28;
      }
    }
LABEL_26:
    if ( v20 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    goto LABEL_28;
  }
  return v4;
}
