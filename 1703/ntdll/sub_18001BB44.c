/*
 * XREFs of sub_18001BB44 @ 0x18001BB44
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_18008350C @ 0x18008350C (sub_18008350C.c)
 * Callees:
 *     sub_18001BD90 @ 0x18001BD90 (sub_18001BD90.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     sub_180030384 @ 0x180030384 (sub_180030384.c)
 */

__int64 __fastcall sub_18001BB44(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v4; // eax
  __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+34h] [rbp+Ch]

  v7 = *(unsigned int *)(a2 + 8);
  v2 = 0;
  *(_DWORD *)(a1 + 128) = v7;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  v5 = qword_18015C218;
  v6 = byte_18015C220 & 1;
  v14 = v7;
  LOBYTE(v7) = 0;
  v15 = v4;
  if ( qword_18015C218 )
  {
    while ( 1 )
    {
      if ( (int)sub_18001BD90(&v14, v5, v7) < 0 )
      {
        v8 = *(_QWORD *)v5;
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_8:
            LOBYTE(v7) = 0;
            break;
          }
          v8 ^= v5;
        }
        if ( !v8 )
          goto LABEL_8;
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_9:
            LOBYTE(v7) = 1;
            break;
          }
          v8 ^= v5;
        }
        if ( !v8 )
          goto LABEL_9;
      }
      v5 = v8;
    }
  }
  RtlRbInsertNodeEx(&qword_18015C218, v5, v7, a1 + 224);
  v10 = qword_18015C208;
  v11 = byte_18015C210 & 1;
  if ( qword_18015C208 )
  {
    while ( 1 )
    {
      if ( (int)sub_180030384(*(_QWORD *)(a1 + 48), v10) >= 0 )
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          if ( !v12 )
          {
LABEL_17:
            v2 = 1;
            break;
          }
          v12 ^= v10;
        }
        if ( !v12 )
          goto LABEL_17;
      }
      else
      {
        v12 = *(_QWORD *)v10;
        if ( v11 )
        {
          if ( !v12 )
            break;
          v12 ^= v10;
        }
        if ( !v12 )
          break;
      }
      v10 = v12;
    }
  }
  LOBYTE(v9) = v2;
  result = RtlRbInsertNodeEx(&qword_18015C208, v10, v9, a1 + 200);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
