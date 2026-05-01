/*
 * XREFs of ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B750
 * Callers:
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000B5B0 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 * Callees:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180026A9F (memcmp_0.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::ProcessWorkItem(
        ModernResourceEnforcer *this,
        struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  char *v4; // rbx
  const wchar_t *v5; // r12
  int (*v6)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64); // rax
  int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // r13
  ULONG v10; // eax
  DWORD v11; // esi
  _BYTE *Value; // rbx
  wchar_t *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  wchar_t *v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // r12
  WCHAR *v27; // rbx
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int64 v30; // rdi
  WCHAR *v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r15
  int v35; // esi
  __int64 v36; // r11
  __int64 v37; // r10
  int v38; // r9d
  _BYTE *v39; // rax
  unsigned int v41; // ecx
  char *v42; // r8
  char *v43; // r9
  int v44; // r10d
  char *v45; // rbx
  unsigned int v46; // r11d
  __int64 v47; // rdx
  void (__fastcall *v48)(_QWORD *, __int64, char *, _QWORD, char *, char *, unsigned int, int); // rax
  WCHAR v49; // [rsp+58h] [rbp-B0h]
  __int64 v50; // [rsp+60h] [rbp-A8h]
  __int64 v51; // [rsp+68h] [rbp-A0h]
  wchar_t Destination[232]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v53[8]; // [rsp+248h] [rbp+140h] BYREF
  int v54; // [rsp+288h] [rbp+180h]
  unsigned int v55; // [rsp+28Ch] [rbp+184h]
  int v56; // [rsp+290h] [rbp+188h]
  __int64 v57; // [rsp+298h] [rbp+190h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+2A8h] [rbp+1A0h] BYREF
  wchar_t String1[232]; // [rsp+348h] [rbp+240h] BYREF
  WCHAR Buf1[48]; // [rsp+518h] [rbp+410h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v3 = *((_QWORD *)a2 + 15);
      v4 = (char *)a2 + 40;
      v5 = (const wchar_t *)*((_QWORD *)a2 + 1);
      v6 = *(int (**)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64))(*v2 + 24LL);
      v7 = *((_DWORD *)a2 + 28);
      v8 = *((_DWORD *)a2 + 27);
      if ( v6 == ExecutionModel::ResourceManager::MemoryLimitNotification )
      {
        v9 = 0LL;
        memset_0(Destination, 0, 0x228uLL);
        wcscpy_s(Destination, 0xE8uLL, v5);
        memset(v53, 0, sizeof(v53));
        v54 = 0;
        v10 = RtlLengthSid(v4);
        memcpy_0(v53, v4, v10);
        v57 = v3;
        v11 = HampLockTrackerId;
        v55 = v8;
        v56 = v7;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( *(_QWORD *)TlsGetValue(v11) )
            __int2c();
          *(_QWORD *)Value |= 1uLL;
          ++Value[8];
        }
        RtlAcquireSRWLockExclusive(&RmpGlobalLock);
        dword_1800681D0 = GetCurrentThreadId();
        v13 = String1;
        v14 = v2[25];
        v15 = 4LL;
        v51 = v14;
        v16 = Destination;
        do
        {
          v13 += 64;
          v17 = *(_OWORD *)v16;
          v18 = *((_OWORD *)v16 + 1);
          v16 += 64;
          *((_OWORD *)v13 - 8) = v17;
          v19 = *((_OWORD *)v16 - 6);
          *((_OWORD *)v13 - 7) = v18;
          v20 = *((_OWORD *)v16 - 5);
          *((_OWORD *)v13 - 6) = v19;
          v21 = *((_OWORD *)v16 - 4);
          *((_OWORD *)v13 - 5) = v20;
          v22 = *((_OWORD *)v16 - 3);
          *((_OWORD *)v13 - 4) = v21;
          v23 = *((_OWORD *)v16 - 2);
          *((_OWORD *)v13 - 3) = v22;
          v24 = *((_OWORD *)v16 - 1);
          *((_OWORD *)v13 - 2) = v23;
          *((_OWORD *)v13 - 1) = v24;
          --v15;
        }
        while ( v15 );
        v25 = *(_OWORD *)v16;
        v26 = 0LL;
        v27 = String1;
        v28 = *((_OWORD *)v16 + 1);
        v29 = *((_QWORD *)v16 + 4);
        v30 = 314159LL;
        *(_OWORD *)v13 = v25;
        *((_OWORD *)v13 + 1) = v28;
        *((_QWORD *)v13 + 4) = v29;
        do
        {
          v49 = RtlUpcaseUnicodeChar(*v27++);
          v30 = HIBYTE(v49) + 37 * ((unsigned __int8)v49 + 37 * v30);
        }
        while ( v27 < Buf1 );
        v31 = Buf1;
        v32 = 11LL;
        do
        {
          v33 = *(unsigned __int8 *)v31;
          v31 += 4;
          v30 = *((unsigned __int8 *)v31 - 1)
              + 37
              * (*((unsigned __int8 *)v31 - 2)
               + 37
               * (*((unsigned __int8 *)v31 - 3)
                + 37
                * (*((unsigned __int8 *)v31 - 4)
                 + 37
                 * (*((unsigned __int8 *)v31 - 5)
                  + 37 * (*((unsigned __int8 *)v31 - 6) + 37 * (*((unsigned __int8 *)v31 - 7) + 37 * (v33 + 37 * v30)))))));
          --v32;
        }
        while ( v32 );
        v34 = v14 + 32;
        v35 = -1073741275;
        RtlAcquireSRWLockShared(v14 + 32);
LABEL_15:
        v36 = -1LL << (*(_BYTE *)(v14 + 1556) & 0x1F);
        v37 = v36 & v30;
        if ( v26 )
          goto LABEL_18;
        v38 = *(_DWORD *)(v14 + 1556) >> 5;
        if ( v38 )
        {
          v50 = v36 & v30;
          v26 = *(_QWORD *)(v14 + 1560)
              + 8LL
              * ((37
                * (BYTE6(v50)
                 + 37
                 * (BYTE5(v50)
                  + 37
                  * (BYTE4(v50)
                   + 37 * (BYTE3(v50) + 37 * (BYTE2(v50) + 37 * (BYTE1(v50) + 37 * ((unsigned __int8)v37 + 11623883)))))))
                + HIBYTE(v50)) & (unsigned int)(v38 - 1));
LABEL_18:
          while ( 1 )
          {
            v26 = *(_QWORD *)v26;
            if ( (v26 & 1) != 0 )
              break;
            if ( v37 == (v36 & *(_QWORD *)(v26 + 8)) )
            {
              if ( *(_DWORD *)(v26 - 1192) )
                goto LABEL_15;
              if ( _wcsicmp(String1, (const wchar_t *)(v26 - 1160)) )
              {
                v14 = v51;
                goto LABEL_15;
              }
              v14 = v51;
              if ( memcmp_0(Buf1, (const void *)(v26 - 696), 0x58uLL) )
                goto LABEL_15;
              v35 = 0;
              RmpObjectAddRef((struct _RM_OBJECT_HEADER *)(v26 - 1248));
              v9 = v26 - 1248;
              break;
            }
          }
        }
        RtlReleaseSRWLockShared(v34);
        if ( v35 >= 0 && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 1892LL) & 2) == 0 && (*(_BYTE *)(v9 + 1332) & 1) == 0 )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 16)) < 1 )
          {
            memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
            pExceptionRecord.ExceptionCode = -1073741675;
            pExceptionRecord.ExceptionFlags = 1;
            RaiseFailFastException(&pExceptionRecord, 0LL, 0);
          }
          *(_DWORD *)(v9 + 1332) |= 1u;
          TpPostWork(*(_QWORD *)(v9 + 1240));
        }
        dword_1800681D0 = 0;
        RtlReleaseSRWLockExclusive(&RmpGlobalLock);
        if ( HampLockTrackerId != -1 )
        {
          v39 = TlsGetValue(HampLockTrackerId);
          if ( (*v39 & 1) == 0 )
            __int2c();
          if ( v39[8]-- == 1 )
            *(_QWORD *)v39 &= ~1uLL;
        }
        if ( v9 )
          RmpObjectRelease((PVOID)v9);
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, const wchar_t *, char *, _QWORD, int, __int64))v6)(
          v2,
          v5,
          (char *)a2 + 40,
          v8,
          v7,
          v3);
      }
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      v41 = *((_DWORD *)a2 + 32);
      if ( v41 > 1 )
      {
        v42 = (char *)*((_QWORD *)a2 + 14);
        v43 = (char *)*((_QWORD *)a2 + 15);
      }
      else
      {
        v42 = (char *)a2 + 112;
        v43 = (char *)a2 + 120;
      }
      v44 = *((_DWORD *)a2 + 33);
      v45 = (char *)a2 + 40;
      v46 = *((_DWORD *)a2 + 27);
      v47 = *((_QWORD *)a2 + 1);
      v48 = *(void (__fastcall **)(_QWORD *, __int64, char *, _QWORD, char *, char *, unsigned int, int))(*v2 + 32LL);
      if ( (char *)v48 == (char *)ExecutionModel::ResourceManager::HostStateNotification )
        ExecutionModel::ResourceManager::HostStateNotification(v2, v47, v45, v46, v42, v43, v41, v44);
      else
        v48(v2, v47, v45, v46, v42, v43, v41, v44);
    }
  }
}
