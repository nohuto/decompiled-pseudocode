/*
 * XREFs of PortPassThroughExFreeSrbEx @ 0x1C0047058
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00661B4 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughExFreeSrbEx(unsigned int *a1)
{
  __int64 v1; // rax
  char *v3; // rax
  int v4; // edx
  void *v5; // rcx

  v1 = a1[30];
  if ( (_DWORD)v1 )
  {
    v3 = (char *)a1 + v1;
    v4 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 == 64 || v4 == 65 )
    {
      v5 = (void *)*((_QWORD *)v3 + 2);
    }
    else
    {
      if ( v4 != 66 )
        goto LABEL_10;
      v5 = (void *)*((_QWORD *)v3 + 3);
    }
    if ( v3[9] && v5 )
      ExFreePoolWithTag(v5, 0x69506C50u);
  }
LABEL_10:
  ExFreePoolWithTag(a1, 0x69506C50u);
}
