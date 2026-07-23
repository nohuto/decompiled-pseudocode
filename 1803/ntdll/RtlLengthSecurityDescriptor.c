/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x180073BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r9
  __int16 v2; // r8
  ULONG v3; // edx
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v8; // rax

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = v1 & 0x8000;
  v3 = v1 < 0 ? 20 : 40;
  if ( v1 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    if ( !*((_DWORD *)SecurityDescriptor + 1) )
      goto LABEL_6;
    v4 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 1);
  }
  if ( v4 )
    v3 += (4 * (unsigned __int8)v4[1] + 11) & 0xFFFFFFFC;
LABEL_6:
  if ( v2 )
  {
    if ( !*((_DWORD *)SecurityDescriptor + 2) )
      goto LABEL_11;
    v5 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  if ( v5 )
    v3 += (4 * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v2 )
  {
    if ( !*((_DWORD *)SecurityDescriptor + 4) )
      goto LABEL_17;
    v6 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 4);
  }
  else
  {
    v6 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  if ( v6 )
    v3 += (*((unsigned __int16 *)v6 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) != 0 )
  {
    if ( v1 >= 0 )
    {
      v8 = (char *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)SecurityDescriptor + 3) )
        return v3;
      v8 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 3);
    }
    if ( v8 )
      v3 += (*((unsigned __int16 *)v8 + 1) + 3) & 0xFFFFFFFC;
  }
  return v3;
}
