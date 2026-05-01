/*
 * XREFs of ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180014FA0
 * Callers:
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180014E00 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18001BDF0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180031748 (-RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::ProcessWorkItem(
        ModernResourceEnforcer *this,
        struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  char *v4; // rbx
  int v5; // ebp
  int (*v6)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64); // rax
  unsigned int v7; // r14d
  const wchar_t *v8; // r15
  ULONG v9; // eax
  DWORD v10; // esi
  _QWORD *Value; // rbx
  WCHAR *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rdi
  unsigned __int8 *v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // esi
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // r9
  unsigned int v24; // r10d
  __int64 v25; // rbx
  __int64 v26; // rdi
  DWORD v27; // esi
  __int64 v28; // rbx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  bool v31; // zf
  _QWORD *v32; // rax
  unsigned int v33; // ecx
  _QWORD *v34; // r8
  _QWORD *v35; // r9
  int v36; // r10d
  char *v37; // rbx
  unsigned int v38; // r11d
  __int64 v39; // rdx
  void (__fastcall *v40)(_QWORD *, __int64, char *, _QWORD, _QWORD *, _QWORD *, unsigned int, int); // rax
  WCHAR v41; // [rsp+50h] [rbp-298h]
  __int64 v42; // [rsp+58h] [rbp-290h]
  __int64 v43; // [rsp+60h] [rbp-288h]
  __int64 v44; // [rsp+68h] [rbp-280h]
  wchar_t Destination[232]; // [rsp+70h] [rbp-278h] BYREF
  _QWORD Buf1[8]; // [rsp+240h] [rbp-A8h] BYREF
  int v47; // [rsp+280h] [rbp-68h]
  unsigned int v48; // [rsp+284h] [rbp-64h]
  int v49; // [rsp+288h] [rbp-60h]
  __int64 v50; // [rsp+290h] [rbp-58h]

  v2 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v3 = *((_QWORD *)a2 + 15);
      v4 = (char *)a2 + 40;
      v5 = *((_DWORD *)a2 + 28);
      v6 = *(int (**)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64))(*v2 + 24LL);
      v7 = *((_DWORD *)a2 + 27);
      v8 = (const wchar_t *)*((_QWORD *)a2 + 1);
      if ( v6 == ExecutionModel::ResourceManager::MemoryLimitNotification )
      {
        v42 = 0LL;
        memset_0(Destination, 0, 0x228uLL);
        wcscpy_s(Destination, 0xE8uLL, v8);
        memset(Buf1, 0, sizeof(Buf1));
        v47 = 0;
        v9 = RtlLengthSid(v4);
        memcpy_0(Buf1, v4, v9);
        v50 = v3;
        v10 = HampLockTrackerId;
        v48 = v7;
        v49 = v5;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( *(_QWORD *)TlsGetValue(v10) )
            __int2c();
          *Value |= 1uLL;
          ++Value[1];
        }
        RtlAcquireSRWLockExclusive(&RmpGlobalLock);
        v44 = 0LL;
        v12 = Destination;
        dword_1800937F8 = GetCurrentThreadId();
        v13 = v2[18];
        v14 = 314159LL;
        v43 = v13;
        do
        {
          v41 = RtlUpcaseUnicodeChar(*v12++);
          v14 = HIBYTE(v41) + 37 * ((unsigned __int8)v41 + 37 * v14);
        }
        while ( v12 < (WCHAR *)Buf1 );
        v15 = (unsigned __int8 *)Buf1;
        v16 = 11LL;
        do
        {
          v17 = *v15;
          v15 += 8;
          v14 = *(v15 - 1)
              + 37
              * (*(v15 - 2)
               + 37
               * (*(v15 - 3)
                + 37 * (*(v15 - 4) + 37 * (*(v15 - 5) + 37 * (*(v15 - 6) + 37 * (*(v15 - 7) + 37 * (v17 + 37 * v14)))))));
          --v16;
        }
        while ( v16 );
        v18 = v13 + 32;
        v19 = -1073741275;
        RtlAcquireSRWLockShared(v13 + 32);
LABEL_13:
        v20 = *(_DWORD *)(v13 + 1980);
        v21 = -1LL << (v20 & 0x1F);
        v22 = v44;
        v23 = v21 & v14;
        if ( v44 )
        {
          v13 = v43;
LABEL_16:
          while ( 1 )
          {
            v22 = *(_QWORD *)v22;
            v44 = v22;
            if ( (v22 & 1) != 0 )
              break;
            if ( v23 == (v21 & *(_QWORD *)(v22 + 8)) )
            {
              v25 = v22 - 1392;
              if ( _wcsicmp(Destination, (const wchar_t *)(v22 - 1392 + 88))
                || memcmp_0(Buf1, (const void *)(v25 + 552), 0x58uLL) )
              {
                goto LABEL_13;
              }
              v19 = 0;
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v25 + 16)) <= 1 )
                __fastfail(0xEu);
              v26 = v25;
              v42 = v25;
              goto LABEL_22;
            }
          }
        }
        else
        {
          v24 = v20 >> 5;
          if ( v24 )
          {
            v13 = v43;
            v22 = *(_QWORD *)(v43 + 1984)
                + 8
                * ((((v21 & (unsigned __int64)v14) >> 56)
                  + 37
                  * ((unsigned __int8)((v21 & (unsigned __int64)v14) >> 48)
                   + 37
                   * ((unsigned __int8)((unsigned __int16)((v21 & (unsigned __int64)v14) >> 32) >> 8)
                    + 37
                    * ((unsigned __int8)((v21 & (unsigned __int64)v14) >> 32)
                     + 37
                     * ((((unsigned int)v21 & (unsigned int)v14) >> 24)
                      + 37
                      * ((unsigned __int8)(((unsigned int)v21 & (unsigned int)v14) >> 16)
                       + 37
                       * ((unsigned __int8)((unsigned __int16)(v21 & v14) >> 8) + 37 * ((unsigned __int8)v23 + 11623883)))))))) & (v24 - 1));
            goto LABEL_16;
          }
        }
        v26 = 0LL;
LABEL_22:
        RtlReleaseSRWLockShared(v18);
        if ( v19 >= 0 )
        {
          if ( (*(_BYTE *)(v26 + 804) & 1) != 0 )
          {
            v27 = HampLockTrackerId;
            v28 = v26 + 64;
            if ( HampLockTrackerId != -1 )
            {
              v29 = TlsGetValue(HampLockTrackerId);
              if ( (*(_QWORD *)TlsGetValue(v27) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                __int2c();
              *v29 |= 2uLL;
              ++v29[2];
              v26 = v42;
            }
            RtlAcquireSRWLockExclusive(v28);
            *(_DWORD *)(v28 + 8) = GetCurrentThreadId();
            *(_QWORD *)(v28 + 632) |= 0x2000000000000uLL;
            HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v28, 0);
            if ( HampLockTrackerId != -1 )
            {
              v30 = TlsGetValue(HampLockTrackerId);
              if ( (*(_BYTE *)v30 & 2) == 0 )
                __int2c();
              v31 = v30[2]-- == 1LL;
              if ( v31 )
                *v30 &= ~2uLL;
            }
            *(_DWORD *)(v28 + 8) = 0;
            RtlReleaseSRWLockExclusive(v28);
          }
          else
          {
            RmpActivityHostUpdateCommitUseAsync((struct _RM_ACTIVITY_HOST *)v26);
          }
        }
        dword_1800937F8 = 0;
        RtlReleaseSRWLockExclusive(&RmpGlobalLock);
        if ( HampLockTrackerId != -1 )
        {
          v32 = TlsGetValue(HampLockTrackerId);
          if ( (*(_BYTE *)v32 & 1) == 0 )
            __int2c();
          v31 = v32[1]-- == 1LL;
          if ( v31 )
            *v32 &= ~1uLL;
        }
        if ( v26 )
          RmpObjectRelease((PVOID)v26);
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, const wchar_t *, char *, _QWORD, int, __int64))v6)(
          v2,
          v8,
          (char *)a2 + 40,
          v7,
          v5,
          v3);
      }
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      v33 = *((_DWORD *)a2 + 32);
      v34 = (_QWORD *)((char *)a2 + 112);
      v35 = (_QWORD *)((char *)a2 + 120);
      if ( v33 > 1 )
      {
        v34 = (_QWORD *)*v34;
        v35 = (_QWORD *)*v35;
      }
      v36 = *((_DWORD *)a2 + 33);
      v37 = (char *)a2 + 40;
      v38 = *((_DWORD *)a2 + 27);
      v39 = *((_QWORD *)a2 + 1);
      v40 = *(void (__fastcall **)(_QWORD *, __int64, char *, _QWORD, _QWORD *, _QWORD *, unsigned int, int))(*v2 + 32LL);
      if ( (char *)v40 == (char *)ExecutionModel::ResourceManager::HostStateNotification )
        ExecutionModel::ResourceManager::HostStateNotification(v2, v39, v37, v38, v34, v35, v33, v36);
      else
        v40(v2, v39, v37, v38, v34, v35, v33, v36);
    }
  }
}
