/*
 * XREFs of McGenEventWriteUM @ 0x18004ADD4
 * Callers:
 *     McTemplateU0qqqqzr3 @ 0x18004AE44 (McTemplateU0qqqqzr3.c)
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x18004AEEC (McTemplateU0qqzr1qzr3qqqqpqqzr11.c)
 *     McTemplateU0qqzr1qzr3qqqxqpqqqzr13q @ 0x18004B038 (McTemplateU0qqzr1qzr3qqqxqpqqqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13q @ 0x18004B1D0 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13q.c)
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x18004B35C (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWriteUM(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // r10
  char v5; // r11
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16 *)qword_180067148;
  v5 = 0;
  if ( qword_180067148 )
  {
    *(_QWORD *)a4 = qword_180067148;
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
    v6 = *a2;
    a2 = &v8;
    v8 = v6;
    BYTE3(v8) = v4 != 0LL ? 0xC : 0;
  }
  return EtwEventWrite(PDC_EVENT_PROVIDER_Context, a2, a3, a4, v8, *((_QWORD *)&v8 + 1));
}
