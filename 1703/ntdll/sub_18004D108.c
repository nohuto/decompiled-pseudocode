/*
 * XREFs of sub_18004D108 @ 0x18004D108
 * Callers:
 *     sub_18004CFC0 @ 0x18004CFC0 (sub_18004CFC0.c)
 *     sub_18004FA70 @ 0x18004FA70 (sub_18004FA70.c)
 *     sub_1800506D0 @ 0x1800506D0 (sub_1800506D0.c)
 *     sub_180050870 @ 0x180050870 (sub_180050870.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 *     sub_18004F9DC @ 0x18004F9DC (sub_18004F9DC.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800DFAF8 @ 0x1800DFAF8 (sub_1800DFAF8.c)
 */

int *__fastcall sub_18004D108(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  __int16 v4; // r14
  SIZE_T v5; // rbx
  bool v6; // r13
  size_t v7; // rdi
  int *v8; // rsi
  int v9; // r15d
  unsigned int v10; // r12d
  _DWORD *v11; // r14
  _WORD *v12; // rax
  _WORD *v13; // rdi
  __int128 *v14; // rbx
  unsigned int v15; // r14d
  unsigned int v16; // r8d
  unsigned int v17; // r12d
  size_t v18; // r13
  ULONG_PTR v19; // r15
  _DWORD *v20; // rdx
  void *v22; // rax
  size_t v23; // rax
  PVOID Heap; // rax
  NTSTATUS v25; // eax
  __int64 Length; // rax
  int v27; // eax
  void **v28; // rbx
  NTSTATUS v29; // [rsp+30h] [rbp-48h]
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-40h] BYREF
  __int128 *v31; // [rsp+40h] [rbp-38h]
  size_t Size; // [rsp+48h] [rbp-30h]
  size_t v33; // [rsp+50h] [rbp-28h]
  PVOID BaseAddress; // [rsp+58h] [rbp-20h]
  void *Src; // [rsp+60h] [rbp-18h]
  void *v36; // [rsp+68h] [rbp-10h]
  _DWORD *v37; // [rsp+C0h] [rbp+48h]
  wchar_t *v39; // [rsp+D0h] [rbp+58h]
  char v40; // [rsp+D8h] [rbp+60h]

  v40 = a4;
  v39 = a3;
  v37 = a1;
  v4 = a2;
  v36 = 0LL;
  v33 = 0LL;
  Src = 0LL;
  v5 = 112LL;
  v6 = ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 60) & 3) == 1;
  Size = 0LL;
  BaseAddress = 0LL;
  v7 = 0LL;
  ReturnLength = 0LL;
  v8 = 0LL;
  v29 = 0;
  v9 = 0;
  v31 = 0LL;
  v10 = 0;
  if ( a2 )
  {
    v11 = a1;
    while ( 1 )
    {
      if ( *v11 )
      {
        switch ( *v11 )
        {
          case 1:
            goto LABEL_67;
          case 2:
            v5 += stru_18015C030.Length;
            if ( v6 )
              v31 = (__int128 *)&stru_18015C030;
            break;
          case 3:
            RtlEnterCriticalSection(&stru_18015AE60);
            v29 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &ReturnLength);
            v9 = v29;
            if ( v29 == -1073741789 )
            {
              Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, 2 * ReturnLength);
              BaseAddress = Heap;
              if ( !Heap )
              {
                RtlLeaveCriticalSection(&stru_18015AE60);
                return v8;
              }
              v25 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, (PWSTR)Heap, ReturnLength, &ReturnLength);
              v7 = Size;
              v9 = v25;
              v29 = v25;
            }
            RtlLeaveCriticalSection(&stru_18015AE60);
            if ( v9 == -1073741568 )
            {
              ReturnLength = 0LL;
              v9 = 0;
              v29 = 0;
            }
            else
            {
              if ( v9 < 0 )
                goto LABEL_38;
              v5 += 2 * ReturnLength + 2;
            }
            break;
          case 4:
            v5 += 4LL;
            break;
          case 5:
            if ( a3 )
            {
              v22 = (void *)sub_18004F9DC(a3);
              v7 = Size;
              Src = v22;
            }
            if ( v7 )
            {
              v5 += v7 + 2;
              break;
            }
LABEL_67:
            v36 = (void *)sub_18004F9DC(0LL);
            v5 += v33 + 2;
            break;
          case 6:
            Length = (unsigned __int16)word_1801553E8;
            goto LABEL_70;
          case 7:
            v5 += (unsigned __int16)xmmword_18015C020;
            if ( a4 )
              v5 += (unsigned __int16)xmmword_18015C020 + 22LL;
            if ( v6 )
              v31 = &xmmword_18015C020;
            break;
          default:
            Length = DestinationString.Length;
LABEL_69:
            v5 += 2LL;
LABEL_70:
            v5 += Length;
            break;
        }
      }
      else if ( stru_18015BF60.Length )
      {
        Length = stru_18015BF60.Length;
        goto LABEL_69;
      }
      ++v10;
      ++v11;
      if ( v10 >= a2 )
      {
        v4 = a2;
        break;
      }
      a3 = v39;
      a4 = v40;
    }
  }
  if ( v5 - 112 > 0xFFFE )
  {
    v9 = -1073741562;
  }
  else
  {
    v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    v8 = (int *)v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 24) = v5;
      v13 = v12 + 56;
      v14 = v31;
      v12[36] = v4;
      v15 = 0;
      *((_QWORD *)v12 + 13) = 0LL;
      if ( v14 )
      {
        *((_QWORD *)v12 + 3) = v13;
        v27 = 2;
        if ( &xmmword_18015C020 == v14 )
          v27 = 7;
        *v8 = v27;
        memmove(v13, *((const void **)v14 + 1), *(unsigned __int16 *)v14);
        v15 = 1;
        v13 += (unsigned __int64)*(unsigned __int16 *)v14 >> 1;
        if ( v40 )
          v13 = (_WORD *)sub_1800DFAF8(v13);
      }
      v16 = a2;
      v17 = 0;
      if ( a2 )
      {
        v18 = Size;
        v19 = ReturnLength;
        v20 = v37;
        while ( 1 )
        {
          if ( v14 && (*v20 == 7 || *v20 == 2) )
            goto LABEL_35;
          v8[v15] = *v20;
          *(_QWORD *)&v8[2 * v15 + 6] = v13;
          if ( *v20 )
          {
            switch ( *v20 )
            {
              case 1:
                goto LABEL_51;
              case 2:
                memmove(v13, stru_18015C030.Buffer, stru_18015C030.Length);
                v13 += (unsigned __int64)stru_18015C030.Length >> 1;
                goto LABEL_33;
              case 3:
                if ( !v19 )
                  goto LABEL_34;
                memmove(v13, BaseAddress, 2 * v19);
                v13 += v19 + 1;
                v14 = v31;
                goto LABEL_53;
              case 4:
                *((_QWORD *)v8 + 13) = v13;
                *v13 = 46;
                v13 += 2;
                *(v13 - 1) = 59;
                goto LABEL_34;
            }
            if ( *v20 != 5 )
            {
              if ( *v20 == 6 )
              {
                v28 = (void **)off_1801553D8;
                if ( off_1801553D8 == (_UNKNOWN *)&off_1801553D8 )
                {
                  v14 = v31;
                  goto LABEL_34;
                }
                do
                {
                  memmove(v13, (char *)v28 + 18, *((unsigned __int16 *)v28 + 8));
                  v13 += ((unsigned __int64)*((unsigned __int16 *)v28 + 8) >> 1) + 1;
                  *(v13 - 1) = 59;
                  v28 = (void **)*v28;
                }
                while ( v28 != (void **)&off_1801553D8 );
                v18 = Size;
                v19 = ReturnLength;
                v14 = v31;
              }
              else if ( *v20 == 7 )
              {
                memmove(v13, *((const void **)&xmmword_18015C020 + 1), (unsigned __int16)xmmword_18015C020);
                v13 += (unsigned __int64)(unsigned __int16)xmmword_18015C020 >> 1;
                if ( v40 )
                  v13 = (_WORD *)sub_1800DFAF8(v13);
              }
              else
              {
                *(v13 - 1) = 0;
                memmove(v13, DestinationString.Buffer, DestinationString.Length);
                *((_QWORD *)v8 + 11) = v13;
                v13 += ((unsigned __int64)DestinationString.Length >> 1) + 1;
              }
              goto LABEL_33;
            }
            if ( !v18 )
            {
LABEL_51:
              memmove(v13, v36, v33);
              v23 = v33;
            }
            else
            {
              memmove(v13, Src, v18);
              v23 = v18;
            }
          }
          else
          {
            if ( !stru_18015BF60.Length )
              goto LABEL_34;
            memmove(v13, stru_18015BF60.Buffer, stru_18015BF60.Length);
            v23 = stru_18015BF60.Length;
          }
          v13 += (v23 >> 1) + 1;
LABEL_53:
          *(v13 - 1) = 59;
LABEL_33:
          v20 = v37;
          v16 = a2;
LABEL_34:
          ++v15;
LABEL_35:
          ++v20;
          ++v17;
          v37 = v20;
          if ( v17 >= v16 )
          {
            v9 = v29;
            break;
          }
        }
      }
      *(v13 - 1) = 0;
    }
    else
    {
      v9 = -1073741801;
    }
  }
LABEL_38:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v8 && v9 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  return v8;
}
