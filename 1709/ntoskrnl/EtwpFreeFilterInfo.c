/*
 * XREFs of EtwpFreeFilterInfo @ 0x1404EE99C
 * Callers:
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x140750FEC (EtwpFreeEventNameFilter.c)
 */

void __fastcall EtwpFreeFilterInfo(__int64 a1)
{
  PVOID *v2; // rdi
  __int64 v3; // rsi
  PVOID *v4; // rdi
  __int64 v5; // rsi
  void *v6; // rcx
  void *v7; // rcx

  v2 = (PVOID *)a1;
  v3 = 3LL;
  do
  {
    if ( *v2 )
      ExFreePoolWithTag(*v2, 0);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = (PVOID *)(a1 + 24);
  v5 = 2LL;
  do
  {
    if ( *v4 )
      ExFreePoolWithTag(*v4, 0);
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = *(void **)(a1 + 40);
  if ( v6 )
    EtwpFreeEventNameFilter(v6);
  v7 = *(void **)(a1 + 64);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
