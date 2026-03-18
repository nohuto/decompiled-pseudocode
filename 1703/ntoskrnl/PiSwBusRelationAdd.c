/*
 * XREFs of PiSwBusRelationAdd @ 0x140460394
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x14006E6F0 (RtlInsertElementGenericTableAvl.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 */

__int64 __fastcall PiSwBusRelationAdd(NTSTRSAFE_PCWSTR pszSrc, __int64 a2)
{
  int PWSTR; // eax
  PVOID v5; // rdi
  signed int v6; // ebx
  __int64 v7; // rdx
  _WORD *v8; // rax
  __int16 v9; // cx
  _QWORD *inserted; // rax
  char *v11; // rcx
  char **v12; // rdx
  char *v13; // rax
  _QWORD Buffer[5]; // [rsp+28h] [rbp-28h] BYREF
  BOOLEAN NewElement; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h]

  P = 0LL;
  memset(Buffer, 0, 0x20uLL);
  NewElement = 0;
  PWSTR = PnpAllocatePWSTR(pszSrc);
  v5 = P;
  v6 = PWSTR;
  if ( PWSTR >= 0 )
  {
    LODWORD(Buffer[0]) = 0;
    v6 = 0;
    Buffer[1] = 0LL;
    if ( P )
    {
      v7 = 0x7FFFLL;
      v8 = P;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v7;
      }
      while ( v7 );
      v6 = v7 == 0 ? 0xC000000D : 0;
      v9 = v7 ? 0x7FFF - v7 : 0;
      if ( v7 )
      {
        Buffer[1] = P;
        LOWORD(Buffer[0]) = 2 * v9;
        WORD1(Buffer[0]) = 2 * v9 + 2;
      }
    }
    if ( v6 >= 0 )
    {
      inserted = RtlInsertElementGenericTableAvl(&PiSwBusRelationsTable, Buffer, 0x20u, &NewElement);
      if ( inserted )
      {
        if ( NewElement )
        {
          P = 0LL;
          inserted[3] = inserted + 2;
          v5 = 0LL;
          inserted[2] = inserted + 2;
        }
      }
      else
      {
        v6 = -1073741670;
      }
      if ( v6 >= 0 )
      {
        *(_QWORD *)(a2 + 112) = inserted;
        v11 = (char *)(a2 + 96);
        v12 = (char **)inserted[3];
        v13 = (char *)(inserted + 2);
        if ( *v12 != v13 )
          __fastfail(3u);
        *(_QWORD *)v11 = v13;
        *(_QWORD *)(a2 + 104) = v12;
        *v12 = v11;
        *((_QWORD *)v13 + 1) = v11;
        _InterlockedIncrement((volatile signed __int32 *)a2);
        v5 = P;
      }
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x57706E50u);
  return (unsigned int)v6;
}
