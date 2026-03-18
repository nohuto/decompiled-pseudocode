/*
 * XREFs of UsbhPdoPnp_QueryCapabilities @ 0x1C00194C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryCapabilities(__int64 a1, IRP *a2)
{
  _DWORD *v3; // rbp
  _IO_SECURITY_CONTEXT *SecurityContext; // rsi
  __int16 SecurityQos; // di
  __int16 v6; // bx
  int v7; // eax
  _IO_SECURITY_CONTEXT *v8; // r8
  bool v9; // zf
  int SecurityQos_high; // eax
  int v11; // ecx
  __int64 v12; // rdx
  BOOL v13; // eax
  __int64 v15; // rcx
  BOOL v16; // eax

  v3 = PdoExt(a1);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = (__int16)SecurityContext->SecurityQos;
  v6 = WORD1(SecurityContext->SecurityQos);
  memset(SecurityContext, 0, 0x40uLL);
  LOWORD(SecurityContext->SecurityQos) = SecurityQos;
  WORD1(SecurityContext->SecurityQos) = v6;
  if ( (v3[293] & 0x10) != 0 )
    HIDWORD(SecurityContext->SecurityQos) &= ~0x10u;
  else
    HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
  HIDWORD(SecurityContext->SecurityQos) = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFDBF | (v3[353] >> 3) & 0x40;
  v7 = *((unsigned __int16 *)v3 + 710);
  HIDWORD(SecurityContext->AccessState) = -1;
  LODWORD(SecurityContext->AccessState) = v7;
  if ( !v3[296] )
  {
    v15 = *((_QWORD *)v3 + 147);
    if ( v15 )
    {
      if ( (v3[353] & 0x40000) == 0 )
        v3[296] = FdoExt(v15)[1259];
    }
  }
  v8 = SecurityContext + 1;
  SecurityContext[1].FullCreateOptions = v3[296];
  SecurityContext->FullCreateOptions = 1;
  v9 = (v3[353] & 0x100) == 0;
  SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
  v11 = 2;
  SecurityContext[2].AccessState = 0LL;
  v12 = 5LL;
  if ( v9 )
  {
    SecurityContext[2].SecurityQos = (_SECURITY_QUALITY_OF_SERVICE *)1;
    HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high & 0xFFFFC3FF | 0x400;
    HIDWORD(SecurityContext->SecurityQos) &= 0xFFFFFFFC;
    do
    {
      v16 = v11++ > (signed int)SecurityContext[1].FullCreateOptions;
      LODWORD(v8->SecurityQos) = v16 + 3;
      v8 = (_IO_SECURITY_CONTEXT *)((char *)v8 + 4);
      --v12;
    }
    while ( v12 );
  }
  else
  {
    SecurityContext[2].SecurityQos = (_SECURITY_QUALITY_OF_SERVICE *)3;
    HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high & 0xFFFFC3FF | 0x1C00;
    HIDWORD(SecurityContext->SecurityQos) |= 3u;
    do
    {
      v13 = v11++ > (signed int)SecurityContext[1].FullCreateOptions;
      LODWORD(v8->SecurityQos) = v13 + 3;
      v8 = (_IO_SECURITY_CONTEXT *)((char *)v8 + 4);
      --v12;
    }
    while ( v12 );
  }
  if ( (v3[283] & 4) != 0 )
    HIDWORD(SecurityContext->SecurityQos) |= 0x100u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
