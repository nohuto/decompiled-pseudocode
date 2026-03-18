/*
 * XREFs of ViKeWaitSanityChecks @ 0x1407BA808
 * Callers:
 *     ViKeWaitForMultipleObjectsCommon @ 0x1407BA66C (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x1407BA754 (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400D9050 (RtlpGetStackLimits.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViKeWaitSanityChecks(
        unsigned int a1,
        ULONG_PTR *a2,
        char a3,
        _QWORD *a4,
        int a5,
        unsigned __int8 a6)
{
  __int64 result; // rax
  __int64 v8; // r12
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rbp
  ULONG_PTR v13; // r14
  int v14; // esi
  __int64 v15; // rdi
  ULONG_PTR v16; // rbx
  ULONG_PTR v17; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v18[4]; // [rsp+38h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v8 = a1;
  if ( a6 <= 2u )
  {
    if ( a6 != 2 )
      goto LABEL_10;
    if ( a4 )
    {
      if ( !*a4 )
        goto LABEL_10;
      v11 = 290LL;
    }
    else
    {
      v11 = 289LL;
    }
  }
  else
  {
    v11 = 288LL;
  }
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 2) != 0 )
    result = VerifierBugCheckIfAppropriate(0xC4u, v11, a6, *a2, (__int64)a4);
LABEL_10:
  if ( (MmVerifierData & 0x800) != 0 && a3 == 1 && (!a4 || *a4) && a5 )
  {
    result = RtlpGetStackLimits((__int64)v18, (__int64)&v17);
    v12 = v17;
    v13 = v18[0];
    v14 = (unsigned __int8)result;
  }
  else
  {
    v14 = 0;
    v13 = 0LL;
    v12 = 0LL;
  }
  if ( (_DWORD)v8 )
  {
    v15 = v8;
    do
    {
      v16 = *a2;
      VfUtilSynchronizationObjectSanityChecks(*a2, 1uLL);
      result = (unsigned int)MmVerifierData;
      if ( (MmVerifierData & 2) != 0 && v14 && v16 >= v13 && v16 < v12 )
        result = VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, v16, 0LL, 0LL);
      ++a2;
      --v15;
    }
    while ( v15 );
  }
  return result;
}
