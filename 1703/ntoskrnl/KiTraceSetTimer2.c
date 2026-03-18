/*
 * XREFs of KiTraceSetTimer2 @ 0x140206604
 * Callers:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiUpdateTimer2Flags @ 0x14012AFB0 (KiUpdateTimer2Flags.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiTraceCancelTimer2 @ 0x140206444 (KiTraceCancelTimer2.c)
 */

void *__fastcall KiTraceSetTimer2(__int64 a1, char a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // r15
  char v7; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  char v14; // cl
  char v15; // dl
  char v16; // cl
  _QWORD *v18; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+38h] [rbp-48h]
  int v20; // [rsp+3Ch] [rbp-44h]
  _QWORD v21[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+58h] [rbp-28h]
  unsigned __int64 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h]
  char v26; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_BYTE *)(a1 + 129);
  v21[0] = *(_QWORD *)(a1 + 72);
  v21[1] = *(_QWORD *)(a1 + 80);
  v22 = *(_QWORD *)(a1 + 88);
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, a3, 0);
  if ( a3 == 1 )
    KxReleaseSpinLock(&KiTimer2CollectionLock);
  v9 = KiWaitNever;
  v10 = KiWaitAlways;
  v11 = __ROL8__(v4 ^ KiWaitNever, KiWaitNever);
  v12 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ KiWaitNever, KiWaitNever));
  v13 = KiWaitAlways ^ _byteswap_uint64(a1 ^ v11);
  if ( a2 )
  {
    KiTraceCancelTimer2(a1, v13);
    v9 = KiWaitNever;
    v10 = KiWaitAlways;
  }
  v24 = v13;
  v23 = 0x7E35C6C7F3DD7277LL * (v9 ^ __ROR8__(v13 ^ _byteswap_uint64(a1 ^ v10), v9));
  v25 = 0x7E35C6C7F3DD7277LL * (v9 ^ __ROR8__(a1 ^ _byteswap_uint64(v12 ^ v10), v9));
  v14 = (2 * (v7 & 2)) | 8;
  if ( (v7 & 4) == 0 )
    v14 = 2 * (v7 & 2);
  v15 = v14;
  v16 = v14 | 0x10;
  if ( (v7 & 8) == 0 )
    v16 = v15;
  v26 = v16;
  if ( v13 )
  {
    v16 |= 1u;
    v26 = v16;
  }
  if ( v22 )
    v26 = v16 | 2;
  v20 = 0;
  v18 = v21;
  v19 = 56;
  return EtwTraceKernelEvent((int)&v18, 1, 0x40020000u, 3944, 6298370);
}
