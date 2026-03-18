/*
 * XREFs of lookForMatchingMinuserHwnd @ 0x1C00D57B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall lookForMatchingMinuserHwnd(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  bool result; // al
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r9

  v2 = (char *)gpKernelHandleTable + 16 * (unsigned int)((a2 - (__int64)qword_1C0189E38) >> 5);
  if ( *(_BYTE *)(a2 + 24) != 23 )
    return 0;
  v4 = a1[1];
  result = 0;
  v5 = a1[2];
  v6 = v2[1];
  if ( (!v4 || *(_QWORD *)(v6 + 376) == v4) && (!v5 || v6 == v5) )
    return *(_QWORD *)(*v2 + 56LL) == *a1;
  return result;
}
