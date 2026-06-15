/*
 * XREFs of _lambda_c9878382eb39d33d8256bbfdbaf238ac_::operator() @ 0x18010F6E4
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180111300 (-MoveNext@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_c9878382eb39d33d8256bbfdbaf238ac_::operator()(_QWORD *a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  bool **v3; // r11
  _BYTE ***v4; // rdi
  unsigned __int32 v5; // r10d
  bool v6; // zf
  signed __int32 v7; // eax

  v1 = *a1;
  v2 = 0;
  v3 = (bool **)a1[1];
  v4 = (_BYTE ***)a1[2];
  v5 = *(_DWORD *)(*a1 + 72LL);
  while ( 1 )
  {
    **v3 = 0;
    if ( v5 >= *(_DWORD *)(v1 + 76) )
      break;
    **v3 = v5 + 1 < *(_DWORD *)(v1 + 76);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 72), v5 + 1, v5);
    v6 = v5 == v7;
    v5 = v7;
    if ( v6 )
      return v2;
    ***v4 = 0;
  }
  v2 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
  return v2;
}
