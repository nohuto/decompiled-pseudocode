/*
 * XREFs of EtwpDiskProvTraceDisk @ 0x1402AF660
 * Callers:
 *     EtwpTraceIo @ 0x140177130 (EtwpTraceIo.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char __fastcall EtwpDiskProvTraceDisk(__int16 a1, __int64 a2, LONG *a3, GUID *a4)
{
  __int64 v8; // rax
  ULONGLONG v9; // rdi
  void *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rsi
  unsigned __int8 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r9
  unsigned __int8 v17; // r10
  unsigned __int64 v19; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+98h] [rbp-50h] BYREF

  LOBYTE(v8) = (unsigned __int8)memset(v20, 0, sizeof(v20));
  v9 = EtwpDiskProvRegHandle;
  v19 = 0LL;
  if ( EtwpDiskProvRegHandle )
  {
    if ( a1 == 266 )
    {
      v10 = &KDskEvt_Read;
    }
    else if ( a1 == 270 )
    {
      v10 = &KDskEvt_Flush;
    }
    else
    {
      v10 = &KDskEvt_Write;
    }
    *(_DWORD *)(a2 + 8) -= 4;
    v11 = *(_QWORD *)(v9 + 104);
    v12 = v11 + 28;
    v8 = -v11;
    v13 = (void *)(v12 & -(__int64)(v8 != 0));
    if ( *(_BYTE *)(v9 + 100) )
    {
      LOBYTE(v8) = EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 32) + 80LL, *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1));
      if ( (_BYTE)v8 )
        LOBYTE(v8) = EtwpEventWriteFull(
                       v15,
                       v14,
                       0LL,
                       0,
                       (__int64)v10,
                       0,
                       0,
                       a4,
                       0LL,
                       1u,
                       a2,
                       a3,
                       (__int64)v20,
                       0LL,
                       *(_WORD *)(v9 + 98),
                       v13,
                       &v19);
    }
    if ( *(_BYTE *)(v9 + 101) )
    {
      LOBYTE(v8) = EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 40) + 80LL, *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1));
      if ( (_BYTE)v8 )
        LOBYTE(v8) = EtwpEventWriteFull(
                       *(_QWORD *)(v9 + 32),
                       v17,
                       0LL,
                       0,
                       (__int64)v10,
                       0,
                       0,
                       a4,
                       0LL,
                       1u,
                       a2,
                       a3,
                       (__int64)v20,
                       v16,
                       *(_WORD *)(v9 + 98),
                       v13,
                       &v19);
    }
  }
  return v8;
}
