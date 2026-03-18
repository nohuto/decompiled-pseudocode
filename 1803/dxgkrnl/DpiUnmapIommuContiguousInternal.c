/*
 * XREFs of DpiUnmapIommuContiguousInternal @ 0x1C00408A4
 * Callers:
 *     DpiUnmapMemoryTrackerFromIoMmu @ 0x1C00409B8 (DpiUnmapMemoryTrackerFromIoMmu.c)
 *     DpiUnmapIommuContiguous @ 0x1C01F0370 (DpiUnmapIommuContiguous.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DpiUnmapIommuContiguousInternal(__int64 a1, struct _MDL *a2, SIZE_T a3)
{
  SIZE_T v5; // rdi
  PMDL Mdl; // rax
  PMDL v8; // rsi
  struct _MDL *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int16 v13; // [rsp+28h] [rbp-40h]
  __int16 v14; // [rsp+2Ah] [rbp-3Eh]
  __int64 v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+4Ch] [rbp-1Ch]
  struct _MDL *v18; // [rsp+50h] [rbp-18h]

  v5 = a3 >> 12;
  Mdl = MmCreateMdl(0LL, 0LL, a3);
  v8 = Mdl;
  if ( Mdl )
  {
    v9 = Mdl + 1;
    if ( (_DWORD)v5 )
    {
      v10 = (unsigned int)v5;
      do
      {
        v9->Next = a2;
        a2 = (struct _MDL *)((char *)a2 + 1);
        v9 = (struct _MDL *)((char *)v9 + 8);
        --v10;
      }
      while ( v10 );
    }
    ((void (__fastcall *)(_QWORD, PMDL))qword_1C007AC98)(*(_QWORD *)(a1 + 80), v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v12 = 0LL;
    v14 = 0;
    v13 = 8 * (((a3 + 4095) >> 12) + 6);
    v15 = 0LL;
    v17 = 0;
    v16 = a3;
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)v5;
      do
      {
        v11 = *(_QWORD *)(a1 + 80);
        v18 = a2;
        ((void (__fastcall *)(__int64, __int64 *))qword_1C007AC98)(v11, &v12);
        a2 = (struct _MDL *)((char *)a2 + 1);
        --v5;
      }
      while ( v5 );
    }
  }
}
