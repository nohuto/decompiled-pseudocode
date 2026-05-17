/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x180078930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthSecurityDescriptor(__int64 a1)
{
  __int16 v1; // r8
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_WORD *)(a1 + 2);
  v2 = 20;
  if ( v1 < 0 )
  {
    if ( !*(_DWORD *)(a1 + 4) )
      goto LABEL_7;
    v7 = a1 + *(unsigned int *)(a1 + 4);
  }
  else
  {
    v2 = 40;
    v7 = *(_QWORD *)(a1 + 8);
  }
  if ( v7 )
    v2 += (4 * *(unsigned __int8 *)(v7 + 1) + 11) & 0xFFFFFFFC;
LABEL_7:
  if ( v1 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_12;
    v3 = a1 + *(unsigned int *)(a1 + 8);
  }
  if ( v3 )
    v2 += (4 * *(unsigned __int8 *)(v3 + 1) + 11) & 0xFFFFFFFC;
LABEL_12:
  if ( (~(_BYTE)v1 & 4) != 0 )
    goto LABEL_18;
  if ( v1 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_18;
    v4 = a1 + *(unsigned int *)(a1 + 16);
  }
  if ( v4 )
    v2 += (*(unsigned __int16 *)(v4 + 2) + 3) & 0xFFFFFFFC;
LABEL_18:
  if ( (~(_BYTE)v1 & 0x10) == 0 )
  {
    if ( v1 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        return v2;
      v6 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v6 )
      v2 += (*(unsigned __int16 *)(v6 + 2) + 3) & 0xFFFFFFFC;
  }
  return v2;
}
