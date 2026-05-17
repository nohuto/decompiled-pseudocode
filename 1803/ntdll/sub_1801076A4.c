/*
 * XREFs of sub_1801076A4 @ 0x1801076A4
 * Callers:
 *     EtwSendNotification @ 0x1800081C0 (EtwSendNotification.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

__int64 __fastcall sub_1801076A4(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7,
        _DWORD *a8,
        int a9)
{
  __int64 v9; // r13
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // r15
  unsigned __int64 Heap; // r12
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rbx
  NTSTATUS v18; // r8d
  unsigned __int64 v19; // rdx
  int v20; // ecx
  ULONG v21; // eax
  _DWORD *v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rax
  int v26; // [rsp+30h] [rbp-28h]
  int v27; // [rsp+34h] [rbp-24h]
  __int64 v28; // [rsp+40h] [rbp-18h]
  _DWORD *v29; // [rsp+48h] [rbp-10h]
  char v30; // [rsp+A0h] [rbp+48h]

  v28 = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  v10 = 0;
  v26 = 0;
  v11 = 0;
  v12 = a5;
  v13 = 0LL;
  Heap = 0LL;
  v30 = 0;
  v15 = 0LL;
  v16 = a4;
  if ( a9 == 4 || a9 == 11 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, a6);
    if ( !Heap )
      return 8;
    v9 = a5 + 72;
    v28 = a5;
    v15 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 8LL * a4);
    if ( !v15 )
    {
      v11 = 8;
      goto LABEL_40;
    }
    v16 = a4;
  }
  if ( !v16 )
    goto LABEL_35;
  do
  {
    v17 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
    v18 = ZwTraceControl();
    v19 = ((((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64)
        - v17;
    if ( a2 <= v19 )
    {
      v11 = 1460;
      goto LABEL_40;
    }
    a2 -= v19;
    v20 = (a5 + 7) & 0xFFFFFFF8;
    LODWORD(a5) = v20;
    if ( !v18 )
    {
      v11 = 0;
LABEL_14:
      if ( !a3 )
      {
        if ( v28 )
        {
          if ( *(_DWORD *)(v12 + 4) >= 0xF8u )
          {
            if ( *(_DWORD *)(v12 + 76) == 1 )
            {
              *(_DWORD *)(v15 + 8 * v13) = *(_DWORD *)(v12 + 32);
              *(_WORD *)(v15 + 8 * v13 + 4) = *(_WORD *)(v12 + 80);
              *(_WORD *)(v15 + 8 * v13 + 6) = *(_WORD *)(v12 + 236);
              v20 = a5;
            }
            v13 = (unsigned int)(v13 + 1);
            if ( (_DWORD)v13 == 1 )
            {
              v12 = Heap;
            }
            else if ( *(_DWORD *)(v12 + 76) != 1 )
            {
              v22 = (_DWORD *)(v9 + 104);
              v23 = 4LL;
              do
              {
                *v22 += *(_DWORD *)((char *)v22 + v12 + 72 - v9);
                ++v22;
                --v23;
              }
              while ( v23 );
            }
          }
        }
        else
        {
          v24 = (_DWORD *)(v12 + 8);
          *(_DWORD *)(v12 + 8) = v20;
          v20 = a5;
          v12 += (unsigned int)a5;
          v29 = v24;
          a6 -= a5;
        }
      }
      v26 += v20;
      goto LABEL_29;
    }
    v21 = RtlNtStatusToDosError(v18);
    v11 = v21;
    if ( !v21 )
    {
      v20 = a5;
      goto LABEL_14;
    }
    if ( v21 != 122 )
      break;
    v26 += a5;
    v30 = 1;
LABEL_29:
    ++v10;
  }
  while ( v10 < a4 );
  if ( (_DWORD)v13 )
  {
    if ( *(_DWORD *)(v9 + 4) == 1 )
    {
      v11 = ZwTraceControl();
      if ( !v11 && v27 == 2 )
        *(_WORD *)(v9 + 8) = a9;
    }
  }
LABEL_35:
  *a7 = v10;
  *a8 = v26;
  if ( v29 )
    *v29 = 0;
  if ( !v11 && v30 )
    v11 = 122;
LABEL_40:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v15 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
  return v11;
}
