/*
 * XREFs of sub_18005F8D0 @ 0x18005F8D0
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18005E008 @ 0x18005E008 (sub_18005E008.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_18005FB48 @ 0x18005FB48 (sub_18005FB48.c)
 *     sub_18005FB9C @ 0x18005FB9C (sub_18005FB9C.c)
 *     sub_180060688 @ 0x180060688 (sub_180060688.c)
 *     sub_1800610A4 @ 0x1800610A4 (sub_1800610A4.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     sub_1800FC498 @ 0x1800FC498 (sub_1800FC498.c)
 *     sub_180105468 @ 0x180105468 (sub_180105468.c)
 */

unsigned int *__fastcall sub_18005F8D0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned __int64 v4; // rcx
  int v5; // esi
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // r11
  __int128 v12; // xmm0
  bool v13; // zf
  __int64 v14; // rcx
  unsigned int *result; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-29h] BYREF
  __int64 v20; // [rsp+28h] [rbp-21h] BYREF
  __int128 v21; // [rsp+30h] [rbp-19h] BYREF
  __int128 v22; // [rsp+40h] [rbp-9h] BYREF
  __int128 v23; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v24[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v25; // [rsp+66h] [rbp+1Dh]
  __int64 v26; // [rsp+80h] [rbp+37h]

  v1 = a1 + 80;
  v19 = a1;
  v2 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 80);
  if ( (v2 & 1) != 0 && v4 )
    v4 ^= v1;
  v5 = v2 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v6 = (_QWORD *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v6 = 0LL;
        }
        v7 = *(_QWORD *)(v4 + 8);
        if ( !v7 )
          break;
        v8 = v4;
        if ( v5 )
          v4 ^= v7;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v8 + 8) = 0LL;
      }
      v9 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= v4;
      sub_180105468(v4, a1);
      if ( !v9 )
        break;
      v4 = v9;
    }
    LOBYTE(v2) = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v2 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v10 = v19 + 424;
  while ( *(_QWORD *)v10 )
  {
    sub_1800610A4(v19 + 392, v10 ^ *(_QWORD *)v10);
    sub_180060688(v19 + 392, v11, 1LL);
  }
  sub_18005FB9C(v19 + 512);
  sub_18005FB48(v19 + 112);
  sub_18005FB48(v19 + 232);
  v12 = *(_OWORD *)v19;
  v20 = *(_QWORD *)(v19 + 384) - v19;
  v13 = (*(_BYTE *)(v19 + 68) & 1) == 0;
  v21 = v12;
  if ( v13 )
  {
    v23 = *(_OWORD *)v19;
    sub_1800624DC(&v19, &v20, BYTE1(v21) < 2u ? 16809984 : 0x8000, &v23);
  }
  else
  {
    v22 = *(_OWORD *)v19;
    sub_18005F840(v19, &v22);
  }
  sub_18005E008(&v21, 0);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    sub_1800FC498(v19);
  result = RtlGetCurrentServiceSessionId();
  v16 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v17 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v17 = 2147353472LL;
  }
  if ( *(_BYTE *)v17 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      v18 = *(unsigned __int8 *)v16;
      v26 = v19;
      v25 = 4131;
      return (unsigned int *)ZwTraceEvent(v18, 1026LL, 8LL, v24);
    }
  }
  return result;
}
