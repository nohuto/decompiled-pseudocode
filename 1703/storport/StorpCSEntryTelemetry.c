/*
 * XREFs of StorpCSEntryTelemetry @ 0x1C004272C
 * Callers:
 *     RaidPowerSettingCallback @ 0x1C001C2D0 (RaidPowerSettingCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

void __fastcall StorpCSEntryTelemetry(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 *i; // r14
  __int64 v12; // rdx
  const struct _TlgProvider_t *v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // r10d
  int v18; // r11d
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+31h] [rbp-CFh] BYREF
  char v21; // [rsp+32h] [rbp-CEh] BYREF
  char v22; // [rsp+33h] [rbp-CDh] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  char *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  char *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  char *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  __int64 *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  int *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  __int64 v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  int *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  __int64 *v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]

  if ( a1 )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a1 + 5344) = 0LL;
    v4 = (unsigned __int64)(v3 - *(_QWORD *)(a1 + 5336)) * (unsigned __int128)0x346DC5D63886594BuLL;
    *(_QWORD *)(a1 + 5336) = v2;
    *(_QWORD *)(a1 + 5352) = 0LL;
    *(_QWORD *)(a1 + 5360) = 0LL;
    *(_QWORD *)(a1 + 5368) = 0LL;
    *(_QWORD *)(a1 + 5376) = 0LL;
    *(_QWORD *)(a1 + 5384) = 0LL;
    *(_QWORD *)(a1 + 5392) = 0LL;
    *(_QWORD *)(a1 + 5400) = 0LL;
    *(_QWORD *)(a1 + 5408) = 0LL;
    *(_QWORD *)(a1 + 5416) = 0LL;
    *(_QWORD *)(a1 + 5424) = 0LL;
    *(_DWORD *)(a1 + 5432) = 0;
    v5 = *(_QWORD *)(a1 + 5088);
    v6 = *((_QWORD *)&v4 + 1) >> 11;
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 20) & 2) != 0 )
      {
        v7 = 0LL;
        if ( *(_DWORD *)(v5 + 16) )
          v7 = v2;
        *(_QWORD *)(a1 + 5384) = v7;
      }
      else
      {
        *(_QWORD *)(a1 + 5360) = v2;
        *(_QWORD *)(a1 + 5368) = v2;
      }
      if ( (unsigned int)dword_1C0055010 > 5 && TlgKeywordOn((TraceLoggingHProvider)v5, 0x400000000000uLL) )
      {
        v23 = *(_DWORD *)(a1 + 56);
        v55 = a1 + 5192;
        v57 = &v23;
        v59 = &v28;
        v28 = v6;
        v56 = 16LL;
        v58 = 4LL;
        v60 = 8LL;
        TlgWrite(v8, &unk_1C004BD4D, v9, v10, 5u, &pData);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    for ( i = *(__int64 **)(a1 + 120); i != (__int64 *)(a1 + 120); i = (__int64 *)*i )
    {
      i[208] = 0LL;
      i[209] = 0LL;
      i[210] = 0LL;
      i[211] = 0LL;
      i[212] = 0LL;
      i[213] = 0LL;
      i[214] = 0LL;
      i[215] = 0LL;
      i[216] = 0LL;
      *((_DWORD *)i + 434) = 0;
      if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 6)) )
      {
        v12 = i[176];
        v13 = (const struct _TlgProvider_t *)*(unsigned int *)(v12 + 32);
        if ( ((unsigned __int8)v13 & 8) != 0 )
        {
          if ( *(_DWORD *)(v12 + 16) )
            i[209] = v2;
        }
        else
        {
          i[208] = v2;
          i[211] = v2;
        }
        if ( (unsigned int)dword_1C0055010 > 5 )
        {
          if ( TlgKeywordOn(v13, 0x400000000000uLL) )
          {
            v24 = *(_DWORD *)(a1 + 56);
            v19 = *((_BYTE *)i + 40);
            v20 = *((_BYTE *)i + 41);
            v21 = *((_BYTE *)i + 42);
            v27 = *((_DWORD *)i + 432);
            v32 = a1 + 5192;
            v34 = i + 205;
            v36 = &v24;
            v38 = &v19;
            v40 = &v20;
            v42 = &v21;
            v44 = &v25;
            v46 = &v26;
            v48 = &v22;
            v50 = &v29;
            v52 = &v27;
            v25 = v17;
            v26 = v18;
            v22 = (char)v16;
            v29 = v6;
            v33 = 16LL;
            v35 = 16LL;
            v37 = 4LL;
            v39 = 1LL;
            v41 = 1LL;
            v43 = 1LL;
            v45 = 4LL;
            v47 = 4LL;
            v49 = 1LL;
            v51 = 8LL;
            v53 = 4LL;
            TlgWrite(v14, &unk_1C004BDB2, v15, v16, 0xDu, &v31);
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[175]);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
