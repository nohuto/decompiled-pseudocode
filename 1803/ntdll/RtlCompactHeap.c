/*
 * XREFs of RtlCompactHeap @ 0x1800EAF00
 * Callers:
 *     sub_1800FF9D0 @ 0x1800FF9D0 (sub_1800FF9D0.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800603AC @ 0x1800603AC (sub_1800603AC.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 *     sub_1800FF9D0 @ 0x1800FF9D0 (sub_1800FF9D0.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2)
{
  int v4; // edx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int16 v7; // dx
  __int64 v8; // rax
  struct _TEB *v9; // rbx
  char v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v10 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    sub_1800603AC((__int64)Src, a2 & 1);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)Src + 29) | a2;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return sub_1800FF9D0(Src);
    }
    else
    {
      v5 = 0LL;
      v11 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v10 = 1;
      }
      v6 = sub_1800EC04C(Src);
      if ( v6 )
      {
        v7 = *(_WORD *)(v6 + 8);
        v5 = 16LL * v7;
        v11 = v5;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v6 + 11) = HIBYTE(v7) ^ v7 ^ *(_BYTE *)(v6 + 10);
          *(_DWORD *)(v6 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v8 = *((_QWORD *)Src + 31);
        if ( *(_QWORD *)(v8 + 40) > v5 )
          v5 = *(_QWORD *)(v8 + 40);
        v11 = v5;
      }
      if ( !v5 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v9 = NtCurrentTeb();
        v9->LastErrorValue = RtlNtStatusToDosError(0);
        v5 = v11;
      }
      if ( v10 )
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      return v5;
    }
  }
}
