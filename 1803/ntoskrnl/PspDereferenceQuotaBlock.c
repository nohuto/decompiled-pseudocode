/*
 * XREFs of PspDereferenceQuotaBlock @ 0x1404EBF04
 * Callers:
 *     PsReturnSharedPoolQuota @ 0x1404EBEB8 (PsReturnSharedPoolQuota.c)
 *     PspReleaseProcessQuota @ 0x140511148 (PspReleaseProcessQuota.c)
 *     PspAssignProcessQuotaBlock @ 0x140571E7C (PspAssignProcessQuotaBlock.c)
 *     ObpFreeObject @ 0x14059CA30 (ObpFreeObject.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14007FF60 (PspReturnResourceQuota.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspRemoveQuotaBlock @ 0x140779F20 (PspRemoveQuotaBlock.c)
 */

void __fastcall PspDereferenceQuotaBlock(volatile signed __int32 *P)
{
  signed int v2; // esi
  char *v3; // r14
  char *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8

  if ( _InterlockedExchangeAdd(P + 128, 0xFFFFFFFF) == 1 )
  {
    v2 = 0;
    v3 = PspResourceFlags;
    v4 = (char *)(P + 18);
    do
    {
      if ( (*v3 & 3) == 1 )
      {
        v5 = *((_QWORD *)v4 + 1);
        v6 = *((_QWORD *)v4 - 1);
        if ( v6 + *(_QWORD *)v4 )
        {
          if ( v5 )
          {
            v7 = _InterlockedExchange64((volatile __int64 *)v4, 0LL);
            v6 = _InterlockedExchange64((volatile __int64 *)v4 - 1, 0LL) + v7;
          }
        }
        else
        {
          v6 = 0LL;
        }
        if ( v6 || v5 )
          PspReturnResourceQuota(v2, (__int64)(v4 - 72), v6, v5 != 0);
      }
      ++v2;
      v4 += 128;
      v3 += 8;
    }
    while ( v2 < 4 );
    PspRemoveQuotaBlock(P);
    ExFreePoolWithTag((PVOID)P, 0);
  }
}
