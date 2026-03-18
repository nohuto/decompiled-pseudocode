/*
 * XREFs of ?Reset@CRateInfo@@QEAAXXZ @ 0x1800BCA04
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005E048 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ??0CFrameInfo@@QEAA@XZ @ 0x1800CD780 (--0CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRateInfo::Reset(CRateInfo *this)
{
  char *v1; // r10
  char *v2; // r9
  __int64 v3; // r11
  __int64 v4; // rax

  v1 = (char *)this + 384;
  v2 = (char *)this + 128;
  v3 = 16LL;
  do
  {
    *(_QWORD *)v2 = 0x10000003CLL;
    v4 = *((unsigned int *)v2 + 1);
    v2 += 8;
    *((_QWORD *)v2 - 17) = g_qpcFrequency.QuadPart * v4 / 60;
    *v1++ = 1;
    *((_QWORD *)v2 + 15) = *((_QWORD *)v2 - 17);
    --v3;
  }
  while ( v3 );
}
