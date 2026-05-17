/*
 * XREFs of RtlGetUserInfoHeap @ 0x1800634E0
 * Callers:
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_1800637EC @ 0x1800637EC (sub_1800637EC.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

char __fastcall RtlGetUserInfoHeap(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rbx
  int v8; // r15d
  __int64 v9; // rcx
  char v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // edx
  char v13; // cl
  __int64 v14; // rax
  struct _TEB *v15; // rbx
  int v17; // r9d
  int v18; // ecx
  int v19; // ecx
  struct _TEB *v20; // rbx
  char v21; // [rsp+31h] [rbp-27h]
  int v22; // [rsp+34h] [rbp-24h]
  __int64 v23; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v21 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v22 = sub_18001BD60(a2);
    v18 = *(_DWORD *)(a1 + 64);
    if ( v18 && v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v22 |= 1u;
    if ( (dword_180159760 & 2) != 0 && v6 )
      v6 -= *(_QWORD *)(v6 - 16);
    return sub_1800637EC(a1, v6, v22, v17, (__int64)a5);
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return sub_180100300(a1, v8, a3, (_DWORD)a4, (__int64)a5);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = sub_18006377C(a1, a3);
    v10 = 1;
  }
  else
  {
    v10 = 1;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v9 = sub_18006377C(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v19 = 9;
      }
      else
      {
        v9 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
        if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
          goto LABEL_5;
        LODWORD(a3) = v9;
        v19 = 8;
      }
      sub_18009A5F0(v19, a1, a3, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
  {
    if ( *(char *)(v9 + 15) >= 0 )
    {
      v11 = v6 - 16;
      _m_prefetchw((const void *)v11);
      if ( *(_BYTE *)(v11 + 15) == 5 )
        v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
      v23 = v11;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v21 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v12 = *(_DWORD *)(v11 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v11 + 8) = v12;
        v13 = v12 ^ BYTE1(v12) ^ BYTE2(v12);
        a2 = HIBYTE(v12);
        if ( (_BYTE)a2 != v13 )
          sub_1800FC010(a1, v11);
      }
      if ( (*(_BYTE *)(v11 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v11 + 10) & 2) != 0 )
        {
          v14 = sub_180063B6C(v11, a2);
          if ( a4 )
            *a4 = *(_QWORD *)(v14 + 8);
        }
        if ( a5 )
          *a5 = 16 * (*(_BYTE *)(v11 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v11 = v23;
        v10 = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
        *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v21 )
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      return v10;
    }
    if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
    {
      if ( a5 )
        *a5 = 0;
      return v10;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v20 = NtCurrentTeb();
  v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
