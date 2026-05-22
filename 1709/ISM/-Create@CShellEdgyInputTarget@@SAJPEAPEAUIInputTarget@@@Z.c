/*
 * XREFs of ?Create@CShellEdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x18002C768
 * Callers:
 *     ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z @ 0x18002C0E0 (-EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z.c)
 *     ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x18002C460 (-EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall CShellEdgyInputTarget::Create(struct IInputTarget **a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rbx

  v2 = 0;
  v3 = malloc(0x28uLL);
  v5 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x28uLL);
    v5[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 6) = 1;
    *v5 = &CShellEdgyInputTarget::`vftable'{for `IInputTarget'};
    v5[1] = &CShellEdgyInputTarget::`vftable'{for `IDCompInputTarget'};
    v5[2] = &CShellEdgyInputTarget::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v5 + 8) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v2 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 594, 14);
  }
  *a1 = (struct IInputTarget *)v5;
  return v2;
}
