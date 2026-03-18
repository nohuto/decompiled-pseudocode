/*
 * XREFs of ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C013E2EC
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C004E638 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C00DD088 (xxxSetWindowLong.c)
 *     xxxSetWindowWord @ 0x1C01376A4 (xxxSetWindowWord.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttachDetach::~CProcessAttachDetach(CProcessAttachDetach *this)
{
  if ( *(_BYTE *)this )
    KeDetachProcess();
}
