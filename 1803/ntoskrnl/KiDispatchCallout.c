/*
 * XREFs of KiDispatchCallout @ 0x1400D0D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiDispatchCallout(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r10
  _BYTE *v9; // rdx
  unsigned __int64 v10; // r10
  _QWORD *v11; // rdi
  char *v12; // rcx
  char v13; // al
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r11
  __int64 v18; // r14
  __int64 result; // rax
  _DWORD v20[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+18h] BYREF
  __int64 v22; // [rsp+60h] [rbp+20h]
  __int64 v23; // [rsp+60h] [rbp+20h]

  v4 = *a4;
  *(_QWORD *)(a1 + 72) = a1 ^ *a4 ^ retaddr;
  *(_QWORD *)(a1 + 56) = v4 ^ (unsigned __int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  v20[0] = 51251211;
  retaddr = 0LL;
  v7 = 16LL;
  v8 = *(_QWORD *)(v4 + 32) ^ *(_QWORD *)(v4 + 64);
  v9 = v20;
  v10 = v8 | 0xFFFF800000000000uLL;
  v20[1] = 201785869;
  v20[2] = 251986182;
  v20[3] = 150995978;
  v11 = (_QWORD *)v10;
  v12 = (char *)v20;
  v22 = __ROR8__(v10, v10 & 0x3F);
  do
  {
    v13 = *v12++;
    *v9++ = v13 ^ 0xB;
    --v7;
  }
  while ( v7 );
  v14 = v22;
  v15 = 0LL;
  do
  {
    v16 = 16LL;
    v17 = v15 + (KiWaitAlways ^ _byteswap_uint64(v14 ^ __ROL8__(KiWaitNever ^ *v11, KiWaitNever)));
    v18 = __ROL8__(__ROR8__(v6 * (200 - v6), ~(unsigned __int8)*v11 & 0x3F) ^ v14, *(_BYTE *)v11 & 0x3F);
    *v11 = v17;
    v14 = v10 + v18;
    do
    {
      v17 = __ROR8__(*((unsigned __int8 *)v20 + (*(_BYTE *)v11 & 0xF)) | v17 & 0xFFFFFFFFFFFFFFF0uLL, 4);
      *v11 = v17;
      --v16;
    }
    while ( v16 );
    ++v11;
    ++v6;
    v15 += v10;
  }
  while ( v6 < 0x19 );
  v23 = *(_QWORD *)v10 ^ 0x85131481131482ELL;
  *(_DWORD *)v10 = -1390710795;
  *(_DWORD *)v10 ^= 0xBC2A27DB;
  ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v10)(v10, v23, 0LL, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
