/*
 * XREFs of McGenEventWriteUM @ 0x140035E94
 * Callers:
 *     McTemplateU0q @ 0x140035F04 (McTemplateU0q.c)
 *     McTemplateU0 @ 0x140042AB4 (McTemplateU0.c)
 *     McTemplateU0zq @ 0x140042AF0 (McTemplateU0zq.c)
 *     McTemplateU0jjt @ 0x140048D58 (McTemplateU0jjt.c)
 *     McTemplateU0pqqqq @ 0x1400575B0 (McTemplateU0pqqqq.c)
 *     McTemplateU0pq @ 0x140057D2C (McTemplateU0pq.c)
 *     McTemplateU0pxxq @ 0x140058DF8 (McTemplateU0pxxq.c)
 *     McTemplateU0pqqq @ 0x140059900 (McTemplateU0pqqq.c)
 *     McTemplateU0pqqqx @ 0x140059990 (McTemplateU0pqqqx.c)
 *     McTemplateU0pxqxq @ 0x140059A30 (McTemplateU0pxqxq.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWriteUM(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // r10
  char v5; // r11
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16 *)qword_1400890E8;
  v5 = 0;
  if ( qword_1400890E8 )
  {
    *(_QWORD *)a4 = qword_1400890E8;
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
  return EtwEventWrite(AUDIO_EVENT_PROVIDER_Context, a2, a3, a4, v8, *((_QWORD *)&v8 + 1));
}
