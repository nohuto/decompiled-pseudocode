/*
 * XREFs of RtlSizeHeap @ 0x18001B860
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     RtlSetEnvironmentVar @ 0x18004BDF0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180080C50 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x18008A8E0 (RtlSetCurrentEnvironment.c)
 *     sub_1800F09BC @ 0x1800F09BC (sub_1800F09BC.c)
 *     sub_1800F355C @ 0x1800F355C (sub_1800F355C.c)
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 */

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbp
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  SIZE_T v11; // rbx
  ULONG v13; // edx
  char v14; // al
  __int64 v15; // rax
  unsigned __int16 v16; // r8
  char v17; // cl
  unsigned __int64 v18; // rdx
  int v19; // eax
  unsigned __int16 v20; // ax
  int v21; // eax
  unsigned __int16 v22; // ax
  int v23; // ecx
  struct _TEB *v24; // rbx
  int v25; // eax
  int v26; // [rsp+38h] [rbp-10h]
  int v27; // [rsp+38h] [rbp-10h]
  int v28; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  v4 = (unsigned __int64)BaseAddress;
  if ( !HeapHandle )
    sub_18009A5F0(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (dword_180159760 & 2) != 0 && v4 )
      v7 = *(_QWORD *)(v4 - 16);
    else
      v7 = 0LL;
    v8 = sub_18001BD60(Flags);
    v10 = sub_18001BA50(HeapHandle, v9, v8);
    v11 = v10;
    if ( v10 != -1 )
      return v10 - v7;
    sub_18009A5F0(9, (_DWORD)HeapHandle, v4, 0, 0LL, 0LL);
    return v11;
  }
  v13 = Flags | *((_DWORD *)HeapHandle + 29);
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return sub_180100ECC(HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v4 = sub_18006377C(HeapHandle, v4);
  }
  else
  {
    if ( (v4 & 0xF) != 0 )
    {
      v23 = 9;
    }
    else
    {
      v4 -= 16LL;
      _m_prefetchw((const void *)v4);
      if ( *(_BYTE *)(v4 + 15) == 5 )
        v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
      if ( (*(_BYTE *)(v4 + 15) & 0x3F) != 0 )
        goto LABEL_15;
      v23 = 8;
    }
    sub_18009A5F0(v23, (_DWORD)HeapHandle, v4, 0, 0LL, 0LL);
    v4 = 0LL;
  }
LABEL_15:
  if ( v4 )
  {
    v14 = *(_BYTE *)(v4 + 15);
    if ( v14 == 4 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v21 = *(_DWORD *)(v4 + 8);
        LOWORD(v27) = v21;
        if ( (v21 & *((_DWORD *)HeapHandle + 31)) != 0 )
          v27 = *((_DWORD *)HeapHandle + 34) ^ v21;
        v22 = v27;
      }
      else
      {
        v22 = *(_WORD *)(v4 + 8);
      }
      return *(_QWORD *)(v4 - 16) - v22;
    }
    else
    {
      if ( v14 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v19 = *(_DWORD *)(v4 + 8);
          LOWORD(v26) = v19;
          if ( (v19 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v26 = *((_DWORD *)HeapHandle + 34) ^ v19;
          v16 = v26;
        }
        else
        {
          v16 = *(_WORD *)(v4 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)HeapHandle ^ (unsigned __int16)(qword_18015D458 ^ *(_WORD *)(v4 + 8) ^ (v4 >> 4)) )
          v15 = 0LL;
        else
          v15 = *(_QWORD *)(v4
                          - ((unsigned __int64)((unsigned int)HeapHandle ^ (unsigned int)qword_18015D458 ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)(v4 >> 4)) >> 12));
        v16 = *(_WORD *)(v15 + 36);
      }
      v17 = *(_BYTE *)(v4 + 15);
      if ( v17 == 5 )
      {
        v18 = *((unsigned __int16 *)HeapHandle + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v4 + 12);
      }
      else if ( (v17 & 0x40) != 0 )
      {
        v18 = *(unsigned __int16 *)(v4 + 16LL * (v17 & 0x3F) + 12);
      }
      else if ( (v17 & 0x3F) == 0x3F )
      {
        if ( v17 >= 0 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v25 = *(_DWORD *)(v4 + 8);
            LOWORD(v28) = v25;
            if ( (v25 & *((_DWORD *)HeapHandle + 31)) != 0 )
              v28 = *((_DWORD *)HeapHandle + 34) ^ v25;
            v20 = v28;
          }
          else
          {
            v20 = *(_WORD *)(v4 + 8);
          }
        }
        else
        {
          if ( !((unsigned __int16)HeapHandle ^ (unsigned __int16)(qword_18015D458 ^ *(_WORD *)(v4 + 8) ^ (v4 >> 4))) )
            v3 = *(_QWORD *)(v4
                           - ((unsigned __int64)((unsigned int)HeapHandle ^ (unsigned int)qword_18015D458 ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)(v4 >> 4)) >> 12));
          v20 = *(_WORD *)(v3 + 36);
        }
        v18 = *(_QWORD *)(v4 + 16LL * v20);
      }
      else
      {
        v18 = v17 & 0x3F;
      }
      return 16LL * v16 - v18;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v24 = NtCurrentTeb();
    v24->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return -1LL;
  }
}
