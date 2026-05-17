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

__int64 __fastcall sub_180041510(__int64 a1, _WORD *a2, unsigned int *a3, wchar_t *a4)
{
  __int64 result; // rax
  int v9; // ebx
  wchar_t *v10; // r15
  __int64 v11; // rdi
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // r14d
  rsize_t v16; // rdi
  wchar_t *Source; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+28h] [rbp-D8h] BYREF
  wchar_t *String1; // [rsp+30h] [rbp-D0h]
  char v20; // [rsp+40h] [rbp-C0h] BYREF

  Source = 0LL;
  if ( (unsigned __int8)sub_180041624() )
    return 3221226337LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v18 = 46006272;
  String1 = (wchar_t *)&v20;
  result = RtlAppendUnicodeToString((unsigned __int16 *)&v18, a2);
  if ( (int)result >= 0 )
  {
    v9 = sub_18004148C(String1, &Source);
    if ( v9 >= 0 )
    {
      v10 = Source;
      v11 = -1LL;
      do
        ++v11;
      while ( Source[v11] );
      LODWORD(Source) = *a3;
      v12 = 2 * v11;
      v13 = sub_180031574(a1, (unsigned int *)&Source, a4);
      v14 = (int)Source;
      v9 = v13;
      if ( v13 == -1073741789 )
        *a3 = v12 + (_DWORD)Source + 16;
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
    return (unsigned int)v9;
  }
  return result;
}
