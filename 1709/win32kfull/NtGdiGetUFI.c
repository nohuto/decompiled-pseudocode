/*
 * XREFs of NtGdiGetUFI @ 0x1C00FFF40
 * Callers:
 *     <none>
 * Callees:
 *     GreGetUFI @ 0x1C010006C (GreGetUFI.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, ULONG64 a6)
{
  unsigned int UFI; // ebx
  _DWORD *v10; // rcx
  _DWORD **v11; // rsi
  char v12; // al
  int v13; // r14d
  size_t v14; // r8
  ULONG64 v15; // rax
  _DWORD *v16; // rcx
  int v18; // [rsp+40h] [rbp-A8h] BYREF
  int v19; // [rsp+44h] [rbp-A4h] BYREF
  size_t Size; // [rsp+48h] [rbp-A0h]
  __int64 v21; // [rsp+50h] [rbp-98h]
  _BYTE Src[80]; // [rsp+60h] [rbp-88h] BYREF

  v18 = 0;
  UFI = GreGetUFI(a1, (__int64)&v18, (__int64)&v19, 0LL);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v21;
    v10 = (_DWORD *)a6;
    v11 = (_DWORD **)MmUserProbeAddress;
    if ( a6 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    v12 = v19;
    *v10 = v19;
    if ( (v12 & 2) != 0 && a3 )
    {
      v13 = Size;
      v14 = (unsigned int)Size;
      v15 = (ULONG64)a3 + (unsigned int)Size;
      if ( v15 > MmUserProbeAddress || v15 <= (unsigned __int64)a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v11 = (_DWORD **)MmUserProbeAddress;
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
