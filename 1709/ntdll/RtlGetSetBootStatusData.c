/*
 * XREFs of RtlGetSetBootStatusData @ 0x1800EAA10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlpGetSetBootStatusData @ 0x1800EAD84 (RtlpGetSetBootStatusData.c)
 */

__int64 __fastcall RtlGetSetBootStatusData(int a1, char a2, int a3, _BYTE *a4, int a5, _DWORD *a6)
{
  _BYTE *v6; // rbx
  __int64 result; // rax
  __int64 v10; // rcx
  char v11; // al
  _BYTE *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  _BYTE v15[4]; // [rsp+30h] [rbp-C8h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-C4h] BYREF
  _BYTE v17[144]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = a4;
  if ( a2 )
    return RtlpGetSetBootStatusData(a1, 1, a3, (_DWORD)a4, a5, (__int64)a6);
  if ( a3 == 15 )
    return 3221225485LL;
  result = RtlpGetSetBootStatusData(a1, 1, 15, (unsigned int)v15, 1, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlpGetSetBootStatusData(a1, 1, a3, (unsigned int)v17, 136, 0LL);
    if ( (int)result >= 0 )
    {
      result = RtlpGetSetBootStatusData(a1, 0, a3, (_DWORD)v6, a5, (__int64)v16);
      if ( (int)result >= 0 )
      {
        v10 = v16[0];
        if ( a6 )
          *a6 = v16[0];
        v11 = v15[0];
        if ( (_DWORD)v10 )
        {
          v12 = v17;
          v13 = v10;
          do
          {
            v11 += *v12++;
            --v13;
          }
          while ( v13 );
          v15[0] = v11;
          v14 = v10;
          do
          {
            v11 -= *v6++;
            --v14;
          }
          while ( v14 );
          v15[0] = v11;
        }
        return RtlpGetSetBootStatusData(a1, 0, 15, (unsigned int)v15, 1, 0LL);
      }
    }
  }
  return result;
}
