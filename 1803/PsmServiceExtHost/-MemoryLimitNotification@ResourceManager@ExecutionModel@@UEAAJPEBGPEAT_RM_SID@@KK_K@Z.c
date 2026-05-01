/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18001C730
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180031748 (-RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  ULONG v10; // eax
  DWORD v11; // edi
  _QWORD *Value; // rbx
  WCHAR *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r15
  unsigned __int8 *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // ebx
  unsigned int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // r10d
  __int64 v26; // rsi
  __int64 v27; // rdi
  DWORD v28; // esi
  __int64 v29; // rbx
  _QWORD *v30; // rdi
  _QWORD *v31; // rax
  bool v32; // zf
  unsigned int v33; // ebx
  _QWORD *v34; // rax
  WCHAR v36; // [rsp+20h] [rbp-298h]
  __int64 v37; // [rsp+28h] [rbp-290h]
  __int64 v38; // [rsp+30h] [rbp-288h]
  __int64 v39; // [rsp+38h] [rbp-280h]
  wchar_t Destination[232]; // [rsp+40h] [rbp-278h] BYREF
  _QWORD Buf1[8]; // [rsp+210h] [rbp-A8h] BYREF
  int v42; // [rsp+250h] [rbp-68h]
  int v43; // [rsp+254h] [rbp-64h]
  unsigned int v44; // [rsp+258h] [rbp-60h]
  unsigned __int64 v45; // [rsp+260h] [rbp-58h]

  v37 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset(Buf1, 0, sizeof(Buf1));
  v42 = 0;
  v10 = RtlLengthSid(a3);
  memcpy_0(Buf1, a3, v10);
  v11 = HampLockTrackerId;
  v44 = a5;
  v45 = a6;
  v43 = a4;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v11) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  v39 = 0LL;
  v13 = Destination;
  dword_1800937F8 = GetCurrentThreadId();
  v14 = 314159LL;
  v15 = *((_QWORD *)this + 18);
  v38 = v15;
  do
  {
    v36 = RtlUpcaseUnicodeChar(*v13++);
    v14 = HIBYTE(v36) + 37 * ((unsigned __int8)v36 + 37 * v14);
  }
  while ( v13 < (WCHAR *)Buf1 );
  v16 = (unsigned __int8 *)Buf1;
  v17 = 11LL;
  do
  {
    v18 = *v16;
    v16 += 8;
    v14 = *(v16 - 1)
        + 37
        * (*(v16 - 2)
         + 37
         * (*(v16 - 3)
          + 37 * (*(v16 - 4) + 37 * (*(v16 - 5) + 37 * (*(v16 - 6) + 37 * (*(v16 - 7) + 37 * (v18 + 37 * v14)))))));
    --v17;
  }
  while ( v17 );
  v19 = v15 + 32;
  v20 = -1073741275;
  RtlAcquireSRWLockShared(v15 + 32);
LABEL_10:
  v21 = *(_DWORD *)(v15 + 1980);
  v22 = -1LL << (v21 & 0x1F);
  v23 = v39;
  v24 = v22 & v14;
  if ( v39 )
  {
    v15 = v38;
LABEL_13:
    while ( 1 )
    {
      v23 = *(_QWORD *)v23;
      v39 = v23;
      if ( (v23 & 1) != 0 )
        break;
      if ( v24 == (v22 & *(_QWORD *)(v23 + 8)) )
      {
        v26 = v23 - 1392;
        if ( _wcsicmp(Destination, (const wchar_t *)(v23 - 1392 + 88))
          || memcmp_0(Buf1, (const void *)(v26 + 552), 0x58uLL) )
        {
          goto LABEL_10;
        }
        v20 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v26 + 16)) <= 1 )
          __fastfail(0xEu);
        v27 = v26;
        v37 = v26;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v25 = v21 >> 5;
    if ( v25 )
    {
      v15 = v38;
      v23 = *(_QWORD *)(v38 + 1984)
          + 8
          * ((((v22 & (unsigned __int64)v14) >> 56)
            + 37
            * ((unsigned __int8)((v22 & (unsigned __int64)v14) >> 48)
             + 37
             * ((unsigned __int8)((unsigned __int16)((v22 & (unsigned __int64)v14) >> 32) >> 8)
              + 37
              * ((unsigned __int8)((v22 & (unsigned __int64)v14) >> 32)
               + 37
               * ((((unsigned int)v22 & (unsigned int)v14) >> 24)
                + 37
                * ((unsigned __int8)(((unsigned int)v22 & (unsigned int)v14) >> 16)
                 + 37 * ((unsigned __int8)((unsigned __int16)(v22 & v14) >> 8) + 37 * ((unsigned __int8)v24 + 11623883)))))))) & (v25 - 1));
      goto LABEL_13;
    }
  }
  v27 = 0LL;
LABEL_19:
  RtlReleaseSRWLockShared(v19);
  if ( v20 < 0 )
  {
    v33 = v20 | 0x10000000;
  }
  else
  {
    if ( (*(_BYTE *)(v27 + 804) & 1) != 0 )
    {
      v28 = HampLockTrackerId;
      v29 = v27 + 64;
      if ( HampLockTrackerId != -1 )
      {
        v30 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *v30 |= 2uLL;
        ++v30[2];
        v27 = v37;
      }
      RtlAcquireSRWLockExclusive(v29);
      *(_DWORD *)(v29 + 8) = GetCurrentThreadId();
      *(_QWORD *)(v29 + 632) |= 0x2000000000000uLL;
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v29, 0);
      if ( HampLockTrackerId != -1 )
      {
        v31 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v31 & 2) == 0 )
          __int2c();
        v32 = v31[2]-- == 1LL;
        if ( v32 )
          *v31 &= ~2uLL;
      }
      *(_DWORD *)(v29 + 8) = 0;
      RtlReleaseSRWLockExclusive(v29);
    }
    else
    {
      RmpActivityHostUpdateCommitUseAsync((struct _RM_ACTIVITY_HOST *)v27);
    }
    v33 = 0;
  }
  dword_1800937F8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v34 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v34 & 1) == 0 )
      __int2c();
    v32 = v34[1]-- == 1LL;
    if ( v32 )
      *v34 &= ~1uLL;
  }
  if ( v27 )
    RmpObjectRelease((PVOID)v27);
  return v33;
}
