/*
 * XREFs of GreHintDxUpdate @ 0x1C02501AC
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1C01E7EC0 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEA8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEE8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0092018 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00E785C (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall GreHintDxUpdate(__int64 a1, HWND a2, HDC a3, struct _RECTL *a4)
{
  unsigned int v4; // r12d
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // r8d
  DCVISRGNSHARELOCK *v13; // rcx
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h] BYREF
  int v18; // [rsp+30h] [rbp-50h]
  _BYTE v19[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v20[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+30h] BYREF

  v24 = a1;
  v4 = 0;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v24);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v24);
    LODWORD(v24) = 0;
    SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v20, ghsemDwmState, 1);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v16, a2, 0LL);
    v8 = v16;
    if ( v16 )
    {
      v9 = *(_QWORD *)(v16 + 192);
      v4 = 1;
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v19, (struct _EX_PUSH_LOCK *)(v16 + 120));
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
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
          *(_QWORD *)(v8 + 88) = v17;
          *(_DWORD *)(v8 + 96) = -1;
          if ( v18 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
        }
        v16 = *(_QWORD *)(v8 + 88);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v22);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
        if ( v16 && v22[0] && v21[0] )
        {
          RGNOBJ::vSet((RGNOBJ *)v22, a4);
          if ( a3 )
          {
            DCOBJA::DCOBJA((DCOBJA *)v23, a3, v12);
            if ( v23[0] )
            {
              v17 = *(_QWORD *)(v23[0] + 1536LL);
              if ( v17 )
              {
                if ( RGNOBJ::bMerge((RGNOBJ *)v21, (struct RGNOBJ *)&v17, (struct RGNOBJ *)v22, BYTE1(gafjRgnOp)) )
                  RGNOBJ::vSwap((RGNOBJ *)v21, (struct RGNOBJ *)v22);
                else
                  RGNOBJ::vSet((RGNOBJ *)v21);
              }
              XDCOBJ::vAltUnlockFast((XDCOBJ *)v23);
            }
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)v21, (struct RGNOBJ *)&v16, (struct RGNOBJ *)v22, BYTE2(gafjRgnOp))
            && !RGNOBJ::bEqual((RGNOBJ *)v21, (struct RGNOBJ *)&v16) )
          {
            RGNOBJ::vSwap((RGNOBJ *)v21, (struct RGNOBJ *)&v16);
            *(_QWORD *)(v8 + 88) = v16;
            *(_DWORD *)(v8 + 96) = -1;
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
      DEC_SHARE_REF_CNT(v8);
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v20);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v24);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v13);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
  }
  return v4;
}
