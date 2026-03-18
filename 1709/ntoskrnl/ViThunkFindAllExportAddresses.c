/*
 * XREFs of ViThunkFindAllExportAddresses @ 0x1408355BC
 * Callers:
 *     VfThunkFindExportAddressAllTables @ 0x140835520 (VfThunkFindExportAddressAllTables.c)
 * Callees:
 *     ViThunkFindExportAddress @ 0x140835654 (ViThunkFindExportAddress.c)
 */

void __fastcall ViThunkFindAllExportAddresses(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 *v8; // rbx
  __int64 ExportAddress; // rax
  __int64 *v10; // rcx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( *a2 )
  {
    v8 = a2 + 2;
    do
    {
      ExportAddress = ViThunkFindExportAddress(a1, *(v8 - 2), &v11);
      v10 = (__int64 *)v8[1];
      if ( v10 )
      {
        if ( *v10 )
        {
          if ( *v10 == 1 && ExportAddress != 1 )
            *v10 = 0LL;
        }
        else
        {
          *v10 = ExportAddress;
        }
      }
      if ( v11 )
      {
        _bittestandreset(*(signed __int32 **)(a4 + 8), v4);
        *v8 = 0LL;
      }
      else
      {
        *v8 = ExportAddress;
      }
      v8 = (__int64 *)((char *)v8 + a3);
      ++v4;
    }
    while ( *(v8 - 2) );
  }
}
