/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x140293048
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x140165BDC (ExInitializeSessionHeapManager.c)
 *     RtlHpKInitializeHeapManager @ 0x1402BD718 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlRunOnceInitialize @ 0x1406216C0 (RtlRunOnceInitialize.c)
 */

void __fastcall RtlHpHeapManagerInitialize(_RTL_RUN_ONCE *a1, _OWORD *a2)
{
  __int64 v4; // rbx
  _RTL_RUN_ONCE *v5; // rdi
  _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdi

  memset(a1, 0, 0x30D0uLL);
  a1->Value = (unsigned __int64)&RtlpHpHeapGlobals;
  memset(&a1[1], 0, 0x48uLL);
  a1[6].Value = -1LL;
  memset(&a1[10], 0, 0x3040uLL);
  memset(&a1[12], 0, 0x50uLL);
  a1[17].Value = -1LL;
  v4 = 255LL;
  v5 = a1 + 25;
  do
  {
    memset(&v5[-1], 0, 0x30uLL);
    v5->Value = 0LL;
    v5[1].Value = 0LL;
    v5 += 6;
    --v4;
  }
  while ( v4 );
  v6 = a1 + 1555;
  v7 = 3LL;
  *(_OWORD *)&a1[1560].Ptr = *a2;
  do
  {
    RtlRunOnceInitialize(v6);
    v6 += 2;
    --v7;
  }
  while ( v7 );
}
