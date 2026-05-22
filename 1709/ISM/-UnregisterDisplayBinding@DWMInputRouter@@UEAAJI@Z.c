/*
 * XREFs of ?UnregisterDisplayBinding@DWMInputRouter@@UEAAJI@Z @ 0x18001C480
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x18001CB5C (-GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterDisplayBinding(DWMInputRouter *this, unsigned int a2)
{
  int DisplayBindingFromId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DisplayBinding *v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // r9
  unsigned int v10; // edi
  int v11; // r9d
  __int64 v12; // rcx
  struct DisplayBinding *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  DisplayBindingFromId = DWMInputRouter::GetDisplayBindingFromId((DWMInputRouter *)((char *)this - 48), a2, &v14);
  v7 = v14;
  if ( DisplayBindingFromId < 0 )
  {
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_13;
    v11 = 2242;
    goto LABEL_12;
  }
  v8 = *((_DWORD *)this + 92);
  v5 = 0LL;
  if ( !v8 )
  {
LABEL_6:
    v10 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_13;
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 221, 5);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_13;
    v11 = 2235;
LABEL_12:
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, v11, v10);
    goto LABEL_13;
  }
  v9 = *((_QWORD *)this + 45);
  while ( 1 )
  {
    v6 = (unsigned int)v5;
    if ( *(_DWORD *)(v9 + 16LL * (unsigned int)v5) == a2 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v8 )
      goto LABEL_6;
  }
  v12 = 2LL * (unsigned int)v5;
  *(_DWORD *)(v9 + 8 * v12) = *((_DWORD *)this + 94);
  *(_QWORD *)(*((_QWORD *)this + 45) + 8 * v12 + 8) = 0LL;
  --*((_DWORD *)this + 93);
  v10 = 0;
  (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_13:
  if ( v7 )
    (*(void (__fastcall **)(struct DisplayBinding *, __int64))(*(_QWORD *)v7 + 16LL))(v7, v5);
  return v10;
}
