/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007B20 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180032E6C (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180007EA8 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18000846C (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009928 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009954 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18000A0EC (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000AB98 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800118EC (-HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180041144 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_EXTERNAL_APPLICATI.c)
 */

void __fastcall HampHostNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1, char a2, unsigned int *a3)
{
  int v5; // esi
  int v6; // ebx
  __int64 *v7; // r12
  __int64 v8; // r14
  UCHAR v9; // dl
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  struct _HAM_DEPENDENCY_GROUP *v13; // rbx
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  char *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  char *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR pwsz[136]; // [rsp+F0h] [rbp-10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v5 = *((unsigned __int16 *)a1 + 316);
    v6 = HIWORD(*((_DWORD *)a1 + 158)) & 3;
  }
  else
  {
    v5 = 0;
    LOBYTE(v6) = 0;
  }
  v7 = (__int64 *)((char *)a1 + 768);
  v8 = *((_QWORD *)a1 + 96) + 1LL;
  HampHostInvalidateActivities(a1, v5, v8, 0);
  if ( (*((_QWORD *)a1 + 79) & 0x100000000000LL) != 0 )
  {
    *a3 = 1;
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&_volatile_metadata, v9, 0LL) )
    {
      v17 = 130;
      HampUtilGetAumidFromPsmKey((const unsigned __int16 *)a1 + 12, &v17, pwsz);
      if ( _volatile_metadata > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
        {
          TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
          v10 = *((_QWORD *)a1 - 4);
          v23 = &v19;
          v14 = *((_BYTE *)a1 + 560);
          v25 = &v14;
          v27 = &v15;
          v29 = &v18;
          v16 = (unsigned __int64)*((unsigned int *)a1 + 158) >> 18;
          v31 = &v16;
          v20 = v8 - 1;
          v33 = &v20;
          v19 = v10;
          v24 = 8LL;
          v26 = 1LL;
          v15 = v6;
          v28 = 1LL;
          v18 = v5;
          v30 = 4LL;
          v32 = 1LL;
          v34 = 8LL;
          TlgCreateWsz(&v35, pwsz);
          TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082F30, 0LL, 0LL, 0xAu, &pData);
        }
      }
    }
    if ( *((_DWORD *)a1 + 140) == 2 )
    {
      v11 = *((_QWORD *)a1 + 93);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v11);
      *(_DWORD *)(v11 + 608) &= 0xFFF80007;
      *(_DWORD *)(v11 + 608) |= 8 * v5;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v11);
    }
  }
  else
  {
    *a3 = 0;
  }
  *((_QWORD *)a1 + 79) &= 0xFFFFFFFFFFFCFFFFuLL;
  *((_WORD *)a1 + 316) = 0;
  v12 = *((_QWORD *)a1 + 79) & 0xFFFF6FFFFD97FFFFuLL;
  *v7 = v8;
  *((_DWORD *)a1 + 200) = 0;
  *((_QWORD *)a1 + 79) = v12 | 0x1940000;
  *((_QWORD *)a1 + 113) = 0LL;
  HampHostUpdateActivityState(a1);
  HampHostCheckCancelCacheTimer(a1);
  RtlWakeAddressAll(v7);
  v13 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 83);
  if ( v13 )
  {
    HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 83));
    HampDepGroupQueueWorker(v13);
    HampDepGroupReleaseLockExclusive(v13);
  }
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    HampAppTryChangeExternalState(*((_QWORD *)a1 + 93), 3LL);
    HampWakeContextUpdateExternalApplicationState(*((_QWORD *)a1 + 117), 3LL);
  }
}
