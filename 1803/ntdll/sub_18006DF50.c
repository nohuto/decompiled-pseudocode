/*
 * XREFs of sub_18006DF50 @ 0x18006DF50
 * Callers:
 *     sub_18006DC50 @ 0x18006DC50 (sub_18006DC50.c)
 *     sub_18006DCE0 @ 0x18006DCE0 (sub_18006DCE0.c)
 *     sub_18006DD40 @ 0x18006DD40 (sub_18006DD40.c)
 *     sub_18006DE80 @ 0x18006DE80 (sub_18006DE80.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlQueryEnvironmentVariable @ 0x180022780 (RtlQueryEnvironmentVariable.c)
 *     sub_18006E510 @ 0x18006E510 (sub_18006E510.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D9378 @ 0x1800D9378 (sub_1800D9378.c)
 */

_QWORD *__fastcall sub_18006DF50(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  __int16 v4; // r14
  SIZE_T v5; // rbx
  bool v6; // r13
  size_t v7; // rdi
  _QWORD *v8; // rsi
  int v9; // r15d
  unsigned int v10; // r12d
  _DWORD *v11; // r14
  PVOID Heap; // rax
  NTSTATUS v13; // eax
  _WORD *v14; // rax
  _WORD *v15; // rdi
  __int128 *v16; // rbx
  unsigned int v17; // r14d
  unsigned int v18; // r8d
  unsigned int v19; // r12d
  size_t v20; // r13
  ULONG_PTR v21; // r15
  _DWORD *v22; // rdx
  void *v24; // rax
  size_t v25; // rax
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
            v5 += stru_18015CFD0.Length;
            if ( v6 )
              v31 = (__int128 *)&stru_18015CFD0;
            break;
          case 3:
            RtlEnterCriticalSection(&stru_18015BE80);
            v29 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &ReturnLength);
            v9 = v29;
            if ( v29 == -1073741789 )
            {
              Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1572864, 2 * ReturnLength);
              BaseAddress = Heap;
              if ( !Heap )
              {
                RtlLeaveCriticalSection(&stru_18015BE80);
                return v8;
              }
              v13 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, (PWSTR)Heap, ReturnLength, &ReturnLength);
              v7 = Size;
              v9 = v13;
              v29 = v13;
            }
            RtlLeaveCriticalSection(&stru_18015BE80);
            if ( v9 == -1073741568 )
            {
              ReturnLength = 0LL;
              v9 = 0;
              v29 = 0;
            }
            else
            {
              if ( v9 < 0 )
                goto LABEL_46;
              v5 += 2 * ReturnLength + 2;
            }
            break;
          case 4:
            v5 += 4LL;
            break;
          case 5:
            if ( a3 )
            {
              v24 = (void *)sub_18006E510(a3);
              v7 = Size;
              Src = v24;
            }
            if ( v7 )
            {
              v5 += v7 + 2;
              break;
            }
LABEL_67:
            v36 = (void *)sub_18006E510(0LL);
            v5 += v33 + 2;
            break;
          case 6:
            Length = (unsigned __int16)word_1801564B8;
            goto LABEL_70;
          case 7:
            v5 += (unsigned __int16)xmmword_18015CFC0;
            if ( a4 )
              v5 += (unsigned __int16)xmmword_18015CFC0 + 22LL;
            if ( v6 )
              v31 = &xmmword_18015CFC0;
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
      else if ( stru_18015CFE8.Length )
      {
        Length = stru_18015CFE8.Length;
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
    v14 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    v8 = v14;
    if ( v14 )
    {
      *((_DWORD *)v14 + 24) = v5;
      v15 = v14 + 56;
      v16 = v31;
      v14[36] = v4;
      v17 = 0;
      *((_QWORD *)v14 + 13) = 0LL;
      if ( v16 )
      {
        v27 = 7;
        v8[3] = v15;
        if ( &xmmword_18015CFC0 != v16 )
          v27 = 2;
        *(_DWORD *)v8 = v27;
        memmove(v15, *((const void **)v16 + 1), *(unsigned __int16 *)v16);
        v17 = 1;
        v15 += (unsigned __int64)*(unsigned __int16 *)v16 >> 1;
        if ( v40 )
          v15 = (_WORD *)sub_1800D9378(v15);
      }
      v18 = a2;
      v19 = 0;
      if ( a2 )
      {
        v20 = Size;
        v21 = ReturnLength;
        v22 = v37;
        while ( 1 )
        {
          if ( v16 && (*v22 == 2 || *v22 == 7) )
            goto LABEL_43;
          *((_DWORD *)v8 + v17) = *v22;
          v8[v17 + 3] = v15;
          if ( !*v22 )
            break;
          if ( *v22 == 1 )
            goto LABEL_58;
          if ( *v22 != 2 )
          {
            if ( *v22 == 3 )
            {
              if ( !v21 )
                goto LABEL_42;
              memmove(v15, BaseAddress, 2 * v21);
              v15 += v21 + 1;
              v16 = v31;
            }
            else
            {
              if ( *v22 == 4 )
              {
                v8[13] = v15;
                *v15 = 46;
                v15 += 2;
                *(v15 - 1) = 59;
                goto LABEL_42;
              }
              if ( *v22 != 5 )
              {
                if ( *v22 == 6 )
                {
                  v28 = (void **)off_1801564A8;
                  if ( off_1801564A8 == (_UNKNOWN *)&off_1801564A8 )
                  {
                    v16 = v31;
                    goto LABEL_42;
                  }
                  do
                  {
                    memmove(v15, (char *)v28 + 18, *((unsigned __int16 *)v28 + 8));
                    v15 += ((unsigned __int64)*((unsigned __int16 *)v28 + 8) >> 1) + 1;
                    *(v15 - 1) = 59;
                    v28 = (void **)*v28;
                  }
                  while ( v28 != (void **)&off_1801564A8 );
                  v20 = Size;
                  v21 = ReturnLength;
                  v16 = v31;
                }
                else if ( *v22 == 7 )
                {
                  memmove(v15, *((const void **)&xmmword_18015CFC0 + 1), (unsigned __int16)xmmword_18015CFC0);
                  v15 += (unsigned __int64)(unsigned __int16)xmmword_18015CFC0 >> 1;
                  if ( v40 )
                    v15 = (_WORD *)sub_1800D9378(v15);
                }
                else
                {
                  *(v15 - 1) = 0;
                  memmove(v15, DestinationString.Buffer, DestinationString.Length);
                  v8[11] = v15;
                  v15 += ((unsigned __int64)DestinationString.Length >> 1) + 1;
                }
                goto LABEL_41;
              }
              if ( v20 )
              {
                memmove(v15, Src, v20);
                v25 = v20;
              }
              else
              {
LABEL_58:
                memmove(v15, v36, v33);
                v25 = v33;
              }
LABEL_59:
              v15 += (v25 >> 1) + 1;
            }
            *(v15 - 1) = 59;
            goto LABEL_41;
          }
          memmove(v15, stru_18015CFD0.Buffer, stru_18015CFD0.Length);
          v15 += (unsigned __int64)stru_18015CFD0.Length >> 1;
LABEL_41:
          v22 = v37;
          v18 = a2;
LABEL_42:
          ++v17;
LABEL_43:
          ++v22;
          ++v19;
          v37 = v22;
          if ( v19 >= v18 )
          {
            v9 = v29;
            goto LABEL_45;
          }
        }
        if ( !stru_18015CFE8.Length )
          goto LABEL_42;
        memmove(v15, stru_18015CFE8.Buffer, stru_18015CFE8.Length);
        v25 = stru_18015CFE8.Length;
        goto LABEL_59;
      }
LABEL_45:
      *(v15 - 1) = 0;
    }
    else
    {
      v9 = -1073741801;
    }
  }
LABEL_46:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v8 && v9 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  return v8;
}
