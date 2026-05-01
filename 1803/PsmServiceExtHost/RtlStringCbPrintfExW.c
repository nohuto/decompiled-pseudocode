/*
 * XREFs of RtlStringCbPrintfExW @ 0x18006AF00
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18002AD14 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x180069D00 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x18006B0AC (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x18006B0D0 (RtlStringExHandleOtherFlagsW.c)
 */

__int64 RtlStringCbPrintfExW(
        wchar_t *a1,
        unsigned __int64 a2,
        wchar_t **a3,
        _QWORD *a4,
        unsigned int a5,
        const wchar_t *a6,
        ...)
{
  unsigned __int64 v7; // rdi
  int v10; // ebx
  __int64 v11; // r8
  wchar_t *v12; // r12
  const wchar_t *v13; // r9
  int v14; // eax
  unsigned __int64 v15; // rcx
  wchar_t *v17; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v18[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v7 = a2 >> 1;
  v10 = 0;
  v11 = 3221225485LL;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *a1 = 0;
    return (unsigned int)v10;
  }
  v17 = a1;
  v12 = a1;
  v18[0] = a2 >> 1;
  if ( (a5 & 0x100) != 0 )
  {
    v13 = &pwsz;
    if ( a6 )
      v13 = a6;
  }
  else
  {
    v13 = a6;
  }
  v10 = 0;
  if ( (a5 & 0xFFFFE000) == 0 )
  {
    if ( v7 )
    {
      v18[0] = 0LL;
      v14 = RtlStringVPrintfWorkerW(a1, v7, v18, v13, va);
      v15 = v18[0];
      v10 = v14;
      v7 -= v18[0];
      v18[0] = v7;
      v12 = &a1[v15];
      v17 = v12;
      if ( v14 < 0 )
        goto LABEL_24;
      if ( (a5 & 0x200) != 0 )
        RtlStringExHandleFillBehindNullW(&a1[v15], (a2 & 1) + 2 * v7, a5);
    }
    else
    {
      if ( !*v13 )
        goto LABEL_29;
      v10 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( v10 < 0 )
      goto LABEL_24;
LABEL_29:
    if ( a3 )
      *a3 = v12;
    if ( a4 )
      *a4 = (a2 & 1) + 2 * v7;
    return (unsigned int)v10;
  }
  v10 = -1073741811;
  if ( v7 )
    *a1 = 0;
LABEL_24:
  if ( (a5 & 0x1C00) != 0 && a2 )
  {
    RtlStringExHandleOtherFlagsW(a1, a2, v11, &v17, v18, a5);
    v12 = v17;
    v7 = v18[0];
  }
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
    goto LABEL_29;
  return (unsigned int)v10;
}
