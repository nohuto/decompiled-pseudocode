/*
 * XREFs of ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180087B00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18008765C (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180087C18 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::Create(
        struct IRawInputClient *a1,
        unsigned int a2,
        struct IRawInputProvider **a3)
{
  RIMRawInputProvider *v6; // rax
  RIMRawInputProvider *v7; // rbx
  RIMRawInputProvider *v8; // rdi
  int v9; // ebx
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rcx

  if ( a1 && a3 )
  {
    v6 = (RIMRawInputProvider *)malloc(0x88uLL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x88uLL);
    if ( v7 )
      v8 = RIMRawInputProvider::RIMRawInputProvider(v7, a1);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v11 = RIMRawInputProvider::Initialize(v8, a2);
      v9 = v11;
      if ( v11 >= 0 )
      {
        *a3 = v8;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 85, v11);
      }
      if ( v9 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 1) + 24LL))((__int64)v8 + 8, 1LL);
    }
    else
    {
      v9 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v10 = 82;
LABEL_19:
        McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v10, v9);
      }
    }
  }
  else
  {
    v9 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 75;
      goto LABEL_19;
    }
  }
  return (unsigned int)v9;
}
