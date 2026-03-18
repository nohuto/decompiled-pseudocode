/*
 * XREFs of ExQueryProcessHandleInformation @ 0x1405C0B08
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14003EC38 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ExpGetNextHandleTableEntry @ 0x14054BA14 (ExpGetNextHandleTableEntry.c)
 */

__int64 __fastcall ExQueryProcessHandleInformation(__int64 a1, _QWORD *a2, int a3, int *a4)
{
  __int64 v5; // r13
  _QWORD *v6; // rdi
  unsigned int v7; // r12d
  int v8; // ebx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  _QWORD *NextHandleTableEntry; // rax
  unsigned int v12; // r11d
  _QWORD *v13; // rsi
  __int64 *v14; // rdx
  __int64 v15; // rax
  int v16; // r13d
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // rdx
  int v21; // r13d
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  int v24; // [rsp+20h] [rbp-68h]
  __int64 v25[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+A0h] [rbp+18h]

  v28 = a1;
  v5 = a1;
  v6 = a2 + 2;
  v25[1] = (unsigned int)(a3 - 16) / 0x28uLL;
  v7 = 0;
  v8 = 16;
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    NextHandleTableEntry = (_QWORD *)ExpGetNextHandleTableEntry(a1, v10, v25);
    v13 = NextHandleTableEntry;
    if ( !NextHandleTableEntry )
      break;
    if ( v7 >= v12 )
    {
      if ( (v25[0] & 0x3FC) != 0 && *NextHandleTableEntry )
      {
        v8 += 40;
        v9 = -1073741820;
      }
    }
    else if ( ExLockHandleTableEntry(v5, NextHandleTableEntry) )
    {
      v14 = (__int64 *)(((__int64)*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v15 = ((__int64)*v13 >> 17) & 7;
      v16 = *((_DWORD *)v13 + 2);
      if ( (v16 & 0x2000000) != 0 )
        LOBYTE(v15) = v15 | 8;
      v17 = v15 & 7;
      v30 = v17;
      v18 = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)((((__int64)*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v13) & 0xFFF0) >> 8)]
                               + 40);
      v24 = v18;
      v19 = *v14;
      v26 = *v14;
      v20 = v14[1];
      v27 = v20;
      v21 = v16 & 0x1FFFFFF;
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v23, 0);
      if ( *(_QWORD *)(v28 + 48) )
      {
        ExfUnblockPushLock((volatile __int64 *)(v28 + 48), 0LL);
        v17 = v30;
        v18 = v24;
        v19 = v26;
        v20 = v27;
      }
      v8 += 40;
      ++v7;
      *v6 = v25[0];
      v6[1] = v20;
      v6[2] = v19;
      *((_DWORD *)v6 + 6) = v21;
      *((_DWORD *)v6 + 7) = v18;
      *((_DWORD *)v6 + 8) = v17;
      *((_DWORD *)v6 + 9) = 0;
      *a2 = v7;
      v6 += 5;
      v5 = v28;
    }
    v10 = (__int64)v13;
    a1 = v5;
  }
  if ( a4 )
    *a4 = v8;
  return v9;
}
