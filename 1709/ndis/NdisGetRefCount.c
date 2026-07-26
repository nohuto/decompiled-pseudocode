/*
 * XREFs of NdisGetRefCount @ 0x1C006E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetRefCount(__int64 a1)
{
  ULONG v1; // edx
  __int64 result; // rax
  int v4; // ecx
  unsigned int *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned __int8 *v10; // rax
  int v11; // ecx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v4 = *(unsigned __int8 *)(a1 + 1);
  if ( v4 )
  {
    if ( v4 == 1 && *(_BYTE *)(a1 + 2) )
    {
      v5 = (unsigned int *)(a1 + 64);
      v6 = *(unsigned __int8 *)(a1 + 2);
      do
      {
        v7 = *v5;
        v8 = *v5 >> 1;
        v5 += 16;
        v1 += (v8 & 0x7FFF) - (v7 >> 17);
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    BitMapHeader.SizeOfBitMap = *(unsigned __int8 *)(a1 + 2);
    BitMapHeader.Buffer = (unsigned int *)(a1 + 16);
    v1 = RtlNumberOfSetBits(&BitMapHeader);
    if ( *(_BYTE *)(a1 + 3) )
    {
      v9 = *(unsigned __int8 *)(a1 + 3);
      v10 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
      do
      {
        v11 = *v10;
        v10 += 2;
        v1 += v11;
        --v9;
      }
      while ( v9 );
    }
  }
  result = v1 + 1;
  if ( (*(_BYTE *)a1 & 2) == 0 )
    return v1;
  return result;
}
