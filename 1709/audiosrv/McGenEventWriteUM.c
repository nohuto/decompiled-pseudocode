/*
 * XREFs of McGenEventWriteUM @ 0x18006487C
 * Callers:
 *     McTemplateU0zq @ 0x1800648EC (McTemplateU0zq.c)
 *     McTemplateU0 @ 0x1800906F8 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x180090734 (McTemplateU0zqttq.c)
 *     McTemplateU0p @ 0x180091380 (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x1800913D8 (McTemplateU0pq.c)
 *     McTemplateU0qzz @ 0x1800A7290 (McTemplateU0qzz.c)
 *     McTemplateU0pxx @ 0x1800AB5EC (McTemplateU0pxx.c)
 *     McTemplateU0qqqqqqq @ 0x1800ABB38 (McTemplateU0qqqqqqq.c)
 *     McTemplateU0qzq @ 0x1800ACF80 (McTemplateU0qzq.c)
 *     McTemplateU0z @ 0x1800B8B88 (McTemplateU0z.c)
 *     McTemplateU0q @ 0x1800D9A8C (McTemplateU0q.c)
 *     McTemplateU0jjt @ 0x1800DD4B4 (McTemplateU0jjt.c)
 *     McTemplateU0qqqqzr3 @ 0x1800DEF90 (McTemplateU0qqqqzr3.c)
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x1800DF040 (McTemplateU0qqzr1qzr3qqqqpqqzr11.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x1800DF194 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13 @ 0x1800DF334 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13.c)
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13q @ 0x1800DF4B4 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x1800DF648 (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWriteUM(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // r11
  char v5; // bl
  __int64 v6; // r10
  __int128 v7; // xmm0
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16 *)a1[1];
  v5 = 0;
  v6 = a4;
  if ( v4 )
  {
    *(_QWORD *)a4 = v4;
    *(_DWORD *)(a4 + 8) = *v4;
    *(_DWORD *)(a4 + 12) = 2;
  }
  else
  {
    a3 = (unsigned int)(a3 - 1);
    v5 = 12;
    v6 = (a4 + 16) & -(__int64)((_DWORD)a3 != 0);
  }
  if ( *((_BYTE *)a2 + 3) == v5 )
  {
    v7 = *a2;
    a2 = &v9;
    v9 = v7;
    BYTE3(v9) = v4 != 0LL ? 0xC : 0;
  }
  return EtwEventWrite(*a1, a2, a3, v6, v9, *((_QWORD *)&v9 + 1));
}
