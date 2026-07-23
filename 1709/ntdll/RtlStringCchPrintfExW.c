/*
 * XREFs of RtlStringCchPrintfExW @ 0x18006C3D8
 * Callers:
 *     RtlFormatMessageEx @ 0x18006BD70 (RtlFormatMessageEx.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x18006C4F8 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800D0D3C (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1800F5690 (RtlStringExHandleFillBehindNullW.c)
 */

__int64 RtlStringCchPrintfExW(
        _WORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        unsigned int a5,
        const WCHAR *a6,
        ...)
{
  int v9; // ebx
  _WORD *v10; // r12
  unsigned __int64 v11; // rsi
  const WCHAR *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  _WORD *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v9 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v10 = a1;
    v17[0] = a2;
    v11 = a2;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &word_18011E4A0;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v9 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v17[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(a1, a2, v17, v12, va);
      v14 = v17[0];
      v9 = v13;
      v11 = a2 - v17[0];
      v17[0] = a2 - v17[0];
      v10 = &a1[v14];
      v16 = v10;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 )
          RtlStringExHandleFillBehindNullW(&a1[v14], 2 * v11, a5);
        goto LABEL_11;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_11:
        if ( a3 )
          *a3 = v10;
        if ( a4 )
          *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW(a1, 2 * a2, a3, &v16, v17, a5);
      v10 = v16;
      v11 = v17[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_11;
  }
  return (unsigned int)v9;
}
