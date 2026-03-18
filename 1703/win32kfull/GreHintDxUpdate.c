/*
 * XREFs of GreHintDxUpdate @ 0x1C024E738
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1C01DBCB0 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C002532C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA14 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA54 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C009CE98 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreHintDxUpdate(__int64 a1, HWND a2, HDC a3, struct _RECTL *a4)
{
  unsigned int v4; // r12d
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  DCVISRGNSHARELOCK *v12; // rcx
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-58h] BYREF
  int v17; // [rsp+30h] [rbp-50h]
  _BYTE v18[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+30h] BYREF

  v23 = a1;
  v4 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v23);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v23);
    LODWORD(v23) = 0;
    SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v19, ghsemDwmState, 1);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v15, a2, 0LL);
    v8 = v15;
    if ( v15 )
    {
      v9 = *(_QWORD *)(v15 + 192);
      v4 = 1;
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v18, (struct _EX_PUSH_LOCK *)(v15 + 120));
      v10 = *(_QWORD *)(v9 + 192);
      if ( v10 )
      {
        v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v11 + 280));
        *(_DWORD *)(v11 + 116) |= 0x40u;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v11 + 280));
      }
      if ( a4 )
      {
        if ( !*(_QWORD *)(v8 + 88) )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
          *(_QWORD *)(v8 + 88) = v16;
          *(_DWORD *)(v8 + 96) = -1;
          if ( v17 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
        }
        v15 = *(_QWORD *)(v8 + 88);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
        if ( v15 && v21[0] && v20[0] )
        {
          RGNOBJ::vSet((RGNOBJ *)v21, a4);
          if ( a3 )
          {
            MDCOBJA::MDCOBJA((MDCOBJA *)v22, a3);
            if ( v22[0] )
            {
              v16 = *(_QWORD *)(v22[0] + 1536LL);
              if ( v16 )
              {
                if ( RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)&v16, (struct RGNOBJ *)v21, BYTE1(gafjRgnOp)) )
                  RGNOBJ::vSwap((RGNOBJ *)v20, (struct RGNOBJ *)v21);
                else
                  RGNOBJ::vSet((RGNOBJ *)v20);
              }
            }
            XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v22);
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)&v15, (struct RGNOBJ *)v21, BYTE2(gafjRgnOp))
            && !RGNOBJ::bEqual((RGNOBJ *)v20, (struct RGNOBJ *)&v15) )
          {
            RGNOBJ::vSwap((RGNOBJ *)v20, (struct RGNOBJ *)&v15);
            *(_QWORD *)(v8 + 88) = v15;
            *(_DWORD *)(v8 + 96) = -1;
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
      DEC_SHARE_REF_CNT(v8);
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v19);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v23);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v12);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  }
  return v4;
}
