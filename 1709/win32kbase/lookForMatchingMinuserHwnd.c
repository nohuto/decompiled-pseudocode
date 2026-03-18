/*
 * XREFs of lookForMatchingMinuserHwnd @ 0x1C00DBB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall lookForMatchingMinuserHwnd(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r10
  bool result; // al
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = 3LL * (unsigned int)((a2 - (__int64)qword_1C018E9B8) >> 5);
  if ( *(_BYTE *)(a2 + 24) != 23 )
    return 0;
  v4 = a1[1];
  result = 0;
  v5 = a1[2];
  v6 = *((_QWORD *)gpKernelHandleTable + v2 + 1);
  if ( (!v4 || *(_QWORD *)(v6 + 400) == v4) && (!v5 || v6 == v5) )
    return *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + v2) + 56LL) == *a1;
  return result;
}
