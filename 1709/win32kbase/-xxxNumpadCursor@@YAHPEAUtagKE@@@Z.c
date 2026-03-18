/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00120C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 *     ApiSetEditionIsSAS @ 0x1C00A2508 (ApiSetEditionIsSAS.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1)
{
  __int64 v2; // rcx
  CAsyncKeyEventMonitor *v4; // rcx
  __int64 v5; // rcx
  unsigned __int8 v6; // dl
  __int64 v7; // rax
  int v8; // eax
  __int16 *v9; // rcx
  __int64 v10; // rdx
  char v11; // [rsp+68h] [rbp+10h] BYREF

  if ( byte_1C019606C )
  {
    if ( byte_1C019606C == *((_BYTE *)a1 + 2) )
    {
      v4 = (CAsyncKeyEventMonitor *)*((unsigned __int16 *)a1 + 1);
      if ( (__int16)v4 < 0 )
      {
        xxxKeyEvent(
          v4,
          *(unsigned __int8 *)a1,
          *((_DWORD *)a1 + 1),
          0LL,
          *((_QWORD *)a1 + 1),
          (unsigned __int16 *)a1 + 8,
          0,
          0,
          0LL);
        *((_WORD *)a1 + 1) = word_1C0198990;
        *(_BYTE *)a1 = byte_1C0198992;
        byte_1C019606C = 0;
      }
      return 1LL;
    }
    xxxKeyEvent(
      (CAsyncKeyEventMonitor *)(unsigned __int16)word_1C0198990,
      (unsigned __int8)byte_1C0198992 | 0x200,
      *((_DWORD *)a1 + 1),
      0LL,
      *((_QWORD *)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL);
    byte_1C019606C = 0;
  }
  v2 = 2048LL;
  if ( (*((_WORD *)a1 + 1) & 0x800) != 0 )
  {
    LOBYTE(v2) = *((_WORD *)a1 + 1);
    if ( !(unsigned int)ApiSetEditionIsSAS(v2, &v11)
      && ((byte_1C018F564 & 2) != 0 || gptiForeground && (*((_DWORD *)gptiForeground + 296) & 0x800000) != 0) )
    {
      if ( (byte_1C018F544 & 1) != 0 )
      {
        byte_1C019606C = *((_BYTE *)a1 + 2);
        if ( (byte_1C018F568 & 4) != 0 )
        {
          v5 = 417LL;
          v6 = 54;
        }
        else
        {
          v5 = 160LL;
          v6 = 42;
        }
        byte_1C0198992 = v6;
        v7 = *((_QWORD *)a1 + 1);
        word_1C0198990 = v5;
        LOWORD(v5) = v5 | 0x8000;
        xxxKeyEvent(
          (CAsyncKeyEventMonitor *)v5,
          v6 | 0x200,
          *((_DWORD *)a1 + 1),
          0LL,
          v7,
          (unsigned __int16 *)a1 + 8,
          0,
          0,
          0LL);
      }
      else if ( (*((_WORD *)a1 + 1) & 0x2000) == 0 )
      {
        v8 = 0;
        if ( ausNumPadCvt[0] )
        {
          v9 = ausNumPadCvt;
          v10 = 0LL;
          while ( *(_BYTE *)v9 != *((_BYTE *)a1 + 2) )
          {
            ++v10;
            ++v8;
            v9 = &ausNumPadCvt[v10];
            if ( !*v9 )
              return 1LL;
          }
          *((_BYTE *)a1 + 2) = 0;
          *((_WORD *)a1 + 1) |= HIBYTE(ausNumPadCvt[v8]);
        }
      }
    }
  }
  return 1LL;
}
