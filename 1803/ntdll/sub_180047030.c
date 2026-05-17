/*
 * XREFs of sub_180047030 @ 0x180047030
 * Callers:
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_180002AEC @ 0x180002AEC (sub_180002AEC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     sub_180047138 @ 0x180047138 (sub_180047138.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_180047030(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  unsigned __int64 v8; // rcx
  int v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]
  int v18; // [rsp+70h] [rbp-18h]

  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    sub_180002AEC(v4, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v10 = 3;
  v14 = 0LL;
  v17 = 1;
  v18 = 72;
  if ( !a2 )
  {
    v5 = 0;
    if ( (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
      v5 = 2;
    v16 = v5;
  }
  sub_180047138(*(_QWORD *)(a1 + 32), &v10);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    ZwClose(v6);
  v7 = *(volatile signed __int32 **)(a1 + 72);
  if ( v7 != (volatile signed __int32 *)-1LL )
    RtlReleaseActivationContext(v7);
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
    LdrUnloadDll(v8);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
