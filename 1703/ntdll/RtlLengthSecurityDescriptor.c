/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x180078930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG v2; // edx
  char *v3; // rax
  char *v4; // rax
  char *v6; // rax
  char *v7; // rax

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = 20;
  if ( v1 < 0 )
  {
    if ( !*((_DWORD *)SecurityDescriptor + 1) )
      goto LABEL_7;
    v7 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 1);
  }
  else
  {
    v2 = 40;
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  if ( v7 )
    v2 += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
LABEL_7:
  if ( v1 >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    if ( !*((_DWORD *)SecurityDescriptor + 2) )
      goto LABEL_12;
    v3 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 2);
  }
  if ( v3 )
    v2 += (4 * (unsigned __int8)v3[1] + 11) & 0xFFFFFFFC;
LABEL_12:
  if ( (~(_BYTE)v1 & 4) != 0 )
    goto LABEL_18;
  if ( v1 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    if ( !*((_DWORD *)SecurityDescriptor + 4) )
      goto LABEL_18;
    v4 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 4);
  }
  if ( v4 )
    v2 += (*((unsigned __int16 *)v4 + 1) + 3) & 0xFFFFFFFC;
LABEL_18:
  if ( (~(_BYTE)v1 & 0x10) == 0 )
  {
    if ( v1 >= 0 )
    {
      v6 = (char *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)SecurityDescriptor + 3) )
        return v2;
      v6 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 3);
    }
    if ( v6 )
      v2 += (*((unsigned __int16 *)v6 + 1) + 3) & 0xFFFFFFFC;
  }
  return v2;
}
