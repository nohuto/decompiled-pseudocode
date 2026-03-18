/*
 * XREFs of DpiMapIommuContiguousInternal @ 0x1C0040578
 * Callers:
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C00406E8 (DpiMapMemoryTrackerToIoMmu.c)
 *     ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C014D5DC (-MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ.c)
 *     DpiMapIommuContiguous @ 0x1C01EFA90 (DpiMapIommuContiguous.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiMapIommuContiguousInternal(__int64 a1, struct _MDL *a2, SIZE_T a3)
{
  SIZE_T v5; // rdi
  int v6; // r14d
  PMDL Mdl; // rax
  PMDL v9; // rsi
  struct _MDL *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  __int16 v18; // [rsp+28h] [rbp-60h]
  __int16 v19; // [rsp+2Ah] [rbp-5Eh]
  __int64 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+4Ch] [rbp-3Ch]
  struct _MDL *v23; // [rsp+50h] [rbp-38h]

  v5 = a3 >> 12;
  v6 = 0;
  Mdl = MmCreateMdl(0LL, 0LL, a3);
  v9 = Mdl;
  if ( Mdl )
  {
    v10 = Mdl + 1;
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned int)v5;
      do
      {
        v10->Next = a2;
        a2 = (struct _MDL *)((char *)a2 + 1);
        v10 = (struct _MDL *)((char *)v10 + 8);
        --v11;
      }
      while ( v11 );
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64, PMDL))qword_1C007AC90)(*(_QWORD *)(a1 + 80), 3LL, v9);
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    v17 = 0LL;
    v12 = 0;
    v19 = 0;
    v18 = 8 * (((a3 + 4095) >> 12) + 6);
    v20 = 0LL;
    v22 = 0;
    v21 = a3;
    if ( (_DWORD)v5 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 80);
        v14 = v12;
        v23 = (struct _MDL *)((char *)a2 + v12);
        v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))qword_1C007AC90)(v13, 3LL, &v17);
        if ( v6 < 0 )
          break;
        if ( ++v12 >= (unsigned int)v5 )
          return (unsigned int)v6;
      }
      if ( v12 )
      {
        do
        {
          v15 = *(_QWORD *)(a1 + 80);
          v23 = a2;
          ((void (__fastcall *)(__int64, __int64 *))qword_1C007AC98)(v15, &v17);
          a2 = (struct _MDL *)((char *)a2 + 1);
          --v14;
        }
        while ( v14 );
      }
    }
  }
  return (unsigned int)v6;
}
