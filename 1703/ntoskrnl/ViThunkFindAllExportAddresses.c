/*
 * XREFs of ViThunkFindAllExportAddresses @ 0x14081544C
 * Callers:
 *     VfThunkFindExportAddressAllTables @ 0x1408153B0 (VfThunkFindExportAddressAllTables.c)
 * Callees:
 *     ViThunkFindExportAddress @ 0x1408154E8 (ViThunkFindExportAddress.c)
 */

void __fastcall ViThunkFindAllExportAddresses(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 **v8; // rbx
  __int64 ExportAddress; // rax
  __int64 *v10; // rcx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( *a2 )
  {
    v8 = (__int64 **)(a2 + 3);
    do
    {
      ExportAddress = ViThunkFindExportAddress(a1, *(v8 - 3), &v11);
      v10 = *v8;
      if ( *v8 )
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
        *(v8 - 1) = 0LL;
      }
      else
      {
        *(v8 - 1) = (__int64 *)ExportAddress;
      }
      v8 = (__int64 **)((char *)v8 + a3);
      ++v4;
    }
    while ( *(v8 - 3) );
  }
}
