/*
 * XREFs of RtlFreeActivationContextStack @ 0x180072B30
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x180072AA0 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     sub_180072D14 @ 0x180072D14 (sub_180072D14.c)
 */

void __fastcall RtlFreeActivationContextStack(unsigned __int64 a1)
{
  __int64 *v1; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  unsigned __int64 v5; // r8
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 *v8; // rsi

  if ( a1 )
  {
    v1 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 )
    {
      do
      {
        v7 = *((_DWORD *)v1 + 4);
        v8 = (__int64 *)*v1;
        if ( (v7 & 1) != 0 )
        {
          RtlReleaseActivationContext((volatile signed __int32 *)v1[1]);
          v7 = *((_DWORD *)v1 + 4);
        }
        if ( (v7 & 8) != 0 )
          sub_180072D14(a1, v1);
        v1 = v8;
      }
      while ( v8 );
    }
    *(_QWORD *)a1 = 0LL;
    v3 = *(_QWORD **)(a1 + 8);
    while ( v3 != (_QWORD *)(a1 + 8) )
    {
      v4 = (_QWORD *)*v3;
      v5 = (unsigned __int64)(v3 - 1);
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
        __fastfail(3u);
      *v6 = v4;
      v4[1] = v6;
      v3 = v4;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
