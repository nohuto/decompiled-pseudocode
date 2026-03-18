/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C01DA4C0
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C0004F00 (FreeHidData.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned int *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r13
  char *v17; // rdi
  unsigned int v19; // [rsp+20h] [rbp-A8h]
  unsigned int v20; // [rsp+24h] [rbp-A4h]
  unsigned int v21; // [rsp+30h] [rbp-98h]
  _BYTE v22[24]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v23; // [rsp+60h] [rbp-68h]
  __int64 *v24; // [rsp+68h] [rbp-60h]
  unsigned int v26; // [rsp+E8h] [rbp+20h]

  v20 = 0;
  v5 = 0;
  v19 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
  if ( a3 != 24 )
  {
    v7 = -1;
    UserSetLastError(87LL);
    goto LABEL_30;
  }
  v9 = W32UserProbeAddress;
  v11 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v11 = (unsigned int *)W32UserProbeAddress;
  v12 = *v11;
  v21 = *v11;
  v24 = *(__int64 **)(gptiCurrent + 384LL);
  v13 = *v24;
  v8 = 0xFFFFF78000000320uLL;
  v10 = 0xFFFFF78000000004uLL;
  while ( 1 )
  {
    if ( !v13 )
    {
      v17 = a1;
      goto LABEL_18;
    }
    v14 = *(_QWORD *)v13;
    v23 = *(_QWORD *)v13;
    if ( *(_DWORD *)(v13 + 24) == 255 )
      break;
LABEL_15:
    v13 = v14;
  }
  v15 = HMValidateHandle(*(_QWORD *)(v13 + 40), 18);
  v16 = v15;
  if ( !v15 )
  {
LABEL_14:
    *(_DWORD *)(gptiCurrent + 492LL) = *(_DWORD *)(v13 + 48);
    DelQEntry((__int64)v24, v13, 1);
    EtwTraceInputProcessDelay(gptiCurrent);
    v8 = 0xFFFFF78000000320uLL;
    v10 = 0xFFFFF78000000004uLL;
    v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 368LL) = v9;
    v12 = v21;
    goto LABEL_15;
  }
  v5 = (*(_DWORD *)(v15 + 36) + 7) & 0xFFFFFFF8;
  v9 = v5 + v20;
  v26 = v9;
  if ( (unsigned int)v9 <= v20 )
  {
    v7 = -1;
    goto LABEL_30;
  }
  v17 = a1;
  if ( a1 && (unsigned int)v9 <= v12 )
  {
    ProbeForWrite(a1, v5, 4u);
    memmove(a1, (const void *)(v16 + 32), *(unsigned int *)(v16 + 36));
    ++v19;
    a1 += v5;
    v20 = v26;
    FreeHidData(v16);
    v14 = v23;
    goto LABEL_14;
  }
  v10 = 0xFFFFF78000000004uLL;
  v8 = 0xFFFFF78000000320uLL;
LABEL_18:
  if ( !v13 && v17 )
  {
    v9 = 64511LL;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) &= ~0x400u;
  }
  if ( v12 <= v5 )
  {
    if ( !v17 )
      goto LABEL_25;
    v7 = -1;
    UserSetLastError(122LL);
  }
  else
  {
    if ( v17 )
    {
      v9 = (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL),
                           (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v7 = v19;
      goto LABEL_30;
    }
LABEL_25:
    v7 = 0;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (unsigned int *)W32UserProbeAddress;
  *a2 = v5;
LABEL_30:
  if ( !v22[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v22);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v6);
  return v7;
}
