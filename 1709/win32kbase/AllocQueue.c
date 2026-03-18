/*
 * XREFs of AllocQueue @ 0x1C0016FA0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C0017720 (Win32AllocateFromPagedLookasideList.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall AllocQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  int v5; // ebx
  unsigned __int64 v6; // r9
  char v7; // r8
  int v8; // esi
  __int128 v9; // xmm1
  _OWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 )
  {
    v8 = *(_DWORD *)(a2 + 388);
    v5 = 0;
  }
  else
  {
    result = Win32AllocateFromPagedLookasideList(QLookaside);
    v2 = result;
    if ( !result )
      return result;
    v5 = 0;
    v8 = 0;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 16) = 0;
  }
  memset((void *)(v2 + 24), 0, 0x1C8uLL);
  *(_DWORD *)(v2 + 388) = v8;
  *(_DWORD *)(v2 + 44) = 2;
  *(_DWORD *)(v2 + 408) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v10 = *(_OWORD **)(a1 + 408);
    *(_OWORD *)(v2 + 224) = v10[14];
    *(_OWORD *)(v2 + 240) = v10[15];
    *(_OWORD *)(v2 + 256) = v10[16];
    v9 = v10[17];
  }
  else
  {
    if ( *((struct tagDESKTOP **)gptiCurrent + 54) != grpdeskRitInput )
    {
      do
      {
        if ( (int)IsIsKeyStateCachedSupported() >= 0 && (unsigned int)IsKeyStateCached((unsigned int)v5) )
        {
          v6 = (unsigned __int64)(unsigned __int8)v5 >> 2;
          v7 = v5 & 3;
          if ( ((unsigned __int8)(1 << (2 * (v5 & 3))) & *((_BYTE *)&gafAsyncKeyState + v6)) != 0 )
            *(_BYTE *)(v6 + v2 + 224) |= 1 << (2 * v7);
          if ( ((unsigned __int8)(1 << (2 * v7 + 1)) & *((_BYTE *)&gafAsyncKeyState + v6)) != 0 )
            *(_BYTE *)(v6 + v2 + 224) |= 1 << (2 * v7 + 1);
        }
        ++v5;
      }
      while ( v5 < 256 );
      goto LABEL_7;
    }
    *(_OWORD *)(v2 + 224) = gafAsyncKeyState;
    *(_OWORD *)(v2 + 240) = xmmword_1C018F5B0;
    *(_OWORD *)(v2 + 256) = xmmword_1C018F5C0;
    v9 = xmmword_1C018F5D0;
  }
  *(_OWORD *)(v2 + 272) = v9;
LABEL_7:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*(_DWORD *)(v2 + 376);
  *(_QWORD *)&v11 = v2 + 368;
  *((_QWORD *)&v11 + 1) = qword_1C018E048;
  v12 = v11;
  HMAssignmentLock(&v12);
  return v2;
}
