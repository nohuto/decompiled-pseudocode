/*
 * XREFs of ExQueryProcessHandleInformation @ 0x14041EA08
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x1400B0390 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ExpGetNextHandleTableEntry @ 0x140428814 (ExpGetNextHandleTableEntry.c)
 */

__int64 __fastcall ExQueryProcessHandleInformation(__int64 a1, _QWORD *a2, int a3, int *a4)
{
  __int64 v5; // r13
  _QWORD *v6; // rdi
  unsigned int v7; // r12d
  int v8; // ebx
  unsigned int v9; // r14d
  _QWORD *v10; // rdx
  _QWORD *NextHandleTableEntry; // rax
  unsigned int v12; // r11d
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  signed __int32 v19[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-48h]
  int v24; // [rsp+44h] [rbp-44h]
  int v25; // [rsp+48h] [rbp-40h]

  v5 = a1;
  v6 = a2 + 2;
  v20[1] = (unsigned int)(a3 - 16) / 0x28uLL;
  v7 = 0;
  v8 = 16;
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    NextHandleTableEntry = (_QWORD *)ExpGetNextHandleTableEntry(a1, v10, v20);
    v13 = NextHandleTableEntry;
    if ( !NextHandleTableEntry )
      break;
    if ( v7 >= v12 )
    {
      if ( (v20[0] & 0x3FC) != 0 && *NextHandleTableEntry )
      {
        v8 += 40;
        v9 = -1073741820;
      }
    }
    else if ( ExLockHandleTableEntry(v5, NextHandleTableEntry) )
    {
      v14 = ((__int64)*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = ((__int64)*v13 >> 17) & 7;
      v16 = *((_DWORD *)v13 + 2);
      if ( (v16 & 0x2000000) != 0 )
        LOBYTE(v15) = v15 | 8;
      v25 = v15 & 7;
      v24 = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 + 24) ^ (unsigned __int64)BYTE1(v14)]
                               + 40);
      v22 = *(_QWORD *)v14;
      v21 = *(_QWORD *)(v14 + 8);
      v23 = v16 & 0x1FFFFFF;
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v19, 0);
      if ( *(_QWORD *)(v5 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v5 + 48), 0LL);
      v8 += 40;
      ++v7;
      *v6 = v20[0];
      v6[1] = v21;
      v6[2] = v22;
      *((_DWORD *)v6 + 6) = v23;
      *((_DWORD *)v6 + 7) = v24;
      *((_DWORD *)v6 + 8) = v25;
      *((_DWORD *)v6 + 9) = 0;
      *a2 = v7;
      v6 += 5;
    }
    v10 = v13;
    a1 = v5;
  }
  if ( a4 )
    *a4 = v8;
  return v9;
}
