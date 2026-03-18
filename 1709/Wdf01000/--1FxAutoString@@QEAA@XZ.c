/*
 * XREFs of ??1FxAutoString@@QEAA@XZ @ 0x1C0038C30
 * Callers:
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001ED8C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0038B70 (imp_WdfDeviceCreateSymbolicLink.c)
 *     LogDriverInfoStream @ 0x1C0085914 (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxAutoString::~FxAutoString(FxAutoString *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    *(_QWORD *)&this->m_UnicodeString.Length = 0LL;
    this->m_UnicodeString.Buffer = 0LL;
  }
}
