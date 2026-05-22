/*
 * XREFs of ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x18001CB5C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x180018FE0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?UnregisterDisplayBinding@DWMInputRouter@@UEAAJI@Z @ 0x18001C480 (-UnregisterDisplayBinding@DWMInputRouter@@UEAAJI@Z.c)
 *     ?BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z @ 0x18001C7BC (-BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetDisplayBindingFromId(__int64 this, int a2, struct DisplayBinding **a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // edi
  unsigned int v6; // r10d
  __int64 v7; // r8
  int v8; // r9d
  char v10; // al
  struct DisplayBinding *v11; // rbx

  if ( a2 == *(_DWORD *)(this + 424) || (v4 = *(_DWORD *)(this + 416), v5 = 0, v6 = 0, !v4) )
  {
LABEL_6:
    v5 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 2434;
LABEL_8:
      McTemplateU0qqq(this, &MinInput_Warning_CheckResult, 0, v8, 5);
    }
  }
  else
  {
    v7 = *(_QWORD *)(this + 408);
    while ( *(_DWORD *)(v7 + 16LL * v6) != a2 )
    {
      if ( ++v6 >= v4 )
        goto LABEL_6;
    }
    LODWORD(this) = 0;
    do
    {
      if ( *(_DWORD *)(v7 + 16LL * (unsigned int)this) == a2 )
      {
        v11 = *(struct DisplayBinding **)(v7 + 16LL * (unsigned int)this + 8);
        (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v11 + 8LL))(v11);
        *a3 = v11;
        return v5;
      }
      this = (unsigned int)(this + 1);
    }
    while ( (unsigned int)this < v4 );
    v10 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(this, &MinInput_Warning_CheckResult, 0, 133, 5);
      v10 = Microsoft_OneCore_MinInputEnableBits;
    }
    v5 = -2147467259;
    if ( (v10 & 2) != 0 )
    {
      v8 = 2437;
      goto LABEL_8;
    }
  }
  return v5;
}
