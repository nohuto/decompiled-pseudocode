/*
 * XREFs of GreAdjustSpriteDirtyAccum @ 0x1C009C794
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009CF00 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C0257168 (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 */

__int64 __fastcall GreAdjustSpriteDirtyAccum(
        HDEV a1,
        HWND a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // edi
  struct _POINTL *v7; // r12
  struct _RECTL *v10; // rbx
  __int64 *v11; // rsi
  __int64 v12; // rcx
  char v14[8]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF
  struct _RECTL *v17; // [rsp+B8h] [rbp+58h] BYREF

  v17 = a4;
  v6 = 0;
  v7 = a5;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v17, a2);
    v10 = v17;
    if ( v17 )
    {
      v11 = *(__int64 **)&v17[12].left;
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v14, (struct _EX_PUSH_LOCK *)&v17[7].right);
      if ( v11[11] )
      {
        v17 = (struct _RECTL *)v11[11];
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v15);
        if ( v17 )
        {
          if ( v16[0] )
          {
            if ( v15[0] )
            {
              if ( RGNOBJ::bOffset((RGNOBJ *)&v17, v7) )
              {
                RGNOBJ::vSet((RGNOBJ *)v16, a3);
                if ( RGNOBJ::bMerge((RGNOBJ *)v15, (struct RGNOBJ *)&v17, (struct RGNOBJ *)v16, BYTE1(gafjRgnOp)) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)v15, (struct RGNOBJ *)&v17);
                  v6 = 1;
                  v12 = *v11;
                  v11[11] = (__int64)v17;
                  EtwTraceLifetimeAccum(v12, 1LL);
                }
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v14);
      DEC_SHARE_REF_CNT(v10);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  else
  {
    return (unsigned int)GdiAdjustSpriteDirtyAccum(a1, a2, a3, a4, a5, a6);
  }
  return v6;
}
