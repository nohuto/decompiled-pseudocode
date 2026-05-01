/*
 * XREFs of McGenEventWriteUM @ 0x1800364D8
 * Callers:
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x180036228 (McTemplateU0qqzr1qzr3qqqqpqqzr11.c)
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x180036374 (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
 *     McTemplateU0qqqqzr3 @ 0x180038978 (McTemplateU0qqqqzr3.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x18006BF10 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13q @ 0x18006C0A8 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWriteUM(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // r10
  char v5; // r11
  __int128 v7; // xmm0
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16 *)qword_1800921B8;
  v5 = 0;
  if ( qword_1800921B8 )
  {
    *(_QWORD *)a4 = qword_1800921B8;
    *(_DWORD *)(a4 + 8) = *v4;
    *(_DWORD *)(a4 + 12) = 2;
  }
  else
  {
    a3 = (unsigned int)(a3 - 1);
    v5 = 12;
    a4 = (a4 + 16) & -(__int64)((_DWORD)a3 != 0);
  }
  if ( *((_BYTE *)a2 + 3) == v5 )
  {
    v7 = *a2;
    a2 = &v8;
    v8 = v7;
    BYTE3(v8) = v4 != 0LL ? 0xC : 0;
  }
  return EtwEventWrite(PDC_EVENT_PROVIDER_Context, a2, a3, a4, v8, *((_QWORD *)&v8 + 1));
}
