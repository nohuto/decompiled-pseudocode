/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x1800D27B0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 *     RtlQueryHeapInformation @ 0x18005FC60 (RtlQueryHeapInformation.c)
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     RtlCommitDebugInfo_0 @ 0x180077EAC (RtlCommitDebugInfo_0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800C8ACC @ 0x1800C8ACC (sub_1800C8ACC.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(PRTL_DEBUG_INFORMATION Buffer)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rdi
  unsigned int v4; // r13d
  int v6; // ebx
  __int64 v7; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // r15
  __int64 v10; // r15
  PVOID SpecificHeap; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rdx
  size_t v17; // rcx
  unsigned int i; // r15d
  wchar_t *v19; // rcx
  unsigned int j; // ecx
  ULONG Flags; // ecx
  _QWORD v22[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD HeapInformation[2]; // [rsp+70h] [rbp-88h] BYREF
  int v24; // [rsp+80h] [rbp-78h]
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp-70h]
  _QWORD *v26; // [rsp+90h] [rbp-68h]
  unsigned int Size; // [rsp+100h] [rbp+8h]
  size_t Sizea; // [rsp+100h] [rbp+8h]
  __int64 v29; // [rsp+108h] [rbp+10h]

  Buffer->ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v2 = (unsigned int *)RtlCommitDebugInfo_0(Buffer, 8uLL);
  v3 = v2;
  v4 = 0;
  if ( !v2 )
    return 3221225495LL;
  *v2 = 0;
  Buffer->Heaps = v2;
  RtlEnterCriticalSection(&stru_18015AAC0);
  v6 = sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))&sub_1800D3390, (__int64)Buffer, 2);
  if ( v6 < 0 )
  {
    Buffer->Heaps = 0LL;
  }
  else if ( (Buffer->Flags & 8) != 0 )
  {
    v7 = qword_18015D750;
    if ( qword_18015D750 && *(_QWORD *)(qword_18015D750 + 232) )
    {
      v8 = RtlCommitDebugInfo_0(Buffer, 0x58uLL);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x58uLL);
        *(_QWORD *)v9 = v7;
        v9[2] = *(_DWORD *)(v7 + 112);
        *((_WORD *)v9 + 6) = 16;
        ++*v3;
        goto LABEL_10;
      }
LABEL_8:
      v6 = -1073741801;
      goto LABEL_34;
    }
LABEL_10:
    while ( v4 < *v3 )
    {
      v10 = 22LL * v4;
      SpecificHeap = Buffer->SpecificHeap;
      if ( !SpecificHeap || SpecificHeap == *(PVOID *)&v3[v10 + 2] )
      {
        v29 = *(_QWORD *)&v3[v10 + 2];
        v12 = *(unsigned __int16 *)(v29 + 224);
        v3[v10 + 10] = v12;
        v13 = 72 * v12;
        Size = 72 * v12;
        if ( *(_QWORD *)(v29 + 328) )
        {
          v3[v10 + 10] = v12 + 129;
          v13 += 9288;
          Size = v13;
        }
        v14 = RtlCommitDebugInfo_0(Buffer, v13);
        v15 = v14;
        if ( !v14 )
          goto LABEL_8;
        memset(v14, 0, Size);
        *(_QWORD *)&v3[v10 + 20] = v15;
        v16 = v29;
        v17 = *(_QWORD *)(v29 + 328);
        Sizea = v17;
        if ( v17 )
        {
          v3[v10 + 12] = 129;
          v3[v10 + 13] = 16;
          for ( i = 0; i <= 0x80; ++i )
          {
            *(_DWORD *)v15 = *(_DWORD *)v17;
            *((_DWORD *)v15 + 1) = *(_DWORD *)(v17 + 4);
            v15[1] = 16LL * *(_QWORD *)(v17 + 8);
            *((_WORD *)v15 + 8) = i | 0x8000;
            v19 = (wchar_t *)v15 + 10;
            if ( i )
            {
              if ( i >= 0x80 )
                sub_1800377C0(v19, 0x30uLL, (__int64)L"VirtualAlloc");
              else
                sub_1800C8ACC(v19, 0x30uLL, L"Objects=%4u", 16 * i);
            }
            else
            {
              sub_1800C8ACC(v19, 0x30uLL, L"Objects>%4u", 2048LL);
            }
            v15 += 9;
            v17 = Sizea + 16;
            Sizea += 16LL;
          }
          v16 = v29;
        }
        memmove(v15, *(const void **)(v16 + 232), 72LL * *(unsigned __int16 *)(v16 + 224));
        for ( j = 0; j < *(unsigned __int16 *)(v29 + 224); ++j )
        {
          v15[1] *= 16LL;
          v15 += 9;
        }
      }
      ++v4;
    }
  }
  if ( v6 >= 0 )
  {
    Flags = Buffer->Flags;
    if ( (Flags & 0x210) != 0 )
    {
      HeapInformation[0] = -1LL;
      HeapInformation[1] = Buffer->SpecificHeap;
      v25 = sub_1800D39D0;
      v26 = v22;
      v24 = (Flags & 0x10) != 0 ? 5 : 3;
      memset(v22, 0, sizeof(v22));
      v22[0] = Buffer;
      v22[1] = v3;
      LODWORD(v22[2]) = 0;
      v22[3] = v3 + 2;
      v6 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
    }
  }
LABEL_34:
  RtlLeaveCriticalSection(&stru_18015AAC0);
  return (unsigned int)v6;
}
