/*
 * XREFs of RtlFreeActivationContextStack @ 0x1800782F0
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x180078260 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_1800784E4 @ 0x1800784E4 (sub_1800784E4.c)
 */

void __fastcall RtlFreeActivationContextStack(unsigned __int64 a1)
{
  __int64 *v1; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  unsigned __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 *v7; // rsi

  if ( a1 )
  {
    v1 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 )
    {
      do
      {
        v7 = (__int64 *)*v1;
        if ( (v1[2] & 1) != 0 )
          RtlReleaseActivationContext((volatile signed __int32 *)v1[1]);
        if ( (v1[2] & 8) != 0 )
          sub_1800784E4(a1, v1);
        v1 = v7;
      }
      while ( v7 );
    }
    *(_QWORD *)a1 = 0LL;
    v3 = *(_QWORD **)(a1 + 8);
    if ( v3 != (_QWORD *)(a1 + 8) )
    {
      do
      {
        v4 = (_QWORD *)*v3;
        v5 = (unsigned __int64)(v3 - 1);
        v6 = (_QWORD *)v3[1];
        if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v6 != v3 )
          __fastfail(3u);
        *v6 = v4;
        v4[1] = v6;
        v3 = v4;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
      }
      while ( v4 != (_QWORD *)(a1 + 8) );
    }
    if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
