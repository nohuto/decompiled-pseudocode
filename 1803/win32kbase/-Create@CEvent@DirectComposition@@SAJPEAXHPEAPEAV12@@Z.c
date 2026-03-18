/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C000136C
 * Callers:
 *     ?SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0003B00 (-SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C000A618 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C01440FC (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00014C8 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, __int64 a2, struct DirectComposition::CEvent **a3)
{
  __int64 v5; // rax
  DirectComposition::CEvent *v6; // rbx
  __int64 v7; // rdx
  signed int v8; // edi

  v5 = Win32AllocPoolWithQuotaZInit(0x10uLL);
  v6 = (DirectComposition::CEvent *)v5;
  v7 = -v5;
  v8 = v5 == 0 ? 0xC0000017 : 0;
  if ( v5 )
    v8 = DirectComposition::CEvent::Initialize((DirectComposition::CEvent *)v5, a1, 0);
  if ( v8 < 0 )
  {
    if ( v6 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v7);
  }
  else
  {
    *a3 = v6;
  }
  return (unsigned int)v8;
}
