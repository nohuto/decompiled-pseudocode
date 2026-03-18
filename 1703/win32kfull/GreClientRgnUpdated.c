/*
 * XREFs of GreClientRgnUpdated @ 0x1C006CC5C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0267808 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0267BE0 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0267E00 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall GreClientRgnUpdated(char a1)
{
  TRACKOBJ *i; // rdi
  int v3; // eax
  int v4; // eax
  __int64 j; // rbx
  int v6; // eax
  struct _RECTL *v7; // rsi
  struct _RECTL *v8; // r14
  __int64 k; // rbx
  LONG *p_right; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-38h] BYREF
  struct _RECTL v19; // [rsp+50h] [rbp-20h] BYREF
  struct _RECTL v20; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+58h] BYREF

  GreAcquireSemaphore(ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness, 10LL);
  ++giVisRgnUniqueness;
  EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
  GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
  if ( (a1 & 1) != 0 )
  {
    v16 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
    {
      v3 = *((_DWORD *)i + 12);
      if ( v3 < 0 )
      {
        v4 = v3 & 0x7FFFFFFF;
        *((_DWORD *)i + 12) = v4;
        if ( (v4 & 0x12) == 0x12 )
        {
          for ( j = *((_QWORD *)i + 3); j; j = *(_QWORD *)(j + 160) )
          {
            v6 = *(_DWORD *)(j + 184);
            if ( v6 >= 0 )
            {
              v21 = *(_QWORD *)(j + 200);
              GreAcquireSemaphore(v21);
              (*((void (__fastcall **)(__int64, __int64))i + 5))(j, 2LL);
              SEMOBJ::vUnlock((SEMOBJ *)&v21);
            }
            else
            {
              *(_DWORD *)(j + 184) = v6 & 0x7FFFFFFF;
            }
          }
        }
        if ( (*((_DWORD *)i + 12) & 0xC) != 0 )
        {
          v7 = (struct _RECTL *)*((_QWORD *)i + 2);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18, 0, 1);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17, 0, 1);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
          if ( v18[0] && v17[0] )
          {
            v8 = v7 + 2;
            RGNOBJ::vSet((RGNOBJ *)v17, v7 + 2);
            for ( k = *((_QWORD *)i + 3); k; k = *(_QWORD *)(k + 160) )
            {
              v22 = *(_QWORD *)(k + 56);
              if ( RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)v17, (struct RGNOBJ *)&v22, 4) )
                RGNOBJ::vSwap((RGNOBJ *)v17, (struct RGNOBJ *)v18);
            }
            if ( (*((_DWORD *)i + 12) & 4) != 0 )
            {
              p_right = &v7[3].right;
              v23 = *(_QWORD *)&v7[3].right;
              if ( RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)v17, (struct RGNOBJ *)&v23, 4) )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v7[3].right, (struct RGNOBJ *)v18);
                v11 = *(_QWORD *)p_right;
                *(_DWORD *)(v11 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
                v12 = *(_QWORD *)p_right;
                v19 = *v8;
                EWNDOBJ::vSetClip(v7, v12, &v19);
                TRACKOBJ::vUpdateDrvDelta(i, (struct EWNDOBJ *)v7, 4u);
              }
            }
            RGNOBJ::vSwap((RGNOBJ *)&v7[3].right, (struct RGNOBJ *)v17);
            v13 = *(_QWORD *)&v7[3].right;
            *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
            v14 = *(_QWORD *)&v7[3].right;
            v20 = *v8;
            EWNDOBJ::vSetClip(v7, v14, &v20);
            if ( (*((_DWORD *)i + 12) & 8) != 0 )
              (*((void (__fastcall **)(struct _RECTL *, __int64))i + 5))(v7, 8LL);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
        }
        (*((void (__fastcall **)(_QWORD, __int64))i + 5))(0LL, 16LL);
        v15 = *((_DWORD *)i + 12);
        if ( (v15 & 0x40) != 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            *((_DWORD *)i + 12) = v15 | 0x4000000;
          }
          else
          {
            (*((void (__fastcall **)(_QWORD, __int64))i + 5))(0LL, 64LL);
            *((_DWORD *)i + 12) &= ~0x4000000u;
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
  }
}
