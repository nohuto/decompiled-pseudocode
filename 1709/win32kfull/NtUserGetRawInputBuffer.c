/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C01E6910
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C0009C90 (FreeHidData.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-A8h]
  unsigned int v20; // [rsp+24h] [rbp-A4h]
  unsigned int v21; // [rsp+30h] [rbp-98h]
  __int64 v22; // [rsp+48h] [rbp-80h]
  __int64 v23; // [rsp+60h] [rbp-68h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  _BYTE v25[88]; // [rsp+70h] [rbp-58h] BYREF

  v20 = 0;
  v5 = 0;
  v19 = 0;
  v6 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  if ( a3 != 24 )
  {
    UserSetLastError(87LL, v7);
    goto LABEL_28;
  }
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  v21 = *v9;
  v24 = *(_QWORD *)(gptiCurrent + 408LL);
  v11 = *(_QWORD *)(v24 + 24);
  v12 = 0xFFFFF78000000320uLL;
  while ( v11 )
  {
    v13 = *(_QWORD *)v11;
    v23 = *(_QWORD *)v11;
    if ( *(_DWORD *)(v11 + 24) == 255 )
    {
      LOBYTE(v12) = 18;
      v14 = HMValidateHandle(*(_QWORD *)(v11 + 40), v12, 0xFFFFF78000000004uLL, v8);
      v22 = v14;
      if ( v14 )
      {
        v5 = (*(_DWORD *)(v14 + 36) + 7) & 0xFFFFFFF8;
        if ( v5 + v20 <= v20 )
          goto LABEL_28;
        v15 = a1;
        if ( !a1 || v5 + v20 > v10 )
          goto LABEL_16;
        ProbeForWrite(a1, v5, 4u);
        memmove(a1, (const void *)(v22 + 32), *(unsigned int *)(v22 + 36));
        ++v19;
        a1 += v5;
        v20 += v5;
        FreeHidData(v22);
        v13 = v23;
      }
      *(_DWORD *)(gptiCurrent + 544LL) = *(_DWORD *)(v11 + 48);
      DelQEntry((_QWORD *)(v24 + 24), v11);
      EtwTraceInputProcessDelay(gptiCurrent);
      v12 = 0xFFFFF78000000320uLL;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 408LL) = (MEMORY[0xFFFFF78000000320]
                                                             * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v10 = v21;
    }
    v11 = v13;
  }
  v15 = a1;
LABEL_16:
  if ( !v11 && v15 )
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) &= ~0x400u;
  if ( v10 <= v5 )
  {
    if ( v15 )
    {
      UserSetLastError(122LL, 0xFFFFF78000000320uLL);
      goto LABEL_25;
    }
  }
  else if ( v15 )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v6 = v19;
    goto LABEL_28;
  }
  v6 = 0;
LABEL_25:
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  *a2 = v5;
LABEL_28:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  UserSessionSwitchLeaveCrit(v17, v16);
  return v6;
}
