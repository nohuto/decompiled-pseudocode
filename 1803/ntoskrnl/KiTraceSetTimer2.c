/*
 * XREFs of KiTraceSetTimer2 @ 0x14024AF18
 * Callers:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x140087660 (KiUpdateTimer2Flags.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiTraceCancelTimer2 @ 0x14024AD58 (KiTraceCancelTimer2.c)
 */

__int64 __fastcall KiTraceSetTimer2(__int64 a1, char a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // r15
  char v7; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  char v12; // cl
  char v13; // dl
  char v14; // cl
  _QWORD *v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  int v18; // [rsp+3Ch] [rbp-44h]
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  unsigned __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  char v24; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_BYTE *)(a1 + 129);
  v19[0] = *(_QWORD *)(a1 + 72);
  v19[1] = *(_QWORD *)(a1 + 80);
  v20 = *(_QWORD *)(a1 + 88);
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, a3, 0);
  if ( a3 == 1 )
    KxReleaseSpinLock(&KiTimer2CollectionLock);
  v9 = __ROL8__(v4 ^ KiWaitNever, KiWaitNever);
  v10 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ KiWaitNever, KiWaitNever));
  v11 = KiWaitAlways ^ _byteswap_uint64(a1 ^ v9);
  if ( a2 )
    KiTraceCancelTimer2(a1, v11);
  v22 = v11;
  v21 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v11 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
  v23 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v10 ^ KiWaitAlways), KiWaitNever));
  v12 = (2 * (v7 & 2)) | 8;
  if ( (v7 & 4) == 0 )
    v12 = 2 * (v7 & 2);
  v13 = v12;
  v14 = v12 | 0x10;
  if ( (v7 & 8) == 0 )
    v14 = v13;
  v24 = v14;
  if ( v11 )
  {
    v14 |= 1u;
    v24 = v14;
  }
  if ( v20 )
    v24 = v14 | 2;
  v18 = 0;
  v16 = v19;
  v17 = 56;
  return EtwTraceKernelEvent((int)&v16, 1, 0x40020000u, 3944, 6298370);
}
