/*
 * XREFs of sub_18005D664 @ 0x18005D664
 * Callers:
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 */

__int64 __fastcall sub_18005D664(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  void *v7; // rax
  __int64 v8; // rdi
  unsigned __int32 v9; // ebx
  __int64 v10; // rdx
  ULONG_PTR v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID v13; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 32);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *v4;
  if ( *v4 == v5 && v6 == v2 )
  {
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  else
  {
    sub_18009A5F0(13, 0, v2, v5, v6, 0LL);
  }
  v7 = *(void **)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 40);
  v12 = 0LL;
  v13 = v7;
  v9 = sub_18005CD8C((__int64)v4, &v13, &v12, 0x8000u);
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v10 = 2147353480LL;
  if ( *(_BYTE *)v10 )
    sub_1800FC524(v8, v13, v12);
  return v9;
}
