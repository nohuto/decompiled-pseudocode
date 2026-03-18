/*
 * XREFs of NtGdiExtGetObjectW @ 0x1C00461D0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtGdiExtGetObjectW(int a1, unsigned int a2, char *a3)
{
  int v6; // r15d
  int v7; // ebx
  int ObjectW; // eax
  unsigned int v9; // edi
  char *v10; // rcx
  _BYTE Src[592]; // [rsp+20h] [rbp-288h] BYREF

  v6 = a1 & 0x7F0000;
  memset(Src, 0, sizeof(Src));
  if ( a2 > 0x250 )
    a2 = 592;
  v7 = a2;
  if ( v6 == 0x100000 )
    v7 = 16;
  ObjectW = GreExtGetObjectW(a1);
  v9 = ObjectW;
  if ( v6 == 0x100000 && v7 >= (int)a2 )
    v7 = a2;
  if ( ObjectW && a3 )
  {
    if ( v7 < ObjectW )
      ObjectW = v7;
    v10 = &a3[ObjectW];
    if ( (unsigned __int64)v10 > W32UserProbeAddress || v10 <= a3 || ((unsigned __int8)a3 & 1) != 0 )
      *W32UserProbeAddress = 0;
    memmove(a3, Src, ObjectW);
  }
  return v9;
}
