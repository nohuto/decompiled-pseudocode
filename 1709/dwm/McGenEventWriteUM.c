/*
 * XREFs of McGenEventWriteUM @ 0x1400049BC
 * Callers:
 *     McTemplateU0 @ 0x140004A2C (McTemplateU0.c)
 *     McTemplateU0q @ 0x140004A68 (McTemplateU0q.c)
 *     McTemplateU0qqq @ 0x140004AC8 (McTemplateU0qqq.c)
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
