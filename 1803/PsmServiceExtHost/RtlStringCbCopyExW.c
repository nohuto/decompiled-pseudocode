/*
 * XREFs of RtlStringCbCopyExW @ 0x18002AE48
 * Callers:
 *     GetNormalizedObjectPath @ 0x18002AFF4 (GetNormalizedObjectPath.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x18002AF7C (RtlStringCopyWorkerW_0.c)
 */

__int64 __fastcall RtlStringCbCopyExW(_WORD *a1, unsigned __int64 a2, _WORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned __int64 v5; // rbx
  _WORD *v6; // rdi
  int v7; // r10d
  char v9; // si
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2 >> 1;
  v6 = a1;
  v7 = 0;
  v9 = a2;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v7 = -1073741811;
  if ( v7 >= 0 )
  {
    v7 = 0;
    if ( v5 )
    {
      v11 = 0LL;
      v7 = RtlStringCopyWorkerW_0(a1, a2 >> 1, &v11, a3);
      v5 -= v11;
      v6 += v11;
      if ( v7 < 0 )
        goto LABEL_12;
    }
    else
    {
      if ( !*a3 )
        goto LABEL_7;
      v7 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( v7 >= 0 )
    {
LABEL_7:
      if ( a4 )
        *a4 = v6;
      if ( a5 )
        *a5 = (v9 & 1) + 2 * v5;
      return (unsigned int)v7;
    }
LABEL_12:
    if ( v7 != -2147483643 )
      return (unsigned int)v7;
    goto LABEL_7;
  }
  if ( v5 )
    *a1 = 0;
  return (unsigned int)v7;
}
