/*
 * XREFs of sub_180041510 @ 0x180041510
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     sub_180031574 @ 0x180031574 (sub_180031574.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     sub_18004148C @ 0x18004148C (sub_18004148C.c)
 *     sub_180041624 @ 0x180041624 (sub_180041624.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     wcscat_s @ 0x1800969F0 (wcscat_s.c)
 */

NTSTATUS __fastcall sub_180041510(PCWSTR Source, PCWSTR a2, unsigned int *a3, wchar_t *a4)
{
  NTSTATUS result; // eax
  int v9; // ebx
  wchar_t *v10; // r15
  __int64 v11; // rdi
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // r14d
  rsize_t v16; // rdi
  wchar_t *Sourcea; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  char v19; // [rsp+40h] [rbp-C0h] BYREF

  Sourcea = 0LL;
  if ( (unsigned __int8)sub_180041624() )
    return -1073740959;
  if ( !Source || !a2 || !a3 )
    return -1073741811;
  *(_DWORD *)&Destination.Length = 46006272;
  Destination.Buffer = (PWCH)&v19;
  result = RtlAppendUnicodeToString(&Destination, a2);
  if ( result >= 0 )
  {
    v9 = sub_18004148C(Destination.Buffer, &Sourcea);
    if ( v9 >= 0 )
    {
      v10 = Sourcea;
      v11 = -1LL;
      do
        ++v11;
      while ( Sourcea[v11] );
      LODWORD(Sourcea) = *a3;
      v12 = 2 * v11;
      v13 = sub_180031574(Source, (unsigned int *)&Sourcea, a4);
      v14 = (int)Sourcea;
      v9 = v13;
      if ( v13 == -1073741789 )
        *a3 = v12 + (_DWORD)Sourcea + 16;
      if ( v13 >= 0 )
      {
        v15 = v12 + v14 + 16;
        v16 = (unsigned __int64)v15 >> 1;
        if ( v15 <= *a3 )
        {
          wcscat_s(a4, v16, L"\\Windows");
          wcscat_s(a4, v16, v10);
        }
        else
        {
          v9 = -1073741789;
        }
        *a3 = v15;
      }
    }
    return v9;
  }
  return result;
}
