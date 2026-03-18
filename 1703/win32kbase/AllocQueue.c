/*
 * XREFs of AllocQueue @ 0x1C0049F90
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 * Callees:
 *     Win32AllocateFromPagedLookasideList @ 0x1C003EB50 (Win32AllocateFromPagedLookasideList.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall AllocQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int i; // edi
  char v6; // r9
  unsigned __int64 v7; // r8
  int v8; // edi
  __int128 v9; // xmm1
  _OWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 )
  {
    v8 = *(_DWORD *)(a2 + 348);
  }
  else
  {
    result = Win32AllocateFromPagedLookasideList((__int64)QLookaside);
    v2 = result;
    if ( !result )
      return result;
    v8 = 0;
  }
  memset((void *)v2, 0, 0x1B8uLL);
  *(_DWORD *)(v2 + 348) = v8;
  *(_DWORD *)(v2 + 20) = 2;
  *(_DWORD *)(v2 + 368) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v10 = *(_OWORD **)(a1 + 384);
    *(_OWORD *)(v2 + 192) = v10[12];
    *(_OWORD *)(v2 + 208) = v10[13];
    *(_OWORD *)(v2 + 224) = v10[14];
    v9 = v10[15];
  }
  else
  {
    if ( *((struct tagDESKTOP **)gptiCurrent + 51) != grpdeskRitInput )
    {
      for ( i = 0; i < 256; ++i )
      {
        if ( (int)IsIsKeyStateCachedSupported() >= 0 && (unsigned int)IsKeyStateCached((unsigned int)i) )
        {
          v6 = i & 3;
          v7 = (unsigned __int64)(unsigned __int8)i >> 2;
          if ( ((unsigned __int8)(1 << (2 * (i & 3))) & *((_BYTE *)&gafAsyncKeyState + v7)) != 0 )
            *(_BYTE *)(v7 + v2 + 192) |= 1 << (2 * v6);
          if ( ((unsigned __int8)(1 << (2 * v6 + 1)) & *((_BYTE *)&gafAsyncKeyState + v7)) != 0 )
            *(_BYTE *)(v7 + v2 + 192) |= 1 << (2 * v6 + 1);
        }
      }
      goto LABEL_7;
    }
    *(_OWORD *)(v2 + 192) = gafAsyncKeyState;
    *(_OWORD *)(v2 + 208) = xmmword_1C018AA30;
    *(_OWORD *)(v2 + 224) = xmmword_1C018AA40;
    v9 = xmmword_1C018AA50;
  }
  *(_OWORD *)(v2 + 240) = v9;
LABEL_7:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*(_DWORD *)(v2 + 336);
  *(_QWORD *)&v11 = v2 + 328;
  *((_QWORD *)&v11 + 1) = qword_1C01894E8;
  v12 = v11;
  HMAssignmentLock((__int64)&v12);
  return v2;
}
