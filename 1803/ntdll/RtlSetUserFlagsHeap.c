/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800EB820
 * Callers:
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

char __fastcall RtlSetUserFlagsHeap(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rbx
  int v8; // ecx
  char v9; // di
  unsigned __int64 v10; // rax
  struct _TEB *v11; // rbx
  ULONG v12; // eax
  int v13; // r12d
  unsigned __int8 *v14; // rcx
  int v15; // ecx
  __int64 v16; // rbx
  int v17; // edx
  struct _TEB *v18; // rbx
  char v19; // r15
  char v21; // [rsp+31h] [rbp-37h]
  __int64 v22; // [rsp+38h] [rbp-30h]
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v6 = a3;
  v21 = 0;
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    goto LABEL_41;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v13 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
      return sub_180100B78(a1, v13, a3, a4, a5);
    v9 = 1;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v14 = sub_18006377C(a1, a3);
      goto LABEL_25;
    }
    if ( (a3 & 0xF) != 0 )
    {
      v15 = 9;
    }
    else
    {
      v14 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v14 -= 16 * v14[14];
      if ( (v14[15] & 0x3F) != 0 )
      {
LABEL_25:
        if ( v14 && (v14[15] & 0x80u) == 0 )
        {
          if ( (v13 & 1) == 0 )
          {
            RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
            v21 = 1;
          }
          v16 = v6 - 16;
          _m_prefetchw((const void *)v16);
          if ( *(_BYTE *)(v16 + 15) == 5 )
            v16 -= 16LL * *(unsigned __int8 *)(v16 + 14);
          v22 = v16;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v17 = *(_DWORD *)(v16 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v16 + 8) = v17;
            if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
              sub_1800FC010(a1, v16);
          }
          if ( (*(_BYTE *)(v16 + 15) & 0x3F) != 0 )
          {
            v19 = *(_BYTE *)(v16 + 10) & ~(unsigned __int8)(a4 >> 4);
            *(_BYTE *)(v16 + 10) = v19;
            *(_BYTE *)(v16 + 10) = v19 | (a5 >> 4);
          }
          else
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v18 = NtCurrentTeb();
            v18->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            v9 = 0;
            v16 = v22;
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
            *(_DWORD *)(v16 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          if ( v21 )
            RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
          return v9;
        }
LABEL_41:
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v11 = NtCurrentTeb();
        v12 = RtlNtStatusToDosError(-1073741811);
        v9 = 0;
        goto LABEL_42;
      }
      a3 = (__int64)v14;
      v15 = 8;
    }
    sub_18009A5F0(v15, a1, a3, 0LL, 0LL, 0LL);
    v14 = 0LL;
    goto LABEL_25;
  }
  v23 = sub_18001BD60(a2);
  v8 = *(_DWORD *)(a1 + 64);
  v9 = 1;
  if ( v8 && v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v23 |= 1u;
  if ( !v6 )
    goto LABEL_41;
  if ( (dword_180159760 & 2) != 0 )
    v6 -= *(_QWORD *)(v6 - 16);
  v10 = sub_180063A64(a1, v6, v23 | *(_DWORD *)(a1 + 20), 0LL);
  if ( v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v9 = 0;
  else
    *(_BYTE *)(v10 + 2) = *(_BYTE *)(v10 + 2) & ((16 * ~BYTE1(a4)) | 0xF) | (16 * BYTE1(a5));
  if ( !v9 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v11 = NtCurrentTeb();
    v12 = RtlNtStatusToDosError(-1073741811);
LABEL_42:
    v11->LastErrorValue = v12;
  }
  return v9;
}
