/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0090
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180076FE0 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(unsigned __int64 a1, int a2)
{
  int v3; // edi
  unsigned __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp+8h]

  v3 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18016F4D0 + 1)
    || a1 >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
  {
    v5 = RtlpxLookupFunctionTable(a1, (__int64)&v11);
  }
  else
  {
    v5 = xmmword_18016F4D0;
    v11 = xmmword_18016F4D0;
    v12 = qword_18016F4E0;
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)&v11 + 1);
    v3 = HIDWORD(v12);
  }
  else
  {
    v6 = v13;
  }
  LdrProtectMrdata(0);
  *(_QWORD *)&xmmword_18016F4D0 = v5;
  HIDWORD(qword_18016F4E0) = v3;
  *((_QWORD *)&xmmword_18016F4D0 + 1) = v6;
  LODWORD(qword_18016F4E0) = a2;
  RtlRemoveInvertedFunctionTable(a1, v7, v8, v9);
  return LdrProtectMrdata(1);
}
