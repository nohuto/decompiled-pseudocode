/*
 * XREFs of ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x140034E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001C5C0 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioDGModule *__fastcall CAudioDGModule::`scalar deleting destructor'(CAudioDGModule *this, char a2)
{
  CAudioDGModule::~CAudioDGModule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
