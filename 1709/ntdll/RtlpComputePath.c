/*
 * XREFs of RtlpComputePath @ 0x18004CA08
 * Callers:
 *     RtlpComputeExePath @ 0x18007E330 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18007E380 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18007E410 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18007F7A0 (RtlpComputeDllPathWithOptions.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlQueryEnvironmentVariable @ 0x180049B30 (RtlQueryEnvironmentVariable.c)
 *     RtlpGetDirPath @ 0x18007D694 (RtlpGetDirPath.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpAddForwarderPath @ 0x1800DE478 (RtlpAddForwarderPath.c)
 */

_WORD *__fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  size_t v4; // rdi
  bool v5; // r13
  SIZE_T v6; // rbx
  _WORD *v7; // rsi
  int v8; // r15d
  __int128 *v9; // r14
  unsigned int v10; // r12d
  _DWORD *v11; // r14
  void *DirPath; // rax
  PVOID Heap; // rax
  NTSTATUS v14; // eax
  _WORD *v15; // rdi
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  unsigned int v18; // r14d
  size_t v19; // r13
  ULONG_PTR v20; // r15
  __int128 *v21; // rax
  _DWORD *v22; // rdx
  size_t v23; // rax
  void *v25; // rax
  __int64 Length; // rax
  int v27; // eax
  void **v28; // rbx
  NTSTATUS v29; // [rsp+30h] [rbp-48h]
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  __int128 *v32; // [rsp+48h] [rbp-30h]
  size_t v33; // [rsp+50h] [rbp-28h]
  PVOID BaseAddress; // [rsp+58h] [rbp-20h]
  void *Src; // [rsp+60h] [rbp-18h]
  void *v36; // [rsp+68h] [rbp-10h]
  _DWORD *v37; // [rsp+C0h] [rbp+48h]
  unsigned int v38; // [rsp+C8h] [rbp+50h]
  wchar_t *v39; // [rsp+D0h] [rbp+58h]
  char v40; // [rsp+D8h] [rbp+60h]

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v37 = a1;
  v36 = 0LL;
  v33 = 0LL;
  Src = 0LL;
  v4 = 0LL;
  v5 = ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 60) & 3) == 1;
  Size = 0LL;
  BaseAddress = 0LL;
  v6 = 112LL;
  ReturnLength = 0LL;
  v7 = 0LL;
  v29 = 0;
  v8 = 0;
  v32 = 0LL;
  v9 = 0LL;
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
            goto LABEL_69;
          case 2:
            v6 += RtlpSystemDirs.Length;
            if ( v5 )
              v32 = (__int128 *)&RtlpSystemDirs;
            break;
          case 3:
            RtlEnterCriticalSection(&FastPebLock);
            v29 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &ReturnLength);
            v8 = v29;
            if ( v29 == -1073741789 )
            {
              Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * ReturnLength);
              BaseAddress = Heap;
              if ( !Heap )
              {
                RtlLeaveCriticalSection(&FastPebLock);
                return v7;
              }
              v14 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, (PWSTR)Heap, ReturnLength, &ReturnLength);
              v4 = Size;
              v8 = v14;
              v29 = v14;
            }
            RtlLeaveCriticalSection(&FastPebLock);
            if ( v8 == -1073741568 )
            {
              ReturnLength = 0LL;
              v8 = 0;
              v29 = 0;
            }
            else
            {
              if ( v8 < 0 )
                goto LABEL_45;
              v6 += 2 * ReturnLength + 2;
            }
            a2 = v38;
            break;
          case 4:
            v6 += 4LL;
            break;
          case 5:
            if ( a3 )
            {
              DirPath = (void *)RtlpGetDirPath(a3);
              a2 = v38;
              v4 = Size;
              Src = DirPath;
            }
            if ( v4 )
            {
              v6 += v4 + 2;
              break;
            }
LABEL_69:
            v25 = (void *)RtlpGetDirPath(0LL);
            a2 = v38;
            v6 += v33 + 2;
            v36 = v25;
            break;
          case 6:
            Length = (unsigned __int16)word_1801594B8;
            goto LABEL_72;
          case 7:
            v6 += (unsigned __int16)RtlpSystem32Dirs;
            if ( a4 )
              v6 += (unsigned __int16)RtlpSystem32Dirs + 22LL;
            if ( v5 )
              v32 = &RtlpSystem32Dirs;
            break;
          default:
            Length = LdrpAppPackagesPath.Length;
LABEL_71:
            v6 += 2LL;
LABEL_72:
            v6 += Length;
            break;
        }
      }
      else if ( LdrpDllDirectory.Length )
      {
        Length = LdrpDllDirectory.Length;
        goto LABEL_71;
      }
      ++v10;
      ++v11;
      if ( v10 >= a2 )
      {
        v9 = v32;
        break;
      }
      a3 = v39;
      a4 = v40;
    }
  }
  if ( v6 - 112 > 0xFFFE )
  {
    v8 = -1073741562;
  }
  else
  {
    v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    if ( v7 )
    {
      v15 = v7 + 56;
      v7[36] = v38;
      v16 = 0;
      *((_DWORD *)v7 + 24) = v6;
      *((_QWORD *)v7 + 13) = 0LL;
      if ( v9 )
      {
        *((_QWORD *)v7 + 3) = v15;
        v27 = 7;
        if ( &RtlpSystem32Dirs != v9 )
          v27 = 2;
        *(_DWORD *)v7 = v27;
        memmove(v7 + 56, *((const void **)v9 + 1), *(unsigned __int16 *)v9);
        v16 = 1;
        v15 += (unsigned __int64)*(unsigned __int16 *)v9 >> 1;
        if ( v40 )
          v15 = (_WORD *)RtlpAddForwarderPath(v15);
      }
      v17 = v38;
      v18 = 0;
      if ( v38 )
      {
        v19 = Size;
        v20 = ReturnLength;
        v21 = v32;
        v22 = v37;
        while ( 1 )
        {
          if ( v21 && (*v22 == 2 || *v22 == 7) )
            goto LABEL_42;
          *(_DWORD *)&v7[2 * v16] = *v22;
          *(_QWORD *)&v7[4 * v16 + 12] = v15;
          if ( *v22 )
          {
            switch ( *v22 )
            {
              case 1:
                goto LABEL_37;
              case 2:
                memmove(v15, RtlpSystemDirs.Buffer, RtlpSystemDirs.Length);
                v15 += (unsigned __int64)RtlpSystemDirs.Length >> 1;
                goto LABEL_40;
              case 3:
                if ( !v20 )
                  goto LABEL_41;
                memmove(v15, BaseAddress, 2 * v20);
                v15 += v20 + 1;
                v17 = v38;
                goto LABEL_39;
              case 4:
                *((_QWORD *)v7 + 13) = v15;
                *v15 = 46;
                v15 += 2;
                *(v15 - 1) = 59;
                goto LABEL_41;
            }
            if ( *v22 != 5 )
            {
              if ( *v22 == 6 )
              {
                v28 = (void **)LdrpUserDllDirectories;
                if ( LdrpUserDllDirectories == (_UNKNOWN *)&LdrpUserDllDirectories )
                {
                  v17 = v38;
                  goto LABEL_41;
                }
                do
                {
                  memmove(v15, (char *)v28 + 18, *((unsigned __int16 *)v28 + 8));
                  v15 += ((unsigned __int64)*((unsigned __int16 *)v28 + 8) >> 1) + 1;
                  *(v15 - 1) = 59;
                  v28 = (void **)*v28;
                }
                while ( v28 != (void **)&LdrpUserDllDirectories );
                v19 = Size;
                v20 = ReturnLength;
                v17 = v38;
              }
              else if ( *v22 == 7 )
              {
                memmove(v15, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
                v15 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
                if ( v40 )
                  v15 = (_WORD *)RtlpAddForwarderPath(v15);
              }
              else
              {
                *(v15 - 1) = 0;
                memmove(v15, LdrpAppPackagesPath.Buffer, LdrpAppPackagesPath.Length);
                *((_QWORD *)v7 + 11) = v15;
                v15 += ((unsigned __int64)LdrpAppPackagesPath.Length >> 1) + 1;
              }
              goto LABEL_40;
            }
            if ( !v19 )
            {
LABEL_37:
              memmove(v15, v36, v33);
              v23 = v33;
            }
            else
            {
              memmove(v15, Src, v19);
              v23 = v19;
            }
          }
          else
          {
            if ( !LdrpDllDirectory.Length )
              goto LABEL_41;
            memmove(v15, LdrpDllDirectory.Buffer, LdrpDllDirectory.Length);
            v23 = LdrpDllDirectory.Length;
          }
          v15 += (v23 >> 1) + 1;
LABEL_39:
          *(v15 - 1) = 59;
LABEL_40:
          v22 = v37;
LABEL_41:
          v21 = v32;
          ++v16;
LABEL_42:
          ++v22;
          ++v18;
          v37 = v22;
          if ( v18 >= v17 )
          {
            v8 = v29;
            break;
          }
        }
      }
      *(v15 - 1) = 0;
    }
    else
    {
      v8 = -1073741801;
    }
  }
LABEL_45:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v7 && v8 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    return 0LL;
  }
  return v7;
}
