/*
 * XREFs of GreUpdateSpriteClipRgn @ 0x1C00E6FFC
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00E7220 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     UserGetWindowRect @ 0x1C00E73CC (UserGetWindowRect.c)
 */

void __fastcall GreUpdateSpriteClipRgn(__int64 a1, struct PDEVOBJ *a2, HRGN a3, int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  REGION *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  struct _POINTL v11; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-30h]
  _DWORD v17[4]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+90h] [rbp+10h] BYREF

  v19 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v19, a2, 0LL, 0LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a3, 0);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v12, (HWND)a2);
    v7 = v12;
    if ( !v12 )
    {
LABEL_16:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
      goto LABEL_17;
    }
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v14, (struct _EX_PUSH_LOCK *)(v12 + 120));
    v8 = *(_QWORD *)(v7 + 192);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v13, (struct _EX_PUSH_LOCK *)(v8 + 264));
    if ( v18[0] && (unsigned int)UserGetWindowRect(*(_QWORD *)(v7 + 40), v17) )
    {
      if ( !*(_QWORD *)(v8 + 96) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
        if ( v15 )
          *(_QWORD *)(v8 + 96) = v15;
        if ( v16 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
      }
      if ( !*(_QWORD *)(v8 + 96) )
        goto LABEL_13;
      v10 = *(_QWORD *)(v8 + 96);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v10, (struct RGNOBJ *)v18) )
        goto LABEL_13;
      v11.x = -v17[0];
      v11.y = -v17[1];
      if ( RGNOBJ::bOffset((RGNOBJ *)&v10, &v11) )
      {
        if ( (*(_DWORD *)(v7 + 200) & 0x20) != 0 )
          RGNOBJ::vScale(
            &v10,
            _mm_unpacklo_ps((__m128)*(unsigned int *)(v7 + 184), (__m128)*(unsigned int *)(v7 + 188)).m128_u64[0]);
        *(_QWORD *)(v8 + 96) = v10;
        goto LABEL_12;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
    }
    else
    {
      v9 = *(REGION **)(v8 + 96);
      if ( !v9 )
      {
LABEL_13:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v13);
        if ( (*(_DWORD *)(v8 + 256) & 1) == 0 || !a4 )
          vSpDwmFlushSpriteClipRgnChange((struct SFMLOGICALSURFACE *)v8);
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v14);
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
        goto LABEL_16;
      }
      REGION::vDeleteREGION(v9);
    }
    *(_QWORD *)(v8 + 96) = 0LL;
LABEL_12:
    *(_DWORD *)(v8 + 256) |= 0x20u;
    goto LABEL_13;
  }
LABEL_17:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v19);
}
