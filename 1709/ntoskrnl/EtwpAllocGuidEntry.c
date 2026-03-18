/*
 * XREFs of EtwpAllocGuidEntry @ 0x140489654
 * Callers:
 *     EtwpAddGuidEntry @ 0x14048972C (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14048685C (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x140492ADC (EtwpFreeSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 */

char *__fastcall EtwpAllocGuidEntry(__int64 a1, unsigned int *a2)
{
  char *result; // rax
  char *v5; // rbx
  void *Buf1; // [rsp+40h] [rbp+18h] BYREF

  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x190uLL, 0x47777445u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x190uLL);
    *((_QWORD *)v5 + 2) = 1LL;
    *(_OWORD *)(v5 + 24) = *(_OWORD *)a2;
    *((_QWORD *)v5 + 6) = v5 + 40;
    *((_QWORD *)v5 + 5) = v5 + 40;
    *((_QWORD *)v5 + 49) = 0LL;
    *((_QWORD *)v5 + 48) = 0LL;
    *((_QWORD *)v5 + 47) = a1;
    EtwpGetSecurityDescriptorByGuid(a2, &Buf1);
    if ( (int)ObLogSecurityDescriptor(Buf1) < 0 )
    {
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    EtwpFreeSecurityDescriptor(&Buf1);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 47) + 4080LL));
    return v5;
  }
  return result;
}
