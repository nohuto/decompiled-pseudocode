/*
 * XREFs of ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C014449C
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C00A3D38 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C00EF5D8 (xxxSetWindowLong.c)
 *     xxxSetWindowWord @ 0x1C013E384 (xxxSetWindowWord.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}
