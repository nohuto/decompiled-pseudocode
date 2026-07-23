/*
 * XREFs of sub_180046F10 @ 0x180046F10
 * Callers:
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 * Callees:
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 *     sub_180045CA4 @ 0x180045CA4 (sub_180045CA4.c)
 *     sub_1800470C4 @ 0x1800470C4 (sub_1800470C4.c)
 *     sub_18004A7E4 @ 0x18004A7E4 (sub_18004A7E4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180046F10(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 *a5)
{
  int v8; // ebx
  unsigned int v9; // edi
  const WCHAR *Buffer; // rbx
  _QWORD *v11; // rdi
  unsigned int v12; // r15d
  __int16 v14[2]; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING v15; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[176]; // [rsp+60h] [rbp-A0h] BYREF

  BaseAddress[0] = 0LL;
  memset(v17, 0, 0xAAuLL);
  *(_QWORD *)&v15.Length = 0LL;
  v15.Buffer = 0LL;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return 3221225485LL;
  v8 = sub_1800470C4(BaseAddress, a2, 25LL);
  if ( v8 >= 0 )
  {
    v9 = 0;
    if ( !*(_WORD *)(a1 + 4) )
    {
LABEL_10:
      v11 = BaseAddress[0];
      v12 = 0;
      if ( *((_WORD *)BaseAddress[0] + 2) )
      {
        do
        {
          *(_DWORD *)&v15.Length = 11141120;
          v15.Buffer = (PWCH)v17;
          v8 = sub_18004576C(a2, (_WORD *)(v11[3] + 6LL * v12), &v15);
          if ( v8 < 0 )
            break;
          v8 = sub_180045CA4(a5, a2, 0, v14, v15.Buffer);
          ++v12;
        }
        while ( v12 < *((unsigned __int16 *)v11 + 2) );
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      *(_DWORD *)&v15.Length = 11141120;
      v15.Buffer = (PWCH)v17;
      v8 = sub_18004576C(a2, (_WORD *)(*(_QWORD *)(a1 + 24) + 6LL * v9), &v15);
      if ( v8 < 0 )
        break;
      Buffer = v15.Buffer;
      BaseAddress[2] = 0LL;
      sub_18004A7E4(v15.Buffer, a2, a4);
      v8 = sub_180045CA4(a5, a2, 0, v14, Buffer);
      if ( v8 < 0 )
        break;
      if ( ++v9 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_10;
    }
  }
  v11 = BaseAddress[0];
LABEL_11:
  if ( v11 )
    sub_180040BA0(v11);
  if ( v8 < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return (unsigned int)v8;
}
