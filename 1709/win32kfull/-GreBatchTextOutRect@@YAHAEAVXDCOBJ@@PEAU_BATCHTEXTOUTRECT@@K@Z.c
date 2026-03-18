/*
 * XREFs of ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C001C7D8
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0029360 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001C99C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreBatchTextOutRect(struct XDCOBJ *a1, struct tagRECT *a2, unsigned int a3)
{
  __int64 v4; // rcx
  int v5; // esi
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagRECT v12; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-40h]

  if ( a3 < 0x28 )
    return 0LL;
  if ( ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = *a2;
  *(struct tagRECT *)v13 = a2[1];
  *(_QWORD *)&v13[16] = *(_QWORD *)&a2[2].left;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 36);
  if ( v5 != v12.top )
  {
    *(_DWORD *)(v4 + 32) = v12.top;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = *(_DWORD *)&v13[20];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v8 = *(_QWORD *)(v7 + 336);
  if ( v8 != *(_QWORD *)&v13[12] )
  {
    *(_DWORD *)(v7 + 336) = *(_DWORD *)&v13[12];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = *(_DWORD *)&v13[16];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  ExtTextOutRect(a1, (struct tagRECT *)&v12.bottom);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v9 + 32) != v5 )
  {
    *(_DWORD *)(v9 + 32) = v5;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = v6;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( v8 != *(_QWORD *)(v10 + 336) )
  {
    *(_DWORD *)(v10 + 336) = v8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = HIDWORD(v8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  return 1LL;
}
