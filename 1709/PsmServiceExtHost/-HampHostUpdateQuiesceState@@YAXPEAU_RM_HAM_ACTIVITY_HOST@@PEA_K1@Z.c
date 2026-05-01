/*
 * XREFs of ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180043E00
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180040264 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18004133C (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180043978 (-HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_H.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043DB8 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostUpdateQuiesceState(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // esi
  char v7; // r13
  int v8; // eax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned int v11; // ecx
  char v12; // si
  unsigned __int64 v13; // rdi
  char v14; // al
  int v15; // r9d
  unsigned __int8 v16; // cl
  __int64 v17; // rsi
  unsigned __int8 v18; // di
  int v19; // ecx
  int v20; // edx
  char v21; // al
  __int64 cData; // r10
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  char v25; // [rsp+30h] [rbp-79h] BYREF
  char v26; // [rsp+31h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  char *v28; // [rsp+60h] [rbp-49h]
  __int64 v29; // [rsp+68h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-39h] BYREF
  char *v31; // [rsp+80h] [rbp-29h]
  __int64 v32; // [rsp+88h] [rbp-21h]
  char *v33; // [rsp+90h] [rbp-19h]
  __int64 v34; // [rsp+98h] [rbp-11h]
  unsigned __int64 *v35; // [rsp+A0h] [rbp-9h]
  __int64 v36; // [rsp+A8h] [rbp-1h]
  unsigned __int64 *v37; // [rsp+B0h] [rbp+7h]
  __int64 v38; // [rsp+B8h] [rbp+Fh]

  v3 = *((_DWORD *)a1 + 157);
  v7 = (v3 >> 7) & 7;
  v8 = (v3 >> 7) & 7;
  if ( v8 && v8 != 5 )
  {
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
    if ( *a2 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 3) + 56LL) + 288LL))(*((_QWORD *)a1 + 93));
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 3) + 56LL) + 280LL))(*((_QWORD *)a1 + 93));
      *a3 += *a2 - v9;
      v10 = 600000LL;
      if ( *a3 < 0x927C0 )
        v10 = *a3;
      *a3 = v10;
    }
    else
    {
      v9 = 0LL;
    }
    v11 = *((_DWORD *)a1 + 157);
    if ( ((v11 >> 7) & 7) == 1 )
    {
      if ( (v3 & 0x8000) != 0 )
      {
        v13 = 600000 - *a3;
        v14 = 2;
      }
      else
      {
        v14 = 1;
        v13 = v9;
      }
      v12 = v14;
      if ( !v13 )
        v12 = 4;
      goto LABEL_25;
    }
    if ( ((*((_DWORD *)a1 + 157) >> 7) & 7) != 2 )
    {
      if ( ((*((_DWORD *)a1 + 157) >> 7) & 7) == 3 )
      {
        v13 = v9;
        v12 = 4 - (v9 != 0);
      }
      else
      {
        if ( ((*((_DWORD *)a1 + 157) >> 7) & 7) != 4 )
        {
LABEL_36:
          RmpAcquireGlobalLock();
          HampHostAcquireLockExclusiveEx(a1, 0);
          goto LABEL_37;
        }
        v12 = 4;
        v13 = 0LL;
      }
LABEL_25:
      HampHostAcquireLockExclusiveEx(a1, 0);
      v15 = *((_DWORD *)a1 + 157);
      v16 = v12;
      if ( (v15 & 0x10000) != 0 )
        v16 = 5;
      v17 = 0LL;
      if ( (*((_DWORD *)a1 + 157) & 0x10000) == 0 )
        v17 = v13;
      v18 = v16;
      v19 = v16 - 3;
      if ( v19 )
      {
        if ( v19 == 1 && (v15 & 0x380) != 0x200 )
          HampHostQueueTerminate((__int64)a1, 2u, 3);
      }
      else
      {
        HampHostRevokeQuiesceExtension(a1);
      }
      *((_DWORD *)a1 + 157) &= 0xFFFFFC7F;
      *((_DWORD *)a1 + 157) |= (v18 & 7) << 7;
      HampHostReleaseLockExclusiveEx(a1);
      *a2 = v17;
      if ( v17 )
        RmpSystemResourceTimerSet(a1, v17);
      goto LABEL_36;
    }
    if ( (v11 & 0x8000) != 0 )
    {
      v12 = 2;
    }
    else
    {
      v13 = 5000LL;
      v12 = 1;
      if ( v9 > 0x1388 )
        goto LABEL_25;
    }
    v13 = v9;
    if ( !v9 )
    {
      v12 = 3;
      v13 = 1000LL;
    }
    goto LABEL_25;
  }
LABEL_37:
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v28 = (char *)a1 + 568;
      v29 = (unsigned int)(v20 - 32);
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v25 = v7;
      v31 = &v25;
      v21 = (*((_DWORD *)a1 + 157) >> 7) & 7;
      v32 = 1LL;
      v26 = v21;
      v33 = &v26;
      v34 = 1LL;
      v35 = a2;
      v36 = cData;
      v37 = a3;
      v38 = cData;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B502, v23, v24, cData, &pData);
    }
  }
}
