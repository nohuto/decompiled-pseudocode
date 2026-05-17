/*
 * XREFs of sub_18000AE60 @ 0x18000AE60
 * Callers:
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 * Callees:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 */

__int64 __fastcall sub_18000AE60(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

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
    sub_1800A4DFC(12, 0, v2, v5, v6, 0LL);
  }
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 40);
  v16 = 0LL;
  v17 = v7;
  v9 = sub_18001E5E0(v4, &v17, &v16, 0x8000LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v10, v12, v13) )
    v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    sub_1800FDEE8(v8, v17, v16);
  return v9;
}
