/*
 * XREFs of ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01F00D8
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1774 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F183C (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 */

__int64 __fastcall AbnormalDDEPost(struct tagDDECONV *a1, int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r8

  v2 = 0;
  if ( (*((_DWORD *)a1 + 20) & 2) == 0 )
  {
    v4 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
    v5 = 0LL;
    if ( v4 )
      v5 = *v4;
    PostMessage(*((_QWORD *)a1 + 6), 993LL, v5, 0LL);
  }
  LOBYTE(v2) = a2 == 993;
  return v2;
}
