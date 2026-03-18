/*
 * XREFs of EtwpAllocGuidEntry @ 0x14058E5C4
 * Callers:
 *     EtwpAddGuidEntry @ 0x14058E46C (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405917E4 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14059189C (EtwpGetSecurityDescriptorByGuid.c)
 */

char *__fastcall EtwpAllocGuidEntry(__int64 a1, _OWORD *a2)
{
  char *result; // rax
  char *v5; // rbx
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x190uLL, 0x47777445u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x190uLL);
    *((_QWORD *)v5 + 2) = 1LL;
    *(_OWORD *)(v5 + 24) = *a2;
    *((_QWORD *)v5 + 6) = v5 + 40;
    *((_QWORD *)v5 + 5) = v5 + 40;
    *((_QWORD *)v5 + 49) = 0LL;
    *((_QWORD *)v5 + 48) = 0LL;
    *((_QWORD *)v5 + 47) = a1;
    EtwpGetSecurityDescriptorByGuid(a2, &Src);
    if ( (int)ObLogSecurityDescriptor((char *)Src, (_QWORD *)v5 + 7, 1u) < 0 )
    {
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    EtwpFreeSecurityDescriptor(&Src);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 47) + 4088LL));
    return v5;
  }
  return result;
}
