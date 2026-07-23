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

int __fastcall sub_18005F8D0(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
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
  struct _PEB *v15; // rax
  __int64 v16; // rbx
  __int64 UserModeGlobalLogger; // rcx
  void *v18; // rcx
  PVOID BaseAddress; // [rsp+20h] [rbp-29h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-21h] BYREF
  __int128 v22; // [rsp+30h] [rbp-19h] BYREF
  __int128 v23[2]; // [rsp+40h] [rbp-9h] BYREF
  char Fields[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v25; // [rsp+66h] [rbp+1Dh]
  PVOID v26; // [rsp+80h] [rbp+37h]

  v1 = (unsigned __int64)(a1 + 10);
  BaseAddress = a1;
  v2 = a1[11];
  v4 = a1[10];
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
  v10 = (unsigned __int64)BaseAddress + 424;
  while ( *(_QWORD *)v10 )
  {
    sub_1800610A4((char *)BaseAddress + 392, v10 ^ *(_QWORD *)v10);
    sub_180060688((char *)BaseAddress + 392, v11, 1LL);
  }
  sub_18005FB9C((char *)BaseAddress + 512);
  sub_18005FB48((char *)BaseAddress + 112);
  sub_18005FB48((char *)BaseAddress + 232);
  v12 = *(_OWORD *)BaseAddress;
  RegionSize = *((_QWORD *)BaseAddress + 48) - (_QWORD)BaseAddress;
  v13 = (*((_BYTE *)BaseAddress + 68) & 1) == 0;
  v22 = v12;
  if ( v13 )
  {
    v23[1] = *(_OWORD *)BaseAddress;
    sub_1800624DC(&BaseAddress, &RegionSize);
  }
  else
  {
    v23[0] = *(_OWORD *)BaseAddress;
    sub_18005F840((__int64)BaseAddress, v23);
  }
  sub_18005E008(&v22, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    sub_1800FC498(BaseAddress);
  LODWORD(v15) = RtlGetCurrentServiceSessionId();
  v16 = 2147353472LL;
  if ( (_DWORD)v15 )
  {
    v15 = NtCurrentPeb();
    UserModeGlobalLogger = (__int64)v15->SharedData->UserModeGlobalLogger;
  }
  else
  {
    UserModeGlobalLogger = 2147353472LL;
  }
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    v15 = NtCurrentPeb();
    if ( (v15->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      v18 = (void *)*(unsigned __int8 *)v16;
      v26 = BaseAddress;
      v25 = 4131;
      LODWORD(v15) = ZwTraceEvent(v18, 0x402u, 8u, Fields);
    }
  }
  return (int)v15;
}
