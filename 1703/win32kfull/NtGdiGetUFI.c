/*
 * XREFs of NtGdiGetUFI @ 0x1C00286D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetUFI @ 0x1C00287F0 (GreGetUFI.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetUFI(HDC a1, _QWORD *a2, char *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int UFI; // ebx
  _DWORD *v10; // rcx
  _DWORD **v11; // rsi
  char v12; // al
  int v13; // r14d
  size_t v14; // r8
  char *v15; // rax
  _DWORD *v16; // rcx
  int v18; // [rsp+40h] [rbp-A8h] BYREF
  int v19; // [rsp+44h] [rbp-A4h] BYREF
  size_t Size; // [rsp+48h] [rbp-A0h]
  __int64 v21; // [rsp+50h] [rbp-98h]
  char Src[80]; // [rsp+60h] [rbp-88h] BYREF

  v18 = 0;
  UFI = GreGetUFI(a1, (__int64)&v18, (__int64)&v19, 0LL);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = v21;
    v10 = a6;
    v11 = (_DWORD **)W32UserProbeAddress;
    if ( (unsigned __int64)a6 >= W32UserProbeAddress )
      v10 = (_DWORD *)W32UserProbeAddress;
    v12 = v19;
    *v10 = v19;
    if ( (v12 & 2) != 0 && a3 )
    {
      v13 = Size;
      v14 = (unsigned int)Size;
      v15 = &a3[(unsigned int)Size];
      if ( (unsigned __int64)v15 > W32UserProbeAddress || v15 <= a3 )
      {
        *W32UserProbeAddress = 0;
        v11 = (_DWORD **)W32UserProbeAddress;
      }
      memmove(a3, Src, v14);
      if ( a4 >= *v11 )
        a4 = *v11;
      *a4 = v13;
      v16 = a5;
      if ( a5 >= *v11 )
        v16 = *v11;
      *v16 = v18;
    }
  }
  return UFI;
}
