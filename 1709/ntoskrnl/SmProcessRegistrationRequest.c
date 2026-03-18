/*
 * XREFs of SmProcessRegistrationRequest @ 0x140738924
 * Callers:
 *     SmQueryStoreInformation @ 0x1405721BC (SmQueryStoreInformation.c)
 * Callees:
 *     SmGetRegistrationInfo @ 0x1407382CC (SmGetRegistrationInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessRegistrationRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0uLL;
  if ( a2 != 16 )
    return 3221225990LL;
  if ( a4 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v7 = a1;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 15) = *(_BYTE *)(v7 + 15);
  }
  v8 = *(_OWORD *)a1;
  if ( (_BYTE)v8 != 2 || (v8 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  result = SmGetRegistrationInfo(a4, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)a1 = v8;
    *a3 = 16;
  }
  return result;
}
