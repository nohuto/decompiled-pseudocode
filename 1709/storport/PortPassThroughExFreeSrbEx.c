/*
 * XREFs of PortPassThroughExFreeSrbEx @ 0x1C0047A44
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0069B00 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughExFreeSrbEx(_BYTE *P)
{
  __int64 v1; // rax
  int v3; // ecx
  void *v4; // rcx

  v1 = *((unsigned int *)P + 30);
  if ( (_DWORD)v1 )
  {
    v3 = *(_DWORD *)&P[v1];
    if ( v3 == 64 || v3 == 65 )
    {
      v4 = *(void **)&P[v1 + 16];
    }
    else
    {
      if ( v3 != 66 )
        goto LABEL_10;
      v4 = *(void **)&P[v1 + 24];
    }
    if ( P[v1 + 9] && v4 )
      ExFreePoolWithTag(v4, 0x69506C50u);
  }
LABEL_10:
  ExFreePoolWithTag(P, 0x69506C50u);
}
