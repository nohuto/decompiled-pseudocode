/*
 * XREFs of ?DeliverInput@InputServiceComponent@@UEAAJPEAUInputInfo@@@Z @ 0x18002EDA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceComponent::DeliverInput(InputServiceComponent *this, struct InputInfo *a2)
{
  int v2; // r11d
  __int16 v3; // di
  __int16 v5; // cx
  __int16 v6; // bx
  __int16 v7; // ax
  __int16 v8; // r8
  __int64 v9; // r9
  __int16 v10; // r10
  __int16 v11; // ax
  __int64 result; // rax
  __int64 v13; // rcx
  int v14; // [rsp+30h] [rbp-20h] BYREF
  __int16 v15; // [rsp+38h] [rbp-18h]
  __int16 v16; // [rsp+3Ah] [rbp-16h]
  int v17; // [rsp+3Ch] [rbp-14h]
  __int64 v18; // [rsp+40h] [rbp-10h]

  v2 = *((_DWORD *)a2 + 2);
  v3 = *((_WORD *)a2 + 2);
  v5 = *((_WORD *)a2 + 350);
  v6 = 0x4000;
  if ( *((_WORD *)a2 + 348) != 0xFFFE )
    v6 = 0;
  v7 = 4;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( (v5 & 0x20) != 0 )
  {
    v10 = *((_WORD *)a2 + 349);
  }
  else if ( (v5 & 0x40) != 0 )
  {
    v9 = *((unsigned __int16 *)a2 + 349);
  }
  else
  {
    v8 = *((_WORD *)a2 + 349);
    if ( (v5 & 2) != 0 )
      v8 |= 0xE000u;
    if ( (v5 & 4) != 0 )
      v8 |= 0xE100u;
  }
  if ( *((_BYTE *)a2 + 689) )
  {
    v7 = 5;
  }
  else if ( (v5 & 1) == 0 )
  {
    v7 = 1;
  }
  v11 = v6 | v7;
  if ( v10 )
  {
    v14 = 2;
    v15 = 16389;
    v16 = v10;
    v17 = v2;
  }
  else if ( (_WORD)v9 )
  {
    v15 = v11;
    v18 = *((_QWORD *)a2 + 83);
    v14 = 1;
    v16 = v9;
  }
  else
  {
    v14 = 0;
    v15 = v3;
    v16 = v11;
    LOWORD(v17) = v8;
    LODWORD(v18) = v2;
  }
  LODWORD(result) = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, int *, __int64))(*(_QWORD *)InputDeliveryServer::s_pInputDeliveryServer + 40LL))(
                      InputDeliveryServer::s_pInputDeliveryServer,
                      (char *)this + 24,
                      &v14,
                      v9);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 260, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
