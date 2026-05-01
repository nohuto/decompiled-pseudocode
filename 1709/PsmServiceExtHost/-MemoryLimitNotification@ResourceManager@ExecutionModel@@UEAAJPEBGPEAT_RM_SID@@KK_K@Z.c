/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180026A9F (memcmp_0.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v10; // r13
  ULONG v11; // eax
  DWORD v12; // edi
  _BYTE *Value; // rbx
  wchar_t *v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  wchar_t *v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // r12
  WCHAR *v28; // rbx
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // rdi
  WCHAR *v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r15
  int v36; // ebx
  __int64 v37; // r11
  __int64 v38; // r10
  int v39; // r9d
  unsigned int v40; // ebx
  _BYTE *v41; // rax
  WCHAR v44; // [rsp+20h] [rbp-E0h]
  __int64 v45; // [rsp+28h] [rbp-D8h]
  __int64 v46; // [rsp+30h] [rbp-D0h]
  wchar_t Destination[232]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v48[8]; // [rsp+210h] [rbp+110h] BYREF
  int v49; // [rsp+250h] [rbp+150h]
  int v50; // [rsp+254h] [rbp+154h]
  unsigned int v51; // [rsp+258h] [rbp+158h]
  unsigned __int64 v52; // [rsp+260h] [rbp+160h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+270h] [rbp+170h] BYREF
  wchar_t String1[232]; // [rsp+310h] [rbp+210h] BYREF
  WCHAR Buf1[48]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v10 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  memset(v48, 0, sizeof(v48));
  v49 = 0;
  v11 = RtlLengthSid(a3);
  memcpy_0(v48, a3, v11);
  v12 = HampLockTrackerId;
  v51 = a5;
  v52 = a6;
  v50 = a4;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v12) )
      __int2c();
    *(_QWORD *)Value |= 1uLL;
    ++Value[8];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800681D0 = GetCurrentThreadId();
  v14 = String1;
  v15 = *((_QWORD *)this + 25);
  v16 = 4LL;
  v46 = v15;
  v17 = Destination;
  do
  {
    v14 += 64;
    v18 = *(_OWORD *)v17;
    v19 = *((_OWORD *)v17 + 1);
    v17 += 64;
    *((_OWORD *)v14 - 8) = v18;
    v20 = *((_OWORD *)v17 - 6);
    *((_OWORD *)v14 - 7) = v19;
    v21 = *((_OWORD *)v17 - 5);
    *((_OWORD *)v14 - 6) = v20;
    v22 = *((_OWORD *)v17 - 4);
    *((_OWORD *)v14 - 5) = v21;
    v23 = *((_OWORD *)v17 - 3);
    *((_OWORD *)v14 - 4) = v22;
    v24 = *((_OWORD *)v17 - 2);
    *((_OWORD *)v14 - 3) = v23;
    v25 = *((_OWORD *)v17 - 1);
    *((_OWORD *)v14 - 2) = v24;
    *((_OWORD *)v14 - 1) = v25;
    --v16;
  }
  while ( v16 );
  v26 = *(_OWORD *)v17;
  v27 = 0LL;
  v28 = String1;
  v29 = *((_OWORD *)v17 + 1);
  v30 = *((_QWORD *)v17 + 4);
  v31 = 314159LL;
  *(_OWORD *)v14 = v26;
  *((_OWORD *)v14 + 1) = v29;
  *((_QWORD *)v14 + 4) = v30;
  do
  {
    v44 = RtlUpcaseUnicodeChar(*v28++);
    v31 = HIBYTE(v44) + 37 * ((unsigned __int8)v44 + 37 * v31);
  }
  while ( v28 < Buf1 );
  v32 = Buf1;
  v33 = 11LL;
  do
  {
    v34 = *(unsigned __int8 *)v32;
    v32 += 4;
    v31 = *((unsigned __int8 *)v32 - 1)
        + 37
        * (*((unsigned __int8 *)v32 - 2)
         + 37
         * (*((unsigned __int8 *)v32 - 3)
          + 37
          * (*((unsigned __int8 *)v32 - 4)
           + 37
           * (*((unsigned __int8 *)v32 - 5)
            + 37 * (*((unsigned __int8 *)v32 - 6) + 37 * (*((unsigned __int8 *)v32 - 7) + 37 * (v34 + 37 * v31)))))));
    --v33;
  }
  while ( v33 );
  v35 = v15 + 32;
  v36 = -1073741275;
  RtlAcquireSRWLockShared(v15 + 32);
LABEL_12:
  v37 = -1LL << (*(_BYTE *)(v15 + 1556) & 0x1F);
  v38 = v37 & v31;
  if ( v27 )
    goto LABEL_15;
  v39 = *(_DWORD *)(v15 + 1556) >> 5;
  if ( v39 )
  {
    v45 = v37 & v31;
    v27 = *(_QWORD *)(v15 + 1560)
        + 8LL
        * ((37
          * (BYTE6(v45)
           + 37
           * (BYTE5(v45)
            + 37
            * (BYTE4(v45)
             + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v38 + 11623883)))))))
          + HIBYTE(v45)) & (unsigned int)(v39 - 1));
LABEL_15:
    while ( 1 )
    {
      v27 = *(_QWORD *)v27;
      if ( (v27 & 1) != 0 )
        break;
      if ( v38 == (v37 & *(_QWORD *)(v27 + 8)) )
      {
        if ( *(_DWORD *)(v27 - 1192) )
          goto LABEL_12;
        if ( _wcsicmp(String1, (const wchar_t *)(v27 - 1160)) )
        {
          v15 = v46;
          goto LABEL_12;
        }
        v15 = v46;
        if ( memcmp_0(Buf1, (const void *)(v27 - 696), 0x58uLL) )
          goto LABEL_12;
        v36 = 0;
        RmpObjectAddRef((struct _RM_OBJECT_HEADER *)(v27 - 1248));
        v10 = v27 - 1248;
        break;
      }
    }
  }
  RtlReleaseSRWLockShared(v35);
  if ( v36 < 0 )
  {
    v40 = v36 | 0x10000000;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 1892LL) & 2) == 0 && (*(_BYTE *)(v10 + 1332) & 1) == 0 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 16)) < 1 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = -1073741675;
        pExceptionRecord.ExceptionFlags = 1;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      *(_DWORD *)(v10 + 1332) |= 1u;
      TpPostWork(*(_QWORD *)(v10 + 1240));
    }
    v40 = 0;
  }
  dword_1800681D0 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v41 = TlsGetValue(HampLockTrackerId);
    if ( (*v41 & 1) == 0 )
      __int2c();
    if ( v41[8]-- == 1 )
      *(_QWORD *)v41 &= ~1uLL;
  }
  if ( v10 )
    RmpObjectRelease((PVOID)v10);
  return v40;
}
