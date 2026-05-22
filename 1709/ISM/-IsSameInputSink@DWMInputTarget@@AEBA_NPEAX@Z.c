/*
 * XREFs of ?IsSameInputSink@DWMInputTarget@@AEBA_NPEAX@Z @ 0x180021FA0
 * Callers:
 *     ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180021E30 (-IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

char __fastcall DWMInputTarget::IsSameInputSink(void **this, void *a2)
{
  char v4; // bl
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+4Ch] [rbp+14h]

  if ( a2 == this[10] )
    return 1;
  v4 = 0;
  if ( !a2 || !this[10] )
    return 0;
  v5 = NtQueryCompositionInputSinkLuid(a2, &v12);
  if ( v5 < 0 )
  {
    v7 = v5 | 0x10000000;
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_14;
      v8 = 603;
      goto LABEL_13;
    }
  }
  v9 = NtQueryCompositionInputSinkLuid(this[10], &v10);
  if ( v9 < 0 )
  {
    v7 = v9 | 0x10000000;
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_14;
      v8 = 607;
LABEL_13:
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 3, v8, v7);
LABEL_14:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  if ( v13 == v11 && v12 == v10 )
    return 1;
  return v4;
}
