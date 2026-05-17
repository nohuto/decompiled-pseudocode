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

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  char *v2; // rax
  char *v3; // rdi
  unsigned int v4; // r13d
  int HeapInformation; // ebx
  __int64 v7; // r14
  char *v8; // rax
  char *v9; // r15
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  char *v14; // rax
  char *v15; // r14
  __int64 v16; // rdx
  size_t v17; // rcx
  unsigned int i; // r15d
  wchar_t *v19; // rcx
  unsigned int j; // ecx
  int v21; // ecx
  _QWORD v22[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-88h] BYREF
  int v24; // [rsp+80h] [rbp-78h]
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp-70h]
  _QWORD *v26; // [rsp+90h] [rbp-68h]
  unsigned int Size; // [rsp+100h] [rbp+8h]
  size_t Sizea; // [rsp+100h] [rbp+8h]
  __int64 v29; // [rsp+108h] [rbp+10h]

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  v2 = RtlCommitDebugInfo_0((_QWORD *)a1, 8u);
  v3 = v2;
  v4 = 0;
  if ( !v2 )
    return 3221225495LL;
  *(_DWORD *)v2 = 0;
  *(_QWORD *)(a1 + 112) = v2;
  RtlEnterCriticalSection((__int64)&unk_18015AAC0);
  HeapInformation = sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))sub_1800D3390, a1, 2);
  if ( HeapInformation < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v7 = qword_18015D750;
    if ( qword_18015D750 && *(_QWORD *)(qword_18015D750 + 232) )
    {
      v8 = RtlCommitDebugInfo_0((_QWORD *)a1, 0x58u);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x58uLL);
        *(_QWORD *)v9 = v7;
        *((_DWORD *)v9 + 2) = *(_DWORD *)(v7 + 112);
        *((_WORD *)v9 + 6) = 16;
        ++*(_DWORD *)v3;
        goto LABEL_10;
      }
LABEL_8:
      HeapInformation = -1073741801;
      goto LABEL_34;
    }
LABEL_10:
    while ( v4 < *(_DWORD *)v3 )
    {
      v10 = 88LL * v4;
      v11 = *(_QWORD *)(a1 + 128);
      if ( !v11 || v11 == *(_QWORD *)&v3[v10 + 8] )
      {
        v29 = *(_QWORD *)&v3[v10 + 8];
        v12 = *(unsigned __int16 *)(v29 + 224);
        *(_DWORD *)&v3[v10 + 40] = v12;
        v13 = 72 * v12;
        Size = 72 * v12;
        if ( *(_QWORD *)(v29 + 328) )
        {
          *(_DWORD *)&v3[v10 + 40] = v12 + 129;
          v13 += 9288;
          Size = v13;
        }
        v14 = RtlCommitDebugInfo_0((_QWORD *)a1, v13);
        v15 = v14;
        if ( !v14 )
          goto LABEL_8;
        memset(v14, 0, Size);
        *(_QWORD *)&v3[v10 + 80] = v15;
        v16 = v29;
        v17 = *(_QWORD *)(v29 + 328);
        Sizea = v17;
        if ( v17 )
        {
          *(_DWORD *)&v3[v10 + 48] = 129;
          *(_DWORD *)&v3[v10 + 52] = 16;
          for ( i = 0; i <= 0x80; ++i )
          {
            *(_DWORD *)v15 = *(_DWORD *)v17;
            *((_DWORD *)v15 + 1) = *(_DWORD *)(v17 + 4);
            *((_QWORD *)v15 + 1) = 16LL * *(_QWORD *)(v17 + 8);
            *((_WORD *)v15 + 8) = i | 0x8000;
            v19 = (wchar_t *)(v15 + 20);
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
            v15 += 72;
            v17 = Sizea + 16;
            Sizea += 16LL;
          }
          v16 = v29;
        }
        memmove(v15, *(const void **)(v16 + 232), 72LL * *(unsigned __int16 *)(v16 + 224));
        for ( j = 0; j < *(unsigned __int16 *)(v29 + 224); ++j )
        {
          *((_QWORD *)v15 + 1) *= 16LL;
          v15 += 72;
        }
      }
      ++v4;
    }
  }
  if ( HeapInformation >= 0 )
  {
    v21 = *(_DWORD *)(a1 + 64);
    if ( (v21 & 0x210) != 0 )
    {
      v23[0] = -1LL;
      v23[1] = *(_QWORD *)(a1 + 128);
      v25 = sub_1800D39D0;
      v26 = v22;
      v24 = (v21 & 0x10) != 0 ? 5 : 3;
      memset(v22, 0, sizeof(v22));
      v22[0] = a1;
      v22[1] = v3;
      LODWORD(v22[2]) = 0;
      v22[3] = v3 + 8;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v23, 0x58uLL, 0LL);
    }
  }
LABEL_34:
  RtlLeaveCriticalSection((__int64)&unk_18015AAC0);
  return (unsigned int)HeapInformation;
}
