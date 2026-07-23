/*
 * XREFs of sub_1800F3D68 @ 0x1800F3D68
 * Callers:
 *     sub_1800F355C @ 0x1800F355C (sub_1800F355C.c)
 *     sub_1800F36C8 @ 0x1800F36C8 (sub_1800F36C8.c)
 *     sub_1800F3B70 @ 0x1800F3B70 (sub_1800F3B70.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800F3E58 @ 0x1800F3E58 (sub_1800F3E58.c)
 */

char __fastcall sub_1800F3D68(size_t Size, unsigned __int16 a2, int a3, __int64 a4, void *Src, size_t Sizea)
{
  unsigned int v6; // ebx
  size_t v8; // rsi
  unsigned __int64 v11; // rax
  char *v12; // rdi
  char result; // al
  _DWORD v14[4]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v15; // [rsp+30h] [rbp-228h]
  _BYTE v16[520]; // [rsp+38h] [rbp-220h] BYREF

  v6 = dword_1801597A4;
  v8 = (unsigned int)Size;
  v11 = (unsigned int)(dword_1801597A4 + Size);
  if ( (unsigned int)v11 < dword_1801597A4 )
    return 0;
  v12 = (char *)qword_18015D7F0;
  if ( !qword_18015D7F0 )
    return 0;
  if ( v11 > *(_QWORD *)qword_18015D7F0 )
  {
    if ( (unsigned __int8)sub_1800F3E58() )
    {
      v6 = 88;
      *((_DWORD *)qword_18015D7F0 + 15) = 0;
      v12 = (char *)qword_18015D7F0;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v14[0] = v8;
  v14[1] = a2;
  v14[2] = a3;
  v15 = a4;
  if ( Sizea <= 0x200 )
    memmove(v16, Src, Sizea);
  memmove(&v12[v6], v14, v8);
  dword_1801597A4 = v8 + v6;
  result = 1;
  ++*((_DWORD *)qword_18015D7F0 + 15);
  return result;
}
