/*
 * XREFs of ??_GCPTPEngine@@UEAAPEAXI@Z @ 0x1C01322C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ??1CPTPEngine@@UEAA@XZ @ 0x1C0132258 (--1CPTPEngine@@UEAA@XZ.c)
 */

CPTPEngine *__fastcall CPTPEngine::`scalar deleting destructor'(CPTPEngine *this, char a2)
{
  CPTPEngine::~CPTPEngine(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
