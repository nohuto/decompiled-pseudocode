/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x180073BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthSecurityDescriptor(__int64 a1)
{
  __int16 v1; // r9
  __int16 v2; // r8
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax

  v1 = *(_WORD *)(a1 + 2);
  v2 = v1 & 0x8000;
  v3 = v1 < 0 ? 20 : 40;
  if ( v1 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 4) )
      goto LABEL_6;
    v4 = a1 + *(unsigned int *)(a1 + 4);
  }
  if ( v4 )
    v3 += (4 * *(unsigned __int8 *)(v4 + 1) + 11) & 0xFFFFFFFC;
LABEL_6:
  if ( v2 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_11;
    v5 = a1 + *(unsigned int *)(a1 + 8);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
  }
  if ( v5 )
    v3 += (4 * *(unsigned __int8 *)(v5 + 1) + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v2 )
  {
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_17;
    v6 = a1 + *(unsigned int *)(a1 + 16);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 32);
  }
  if ( v6 )
    v3 += (*(unsigned __int16 *)(v6 + 2) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) != 0 )
  {
    if ( v1 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        return v3;
      v8 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v8 )
      v3 += (*(unsigned __int16 *)(v8 + 2) + 3) & 0xFFFFFFFC;
  }
  return v3;
}
