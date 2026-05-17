/*
 * XREFs of sub_18001C540 @ 0x18001C540
 * Callers:
 *     sub_18001C3EC @ 0x18001C3EC (sub_18001C3EC.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 * Callees:
 *     sub_18001C5E0 @ 0x18001C5E0 (sub_18001C5E0.c)
 *     sub_18001C638 @ 0x18001C638 (sub_18001C638.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 */

__int64 __fastcall sub_18001C540(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 *v6; // rcx
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rcx
  __int64 **v9; // r8
  __int64 *v10; // rbx
  __int64 result; // rax
  __int64 v12; // r9

  v4 = a2[5];
  if ( v4 )
  {
    v5 = sub_18001C638(a1, v4);
    v6 = *(__int64 **)(v5 + 8);
    if ( *v6 == v5 )
    {
      *a2 = v5;
      a2[1] = (__int64)v6;
      *v6 = (__int64)a2;
      *(_QWORD *)(v5 + 8) = a2;
    }
    else
    {
      sub_1800A4DFC(12, 0, v5, 0, *v6, 0LL);
    }
    sub_18001C5E0(a1, a2);
  }
  v7 = *((_BYTE *)a2 - 2);
  if ( v7 )
    v8 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = (__int64 **)(v8 + 96);
  v10 = a2 + 2;
  result = *(_QWORD *)(v8 + 96);
  v12 = *(_QWORD *)(result + 8);
  if ( v12 != v8 + 96 )
    return sub_1800A4DFC(12, 0, (_DWORD)v9, v12, 0LL, 0LL);
  *v10 = result;
  v10[1] = (__int64)v9;
  *(_QWORD *)(result + 8) = v10;
  *v9 = v10;
  return result;
}
