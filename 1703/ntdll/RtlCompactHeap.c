/*
 * XREFs of RtlCompactHeap @ 0x1800EF180
 * Callers:
 *     sub_180100E1C @ 0x180100E1C (sub_180100E1C.c)
 * Callees:
 *     sub_18000638C @ 0x18000638C (sub_18000638C.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_180100E1C @ 0x180100E1C (sub_180100E1C.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2)
{
  int v4; // edx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  struct _TEB *v8; // rbx
  char v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v9 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    sub_18000638C((__int64)Src);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)Src + 29) | a2;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return sub_180100E1C(Src);
    }
    else
    {
      v5 = 0LL;
      v10 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v9 = 1;
      }
      v6 = sub_1800EFFE8(Src);
      if ( v6 )
      {
        v5 = 16LL * *(unsigned __int16 *)(v6 + 8);
        v10 = v5;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
          *(_DWORD *)(v6 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v7 = *((_QWORD *)Src + 31);
        if ( *(_QWORD *)(v7 + 40) > v5 )
          v5 = *(_QWORD *)(v7 + 40);
        v10 = v5;
      }
      if ( !v5 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v8 = NtCurrentTeb();
        v8->LastErrorValue = RtlNtStatusToDosError(0);
        v5 = v10;
      }
      if ( v9 )
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      return v5;
    }
  }
}
