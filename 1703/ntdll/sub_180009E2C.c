/*
 * XREFs of sub_180009E2C @ 0x180009E2C
 * Callers:
 *     sub_180009940 @ 0x180009940 (sub_180009940.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_180009F70 @ 0x180009F70 (sub_180009F70.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180009E2C(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, _QWORD, unsigned int *, _QWORD); // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  void *v12; // rcx
  __int64 (__fastcall *v13)(PVOID); // rax
  int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]

  v4 = (unsigned int)(a2 + 72 + a2);
  v6 = (a2 + 4167) & 0xFFFFF000;
  if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
  {
    _BitScanReverse(&v7, v4);
    v19 = v7 + 1;
    v4 = (unsigned int)(1 << (v7 + 1));
  }
  if ( (unsigned int)v4 <= 0x10000 )
    v4 = 0x10000LL;
  if ( (unsigned int)v4 >= 0x40000 )
    v4 = 0x40000LL;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    v9 = (__int64 (__fastcall *)(__int64, _QWORD, unsigned int *, _QWORD))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 64));
    v10 = (char *)v9 == (char *)sub_180009F70
        ? sub_180009F70(v8, (unsigned int)v4, &v18, a3)
        : v9(v8, (unsigned int)v4, &v18, a3);
    v11 = v10;
    if ( v10 )
      break;
    v4 = v18;
    if ( v18 < v6 )
      goto LABEL_17;
  }
  v12 = *(void **)(a1 + 56);
  v13 = (__int64 (__fastcall *)(PVOID))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 80));
  if ( v13 == sub_180020D20 )
    v14 = sub_180020D20(v12);
  else
    v14 = ((__int64 (__fastcall *)(void *, __int64, __int64))v13)(v12, v11, 4096LL);
  if ( v14 >= 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 40));
    v15 = (unsigned __int64)(v4 - 48) >> 4;
    memset((void *)v11, 0, 0x28uLL);
    *(_WORD *)(v11 + 32) = v15;
    *(_QWORD *)(v11 + 16) = 1LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_WORD *)(v11 + 34) = v15 ^ 0xABED;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_WORD *)(v11 + 50) = v15;
    v16 = v11;
    *(_WORD *)(v11 + 52) = 0;
    *(_QWORD *)(v11 + 48) ^= (v11 + 48) ^ qword_18015BFA8;
    return v16;
  }
LABEL_17:
  v16 = 0LL;
  if ( v11 )
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 72)))(
      *(_QWORD *)(a1 + 56),
      v11,
      a3);
  return v16;
}
