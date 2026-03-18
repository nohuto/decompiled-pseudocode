/*
 * XREFs of xxxAdjustSize @ 0x1C0041AE8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ConstrainWindowSize @ 0x1C006A144 (ConstrainWindowSize.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void *__fastcall xxxAdjustSize(__int64 a1, int *a2, int *a3)
{
  void *result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-48h] BYREF

  result = memset(v14, 0, sizeof(v14));
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0 || (*(_BYTE *)(a1 + 70) & 4) != 0 )
  {
    xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v14, 0LL, 0);
    if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
    {
      v7 = v14[0];
      v8 = v14[1];
    }
    else
    {
      v7 = v14[3];
      v8 = v14[4];
    }
    v9 = v8;
    if ( *a2 < (int)v8 )
      v9 = *a2;
    if ( (int)v7 <= v9 )
    {
      v10 = v8;
      if ( *a2 < (int)v8 )
        v10 = *a2;
    }
    else
    {
      v10 = v7;
    }
    *a2 = v10;
    v11 = HIDWORD(v8);
    v12 = v11;
    if ( *a3 < (int)v11 )
      v12 = *a3;
    v13 = HIDWORD(v7);
    if ( (int)v13 <= v12 )
    {
      if ( *a3 < (int)v11 )
        LODWORD(v11) = *a3;
      LODWORD(v13) = v11;
    }
    *a3 = v13;
    return (void *)ConstrainWindowSize(a2, a3);
  }
  return result;
}
