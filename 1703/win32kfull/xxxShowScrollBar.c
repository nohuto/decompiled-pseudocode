/*
 * XREFs of xxxShowScrollBar @ 0x1C00D5F08
 * Callers:
 *     NtUserShowScrollBar @ 0x1C00D5E50 (NtUserShowScrollBar.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     _InitPwSB @ 0x1C00D79B4 (_InitPwSB.c)
 */

__int64 __fastcall xxxShowScrollBar(struct tagWND *a1, int a2, int a3)
{
  int v3; // ebx
  int v5; // esi
  int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v10; // edx
  int v11; // ecx

  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v10 = v7 - 1;
      if ( !v10 )
      {
        LOBYTE(v3) = a3 != 0;
        xxxShowWindowEx(a1, a3 != 0, gdwPUDFlags & 0x10000 | v3 & 0x10000);
        return 1LL;
      }
      if ( v10 == 1 )
        v6 = 3145728;
    }
    else
    {
      v6 = 0x200000;
    }
  }
  else
  {
    v6 = 0x100000;
  }
  if ( !a3 )
  {
    v8 = *((_DWORD *)a1 + 17);
    if ( (v8 & v6) == 0 )
      return 1LL;
    *((_DWORD *)a1 + 17) = v8 & ~v6;
LABEL_17:
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
    return 1LL;
  }
  v11 = *((_DWORD *)a1 + 17);
  if ( (v6 & v11) != v6 )
  {
    v5 = 1;
    *((_DWORD *)a1 + 17) = v6 | v11;
  }
  if ( !*((_QWORD *)a1 + 24) )
    InitPwSB(a1);
  if ( v5 )
    goto LABEL_17;
  return 1LL;
}
