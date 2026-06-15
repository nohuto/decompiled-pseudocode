/*
 * XREFs of McGenEventWriteUM @ 0x180017BB0
 * Callers:
 *     McTemplateU0 @ 0x1800021C0 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x1800021FC (McTemplateU0zqttq.c)
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13 @ 0x180005CD0 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13.c)
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x180005E50 (McTemplateU0qqzr1qzr3qqqqpqqzr11.c)
 *     McTemplateU0zq @ 0x180049E20 (McTemplateU0zq.c)
 *     McTemplateU0z @ 0x180049EB8 (McTemplateU0z.c)
 *     McTemplateU0qqqqzr3 @ 0x18005AB54 (McTemplateU0qqqqzr3.c)
 *     McTemplateU0p @ 0x1800C7108 (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x1800C7160 (McTemplateU0pq.c)
 *     McTemplateU0qzz @ 0x1800E1EB0 (McTemplateU0qzz.c)
 *     McTemplateU0pxx @ 0x1800E607C (McTemplateU0pxx.c)
 *     McTemplateU0jjt @ 0x18010B2E0 (McTemplateU0jjt.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x18010C6C8 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13q @ 0x18010C868 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x18010C9FC (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWriteUM(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // r11
  char v5; // bl
  __int64 v6; // r10
  __int128 v8; // xmm0
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
    v8 = *a2;
    a2 = &v9;
    v9 = v8;
    BYTE3(v9) = v4 != 0LL ? 0xC : 0;
  }
  return EtwEventWrite(*a1, a2, a3, v6, v9, *((_QWORD *)&v9 + 1));
}
