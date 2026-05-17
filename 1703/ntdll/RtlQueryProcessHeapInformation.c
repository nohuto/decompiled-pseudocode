/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x180095000
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x180005740 (RtlQueryHeapInformation.c)
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800456F0 @ 0x1800456F0 (sub_1800456F0.c)
 *     RtlCommitDebugInfo_0 @ 0x1800682D4 (RtlCommitDebugInfo_0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D442C @ 0x1800D442C (sub_1800D442C.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  char *v2; // rax
  char *v3; // r14
  unsigned int v4; // r13d
  int HeapInformation; // ebx
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rax
  char *v15; // r15
  __int64 v16; // rdx
  size_t v17; // rcx
  unsigned int i; // r15d
  unsigned int j; // ecx
  wchar_t *v20; // rcx
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
  if ( v2 )
  {
    *(_DWORD *)v2 = 0;
    *(_QWORD *)(a1 + 112) = v2;
    RtlEnterCriticalSection((__int64)&unk_180159A80);
    HeapInformation = sub_1800059EC((__int64)sub_1800955A0, a1, 2);
    if ( HeapInformation >= 0 )
    {
      if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
      {
        v7 = qword_18015C468;
        if ( qword_18015C468 && *(_QWORD *)(qword_18015C468 + 232) )
        {
          v14 = RtlCommitDebugInfo_0((_QWORD *)a1, 0x58u);
          v15 = v14;
          if ( v14 )
          {
            memset(v14, 0, 0x58uLL);
            *(_QWORD *)v15 = v7;
            *((_DWORD *)v15 + 2) = *(_DWORD *)(v7 + 112);
            *((_WORD *)v15 + 6) = 16;
            ++*(_DWORD *)v3;
            goto LABEL_10;
          }
LABEL_16:
          HeapInformation = -1073741801;
          goto LABEL_32;
        }
LABEL_10:
        while ( v4 < *(_DWORD *)v3 )
        {
          v8 = 88LL * v4;
          v9 = *(_QWORD *)(a1 + 128);
          if ( !v9 || v9 == *(_QWORD *)&v3[v8 + 8] )
          {
            v29 = *(_QWORD *)&v3[v8 + 8];
            v10 = *(unsigned __int16 *)(v29 + 224);
            *(_DWORD *)&v3[v8 + 40] = v10;
            v11 = 72 * v10;
            Size = 72 * v10;
            if ( *(_QWORD *)(v29 + 328) )
            {
              *(_DWORD *)&v3[v8 + 40] = v10 + 129;
              v11 += 9288;
              Size = v11;
            }
            v12 = RtlCommitDebugInfo_0((_QWORD *)a1, v11);
            v13 = v12;
            if ( !v12 )
              goto LABEL_16;
            memset(v12, 0, Size);
            *(_QWORD *)&v3[v8 + 80] = v13;
            v16 = v29;
            v17 = *(_QWORD *)(v29 + 328);
            Sizea = v17;
            if ( v17 )
            {
              *(_DWORD *)&v3[v8 + 48] = 129;
              *(_DWORD *)&v3[v8 + 52] = 16;
              for ( i = 0; i <= 0x80; ++i )
              {
                *(_DWORD *)v13 = *(_DWORD *)v17;
                *((_DWORD *)v13 + 1) = *(_DWORD *)(v17 + 4);
                *((_QWORD *)v13 + 1) = 16LL * *(_QWORD *)(v17 + 8);
                *((_WORD *)v13 + 8) = i | 0x8000;
                v20 = (wchar_t *)(v13 + 20);
                if ( i >= 0x80 )
                  sub_1800456F0(v20, 0x30uLL, (__int64)L"VirtualAlloc");
                else
                  sub_1800D442C(v20);
                v13 += 72;
                v17 = Sizea + 16;
                Sizea += 16LL;
              }
              v16 = v29;
            }
            memmove(v13, *(const void **)(v16 + 232), 72LL * *(unsigned __int16 *)(v16 + 224));
            for ( j = 0; j < *(unsigned __int16 *)(v29 + 224); ++j )
            {
              *((_QWORD *)v13 + 1) *= 16LL;
              v13 += 72;
            }
          }
          ++v4;
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    if ( HeapInformation >= 0 )
    {
      v6 = *(_DWORD *)(a1 + 64);
      if ( (v6 & 0x210) != 0 )
      {
        v23[0] = -1LL;
        v23[1] = *(_QWORD *)(a1 + 128);
        v25 = sub_1800953D0;
        v26 = v22;
        v24 = (v6 & 0x10) != 0 ? 5 : 3;
        memset(v22, 0, sizeof(v22));
        v22[0] = a1;
        v22[1] = v3;
        LODWORD(v22[2]) = 0;
        v22[3] = v3 + 8;
        HeapInformation = RtlQueryHeapInformation(0LL, 2, v23, 0x58uLL, 0LL);
      }
    }
LABEL_32:
    RtlLeaveCriticalSection((__int64)&unk_180159A80);
    return (unsigned int)HeapInformation;
  }
  return 3221225495LL;
}
