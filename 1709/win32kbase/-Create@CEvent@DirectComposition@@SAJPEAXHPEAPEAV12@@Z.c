/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C00812EC
 * Callers:
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C0032B80 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0033B80 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0081130 (-SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C0081450 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, __int64 a2, struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v5; // rax
  DirectComposition::CEvent *v6; // rbx
  __int64 v7; // rdx
  signed int v8; // edi

  v5 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76654344u);
  v6 = v5;
  v7 = -(__int64)v5;
  v8 = v5 == 0LL ? 0xC0000017 : 0;
  if ( v5 )
    v8 = DirectComposition::CEvent::Initialize(v5, a1, 0);
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
