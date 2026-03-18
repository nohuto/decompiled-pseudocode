/*
 * XREFs of UsbhGetPerformanceInfo @ 0x1C004F0CC
 * Callers:
 *     UsbhPdoQueryWmiDataBlock @ 0x1C004F250 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhGetPerformanceInfo(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _DWORD *v7; // r14
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, _DWORD *, __int64, _DWORD *); // r10
  __int64 result; // rax
  unsigned int v12; // esi
  int v13; // ecx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  int v16; // eax
  int v17; // ecx
  _DWORD v18[4]; // [rsp+30h] [rbp-51h] BYREF
  _DWORD v19[10]; // [rsp+40h] [rbp-41h] BYREF
  __int128 v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  int v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+84h] [rbp+3h]
  int v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+8Ch] [rbp+Bh]
  int v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+94h] [rbp+13h]

  v7 = PdoExt(a1);
  v8 = *((_QWORD *)v7 + 147);
  v18[0] = 0;
  v19[0] = 0;
  v9 = FdoExt(v8);
  v10 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, __int64, _DWORD *))*((_QWORD *)v9 + 555);
  if ( !v10 )
  {
    result = 3221225474LL;
LABEL_3:
    *a4 = 0;
    return result;
  }
  result = v10(*((_QWORD *)v9 + 529), a5, v19, 88LL, v18);
  v12 = result;
  if ( (int)result < 0 || v18[0] != 88 )
    goto LABEL_3;
  memset(a2, 0, 0xE4uLL);
  v13 = v19[2];
  v14 = v20;
  a2[1] = v19[4];
  v15 = v21;
  a2[5] = v19[5];
  a2[3] = v19[8];
  a2[7] = v19[9];
  a2[2] = v19[6];
  a2[6] = v19[7];
  a2[14] = v22;
  a2[15] = v23;
  a2[16] = v24;
  a2[50] = v27;
  a2[49] = v26;
  v16 = v25;
  *a2 = v13;
  v17 = v19[3];
  a2[48] = v16;
  a2[4] = v17;
  *((_OWORD *)a2 + 2) = v14;
  *((_QWORD *)a2 + 6) = v15;
  *(_OWORD *)(a2 + 17) = *(_OWORD *)((char *)v7 + 2434);
  *(_OWORD *)(a2 + 21) = *(_OWORD *)((char *)v7 + 2450);
  *(_OWORD *)(a2 + 25) = *(_OWORD *)((char *)v7 + 2466);
  *(_OWORD *)(a2 + 29) = *(_OWORD *)((char *)v7 + 2482);
  *(_OWORD *)(a2 + 33) = *(_OWORD *)((char *)v7 + 2498);
  a2[47] = v7[290];
  result = v12;
  *a4 = 228;
  return result;
}
