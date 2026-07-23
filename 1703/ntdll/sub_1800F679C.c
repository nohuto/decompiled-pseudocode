/*
 * XREFs of sub_1800F679C @ 0x1800F679C
 * Callers:
 *     sub_1800F6208 @ 0x1800F6208 (sub_1800F6208.c)
 *     sub_1800F6374 @ 0x1800F6374 (sub_1800F6374.c)
 *     sub_1800F65B0 @ 0x1800F65B0 (sub_1800F65B0.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800F68A4 @ 0x1800F68A4 (sub_1800F68A4.c)
 */

char __fastcall sub_1800F679C(size_t Size, unsigned __int16 a2, int a3, __int64 a4, void *Src, size_t Sizea)
{
  unsigned int v6; // ebx
  size_t v8; // rsi
  unsigned int v11; // r10d
  int v12; // eax
  char result; // al
  char *v14; // rdi
  _DWORD v15[4]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v16; // [rsp+30h] [rbp-228h]
  _BYTE v17[520]; // [rsp+38h] [rbp-220h] BYREF

  v6 = dword_180158E1C;
  v8 = (unsigned int)Size;
  v11 = dword_180158E1C + Size;
  if ( dword_180158E1C + (int)Size < (unsigned int)dword_180158E1C )
  {
    v11 = -1;
    v12 = -1073741675;
  }
  else
  {
    v12 = 0;
  }
  if ( (v12 & 0xC0000000) == 0xC0000000 )
    return 0;
  v14 = (char *)qword_18015C7A8;
  if ( !qword_18015C7A8 )
    return 0;
  if ( (unsigned __int64)v11 > *(_QWORD *)qword_18015C7A8 )
  {
    if ( (unsigned __int8)sub_1800F68A4() )
    {
      v6 = 88;
      *((_DWORD *)qword_18015C7A8 + 15) = 0;
      v14 = (char *)qword_18015C7A8;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  v15[0] = v8;
  v15[1] = a2;
  v15[2] = a3;
  v16 = a4;
  if ( Sizea <= 0x200 )
    memmove(v17, Src, Sizea);
  memmove(&v14[v6], v15, v8);
  dword_180158E1C = v8 + v6;
  result = 1;
  ++*((_DWORD *)qword_18015C7A8 + 15);
  return result;
}
