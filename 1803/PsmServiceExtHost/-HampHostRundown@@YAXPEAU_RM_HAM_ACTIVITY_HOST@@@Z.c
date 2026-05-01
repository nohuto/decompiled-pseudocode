/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007800
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800074E4 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800095C8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009610 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009928 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009954 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  int v4; // r10d
  UINT32 cData; // r10d
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rsi
  char *v10; // rcx
  __int64 v11; // rax
  char **v12; // rdx
  char v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v16; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-19h] BYREF
  __int64 *v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  char *v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  int *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+A8h] [rbp+27h] BYREF
  char *v29; // [rsp+B8h] [rbp+37h]
  UINT32 v30; // [rsp+C0h] [rbp+3Fh]
  int v31; // [rsp+C4h] [rbp+43h]

  v2 = *((_QWORD *)a1 + 93);
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v3 = *((_QWORD *)a1 - 4);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v16;
    v14 = *((_BYTE *)a1 + 560);
    v22 = &v14;
    v15 = *((_DWORD *)a1 + 139);
    v25 = &v15;
    v16 = v3;
    v20 = v4;
    v23 = 1;
    v26 = 4;
    TlgCreateSid(&v28, (const SID *)((char *)a1 + 488));
    v31 = 0;
    v29 = (char *)a1 + 768;
    v30 = cData;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800825C2, 0LL, 0LL, cData, &pData);
  }
  if ( (*((_BYTE *)a1 + 740) & 1) != 0 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 79) |= 0x8000000000000uLL;
    HampHostReleaseLockExclusiveEx(a1, v7);
    v8 = *((_QWORD *)a1 + 99);
    if ( v8 )
      TpWaitForTimer(v8, 1LL);
  }
  if ( v2 )
  {
    v9 = *(_QWORD *)(v2 + 88);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v9 + 320) )
    {
      HampPkgAcquireLockExclusive(*(struct _HAM_PACKAGE **)(v2 + 88));
      *(_QWORD *)(v9 + 320) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v9);
    }
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v2);
    v10 = (char *)a1 + 776;
    v11 = *((_QWORD *)a1 + 97);
    if ( v11 )
    {
      if ( *(char **)(v11 + 8) != v10 || (v12 = (char **)*((_QWORD *)a1 + 98), *v12 != v10) )
        __fastfail(3u);
      *v12 = (char *)v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v2 + 568) )
      *(_QWORD *)(v2 + 568) = 0LL;
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v2);
  }
  v6 = *((_QWORD *)a1 + 94);
  if ( v6 )
  {
    if ( (*(_QWORD *)(v6 + 576))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v6 - 64));
  }
}
