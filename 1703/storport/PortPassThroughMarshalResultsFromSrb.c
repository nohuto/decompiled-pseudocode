/*
 * XREFs of PortPassThroughMarshalResultsFromSrb @ 0x1C00474F4
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C0047820 (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     PortPassThroughApplyNormalizedRequest @ 0x1C0046EA8 (PortPassThroughApplyNormalizedRequest.c)
 *     PortPassThroughNormalize @ 0x1C0047640 (PortPassThroughNormalize.c)
 */

char __fastcall PortPassThroughMarshalResultsFromSrb(IRP *a1, __int64 a2, char a3, __int64 a4)
{
  int v8; // eax
  int v9; // edi
  bool v10; // sf
  int v11; // ecx
  unsigned __int64 Length; // r12
  char *v13; // rcx
  unsigned __int8 v14; // si
  __int64 v15; // rdx
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]
  unsigned int v21; // [rsp+40h] [rbp-38h]

  *(_QWORD *)(a4 + 8) = 0LL;
  v8 = PortPassThroughNormalize(&v19, a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(char *)(a2 + 3) < 0;
    v11 = *(_DWORD *)a4;
    Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    BYTE2(v19) = *(_BYTE *)(a2 + 4);
    if ( v10 )
    {
      if ( BYTE7(v19) )
        v13 = (char *)a1->AssociatedIrp.MasterIrp + v21;
      else
        v13 = 0LL;
      v14 = *(_BYTE *)(a2 + 11);
      BYTE7(v19) = v14;
      if ( v13 && v14 )
        memmove(v13, *(const void **)(a2 + 32), v14);
      v11 = 0;
    }
    else
    {
      v14 = 0;
      BYTE7(v19) = 0;
    }
    v9 = 0;
    v15 = *(unsigned int *)(a2 + 16);
    v16 = (*(_BYTE *)(a2 + 3) & 0x3F) == 18;
    HIDWORD(v19) = *(_DWORD *)(a2 + 16);
    if ( !v16 )
      v9 = v11;
    if ( v14 )
    {
      *(_QWORD *)(a4 + 8) = v21 + v14;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = (unsigned __int16)v19;
      if ( v9 < 0 && *(_BYTE *)(a2 + 4) )
      {
        v9 = 0;
        *(_QWORD *)(a4 + 8) = 3LL;
      }
    }
    if ( !a3 && BYTE8(v19) && (_DWORD)v15 && v20 )
      *(_QWORD *)(a4 + 8) = v20 + v15;
    v17 = Length;
    if ( *(_QWORD *)(a4 + 8) < Length )
      v17 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v17;
    LOBYTE(v8) = PortPassThroughApplyNormalizedRequest(&v19, a1);
  }
  *(_DWORD *)a4 = v9;
  return v8;
}
