/*
 * XREFs of KiGenericCallDpcWorker @ 0x140004B80
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiGenericCallDpcWorker(__int64 a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // si
  ULONG ActiveProcessorCount; // eax
  __int64 *v6; // rdi
  __int64 v7; // rbp
  ULONG_PTR v8; // rcx
  __int64 result; // rax
  ULONG v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  ULONG v12; // [rsp+70h] [rbp+18h] BYREF
  ULONG v13; // [rsp+74h] [rbp+1Ch]

  v11 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v10 = ActiveProcessorCount;
  v13 = ActiveProcessorCount;
  v12 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 1 )
  {
    v6 = &qword_14044DB08;
    v7 = ActiveProcessorCount - 1;
    do
    {
      v8 = *v6 + 22688;
      *(_QWORD *)(v8 + 24) = *a2;
      *(_QWORD *)(v8 + 32) = a2[1];
      KiInsertQueueDpc(v8, 0);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  ((void (__fastcall *)(__int64, _QWORD, ULONG *, ULONG *))*a2)(a1 + 22688, a2[1], &v10, &v12);
  while ( v10 )
    KeYieldProcessorEx(&v11);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
