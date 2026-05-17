/*
 * XREFs of RtlSetUserValueHeap @ 0x180063860
 * Callers:
 *     sub_180100D3C @ 0x180100D3C (sub_180100D3C.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_180100D3C @ 0x180100D3C (sub_180100D3C.c)
 */

char __fastcall RtlSetUserValueHeap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r15
  char v7; // r12
  __int64 v8; // r10
  int v9; // ecx
  char v10; // si
  __int64 v11; // rax
  unsigned int v13; // r14d
  unsigned __int8 *v14; // rbx
  char v15; // al
  unsigned int v16; // edx
  char v17; // cl
  struct _TEB *v18; // rbx
  struct _TEB *v19; // rbx
  int v20; // ecx
  struct _TEB *v21; // rbx
  char v22; // [rsp+30h] [rbp-38h]
  unsigned int v23; // [rsp+34h] [rbp-34h]

  v6 = 0;
  v7 = 0;
  v22 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v23 = sub_18001BD60(a2);
    v9 = *(_DWORD *)(a1 + 64);
    v10 = 1;
    if ( v9 && v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v23 |= 1u;
    if ( (dword_180159760 & 2) != 0 && v8 )
      v8 -= *(_QWORD *)(v8 - 16);
    v11 = sub_180063A64(a1, v8, v23 | *(_DWORD *)(a1 + 20), 0LL);
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v10 = 0;
    else
      *(_QWORD *)(v11 + 8) = a4;
    if ( !v10 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v19 = NtCurrentTeb();
      v19->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v10;
  }
  v13 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return sub_180100D3C(a1, v13);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v14 = sub_18006377C(a1, a3);
    goto LABEL_17;
  }
  if ( (a3 & 0xF) != 0 )
  {
    v20 = 9;
    goto LABEL_43;
  }
  v14 = (unsigned __int8 *)(a3 - 16);
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v14 -= 16 * v14[14];
  if ( (v14[15] & 0x3F) == 0 )
  {
    LODWORD(a3) = (_DWORD)v14;
    v20 = 8;
LABEL_43:
    sub_18009A5F0(v20, a1, a3, 0, 0LL, 0LL);
    v14 = 0LL;
  }
LABEL_17:
  if ( !v14 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v21 = NtCurrentTeb();
    v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (v13 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v7 = 1;
    v22 = 1;
  }
  v15 = v14[15];
  if ( (v15 & 0x3F) != 0 )
  {
    if ( v15 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v16 = *((_DWORD *)v14 + 2) ^ *(_DWORD *)(a1 + 136);
        *((_DWORD *)v14 + 2) = v16;
        v17 = v16 ^ BYTE1(v16) ^ BYTE2(v16);
        a2 = HIBYTE(v16);
        if ( (_BYTE)a2 != v17 )
          sub_1800FC010(a1, v14);
      }
      if ( (v14[10] & 2) != 0 )
      {
        *(_QWORD *)(sub_180063B6C(v14, a2) + 8) = a4;
        v6 = 1;
      }
      goto LABEL_29;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v18 = NtCurrentTeb();
    v18->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    v7 = v22;
    v6 = 0;
  }
  v14 = 0LL;
LABEL_29:
  if ( v14 && *(_DWORD *)(a1 + 124) )
  {
    v14[11] = v14[8] ^ v14[9] ^ v14[10];
    *((_DWORD *)v14 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v7 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v6;
}
