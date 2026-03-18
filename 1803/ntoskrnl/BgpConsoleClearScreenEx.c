/*
 * XREFs of BgpConsoleClearScreenEx @ 0x14083F998
 * Callers:
 *     BgpConsoleInitialize @ 0x14083D9A0 (BgpConsoleInitialize.c)
 *     BgpConsoleClearScreen @ 0x14083F960 (BgpConsoleClearScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x140165060 (BgpClearScreen.c)
 */

__int64 __fastcall BgpConsoleClearScreenEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // r8d
  _DWORD *v5; // r10
  __int64 v6; // r9
  unsigned int v7; // eax
  __int64 v8; // r11
  __int64 i; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax

  v2 = qword_1403D1800;
  v3 = *(unsigned int *)(qword_1403D1800 + 16);
  *(_DWORD *)(qword_1403D1800 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  v4 = BgpClearScreen(v3, a2);
  if ( v4 >= 0 )
  {
    v5 = (_DWORD *)qword_1403D1800;
    v6 = 0LL;
    v7 = *(_DWORD *)(qword_1403D1800 + 4);
    v8 = 80LL;
    do
    {
      for ( i = 0LL; (unsigned int)i < v7; v7 = v5[1] )
      {
        v10 = 3 * (v6 + i);
        LOWORD(v5[v10 + 22]) = 32;
        v11 = v6 + i + 7;
        i = (unsigned int)(i + 1);
        v5[3 * v11] = v5[4];
        v5[v10 + 20] = v5[3];
      }
      v6 += 25LL;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v4;
}
