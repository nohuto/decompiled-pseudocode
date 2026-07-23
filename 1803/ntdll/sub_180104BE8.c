/*
 * XREFs of sub_180104BE8 @ 0x180104BE8
 * Callers:
 *     sub_1801055C8 @ 0x1801055C8 (sub_1801055C8.c)
 * Callees:
 *     sub_180003864 @ 0x180003864 (sub_180003864.c)
 *     sub_1800113A0 @ 0x1800113A0 (sub_1800113A0.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_18005F208 @ 0x18005F208 (sub_18005F208.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180104BE8(_DWORD *a1, const void *a2, __int64 a3, unsigned int a4)
{
  void *v8; // rax
  __int64 v9; // rdi
  size_t v10; // r8
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v8 = (void *)sub_18005F208((__int64)a1, *(_QWORD *)(a3 + 24), *(_QWORD *)(a3 + 32), a4, &v12);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 24) )
      v10 = *(_QWORD *)(a3 + 24);
    memmove(v8, a2, v10);
    if ( *(_DWORD *)(a3 + 16) )
    {
      sub_180003864((__int64)a2, *(_QWORD *)a3, v9, *(_QWORD *)(a3 + 24), a4);
      sub_1800113A0((__int64)a1, v9, a4);
    }
    sub_180016A80(a1, (unsigned __int64)a2, a4 & 0x11000001, 0LL, 0LL);
  }
  return v9;
}
