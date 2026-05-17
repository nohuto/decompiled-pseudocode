/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x180047C00
 * Callers:
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180075B60 (RtlCreateAndSetSD.c)
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 *     sub_18008CB8C @ 0x18008CB8C (sub_18008CB8C.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetDaclSecurityDescriptor(__int64 a1, char a2, __int64 a3, char a4)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int64 v7; // rax
  __int16 v8; // cx
  __int16 v10; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v6 = v5 | 4;
      v7 = 0LL;
      if ( a3 )
        v7 = a3;
      *(_QWORD *)(a1 + 32) = v7;
      v8 = v6 & 0xFFF7;
      *(_WORD *)(a1 + 2) = v8;
      if ( !a4 )
        return 0LL;
      v10 = v8 | 8;
    }
    else
    {
      v10 = v5 & 0xFFFB;
    }
    *(_WORD *)(a1 + 2) = v10;
    return 0LL;
  }
  return 3221225593LL;
}
